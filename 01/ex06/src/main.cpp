#include "../includes/Harl.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Usage: " << argv[0] << " <level>" << std::endl;
    return 1;
  }

  std::string levels[] = {"debug", "info", "warning", "error"};
  std::string level = argv[1];  

  int index = -1;
  for (int i = 0; i < 4; i++) {
    switch (level.compare(levels[i])) {
      case 0:
        index = i;
        break;
    }
  }

  if (index == -1) {
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    return 1;
  }

  Harl harl;
  for (int i = index; i < 4; i++) {
    harl.complain(levels[i]);
  }
}
