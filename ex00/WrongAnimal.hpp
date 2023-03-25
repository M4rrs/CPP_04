#pragma once
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#define WANIMAL "\033[36mWRONG ANIMAL \033[0m"

class WrongAnimal {

	protected:
		std::string _type;
	public:
		WrongAnimal( void );
		WrongAnimal( const WrongAnimal &copy );
		WrongAnimal &operator=( const WrongAnimal &assign );
		virtual ~WrongAnimal( void );

		std::string	getType() const;
		void	makeSound() const;
};

#endif