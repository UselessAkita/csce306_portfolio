#include <iostream>
#include <string>

using namespace std;

#ifndef CSCE306_PORTFOLIO_NEWDATE_H
#define CSCE306_PORTFOLIO_NEWDATE_H

class NewDate
{
public: 
    // Constructor when the day, month, and year are given
    NewDate(int, int, string, int);

    int get_day();
    string get_month_string();
    int get_month();
    int get_year();

protected:
    void set_day(int);
    void set_month_string(string);
    void set_month(int);
    void set_year(int);

private:
    int day_numeral;
    string month_string = "Undeveloped";
    int month_numeral;
    int year_numeral;
};

#endif //CSCE306_PORTFOLIO_NEWDATE_H