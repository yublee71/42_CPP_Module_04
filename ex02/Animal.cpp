#include "Animal.hpp"

#include <iostream>
#include <string>

Animal::Animal() {
  std::cout << "[Animal] Default constructor is called." << std::endl;
}

Animal::Animal(std::string type) : type_(type) {
  std::cout << "[Animal] Constructor is called and the type is set as " << type
            << "." << std::endl;
}

Animal::Animal(const Animal &other) : type_(other.type_) {
  std::cout << "[Animal] Copy constructor is called." << std::endl;
}

Animal::~Animal() {
  std::cout << "[Animal] Default destructor is called." << std::endl;
}

Animal &Animal::operator=(const Animal &other) {
  std::cout << "[Animal] Copy assignment operator called." << std::endl;
  if (this != &other) {
    this->type_ = other.type_;
  }
  return *this;
}

void Animal::setType(const std::string &type) { type_ = type; }

std::string Animal::getType() const { return (type_); }

void Animal::makeSound() const { std::cout << "..." << std::endl; }
