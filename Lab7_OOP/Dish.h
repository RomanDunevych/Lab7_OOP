#pragma once
#include <string>
using namespace std;

class Dish {
private:
    string name;       // Назва страви
    string category;   // Категорія (закуска, основна страва, десерт)
    int calories;      // Кількість калорій
    double price;      // Ціна

public:
    Dish(); // Конструктор без параметрів
    Dish(string name, string category, int calories, double price); // Конструктор з параметрами

    // Методи доступу (геттери)
    string getName() const;
    string getCategory() const;
    int getCalories() const;
    double getPrice() const;

    // Методи-мутатори (сеттери)
    void setName(const string& name);
    void setCategory(const string& category);
    void setCalories(int calories);
    void setPrice(double price);

    // Оператор виводу для зручного відображення
    friend ostream& operator<<(ostream& os, const Dish& dish);
};
