#include <iostream>
using namespace std;

main()
{
float vegPrice;
float fruitPrice;
int totalKgVeg;
int totalKgFruit;
float total;

cout << "Vegetable Price Per Kg:";
cin >> vegPrice;

cout << "Fruit Price Per Kg:";
cin >> fruitPrice;

cout << "Total Kg Veg:";
cin >> totalKgVeg;

cout <<  "Total Kg Fruit:";
cin >>  totalKgFruit;


total=(vegPrice*totalKgVeg)+(fruitPrice*totalKgFruit);
cout << "Total Earning" << total;
}
