/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:56:46 by azerfaou          #+#    #+#             */
/*   Updated: 2025/06/01 13:31:47 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"
#include <iostream>
#include <string>

Brain::Brain():
	ideaIndex(0)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other)
	{
		ideaIndex = other.ideaIndex;
		// Copy the ideas from the other Brain even the ones that are not used
		for (int i = 0; i < ideaIndex; i++)
			ideas[i] = other.ideas[i];
		for (int i = ideaIndex; i < IDEAS; i++)
			ideas[i].clear(); // Clear unused ideas
	}
	return *this;
}

// Generate idea method
void Brain::GenerateIdea(std::string const &idea)
{
	if (idea.empty())
	{
		std::cout << "Empty idea cannot be generated" << std::endl;
		return;
	}
	if (ideaIndex < IDEAS)
	{
		ideas[ideaIndex] = idea;
		ideaIndex++;
	}
	else
		std::cout << "Brain is full, cannot generate more ideas" << std::endl;
}

// Print idea method
void Brain::PrintIdea() const
{
	if (ideaIndex == 0)
		std::cout << "No ideas generated yet" << std::endl;
	else
	{
		std::cout << "Ideas generated: " << std::endl;
		for (int i = 0; i < ideaIndex; i++)
			std::cout << ideas[i] << std::endl;
	}
}