/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:18:41 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/31 20:40:12 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"
#include "../include/colors.hpp"
#include <iostream>

WrongAnimal::WrongAnimal():
	_type("WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type):
	_type(type)
{
	std::cout << "Constructor with type as argument called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other):
	_type(other._type)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal type : " << _type << "is destroyed" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout <<CYAN<< "General WrongAnimal sound " <<RESET<< std::endl;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}