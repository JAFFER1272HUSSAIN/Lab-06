#include <iostream>
using namespace std;
string checkspeed(float);
int main()
{
    float speed;
    cout << "Enter speed: ";
    cin >> speed;
    string check = checkspeed(speed);
    cout << check;

}
string checkspeed(float speed)
{
    string check;
    if(speed <= 10)
    {
        check = "slow";
    }
    else if(speed > 10 && speed <= 50)
    {
        check = "average";
    }
    else if(speed > 50 && speed <=150)
    {
        check = "fast";
    }
    else if(speed > 150 && speed <= 1000 ) 
    {
        check = "ultra-fast";
    }
    else
    {
        check = "extremely fast";
    }
    return check;
}
