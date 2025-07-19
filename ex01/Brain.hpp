#ifndef BRAIN_HPP
#define BRAIN_HPP

#define N_OF_IDEA 100

#include <string>

class Brain {
public:
  Brain();
  Brain(const Brain &other);
  ~Brain();

  Brain &operator=(const Brain &other);

private:
  std::string ideas[N_OF_IDEA];
};

#endif
