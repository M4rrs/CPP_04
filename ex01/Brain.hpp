#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <iomanip>
#define BRAIN "\033[38;5;168mBRAIN \033[0m"
#define RED "\033[31m"
#define CLEAR "\033[0m"

class Brain {
	private:
		std::string	_ideas[100];
	public:
		Brain( void );
		Brain( const Brain &copy );
		Brain &operator=( const Brain &assign );
		~Brain( void );

		void setIdea( int i, std::string idea );
		void getIdeas( void );
};

#endif
