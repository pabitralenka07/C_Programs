#include <iostream>
#include <string>
using namespace std;

 // Function to calculate the cost of pure alcohol
double calculateCost(double volume, double percentage, double price) {
    double cost = (volume * percentage * price) / 100;
    return cost;
}

int main() {
    string drinkName;
    double volume, percentage, price, cost;

    // Input drink name
    cout << "Enter the name of the drink: ";
    getline(cin, drinkName);

    // Input volume of the drink
    cout << "Enter the volume of the drink (in ml): ";
    cin >> volume;

    // Input percentage of alcohol
    cout << "Enter the percentage of alcohol: ";
    cin >> percentage;

    // Input price of the drink
    cout << "Enter the price of the drink: ";
    cin >> price;

    // Calculate the cost of pure alcohol
    cost = calculateCost(volume, percentage, price);

    // Display the result
    cout << "The cost of pure alcohol in " << drinkName << " is: $" << cost << endl;

    return 0;
}