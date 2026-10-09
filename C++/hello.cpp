#include <iostream>
#include <string>
using namespace std;

class Drink {
private:
    string name;
    double volume;
    double percentage;
    double price;

public:
    // Constructor
    Drink(string n, double v, double p, double pr) {
        name = n;
        volume = v;
        percentage = p;
        price = pr;
    }

    // Method to calculate the cost of pure alcohol
    double calculateCost() {
        return (volume * percentage * price) / 100;
    }

    // Method to display the details of the drink
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Volume: " << volume << " ml" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Drink drink1("Beer", 500, 5, 10);
    Drink drink2("Wine", 750, 12, 20);

    // Display the details of the drinks
    cout << "Drink 1:" << endl;
    drink1.displayDetails();
    cout << "The cost of pure alcohol in Drink 1 is: $" << drink1.calculateCost() << endl;

    cout << "\nDrink 2:" << endl;
    drink2.displayDetails();
    cout << "The cost of pure alcohol in Drink 2 is: $" << drink2.calculateCost() << endl;

    return 0;
}