#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "[ CONSTRUCTING ]" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "\n[ ANIMAL TYPE ]" << std::endl;
	std::cout << DOG << "type: " + j->getType() << std::endl;
	std::cout << CAT << "type: " + i->getType() << std::endl;

	std::cout << "\n[ ANIMAL SOUND ]" << std::endl;
	meta->makeSound();
	i->makeSound(); //will output the cat sound!
	j->makeSound();

	std::cout << "\n[ DESTRUCTING ]" << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\n[ WRONG ANIMAL ]" << std::endl;
	const WrongAnimal *a = new WrongAnimal();
	const WrongAnimal *b = new WrongCat();

	std::cout << std::endl;
	a->makeSound();
	b->makeSound();

	std::cout << std::endl;
	delete a;
	delete b;

	return 0;
}