#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#define DOG "\033[34mDOG \033[0m"

class Dog : public Animal {

	public:
		Dog( void );
		Dog( const Dog &copy );
		Dog &operator=( const Dog &assign );
		virtual ~Dog( void );

		std::string getType() const;
		void	makeSound() const;
};

#endif