#include <iostream>
using namespace std;

/* A program that checks if a meeting is safe according to fire regulations, based
on how many people are attending compared to the room capacity */

int main() {
  int roomCapacity;
  int numPeople;

  cout << "Enter the capacity of the room: " << endl;
  cin >> roomCapacity;

  cout << "Enter the number of people attending the meeting: " << endl;
  cin >> numPeople;

  /* Checks if numPeople is larger or smaller than room capacity and prints how
  many people can be added or removed */
  if (numPeople <= roomCapacity) {
    cout << "It is legal to hold the meeting and " << (roomCapacity - numPeople);
    cout << " more people may attend." << endl;
  }
  else {
    cout << "Due to fire regulations, the meeting cannot be held with " << numPeople << " people. ";
    cout << (numPeople - roomCapacity) << " people must be excluded." << endl;
  }

  return 0;
}
