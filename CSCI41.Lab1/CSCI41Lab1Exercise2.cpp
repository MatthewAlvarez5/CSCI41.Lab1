/******************************************************************************
Author: Matthew Alvarez
Course: CSCI 41 Lab
Assignment: Lab 1 Exercise 2 
*******************************************************************************/

#include <iostream>

using namespace std;

void MonthToString(int m) {
    switch (m) {
    case 1:
        cout << "Month entered: January";
        break;
    case 2:
        cout << "Month entered: February";
        break;
    case 3:
        cout << "Month entered: March";
        break;
    case 4:
        cout << "Month entered: April";
        break;
    case 5:
        cout << "Month entered: May";
        break;
    case 6:
        cout << "Month entered: June";
        break;
    case 7:
        cout << "Month entered: July";
        break;
    case 8:
        cout << "Month entered: August";
        break;
    case 9:
        cout << "Month entered: September";
        break;
    case 10:
        cout << "Month entered: October";
        break;
    case 11:
        cout << "Month entered: November";
        break;
    case 12:
        cout << "Month entered: December";
        break;
        return;
    }

}

int MonthCheck(int m) {
    while (true)
    {
        if (m < 13 && m>0) {
            return m;
        }
        cout << "Bad input try again: ";
        cin >> m;
    }
}

int main()
{
    int m1;
    int m2;
    cout << "Enter a number correspoding to a month [1-12]: ";
    cin >> m1;
    m2 = MonthCheck(m1);
    MonthToString(m2);
    return 0;
}