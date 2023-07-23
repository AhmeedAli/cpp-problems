#include <vector>
#include <iostream>
using namespace std;

class Invoice
{
private:
    string name;
    int item_number;
    double price;
    int quantity;

public:
    int GetItemNumber();
    void SetItemNumber(int itemNumber);
    string GetName();
    void SetName(string name);
    double GetPrice();
    void SetPrice(double price);
    int GetQuantity();
    void SetQuantity(int quantity);
    double GetTotalPrice();
    void Print();
};

int Invoice::GetItemNumber() { return item_number; }

void Invoice::SetItemNumber(int itemNumber) { item_number = itemNumber; }

string Invoice::GetName() { return name; }

void Invoice::SetName(string name) { this->name = name; }

double Invoice::GetPrice() { return price; }

void Invoice::SetPrice(double price) { this->price = price; }

int Invoice::GetQuantity() { return quantity; }

void Invoice::SetQuantity(int quantity) { this->quantity = quantity; }

double Invoice::GetTotalPrice() { return GetQuantity() * GetPrice() }

void Invoice::Print()
{
    cout << "Item Name: " << GetName() << "\n";
    cout << "Item Price: " << GetPrice() << "\n";
    cout << "Item Quantity: " << GetQuantity() << "\n";
    cout << "Item item number: " << GetItemNumber() << "\n";
    cout << "Item Total Price: " << GetTotalPrice() << "\n";
}

int main()
{
    return 0; 
}