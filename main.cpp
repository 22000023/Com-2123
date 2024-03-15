#include <iostream>

using namespace std;

int main()
{
    double merchandiseCost, salary, rent, eletricityCost;
    cout << "Enter the total cost of merchandise" << endl;
    cin >> merchandiseCost;
    double netProfit = merchandiseCost * 0.1;
    double FinalNetProfit = netProfit/0.85;

    cout << "Enter total salary of employees salary" << endl;
    cin >> salary;

    cout << "enter yearly rent cost" << endl;
    cin >> rent;

    cout << "enter the estimated cost price of eletricty" << endl;
    cin >> eletricityCost;

    double costSpent = merchandiseCost + salary + rent +eletricityCost;
    double markedup = (FinalNetProfit + costSpent)/merchandiseCost;

    cout << "Total marked up cost: " << markedup <<endl;
    return 0;
}
