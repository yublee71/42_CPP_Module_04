#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
  std::cout << "[WrongCat] Default constructor is called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other.type_) {
  std::cout << "[WrongCat] Copy constructor is called." << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << "[WrongCat] Default destructor is called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
  std::cout << "[WrongCat] Copy assignment operator called." << std::endl;
  if (this != &other) {
    this->type_ = other.type_;
  }
  return *this;
}
void WrongCat::makeSound() const { std::cout << "Meow!" << std::endl; }
