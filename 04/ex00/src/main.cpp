#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
  {
    Animal *j = new Animal();
    std::cout << j->getType() << std::endl;
    j->makeSound();
    delete j;
    
    Dog *i = new Dog("Pastor alemão");
    std::cout << i->getType() << std::endl;
    i->makeSound();
    delete i;
    
    Cat *k = new Cat("Siamês");
    std::cout << k->getType() << std::endl;
    k->makeSound();
    delete k;
  }
  {
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); 
    // j->makeSound();
    // meta->makeSound();
  }
  {
    // WrongAnimal *j = new WrongAnimal();
    // std::cout << j->getType() << std::endl;
    // j->makeSound();
    // delete j;
    
    // WrongCat *i = new WrongCat();
    // std::cout << i->getType() << std::endl;
    // i->makeSound();
    // delete i;
  }
  
  return 0;
}
