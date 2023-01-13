#include<iostream>
using namespace std;
float lowestPrice(int,string);
int main()
{
    int n;
    string d;
    cout << "Enter number of kilometers: ";
    cin >> n;
    cout << "Enter day or night: ";
    cin >> d;
    float a = lowestPrice(n,d);
    cout << "Cheapest Price is: " << a; 
}
float lowestPrice(int n,string d)
{
    float a;
    if(n>=20  && n<100)
    {
        a = 0.09 * n;
    }
    else if(n>=100)
    {
        a = 0.06 * n;
    }
    else
    {
        if(d == "day")
        {
            a = 0.70 + (0.79 * n);
        }
        else if(d == "night")
        {
            a = 0.70 + (0.90 * n);
        }
    }
    return a;
}