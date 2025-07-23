#include "Brain.hpp"

#include <iostream>

Brain::Brain() {
  std::cout << "[Brain] Default constructor is called." << std::endl;
  for (int i = 0; i < N_OF_IDEA; ++i)
    ideas_[i] = "I am a random idea";
}

Brain::Brain(const Brain &other) {
  std::cout << "[Brain] Copy constructor is called." << std::endl;
  for (int i = 0; i < N_OF_IDEA; ++i)
    this->ideas_[i] = other.ideas_[i];
}

Brain::~Brain() {
  std::cout << "[Brain] Default destructor is called." << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
  std::cout << "[Brain] Copy assignment operator called." << std::endl;
  if (this != &other) {
    for (int i = 0; i < N_OF_IDEA; ++i)
      this->ideas_[i] = other.ideas_[i];
  }
  return *this;
}

void Brain::setIdea(int i, const std::string idea) { ideas_[i] = idea; }

std::string Brain::getIdea(int i) const { return ideas_[i]; };
