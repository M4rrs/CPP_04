#pragma once
#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#define DOG "\033[34mDOG \033[0m"

class Dog : public Animal {
	private:
		Brain *_dogBrain;
	public:
		Dog( void );
		Dog( const Dog &copy );
		Dog &operator=( const Dog &assign );
		virtual ~Dog( void );

		std::string getType() const;
		void	makeSound() const;
		void	setIdea( int i, std::string idea );
		void	getIdeas( void );
};

#endif