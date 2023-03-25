#include "WrongCat.hpp"

/*=============== CONSTRUCTOR ===============*/

WrongCat::WrongCat( void ) : WrongAnimal() {
	_type = "WrongCat";
	std::cout << WCAT + _type + " constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

WrongCat::~WrongCat( void ) {
	std::cout << WCAT + _type + " destructed" << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/
WrongCat::WrongCat( const WrongCat &copy ) : WrongAnimal( copy ) {
	*this = copy;
	std::cout << WCAT << " copy constructor called." << std::endl;
}
/*=============== OVERLOADED OPERATOR ===============*/

WrongCat	&WrongCat::operator=( const WrongCat &assign ) {
	this->_type = assign._type;
	return (*this);
}

/*=============== PUBLIC  ===============*/

void	WrongCat::makeSound( void ) const {
	std::cout << WCAT + _type + " goes Meow Meow." << std::endl;
}

std::string WrongCat::getType() const {
	return (_type);
}

