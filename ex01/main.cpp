/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:59:39 by azerfaou          #+#    #+#             */
/*   Updated: 2025/06/01 16:30:35 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/colors.hpp"
#include <iostream>
#include <string>

int main() {
    std::cout <<CYAN<< "--- Basic ---"<< RESET << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    delete dog;
    delete cat;
    std::cout <<CYAN<< "\n--- Deep copy : assignment ---"<< RESET << std::endl;
	{
    Dog dog1 = Dog();
	Dog dog2 = Dog();
    dog1.GenerateIdea("I should eat!");
	dog2 = dog1;  // Using assignment operator
	dog2.GenerateIdea("I should play!");
	std::cout <<GREEN<< "Dog1" << RESET << std::endl;
	dog1.PrintIdea();  // Should print "I should eat!"
	std::cout <<GREEN<< "Dog2" << RESET << std::endl;
	dog2.PrintIdea();  // Should print "I should play!"
	}
	std::cout <<CYAN<< "\n--- Deep copy : copy constructor ---" <<RESET<< std::endl;
	{
	Dog dog1 = Dog();
	dog1.GenerateIdea("I should eat!");
	Dog dog2(dog1);  // Using copy constructor
	dog2.GenerateIdea("I should play!");
	std::cout <<GREEN<< "Dog1" << RESET << std::endl;
	dog1.PrintIdea();  // Should print "I should eat!"
	std::cout <<GREEN<< "Dog2" << RESET << std::endl;
	dog2.PrintIdea();  // Should print "I should play!"
	}
    std::cout <<CYAN<< "\n--- Zoo ---"<< RESET << std::endl;
    const int N = 8;
    Animal* zoo[N];
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

    return 0;
}
