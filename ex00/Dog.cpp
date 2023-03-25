#include "Dog.hpp"

/*=============== CONSTRUCTOR ===============*/

Dog::Dog( void ) : Animal(){
	_type = "Dog";
	std::cout << DOG + _type + " constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

Dog::~Dog( void ) {
	std::cout << DOG + _type + " destructed" << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/
Dog::Dog( const Dog &copy ) : Animal( copy ) {
	*this = copy;
	std::cout << DOG << " copy constructor called." << std::endl;
}
/*=============== OVERLOADED OPERATOR ===============*/

Dog	&Dog::operator=( const Dog &assign ) {
	this->_type = assign._type;
	return (*this);
}

/*=============== PUBLIC  ===============*/

void	Dog::makeSound( void ) const {
	std::cout << DOG + _type + " goes Woof Woof." << std::endl;
}

std::string Dog::getType() const {
	return (_type);
}