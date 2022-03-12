#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName << endl;

  char lastName[30];
  cout << "Type your last name : ";
  getline(lastName);
  return 0;
}
