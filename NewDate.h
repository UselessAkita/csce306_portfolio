// Joshua M Buhr
// CSCE 306; Spring 2022
// Portfolio Assignment - NewDate.h


// Code Summary: A class file that allows for the creation of a date containing a month, day, and year

// Change Log:
//  - (4/4/22) Initialized overloaded constructors and initialized establish functions

#include <iostream>
#include <string>

using namespace std;

#ifndef CSCE306_PORTFOLIO_NEWDATE_H
#define CSCE306_PORTFOLIO_NEWDATE_H

class NewDate {
public:

    // Empty Constructor when no arguments are given
    NewDate();

    // Constructor when only the month is given
    NewDate(int);

    // Constructor when only the month and month string were given
    NewDate(int, string);

    // Constructor when only the month, month string, and day are given
    NewDate(int, string, int);

    // Constructor when the month, month string, day, and the year are given
    NewDate(int, string, int, int);

    int get_day();

    string get_month_string();

    int get_month();

    int get_year();

protected:
    void set_day(int);

    void set_month_string(string);

    void set_month(int);

    void set_year(int);

    int establish_day();

    string establish_month_string();

    int establish_month();

    int establish_year();

private:
    int day_numeral;
    string month_string = "Undeveloped";
    int month_numeral;
    int year_numeral;
};

#endif //CSCE306_PORTFOLIO_NEWDATE_H