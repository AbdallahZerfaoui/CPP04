#ifndef ABSTRACT_ANIMAL_HPP
# define ABSTRACT_ANIMAL_HPP

# include <iostream>
# include <string>

//TODO: add unique messages to the constructors and destructors

class AbstractAnimal
{
	protected:
		std::string _type;
		AbstractAnimal(const std::string &type);

	public:
		virtual ~AbstractAnimal();
		
		virtual void makeSound() const = 0;
	
	private:
		AbstractAnimal();
		AbstractAnimal(const AbstractAnimal &other);
		AbstractAnimal &operator=(const AbstractAnimal &other);
};

#endif