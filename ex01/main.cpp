/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 10:59:39 by azerfaou          #+#    #+#             */
/*   Updated: 2025/06/01 00:22:32 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/Brain.hpp"
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
	dog1.PrintIdea();  // Should print "I should eat!"
	dog2.PrintIdea();  // Should print "I should play!"
	}
	std::cout << "\n--- Deep copy : copy constructor ---" << std::endl;
    std::cout << "\n--- ARRAY OF ANIMALS ---\n";
    const int N = 4;
    Animal* zoo[N];
    for (int i = 0; i < N; ++i) {
        if (i < N/2)
            zoo[i] = new Dog();
        else
            zoo[i] = new Cat();
    }
    for (int i = 0; i < N; ++i)
        delete zoo[i];

    return 0;
}
