#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    Dog	dog;
	Cat cat;

    dog.printIdeas(5);
    cat.printIdeas(100);

    return 0;
}