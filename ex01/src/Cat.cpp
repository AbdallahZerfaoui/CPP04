/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:40:02 by azerfaou          #+#    #+#             */
/*   Updated: 2025/06/01 00:26:57 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Brain.hpp"
#include <iostream>
#include <string>

Cat::Cat(): brain(new Brain())
{
	this->_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*other.brain); // Deep copy of the brain
	this->_type = other._type;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		if (brain)
			delete brain;
		brain = new Brain(*other.brain); // Deep copy of the brain
	}
	return *this;
}

Cat::~Cat()
{
	if (brain)
		delete brain; // Clean up the brain memory
	std::cout << "Cat destructor called" << std::endl;
}

// Make sound method
void Cat::makeSound() const
{
	std::cout << "Meow Meoww" << std::endl;
}

// Generate idea method
void Cat::GenerateIdea(std::string const &idea)
{
	brain->GenerateIdea(idea);
}

// Print idea method
void Cat::PrintIdea() const
{
	brain->PrintIdea();
}
