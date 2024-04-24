// write a c++ program to scan three numbers and print that number and corresponding octal and hexadecimal values

#include<iostream>
using namespace std;
int main()
{
 cout << showbase << uppercase << showpos;
 int a,b,c;
 cout << "Enter the three numbers..." << endl;
 cin >> a >> b >> c;
 cout << "number = " << a << endl;
 cout << "octal= " << oct << a << endl;
 cout << "hexadecimal=" << hex << a << endl;
 cout << "\nnumber=" << noshowpos << dec <<  b << endl;
 cout << "octal = " << oct << b << endl;
 cout << "hexadecimal = " << hex << b << endl;

 }
