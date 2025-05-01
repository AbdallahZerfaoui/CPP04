#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

//TODO: add unique messages to the constructors and destructors
class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		virtual ~Animal();
		
		virtual void makeSound() const;
		virtual std::string getType() const;
};


#endif