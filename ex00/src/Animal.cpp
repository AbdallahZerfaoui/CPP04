/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:39:58 by azerfaou          #+#    #+#             */
/*   Updated: 2025/04/30 17:23:48 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include <iostream>
#include <string>

Animal::Animal():
	_type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
	// this->_type = "Animal";
}

Animal::Animal(const std::string &type):
	_type(type)
{
	std::cout << "Animal constructor called" << std::endl;
	// this->_type = type;
}

Animal::Animal(const Animal &other):
	_type(other._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
	// this->_type = other._type;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

// Make sound method
void Animal::makeSound() const
{
	std::cout << "General animal sound" << std::endl;
}

std::string Animal::getType() const
{
	return _type;
}
