
/*
Ex 11 Structure
Author John Lucey
Created on 13/11/17
Last Edited on 27/11/17
*/

//Pre-Processor Directives
#include <iostream>
#include <cstdio>
#include <windows.h>
#include <math.h>

//structure definition
struct date
{
	int day;
	int month;
	int year;
}
;
using namespace std;

//Main Function
int main()
{
    //Function Prototype
    date Date_Function(date);

    //Structure Declared
    struct date today;

    //Function of program descibed to user
    cout << "Tomorrows Date Calculator!\n\n" << endl;

    //User promted to enter todays date
    cout << "\n\n\n\nEnter todays date: {dd} : ";
    cin  >> today.day;
    cout << "\n\n\n\nEnter the month: {mm} : ";
    cin  >> today.month;
    cout << "\n\n\n\nEnter the Year: {yyyy} : ";
    cin  >> today.year;

    //Displayed to user the date they have chosen
    cout << "You Entered :" << today.day << "/" << today.month << "/" << today.year << endl;

    //Function Invoked
    Date_Function(today);

    return 0;
}
//Function for date calculation
date Date_Function(date today)
{

    //Month array assigned month values
    int monthlength [12] = {31, 28, 31, 30, 30, 30, 31, 31, 30, 31, 30, 31};

    struct date tomorrow;

    //increments the day only
    tomorrow.day = today.day + 1;
    tomorrow.month = today.month;
    tomorrow.year = today.year;

    //Loop to determine if year is a leap year & february length changed
    if(today.year % 4 == 0)
    {
        if (today.year % 100 == 0);
        {
            if (today.year % 400 == 0)
            {
                    monthlength[1] = 29;
            }
                    else
                    {
                            monthlength[1]= 29;
                    }
        }
    }
    //Increments for end of month
    if(tomorrow.day>monthlength[today.month-1])
    {
        tomorrow.day = 1;
        tomorrow.month = today.month+1;
        tomorrow.year = today.year;
    }
    //Loop to ensure year day and month reset to one and year incremented for end of year
    if(today.month>=12)
    {
        if (today.day==31)
        {
            tomorrow.day = 1;
            tomorrow.month = 1;
            tomorrow.year = today.year+1;
        }
    }

    //Displays Tomorrows date to user
    cout << "\n\nTomorrows Date is :\t" << tomorrow.day << "/" << tomorrow.month << "/" << tomorrow.year << endl;

    return tomorrow;
}
