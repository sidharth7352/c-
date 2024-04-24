//write a program to read the integer value , then print respect to character.

#include<iostream>
using namespace std;
int main()
{
int num;
cout << "Enter the number..." << endl;
cin >> num;
cout <<"Number = " << num << endl;
cout <<"Character = " << char(num) << endl;
}
