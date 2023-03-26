#pragma once
#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#define CAT "\033[35mCAT \033[0m"

class Cat : public Animal {
	private:
		Brain *_catBrain;

	public:
		Cat( void );
		Cat( const Cat &copy );
		Cat &operator=( const Cat &assign );
		virtual ~Cat( void );

		std::string getType() const;
		void	makeSound() const;
		void 	setIdea( int i, std::string idea );
		void	getIdeas( void );

};

#endif