#include <iostream>
using namespace std;

main()
{
string name;
int ATprice;
int CTprice;
int ATsold;
int CTsold;
int total;
int remaining;

cout << "Enter Name:";
cin >> name;

cout << "Adult Ticket Price:";
cin >> ATprice;

cout << "Child Ticket Price:";
cin >> CTprice;

cout << "Number of Adult Ticket sold:";
cin >> ATsold;

cout << "Number of Child Ticket sold:";
cin >> CTsold;

float percentage;
cout << "Percentage to Donate:";
cin >> percentage;


total=(CTprice*CTsold)+(ATprice*ATsold);
cout << "Total Amount:" << total;
cout << endl;


remaining=total-(percentage/100)*total;
cout << "Remaining Amount:"<< remaining;

}