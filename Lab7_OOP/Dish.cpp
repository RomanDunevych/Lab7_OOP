#include "Dish.h"
#include <iostream>
using namespace std;

// Конструктор за замовчуванням
Dish::Dish() : name(""), category(""), calories(0), price(0.0) {}

// Конструктор з параметрами
Dish::Dish(string name, string category, int calories, double price)
    : name(name), category(category), calories(calories), price(price) {}

// Геттери
string Dish::getName() const { return name; }
string Dish::getCategory() const { return category; }
int Dish::getCalories() const { return calories; }
double Dish::getPrice() const { return price; }

// Сеттери
void Dish::setName(const string& name) { this->name = name; }
void Dish::setCategory(const string& category) { this->category = category; }
void Dish::setCalories(int calories) { this->calories = calories; }
void Dish::setPrice(double price) { this->price = price; }

// Оператор виводу
ostream& operator<<(ostream& os, const Dish& dish) {
    os << "Dish: " << dish.name << ", Category: " << dish.category
        << ", Calories: " << dish.calories << ", Price: " << dish.price;
    return os;
}
