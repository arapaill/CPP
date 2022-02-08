#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = *str;

    std::cout << "String via str : " << str << std::endl;
	std::cout << "String via str_ptr : " << *str_ptr << std::endl;
	std::cout << "String via str_ref : " << str_ref << std::endl << std::endl;
	std::cout << "Address via str : " << &str << std::endl;
	std::cout << "Address via str_ptr : " << str_ptr << std::endl;
	std::cout << "Address via string_ref : " << &str_ref << std::endl;
    return(0);
}