#include "Dog.hpp"

/*=============== CONSTRUCTOR ===============*/

Dog::Dog( void ) : Animal(){
	_type = "Dog";
	_dogBrain = new Brain();
	if (!_dogBrain)
	{
		perror("Dog Brain creation failed.");
		exit(1);
	}
	std::cout << DOG + _type + " constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

Dog::~Dog( void ) {
	delete _dogBrain;
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
	this->_dogBrain = new Brain();
	// for (int i = 0; i < 100; i++)
	// 	_dogBrain[i] = assign._dogBrain[i];
	*this->_dogBrain = *assign._dogBrain;
	return (*this);
}

/*=============== PUBLIC  ===============*/

void	Dog::makeSound( void ) const {
	std::cout << DOG + _type + " goes Woof Woof." << std::endl;
}

std::string Dog::getType() const {
	return (_type);
}

void	Dog::setIdea( int i, std::string idea ) {
	_dogBrain->setIdea(i, idea);
}

void	Dog::getIdeas( void ) {
	_dogBrain->getIdeas();
}
