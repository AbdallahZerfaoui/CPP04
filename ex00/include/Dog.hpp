#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"

class Dog : public Animal
{
  public:
	Dog();
	Dog(const std::string &type);
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();

	void makeSound() const override;
};

#endif