// Compile with g++ monty-hall.cpp

#include <iostream>
#include <stdlib.h>
using namespace std;

void montyHall(int totalSim);

int main() {
  montyHall(2000000);
  return 0;
}

void montyHall(int totalSim) {
  int totalDoors = 3;
  int carDoor, userChoice;

  int carBeforeSwitch = 0, carAfterSwitch = 0;

  for (int i=0; i<totalSim; i++) {
    carDoor = rand()%totalDoors;
    userChoice = rand()%totalDoors;

    if (userChoice == carDoor) {
      carBeforeSwitch++;
    } else {
      carAfterSwitch++;
    }
  }
  cout << "Switch | No Switch = " << carAfterSwitch << " | " << carBeforeSwitch << "\n";
  cout << "Ratio (Switch/No Switch) = " << (float)carAfterSwitch/carBeforeSwitch << "\n";
}
