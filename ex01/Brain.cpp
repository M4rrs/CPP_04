#include "Brain.hpp"

/*=============== CONSTRUCTOR ===============*/

Brain::Brain( void ) {
	std::cout << BRAIN << "constructed." << std::endl;
}

/*=============== DESTRUCTOR ===============*/

Brain::~Brain( void ) {
	std::cout << BRAIN << "destructed." << std::endl;
}

/*=============== COPY CONSTRUCTOR ===============*/

Brain::Brain( const Brain &copy ) {
	*this = copy;
	std::cout << BRAIN << "copy constructor called." << std::endl;
}

/*=============== OVERLOADED OPERATOR ===============*/

Brain	&Brain::operator=( const Brain &assign ) {
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = assign._ideas[i];
	
	return (*this);
}

/*=============== PUBLIC  ===============*/

void	Brain::setIdea( int i, std::string idea ) {
	if (i >= 100)
		return ;
	_ideas[i] = idea;
}

void	Brain::getIdeas( void ) {

	for (int i = 0; i < 100; i++)
		std::cout << "[ " << i << " ] " + _ideas[i]
				<< std::endl;
}