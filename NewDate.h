#include <iostream>
#include <string>

using namespace std;

class NewDate
{
public:
    // Constructor when the day, month, and year are given
    NewDate(int, int, int);

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
    string month_string;
    int month_numeral;
    int year_numeral;
};