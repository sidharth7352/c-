//write a program to read the data in octal format ,then print the result in decimal,octal and hexadecimal numbers

#include<iostream>
using namespace std;
int main()
{
int num;
cout << "Enter the octal number " << endl;
cin >> oct >> num;
cout << "octal number = " << showbase << oct << num << endl;
cout << "hexadecimal = " << hex << num << endl;
cout << "Decimal = " << dec << num << endl;
}
