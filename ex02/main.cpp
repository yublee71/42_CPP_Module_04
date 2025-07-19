#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main() {
  // const Animal a; //will throw an error
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  delete j; // should not create a leak
  delete i;

  const Animal *animals[10];
  for (int i = 0; i < 10; ++i) {
    if (i < 5)
      animals[i] = new Cat();
    else
      animals[i] = new Dog();
  }

  for (int i = 0; i < 10; ++i)
    animals[i]->makeSound();

  for (int i = 0; i < 10; ++i)
    delete animals[i];

  Dog *dog1 = new Dog();
  dog1->setBrain(0, "I am hungry");

  Dog *dog2 = new Dog(*dog1);
  std::cout << dog2->getBrain(0) << std::endl;

  dog1->setBrain(0, "I am not hungry any more");
  std::cout << dog2->getBrain(0) << std::endl;

  delete dog1;
  dog2->setBrain(0, "I am thirsty now");
  std::cout << dog2->getBrain(0) << std::endl;

  delete dog2;

  return 0;
}
