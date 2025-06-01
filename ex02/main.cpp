/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 11:29:39 by azerfaou          #+#    #+#             */
/*   Updated: 2025/06/01 14:23:39 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/colors.hpp"
#include <iostream>

int main()
{
	std::cout <<CYAN<< "\n--- Zoo ---"<< RESET << std::endl;
    const int N = 8;
    Animal* zoo[N];
	// Animal meta = Animal();
    for (int i = 0; i < N; ++i)
	{
        if (i < N/2)
		{
			std::cout <<GREEN<< "Creating Dog " << i << RESET << std::endl;
            zoo[i] = new Dog();
		}
        else
		{
			std::cout <<GREEN<< "Creating Cat " << i << RESET << std::endl;
            zoo[i] = new Cat();
		}
    }
    for (int i = 0; i < N; ++i)
        delete zoo[i];
}