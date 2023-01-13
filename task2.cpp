#include<iostream>
using namespace std;
float discount(int amount,string day,string month);
int main()
{
    int amount;
    string day,month;
    cout << "Enter amount: " ;
    cin >> amount;

    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    float res = discount(amount,day,month);
    cout << " Discount " << res; 
}
float discount(int amount,string day,string month)
{
    float dis;
    if(day == "sunday" && (month == "october " || month == "march " || month == "august"))
    {
        dis = amount * (10.0 / 100);
        dis = amount - dis;
        return dis;
    }
    else if(day == "monday" && (month == "november" || month == "december"))
    {
        dis = amount * (5.0 / 100);
        dis = amount - dis;
        return dis;
    }
    else 
    {
        return amount;
    }
    return dis;
}