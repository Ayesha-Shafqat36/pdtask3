#include <iostream>
using namespace std;

main()
{
int one;
int two;
int three;
int four;
int five;
int six;
int seven;
int eight;
int nine;
int ten;
int eleven;
int twelve;
int thirteen;
int fourteen;
int fifteen;
int total;
int resultOne;
int resultTwo;
int resultThree;

cout << "Enter number 01:";
cin >> one;

cout << "Enter number 02:";
cin >> two;

cout << "Enter number 03:";
cin >> three;

cout << "Enter number 04:";
cin >> four;

cout << "Enter number 05:";
cin >> five;

cout << "Enter number 06:";
cin >> six;

cout << "Enter number 07:";
cin >> seven;

cout << "Enetr number 08:";
cin >> eight;


cout << "Enter number 09:";
cin >> nine;

cout << "Enter number 10:";
cin >> ten;

cout << "Enter number 11:";
cin >> eleven;

cout << "Enter number 12:";
cin >> twelve;

cout << "Enter number 13:";
cin >> thirteen;

cout << "Enter number 14:";
cin >> fourteen;

cout << "Enter number 15:";
cin >> fifteen;

resultOne=(one+two+three+four+five);
resultTwo=six*seven*eight*nine*ten;
resultThree=eleven-twelve-thirteen-fourteen-fifteen;

total=(resultOne+resultTwo)-resultThree;
cout << "Total:" << total;

}