#include <iostream>
using namespace std;

main()
{
int num;
int sum=0;

cout << "Enter number 01=";
cin >>num;
sum=num;

cout << "Enter number 02=";
cin >> num;
sum+=num;

cout << "Enter number 03=";
cin >> num;
sum+=num;

cout << "Enter number 04=";
cin >> num;
sum+=num;

cout << "Enter number 05=";
cin >> num;
sum+=num;

cout << "Total Sum=" << sum;
}