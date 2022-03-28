#include <iostream>
#include <string>

using namespace std;

class NewDate
{
public:
    NewDate(int month, int day, int year)
    {
        set_month(month);
        set_day(day);
        set_year(year);
    }

    void set_day(int new_day)
    {
        // sets the day to a new value between 1-31 (pertains to how many days in current month)
        day_numeral = new_day;
    }
    void set_month_string(string new_month)
    {
        // sets the current month to a new string (only will be called within set month after the month numeral has been set)
        month_string = new_month;
    }
    void set_month(int new_month_numeral)
    {
        // sets the current month to a new value between 1-12 then calls set_month_string() passing the integer value to set the month’s name
        string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
        month_numeral = new_month_numeral;
        set_month_string(months[new_month_numeral]);
    }
    void set_year(int new_year)
    {
        // sets the year to a new value that is passed
        year_numeral = new_year;
    }
    int get_day()
    {
        // returns the day variable
        return day_numeral;
    }
    string get_month_string()
    {
        // returns the month as a string
        return month_string;
    }
    int get_month()
    {
        // returns the month as a numeral
        return month_numeral;
    }
    int get_year()
    {
        // returns the year variable
        return year_numeral;
    }

private:
    int day_numeral;
    string month_string;
    int month_numeral;
    int year_numeral;
};