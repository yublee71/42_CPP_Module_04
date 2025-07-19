#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
  Dog();
  Dog(const Dog &other);
  ~Dog();

  Dog &operator=(const Dog &other);

  void makeSound() const;

  void setBrain(int i, const std::string &idea);
  std::string getBrain(int i) const;

private:
  Brain *brain_;
};

#endif
