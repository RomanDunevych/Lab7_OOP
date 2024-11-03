#pragma once
#include <string>
using namespace std;

class Dish {
private:
    string name;       // ����� ������
    string category;   // �������� (�������, ������� ������, ������)
    int calories;      // ʳ������ ������
    double price;      // ֳ��

public:
    Dish(); // ����������� ��� ���������
    Dish(string name, string category, int calories, double price); // ����������� � �����������

    // ������ ������� (�������)
    string getName() const;
    string getCategory() const;
    int getCalories() const;
    double getPrice() const;

    // ������-�������� (�������)
    void setName(const string& name);
    void setCategory(const string& category);
    void setCalories(int calories);
    void setPrice(double price);

    // �������� ������ ��� �������� �����������
    friend ostream& operator<<(ostream& os, const Dish& dish);
};
