

#include <iostream>
#include <string>
// #include "ClassCourse.h"
#include "NewDate.h"
// #include "ReadingTask.h"
// #include "Task.h"
// #include "WritingTask.h"

using namespace std;

int main()
{
    NewDate test_date = NewDate(3, 25, "March", 2002);
    cout << "\tTest Date" << endl;
    cout << "\t\tMonth: " << test_date.get_month() << " (" << test_date.get_month_string() << ")" << endl;
    cout << "\t\tDay: " << test_date.get_day() << endl;
    cout << "\t\tYear: " << test_date.get_year() << endl;
    return 0;
}
