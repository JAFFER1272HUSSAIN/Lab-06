#include<iostream>
using namespace std;
float totalincome(string,int,int);
int main()
{
    string screen;
    int r,c;
    cout << "Enter name of screen: ";
    cin >> screen;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    float res = totalincome(screen,r,c);
    cout << res;

}
float totalincome(string screen,int r,int c)
{
    float total;
    if (screen == "Premiere ")
    {
        total = r * c * 12.00;
    }
    else if(screen == "Normal")
    {
        total = r * c * 7.50;
    }
    else if(screen == "Discount")
    {
        total = r * c * 5.00;
    }
    return total;
}