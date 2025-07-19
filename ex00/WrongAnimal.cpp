#include "WrongAnimal.hpp"

#include <iostream>
#include <string>

WrongAnimal::WrongAnimal() {
  std::cout << "[WrongAnimal] Default constructor is called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type_(type) {
  std::cout << "[WrongAnimal] Constructor is called and the type is set as " << type
            << "." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type_(other.type_) {
  std::cout << "[WrongAnimal] Copy constructor is called." << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "[WrongAnimal] Default destructor is called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
  std::cout << "[WrongAnimal] Copy assignment operator called." << std::endl;
  if (this != &other) {
    this->type_ = other.type_;
  }
  return *this;
}

void WrongAnimal::setType(const std::string &type) { type_ = type; }

std::string WrongAnimal::getType() const { return (type_); }

void WrongAnimal::makeSound() const { std::cout << "..." << std::endl; }
