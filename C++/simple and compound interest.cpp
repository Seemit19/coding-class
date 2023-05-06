#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float principal, rate, time, simple_interest, compound_interest;
    int n;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest (in percentage): ";
    cin >> rate;

    cout << "Enter the time period (in years): ";
    cin >> time;

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << simple_interest << endl;

    // Calculate compound interest
    cout << "Enter the number of times interest is compounded per year: ";
    cin >> n;

    compound_interest = principal * pow((1 + (rate / (n * 100))), (n * time)) - principal;

    cout << "Compound Interest = " << compound_interest << endl;

    return 0;
}
