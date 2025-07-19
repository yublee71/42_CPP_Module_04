#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
public:
  Animal();
  Animal(std::string type);
  Animal(const Animal &other);
  virtual ~Animal();

  Animal &operator=(const Animal &other);

  void setType(const std::string &type);
  std::string getType() const;

  virtual void makeSound() const;

protected:
  std::string type_;
};

#endif
