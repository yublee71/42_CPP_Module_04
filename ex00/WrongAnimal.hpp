#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <string>

class WrongAnimal {
public:
  WrongAnimal();
  WrongAnimal(std::string type);
  WrongAnimal(const WrongAnimal &other);
  virtual ~WrongAnimal();

  WrongAnimal &operator=(const WrongAnimal &other);

  void setType(const std::string &type);
  std::string getType() const;

  void makeSound() const;

protected:
  std::string type_;
};

#endif
