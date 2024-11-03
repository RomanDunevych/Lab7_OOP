#include <iostream>
#include "Dish.h"
using namespace std;

// Оголошення функцій
Dish findLowestCalorieDish(const Dish dishes[], int size);
void sortDishesByPrice(Dish dishes[], int size);
void printDishesByCategory(const Dish dishes[], int size, const string& category);

int main() {
    Dish dishes[10] = {
        Dish("Salad", "Appetizer", 150, 5.99),
        Dish("Steak", "Main", 700, 15.49),
        Dish("Cake", "Dessert", 300, 4.99),
        Dish("Soup", "Appetizer", 200, 3.99),
        Dish("Pasta", "Main", 600, 10.99),
        Dish("Ice Cream", "Dessert", 250, 3.49),
        Dish("Burger", "Main", 800, 8.99),
        Dish("Pie", "Dessert", 400, 5.49),
        Dish("Pizza", "Main", 750, 12.49),
        Dish("Fruit Bowl", "Appetizer", 100, 4.49)
    };

    // Використання функцій
    Dish lowestCalorieDish = findLowestCalorieDish(dishes, 10);
    cout << "Dish with the lowest calories: " << lowestCalorieDish << endl;

    sortDishesByPrice(dishes, 10);
    cout << "\nDishes sorted by price:" << endl;
    for (const auto& dish : dishes) {
        cout << dish << endl;
    }

    printDishesByCategory(dishes, 10, "Dessert");

    return 0;
}

// Реалізація функцій
Dish findLowestCalorieDish(const Dish dishes[], int size) {
    Dish lowestCalorieDish = dishes[0];
    for (int i = 1; i < size; i++) {
        if (dishes[i].getCalories() < lowestCalorieDish.getCalories()) {
            lowestCalorieDish = dishes[i];
        }
    }
    return lowestCalorieDish;
}

void sortDishesByPrice(Dish dishes[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (dishes[i].getPrice() > dishes[j].getPrice()) {
                swap(dishes[i], dishes[j]);
            }
        }
    }
}

void printDishesByCategory(const Dish dishes[], int size, const string& category) {
    cout << "Dishes in category \"" << category << "\":" << endl;
    for (int i = 0; i < size; i++) {
        if (dishes[i].getCategory() == category) {
            cout << dishes[i] << endl;
        }
    }
}
