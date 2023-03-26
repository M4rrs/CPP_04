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
	std::cout << "\n[ CAT COPIES AND IDEAS ]\n" << std::endl;
	Cat *cat = new Cat();

	if (cat == NULL)
	{
		perror("Allocation failed.");
		exit(1);
	}

	cat->setIdea(0, "I have to clean myself.");
	cat->setIdea(1, "I am superior.");
	cat->setIdea(2, "I will hunt for this idiotic companion (Human).");
	cat->setIdea(5, "Meow.");
	cat->setIdea(51, "I shall pee to mark my area.");
	cat->setIdea(99, "It is too quiet, time to SCREAM. (It's 3am)");
	cat->setIdea(101, "Outside of ideas"); //should not print

	std::cout << cat->getType() + " cat has these ideas:" << std::endl;
	cat->getIdeas();

	Cat *catCopy = new Cat(*cat);

	if (catCopy == NULL)
	{
		perror("Cat Copy allocation failed.");
		exit(1);
	}

	std::cout << catCopy->getType() + " catCopy has these ideas:" << std::endl;
	catCopy->getIdeas();

	std::cout << std::endl;
	delete cat;
	delete catCopy;
	
	std::cout << "\n[ DOG COPIES AND IDEAS ]\n" << std::endl;
	Dog *dog = new Dog();

	if (dog == NULL)
	{
		perror("Allocation failed.");
		exit(1);
	}

	dog->setIdea(0, "I gotta sniff his butt.");
	dog->setIdea(1, "I have to sniff that.");
	dog->setIdea(3, "Look at that squirrel.");
	dog->setIdea(5, "I want to chew those slippers.");
	dog->setIdea(40, "I'll pee on this.");
	dog->setIdea(99, " BARK ");
	dog->setIdea(101, "Outside of ideas."); //should not print

	std::cout << dog->getType() + " dog has these ideas:" << std::endl;
	dog->getIdeas();

	Dog *dogCopy = new Dog(*dog);

	if (dogCopy == NULL)
	{
		perror("Dog copy allocation failed.");
		exit(1);
	}

	std::cout << dogCopy->getType() + " dogCopy has these ideas:" << std::endl;
	dogCopy->getIdeas();

	std::cout << std::endl;
	delete dog;
	delete dogCopy;

	std::cout << "\n-----------------[ DESTRUCTING ]-----------------\n" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete (animals[i]);
		std::cout << std::endl;
	}


	system("leaks AnimalBrain");
}