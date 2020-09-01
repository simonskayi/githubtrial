#include<iostream>

using namespace std;
int main()
{
    int current_Date,current_Month,current_Year,Birth_Date,Birth_Month,Birth_Year,Age;
    cout << "Enter your Date of Birth Date/Month/Year: ";
    cin >> Birth_Date>>Birth_Month>>Birth_Year;

    cout<<"Enter current date-date/month/Year: ";
    cin>>current_Date>>current_Month>>current_Year;

    Age= current_Year-Birth_Year;
     if (current_Month < Birth_Month)
        Age=Age-1;

     else
     {
         if(current_Date<Birth_Date)
            Age=Age-1;
     }

     cout<<"Your Age now is:"<<Age;



    return 0;
}
