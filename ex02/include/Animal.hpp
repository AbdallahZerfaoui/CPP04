#ifndef ABSTRACT_ANIMAL_HPP
# define ABSTRACT_ANIMAL_HPP

# include <string>

//TODO: add unique messages to the constructors and destructors

class Animal
{
	protected:
		std::string _type;
		
		public:
		Animal();
		Animal(const std::string &type);
		virtual ~Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &other);
		
		virtual void makeSound() const = 0;
		std::string getType() const;
};

#endif