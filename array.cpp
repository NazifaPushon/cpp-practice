#include <iostream>
using namespace std;
int main (){
	int marks[5];
	for(int i = 0; i <5; i++){
		std::cout << "Please give input for index " << i  << " : ";std::cin >> marks[i] ;
	}
	for(int i = 0 ; i < 5 ; i++){
		std::cout << marks[i] << " " ;
	}
}
