#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		~Cat();
		
		void makeSound() const;
		void GenerateIdea(std::string const &idea);
		void PrintIdea() const;

	private:
		Brain *brain;
};

#endif