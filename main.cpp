// Joshua M Buhr
// CSCE 306; Spring 2022
// Portfolio Assignment - main.cpp


// Code Summary: The main driver file for the project, currently used for testing purposes only

// Change Log:
//  - (4/4/22)
//      - Created a temporary vector to contain NewDate data for easy testing
//      - Created a temporary vector to contain ClassCourse data for east testing

#include <iostream>
#include <string>
#include <vector>
#include "ClassCourse.h"
#include "NewDate.h"
// #include "ReadingTask.h"
// #include "Task.h"
// #include "WritingTask.h"

using namespace std;

int main() {

    // =============================================================================================================

    // NewDate container
    vector<NewDate> dates_container;

    // Object creation for NewDate (testing constructors)
    NewDate test_date1 = NewDate(3, "March", 25, 2002);
    NewDate test_date2 = NewDate(3, "March", 25);
    NewDate test_date3 = NewDate(3, "March");
    NewDate test_date4 = NewDate(3);
    NewDate test_date5 = NewDate();

    // Pushing objects back onto NewDate container
    dates_container.push_back(test_date1);
    dates_container.push_back(test_date2);
    dates_container.push_back(test_date3);
    dates_container.push_back(test_date4);
    dates_container.push_back(test_date5);

    // Testing constructor implementation for NewDate
    for (auto i: dates_container) {
        cout << "\tTest Date" << endl;
        cout << "\t\tMonth: " << i.get_month() << " (" << i.get_month_string() << ")" << endl;
        cout << "\t\tDay: " << i.get_day() << endl;
        cout << "\t\tYear: " << i.get_year() << endl;
    }

    // =============================================================================================================

    // ClassCourse container
    vector<ClassCourse> courses_container;

    // Object creation for ClassCourse (testing constructors)
    ClassCourse test_course1 = ClassCourse("OO Software Development", "CSCE306", "Clint");
    ClassCourse test_course2 = ClassCourse("OO Software Development", "CSCE306");
    ClassCourse test_course3 = ClassCourse("OO Software Development");
    ClassCourse test_course4 = ClassCourse();

    // Pushing objects back onto ClassCourse container
    courses_container.push_back(test_course1);
    courses_container.push_back(test_course2);
    courses_container.push_back(test_course3);
    courses_container.push_back(test_course4);

    // Testing constructor implementation for ClassCourse
    for (auto i: courses_container) {
        cout << "\tTest Date" << endl;
        cout << "\t\tCourse Title: " << i.get_course_prefix() << " - " << i.get_course_name() << endl;
        cout << "\t\tInstructor: " << i.get_instructor_name() << endl;
    }

    // =============================================================================================================

    return 0;
}
