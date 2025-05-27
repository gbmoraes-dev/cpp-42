#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

string replaceLine(string::iterator begin, string::iterator end, string &haystack, string &needle) {
  string::iterator it = begin;

  while (it != end) {
    if (*it == haystack[0]) {
      string::iterator it2 = it;
      string::iterator it3 = haystack.begin();

      while (it2 != end && it3 != haystack.end() && *it2 == *it3) {
        it2++;
        it3++;
      }

      if (it3 == haystack.end()) {
        string::iterator it4 = it;
        string::iterator it5 = needle.begin();

        while (it5 != needle.end())
          *it4++ = *it5++;
        it = it4;
      } else {
        it++;
      }
    } else {
      it++;
    }
  }

  return string(begin, end);
}

int main(int argc, char **argv) {
  if (argc != 4) {
    cout << "Usage: " << argv[0] << " <filename> <str> <replace>" << endl;
    return (1);
  }

  if (strlen(argv[2]) == 0 || strlen(argv[3]) == 0) {
    cout << "Error: empty string" << endl;
    return (1);
  }

  ifstream file(argv[1]);
  if (!file.is_open()) {
    cout << "Error: could not open file" << endl;
    return (1);
  }

  string haystack = argv[2];
  string needle = argv[3];

  string newLine;
  string line;

  while (getline(file, line))
    newLine += replaceLine(line.begin(), line.end(), haystack, needle);

  file.close();

  string fileName = string(argv[1]).substr(0, string(argv[1]).find_last_of(".")) + ".replace";

  ofstream newFile(fileName.c_str());
  newFile << newLine;
  newFile.close();
}
