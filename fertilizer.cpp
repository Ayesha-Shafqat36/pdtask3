#include <iostream>
using namespace std;

main()
{
int size;
int cost;
int area;
int fertilizerCost;
int costPerSqFt;

cout << "Enter Size In Pounds:";
cin >> size;

cout << "Enter Cost:";
cin >> cost;

cout << "Enter Area:";
cin >> area;

fertilizerCost=cost/size;
cout << "Cost of Fertilizer:"<< fertilizerCost; 
cout << endl;
costPerSqFt=cost/area;
cout << "Area Per Sq Foot:" << costPerSqFt;
}
