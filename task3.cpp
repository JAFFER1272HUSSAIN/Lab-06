#include<iostream>
using namespace std;
string checkTitle(float,char);
int main()
{
    float age;
    char gender;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter m for male and f for female: ";
    cin >> gender;
    string title = checkTitle(age,gender);
    cout << title;
}
string chechTitle(float age,char gender)
{
    string title;
    if(gender == 'm')
    {
        if (age >= 16)
        {
            title = "Mr.";
        }
        else
        {
            title = "Master";
        } 
    }
    else if(gender == 'f')
    {
        if (age >= 16)
        {
            title = "Ms.";
        }
        else
        {
            title = "Miss";
        } 
        
    }
    return title;
    
}