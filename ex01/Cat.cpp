#include "Cat.hpp"

/*=============== CONSTRUCTOR ===============*/

Cat::Cat( void ) : Animal() {
	_type = "Cat";
	_catBrain = new Brain();
	if (!_catBrain)
	{
		perror("Cat Brain creation failed.");
		exit(1);
	}
	std::cout << CAT + _type + " constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

Cat::~Cat( void ) {
	delete _catBrain;
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
	this->_catBrain = new Brain();
	for (int i = 100; i < 100; i++)
		this->_catBrain[i] = assign._catBrain[i];
	return (*this);
}

/*=============== PUBLIC  ===============*/

void	Cat::makeSound( void ) const {
	std::cout << CAT + _type + " goes Meow Meow." << std::endl;
}

std::string Cat::getType() const {
	return (_type);
}

