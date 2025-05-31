/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:49:11 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/31 23:45:03 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"
#include "include/colors.hpp"
#include <iostream>

//TDOD: add more tests and check the output because i still didn't check it as i should !!
int main()
{
	std::cout <<CYAN<< "---Creating animals---" <<RESET<< std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	delete meta;
	delete j;
	delete i;
	
	std::cout <<CYAN<< "---Creating wrong animals---" <<RESET<< std::endl;
	const WrongAnimal* wc = new WrongCat();
	const WrongAnimal* wa = new WrongAnimal();
	wc->makeSound();
	wa->makeSound();

	std::cout <<CYAN<< "---End of program---" <<RESET<< std::endl;
	return 0;
}