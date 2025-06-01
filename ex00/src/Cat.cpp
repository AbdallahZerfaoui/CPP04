/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:40:02 by azerfaou          #+#    #+#             */
/*   Updated: 2025/06/01 16:28:09 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/colors.hpp"
#include <iostream>
#include <string>

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(const std::string &type)
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = type;
}

Cat::Cat(const Cat &other): Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = other._type;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

// Make sound method
void Cat::makeSound() const
{
	std::cout <<CYAN<< "Meow Meoww" <<RESET<< std::endl;
}