/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 17:18:47 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/31 20:41:21 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"
#include "../include/colors.hpp"
#include <iostream>


WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called!" << std::endl;
}

WrongCat::WrongCat(const std::string& type): WrongAnimal(type)
{
	std::cout << "WrongCat Constructor with type as argument called " << std::endl;
}

WrongCat::WrongCat(const WrongCat& other): WrongAnimal(other)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat type : " << _type << "is destroyed" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const &other)
{
	std::cout << "WrongCat copy assignment operator called " << std::endl;
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout <<CYAN<< "Meaow Meaoww" <<RESET<< std::endl;
}