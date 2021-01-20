#include <iostream>
using namespace std;

/* A program that converts the weight of a cereal from ounces to metric tons */

int main() {
  const double METRIC_TON = 35273.92;
  double cerealWeight;
  double newWeight;

  cout << "Enter weight of breakfast cereal in ounces: " << endl;
  cin >> cerealWeight;

  // ounce to metric ton conversion
  newWeight = cerealWeight / METRIC_TON;

  cout << "This cereal weighs " << newWeight << " metric tons" << endl;

  return 0;
}
