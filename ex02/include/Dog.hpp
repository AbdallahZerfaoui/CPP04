#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();
		
		void makeSound() const;
		void GenerateIdea(std::string const &idea);
		void PrintIdea() const;

	private:
		Brain *brain;
};

#endif