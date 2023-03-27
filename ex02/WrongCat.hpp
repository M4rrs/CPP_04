#pragma once
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#define WCAT "\033[33mWRONGCAT \033[0m"

class WrongCat : public WrongAnimal {

	public:
		WrongCat( void );
		WrongCat( const WrongCat &copy );
		WrongCat &operator=( const WrongCat &assign );
		virtual ~WrongCat( void );

		std::string getType() const;
		void	makeSound() const;
};

#endif