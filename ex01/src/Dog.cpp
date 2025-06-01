/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:40:16 by azerfaou          #+#    #+#             */
/*   Updated: 2025/06/01 13:43:04 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"
#include "../include/Brain.hpp"
#include <iostream>
#include <string>

Dog::Dog()
{
	this->_type = "Dog";
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other): Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*other.brain); // Deep copy of the brain
	this->_type = other._type;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
		if (brain)
			delete brain;
		brain = new Brain(*other.brain); // Deep copy of the brain
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	if (brain)
		delete brain; // Clean up the brain memory
}

// Make sound method
void Dog::makeSound() const
{
	std::cout << "Woof Wooff" << std::endl;
}

// Generate idea method
void Dog::GenerateIdea(std::string const &idea)
{
	brain->GenerateIdea(idea);
}

// Print idea method
void Dog::PrintIdea() const
{
	brain->PrintIdea();
}
