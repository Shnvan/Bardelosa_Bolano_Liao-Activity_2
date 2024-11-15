
#include <iostream>
#include <iomanip>
using namespace std;

// START OF THE PROGRAM

int main()
{
    // Variables for input
    float originalPrice, markupPercentage, salesTaxPercentage;
    float storeMonthlyRate, electricityBill, waterBill;
    int itemQuantity, numOfEmployees;
    float employeeSalary;

    cout << "Item Original Price: " << endl;
    cin >> originalPrice;
    cout << "Marked-Up Price: " << endl;
    cin >> markupPercentage;
    cout << "Sales Tax Percentage: " << endl;
    cin >> salesTaxPercentage;
    cout << "Store Monthly Rate: " << endl;
    cin >> storeMonthlyRate;
    cout << "Electricity Bill: " << endl;
    cin >> electricityBill;
    cout << "Water Bill: " << endl;
    cin >> waterBill;
    cout << "Item Quantity: " << endl;
    cin >> itemQuantity;
    cout << "Number of Employee: " << endl;
    cin >> numOfEmployees;
    cout << "Salary: " << endl;
    cin >> employeeSalary;
    
    // CALCULATION OF SELLING PRICE
    int markedUpItem = (originalPrice + markupPercentage);
    float sellingPrice = ((salesTaxPercentage/100)*markedUpItem) + markedUpItem;
    // CALCULATION OF STORE EXPENSES
    int storeExpenses = (itemQuantity*originalPrice) + storeMonthlyRate + electricityBill + waterBill + (numOfEmployees*employeeSalary);
    // CALCULATION OF ITEMS NEED TO BE SOLD TO HAVE A BREAK-EVEN OF ALL THE EXPENSES
    int quotaItems = storeExpenses/markedUpItem;
    // CALCULATION OF THE PROFIT WITHOUT THE SALEX TAX
    int profit = (markedUpItem*itemQuantity)- storeExpenses;


    cout << "Selling price of the item: " << fixed << setprecision(2) << sellingPrice << endl;

    cout << "total expenses of the store: " << fixed << setprecision(2) << storeExpenses << endl;

    cout << "Quantity of items that need to be sold to have a break-even of all the expenses: " << fixed << setprecision(2) << quotaItems << " pieces" << endl;

    cout << "net profit of the store: " << fixed << setprecision(2) << profit << endl;


    return 0;
}