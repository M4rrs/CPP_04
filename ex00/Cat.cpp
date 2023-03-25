#include "Cat.hpp"

/*=============== CONSTRUCTOR ===============*/

Cat::Cat( void ) : Animal() {
	_type = "Cat";
	std::cout << CAT + _type + " constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

Cat::~Cat( void ) {
	std::cout << CAT + _type + " destructed" << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/
Cat::Cat( const Cat &copy ) : Animal( copy ) {
	*this = copy;
	std::cout << CAT << " copy constructor called." << std::endl;
}
/*=============== OVERLOADED OPERATOR ===============*/

Cat	&Cat::operator=( const Cat &assign ) {
	this->_type = assign._type;
	return (*this);
}

/*=============== PUBLIC  ===============*/

void	Cat::makeSound( void ) const {
	std::cout << CAT + _type + " goes Meow Meow." << std::endl;
}

std::string Cat::getType() const {
	return (_type);
}

