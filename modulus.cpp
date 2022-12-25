#include <iostream>
using namespace std;

main()
{
int num;
int remainder1;
int remainder2;
int remainder3;
int remainder4;
int quotient1;
int quotient2;
int quotient3;
int sum;

cout << "Enter four digit number:";
cin >> num;

remainder1=num%10;
quotient1=num/10;
remainder2=quotient1%10;
quotient2=quotient1/10;
remainder3=quotient2%10;
quotient3=quotient2/10;
remainder4=quotient3%10;

sum=remainder1+remainder2+remainder3+remainder4;
cout << "sum=" << sum;

}