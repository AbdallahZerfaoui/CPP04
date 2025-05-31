#ifndef BRAIN_HPP
#define BRAIN_HPP

#define IDEAS 100

#include <string>
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