#include "WrongAnimal.hpp"

/*=============== CONSTRUCTOR ===============*/

WrongAnimal::WrongAnimal( void ) : _type("") {
	std::cout << WANIMAL + _type + "constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

WrongAnimal::~WrongAnimal( void ) {
	std::cout << WANIMAL + _type + " destructed" << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/
WrongAnimal::WrongAnimal( const WrongAnimal &copy ) {
	*this = copy;
	std::cout << WANIMAL << " copy constructor called." << std::endl;
}
/*=============== OVERLOADED OPERATOR ===============*/

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal &assign ) {
	this->_type = assign._type;
	return (*this);
}

/*=============== PUBLIC  ===============*/

void	WrongAnimal::makeSound( void ) const {
	std::cout << WANIMAL << "makes the wrong sound: Moo." << std::endl;
}

std::string WrongAnimal::getType() const {
	return (_type);
}
