#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"

int main()
{
	std::cout << "-----------------[ CONSTRUCTING ]-----------------" << std::endl;
	const Animal	*animals[10];
	for (int i = 0; i < 10; i ++)
	{
		if (i % 2)
		{
			animals[i] = new Cat();
			std::cout << std::endl;
		}
		else
		{
			animals[i] = new Dog();
			std::cout << std::endl;
		}
	}

	std::cout << "\n-----------------[ BASIC TESTS ]-----------------\n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "ANIMAL " << i << " | "
				<< animals[i]->getType() << " |  ";
		animals[i]->makeSound();	
	}

	std::cout << "\n-----------------[ DEEP TESTING ]-----------------\n" << std::endl;


	std::cout << "\n-----------------[ DESTRUCTING ]-----------------\n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete (animals[i]);
		std::cout << std::endl;
	}


	system("leaks AnimalBrain");
}