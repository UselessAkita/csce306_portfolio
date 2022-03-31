
#include <iostream>
#include <string>
#include "NewDate.h"

using namespace std;

NewDate::NewDate(int month, int day, int year)
    : month_numeral{month}, day_numeral{day}, year_numeral{year}
{
}

void NewDate::set_day(int new_day)
{
    // sets the day to a new value between 1-31 (pertains to how many days in current month)
    this->day_numeral = new_day;
}
void NewDate::set_month_string(string new_month)
{
    // sets the current month to a new string (only will be called within set month after the month numeral has been set)
    this->month_string = new_month;
}
void NewDate::set_month(int new_month_numeral)
{
    // sets the current month to a new value between 1-12 then calls set_month_string() passing the integer value to set the month’s name
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    this->month_numeral = new_month_numeral;
    set_month_string(months[new_month_numeral - 1]); // Subtracts one to match month index
}
void NewDate::set_year(int new_year)
{
    // sets the year to a new value that is passed
    this->year_numeral = new_year;
}
int NewDate::get_day()
{
    // returns the day variable
    return this->day_numeral;
}
string NewDate::get_month_string()
{
    // returns the month as a string
    return this->month_string;
}
int NewDate::get_month()
{
    // returns the month as a numeral
    return this->month_numeral;
}
int NewDate::get_year()
{
    // returns the year variable
    return this->year_numeral;
}