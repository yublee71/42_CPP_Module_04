#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal("Cat") {
  std::cout << "[Cat] Default constructor is called." << std::endl;
  brain_ = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other) {
  std::cout << "[Cat] Copy constructor is called." << std::endl;
  brain_ = new Brain(*other.brain_);
}

Cat::~Cat() {
  std::cout << "[Cat] Default Destructor is called." << std::endl;
  delete brain_;
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << "[Cat] Copy assignment operator called." << std::endl;
  if (this != &other) {
    this->type_ = other.type_;
    delete this->brain_;
    this->brain_ = new Brain(*other.brain_);
  }
  return *this;
}

void Cat::makeSound() const { std::cout << "Meow!" << std::endl; }
