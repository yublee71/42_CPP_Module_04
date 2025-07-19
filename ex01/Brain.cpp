#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
  std::cout << "[Brain] Default constructor is called." << std::endl;
}

Brain::Brain(const Brain &other) {
  std::cout << "[Brain] Copy constructor is called." << std::endl;
  for (int i = 0; i < N_OF_IDEA; ++i)
    this->ideas[i] = other.ideas[i];
}

Brain::~Brain() {
  std::cout << "[Brain] Default destructor is called." << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
  std::cout << "[Brain] Copy assignment operator called." << std::endl;
  if (this != &other) {
    for (int i = 0; i < N_OF_IDEA; ++i)
      this->ideas[i] = other.ideas[i];
  }
  return *this;
}
