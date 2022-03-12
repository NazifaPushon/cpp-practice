#include <iostream>
using namespace std;
#include <string>
int main ()
{
	int age;
	std::string name;
	std::cout << "Please type your name : "  << std::endl;
	std::getline(std::cin,name);
	std:: cout << "Please type your age : " << std::endl;
	std::cin >> age;
	std::cout << "Hello " << name << " your are " << age << " years old" << std::endl;
}
