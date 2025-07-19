#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main() {
  const Animal *meta = new Animal();
  const Animal *i = new Dog();
  const Animal *j = new Cat();
  std::cout << i->getType() << " " << std::endl;
  std::cout << j->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();

  const WrongAnimal *wrong = new WrongCat();
  wrong->makeSound();

  delete meta;
  delete j;
  delete i;
  delete wrong;
  return 0;
}
