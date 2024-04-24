//write a program to read the data in hexadecimal then print output in decimal , octal numbers

#include<iostream>
using namespace std;
int main()
{
 int num;
 cout << "Enter the hexadecimal value " << endl;
 cin >> hex >>num;
 cout << "Decimal = " << dec << num << endl;
 cout << "octal = " << showbase <<oct << num << endl;
 cout << "hexadecimal = " << hex << num << endl;
}
