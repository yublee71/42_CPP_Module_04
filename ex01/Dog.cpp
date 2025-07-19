#include "Dog.hpp"

#include <iostream>

Dog::Dog() : Animal("Dog") {
  std::cout << "[Dog] Default constructor is called." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other.type_) {
  std::cout << "[Dog] Copy constructor is called." << std::endl;
}

Dog::~Dog() { std::cout << "[Dog] Default Destructor is called." << std::endl; }

Dog &Dog::operator=(const Dog &other) {
  std::cout << "[Dog] Copy assignment operator called." << std::endl;
  if (this != &other) {
    this->type_ = other.type_;
  }
  return *this;
}

void Dog::makeSound() const { std::cout << "Woof!" << std::endl; }
