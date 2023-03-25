#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#define ANIMAL "\033[32mANIMAL \033[0m"

class Animal {

	protected:
		std::string _type;
	public:
		Animal( void );
		Animal( const Animal &copy );
		Animal &operator=( const Animal &assign );
		virtual ~Animal( void );

		std::string	getType() const;
		virtual void	makeSound() const;
};

#endif