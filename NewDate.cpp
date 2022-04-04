// Joshua M Buhr
// CSCE 306; Spring 2022
// Portfolio Assignment - NewDate.cpp


// Code Summary: Driver file for NewDate.h

// Change Log:
//  - (4/4/22) Declared overloaded constructors and declared establish functions

#include <iostream>
#include <string>
#include "NewDate.h"

using namespace std;

// Empty Constructor when no arguments are given
NewDate::NewDate() {
    set_month(establish_month());
    set_month_string(establish_month_string());
    set_day(establish_day());
    set_year(establish_year());
}

// Constructor when only the month is given
NewDate::NewDate(int passed_month) {
    set_month(passed_month);
    set_month_string(establish_month_string());
    set_day(establish_day());
    set_year(establish_year());
}

// Constructor when only the month and month string were given
NewDate::NewDate(int passed_month, string passed_month_string) {
    set_month(passed_month);
    set_month_string(passed_month_string);
    set_day(establish_day());
    set_year(establish_year());
}

// Constructor when only the month, month string, and day are given
NewDate::NewDate(int passed_month, string passed_month_string, int passed_day) {
    set_month(passed_month);
    set_month_string(passed_month_string);
    set_day(passed_day);
    set_year(establish_year());
}

// Constructor when the month, month string, day, and the year are given
NewDate::NewDate(int passed_month, string passed_month_string, int passed_day, int passed_year) {
    set_month(passed_month);
    set_month_string(passed_month_string);
    set_day(passed_day);
    set_year(passed_year);
}

void NewDate::set_day(int new_day) {
    // sets the day to a new value between 1-31 (pertains to how many days in current month)
    this->day_numeral = new_day;
}

void NewDate::set_month_string(string new_month) {
    // sets the current month to a new string (only will be called within set month after the month numeral has been set)
    this->month_string = new_month;
}

void NewDate::set_month(int new_month_numeral) {
    // sets the current month to a new value between 1-12 then calls set_month_string() passing the integer value to set the month’s name
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September",
                         "October", "November", "December"};
    this->month_numeral = new_month_numeral;
    set_month_string(months[new_month_numeral - 1]); // Subtracts one to match month index
}

void NewDate::set_year(int new_year) {
    // sets the year to a new value that is passed
    this->year_numeral = new_year;
}

int NewDate::get_day() {
    // returns the day variable
    return this->day_numeral;
}

string NewDate::get_month_string() {
    // returns the month as a string
    return this->month_string;
}

int NewDate::get_month() {
    // returns the month as a numeral
    return this->month_numeral;
}

int NewDate::get_year() {
    // returns the year variable
    return this->year_numeral;
}

int NewDate::establish_day() {
    int est_day;
    cout << "Enter a day (i.e., 25):" << endl;
    cin >> est_day;
    return est_day;
}

string NewDate::establish_month_string() {
    string est_month_string;
    cout << "Enter a month (i.e., March):" << endl;
    cin >> est_month_string;
    return est_month_string;
}

int NewDate::establish_month() {
    int est_month;
    cout << "Enter a month (i.e., 3):" << endl;
    cin >> est_month;
    return est_month;
}

int NewDate::establish_year() {
    int est_year;
    cout << "Enter a year (i.e., 2002):" << endl;
    cin >> est_year;
    return est_year;
}