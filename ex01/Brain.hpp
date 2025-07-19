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

  void setIdea(int i, const std::string idea);
  std::string getIdea(int i) const;

private:
  std::string ideas_[N_OF_IDEA];
};

#endif
