/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 16:49:11 by azerfaou          #+#    #+#             */
/*   Updated: 2025/04/30 17:30:02 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Animal.hpp"
#include "include/Cat.hpp"
#include "include/Dog.hpp"
#include "include/WrongAnimal.hpp"
#include "include/WrongCat.hpp"
#include <iostream>
#include <string>

//TDOD: add more tests and check the output because i still didn't check it as i should !!
int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wc = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	wc->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	//TODO: should i add more tests?

	//delete allocated memory
	// delete meta;
	// delete j;
	// delete i;
	return 0;
}