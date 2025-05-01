/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AbstractAnimal.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:39:58 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/01 11:25:11 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AbstractAnimal.hpp"
#include <iostream>
#include <string>

AbstractAnimal::AbstractAnimal():
	_type("AbstractAnimal")
{
	std::cout << "AbstractAnimal default constructor called" << std::endl;
	// this->_type = "Animal";
}

AbstractAnimal::AbstractAnimal(const std::string &type):
	_type(type)
{
	std::cout << "AbstractAnimal constructor called" << std::endl;
	// this->_type = type;
}

AbstractAnimal::AbstractAnimal(const AbstractAnimal &other):
	_type(other._type)
{
	std::cout << "AbstractAnimal copy constructor called" << std::endl;
	// this->_type = other._type;
}

AbstractAnimal &AbstractAnimal::operator=(const AbstractAnimal &other)
{
	std::cout << "AbstractAnimal assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

AbstractAnimal::~AbstractAnimal()
{
	std::cout << "AbstractAnimal destructor called" << std::endl;
}
