#include <iostream>
using namespace std;

main()
{

int InitialVelocity;
int Acceleration;
int Time;
int FinalVelocity;

cout << "Enter Initial Velocity:";
cin >> InitialVelocity;

cout << "Enter Acceleration:";
cin >> Acceleration;

cout << "Enter Time:";
cin >> Time;

FinalVelocity=InitialVelocity+(Acceleration*Time);
cout << "Enter Final Velocity:" << FinalVelocity;
}