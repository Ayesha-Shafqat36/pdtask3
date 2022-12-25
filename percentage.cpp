#include <iostream>
using namespace std;

main()
{
char Name;
float subjectOne;
float subjectTwo;
float subjectThree;
float subjectFour;
float  subjectFive;
float sum;
float percentage;

cout << "Enter Name:";
cin >> Name;

cout << "Enter Subject one:";
cin >> subjectOne;

cout << "Enter Subject two :";
cin >> subjectTwo;

cout << "Enter Subject three:";
cin >> subjectThree;

cout << "Enter Subject four:";
cin >> subjectFour;

cout << "Enter Subject five:";
cin >> subjectFive;

sum=subjectOne+subjectTwo+subjectThree+subjectFour+subjectFive;

percentage=(sum*100)/500;
cout << "Percentage" << percentage;
}