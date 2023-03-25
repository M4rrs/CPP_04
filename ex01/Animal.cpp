#include "Animal.hpp"

/*=============== CONSTRUCTOR ===============*/

Animal::Animal( void ) : _type("") {
	std::cout << ANIMAL + _type + "constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

Animal::~Animal( void ) {
	std::cout << ANIMAL + _type + " destructed" << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/
Animal::Animal( const Animal &copy ) {
	*this = copy;
	std::cout << ANIMAL << " copy constructor called." << std::endl;
}
/*=============== OVERLOADED OPERATOR ===============*/

Animal	&Animal::operator=( const Animal &assign ) {
	this->_type = assign._type;
	return (*this);
}

/*=============== PUBLIC  ===============*/

void	Animal::makeSound( void ) const {
	std::cout << ANIMAL << "sounds like an Animal." << std::endl;
}

std::string Animal::getType() const {
	return (_type);
}
