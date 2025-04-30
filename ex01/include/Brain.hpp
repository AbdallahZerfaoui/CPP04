#ifndef BRAIN_HPP
#define BRAIN_HPP

#define IDEAS 100

#include <iostream>
#include <cstdlib>

#include "Animal.hpp"

class Brain {
   public:
	Brain();
	Brain(Brain const &other);
	~Brain();
	Brain &operator=(Brain const &other);
	void GenerateIdea(std::string const &idea);
	void PrintIdea() const;

   protected:
	std::string ideas[IDEAS];

   private:
	int ideaIndex;
};

#endif