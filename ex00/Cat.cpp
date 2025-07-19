#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal("Cat") {
  std::cout << "[Cat] Default constructor is called." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other.type_) {
  std::cout << "[Cat] Copy constructor is called." << std::endl;
}

Cat::~Cat() { std::cout << "[Cat] Default destructor is called." << std::endl; }

Cat &Cat::operator=(const Cat &other) {
  std::cout << "[Cat] Copy assignment operator called." << std::endl;
  if (this != &other) {
    this->type_ = other.type_;
  }
  return *this;
}

void Cat::makeSound() const { std::cout << "Meow!" << std::endl; }
