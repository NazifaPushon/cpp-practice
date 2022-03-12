#include <iostream>
using namespace std;
int addNumber (int first_number, int second_number)
{
	int result = first_number + second_number;
	return result;
}
int main()
{
	double first_number= 2876;
	int second_number =  10 ;

	
	int i = 1;
	while(i <=10) {
		std::cout << i << " hello world" << std::endl;
		i++;
	}
	int sum = addNumber(first_number,second_number);
	std::cout << "The sum of two number is  : " << sum  << std::endl;
}
