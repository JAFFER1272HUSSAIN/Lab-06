#include<iostream>
using namespace std;
int calculate_times(string,int,int);
main()
{ 
   int total;
   string y;
   int h,dh;
   cout << "Enter the year: ";
   cin >> y;
   cout << "Enter number of holidays: ";
   cin >> h;
   cout << "Enter the number of days in which he is travelling to home: ";
   cin >> dh;
   total = calculate_times(y,h,dh);
   cout << total;
}
 int calculate_times(string y,int h,int dh)
{
    int total,weeks;
    float ph,ps,playtotal;
    ph=h*(2.0/3);
    weeks=48-dh;
    ps=weeks*(3.0/4);
    playtotal=ps+ph+dh;
    if(y=="normal")
    {
        playtotal = playtotal;
    }
    if(y=="leap")
    {
        playtotal=playtotal +((15.0/100)*playtotal);
    }
    return playtotal;
}
