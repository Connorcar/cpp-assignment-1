#include <iostream>
using namespace std;

/* A program that calculates total money earned in a work week, accounting for
taxes and overtime hours. */

int main() {
  const double EMPLOYEE_PAY = 16.0;
  const double SS_TAX = 0.06;
  const double F_INCOME_TAX = 0.14;
  const double S_INCOME_TAX = 0.05;
  const double MEDICAL_TAX_PER_WEEK = 10;
  int hoursWorked;
  double grossPay;
  double ssAmount;
  double federalIncomeAmount;
  double stateIncomeAmount;
  double takeHomePay;

  cout << "How many hours did you work this week? ";
  cin >> hoursWorked;

  // Calculate gross pay
  if (hoursWorked > 40) {
    // Normal 40 hour rate plus overtime hours rate
    grossPay = (40 * EMPLOYEE_PAY) + ((hoursWorked - 40) * EMPLOYEE_PAY * 1.5);
  }
  else {
    grossPay = hoursWorked * EMPLOYEE_PAY;
  }

  // Calculate tax percentages
  ssAmount = grossPay * SS_TAX;
  federalIncomeAmount = grossPay * F_INCOME_TAX;
  stateIncomeAmount = grossPay * S_INCOME_TAX;
  takeHomePay = grossPay - ssAmount - federalIncomeAmount - stateIncomeAmount - MEDICAL_TAX_PER_WEEK;

  cout << "Your gross pay amount for the week is $" << grossPay << '.' << endl;
  cout << ' ' << endl;
  cout << "Amount withheld for Social Security tax: $" << ssAmount << endl;
  cout << "Amount withheld for federal income tax: $" << federalIncomeAmount << endl;
  cout << "Amount withheld for state income tax: $" << stateIncomeAmount << endl;
  cout << "Amount withheld for medical insurance: $" << MEDICAL_TAX_PER_WEEK << endl;
  cout << ' ' << endl;
  cout << "Your net take-home pay for the week is $" << takeHomePay << '.' << endl;

  return 0;
}
