// Joshua M Buhr
// CSCE 306; Spring 2022
// Portfolio Assignment - ClassCourse.cpp

// Code Summary: A class file that allows for the creation of a course including the name, prefix, and instructor's
// name.

// Change Log:
//  - (4/4/22)
//      - Initialized overloaded constructors and initialized establish functions

#include <iostream>
#include <string>

using namespace std;

class ClassCourse {
public:

    // Empty Constructor when no arguments are given
    ClassCourse();

    // Constructor when only the course name is given
    ClassCourse(string);

    // Constructor when only the course name and course prefix are given
    ClassCourse(string, string);

    // Constructor when all arguments are given
    ClassCourse(string, string, string);

    string get_course_name();

    string get_course_prefix();

    string get_instructor_name();

protected:
    void set_course_name(string);

    void set_course_prefix(string);

    void set_instructor_name(string);

    string establish_course_name();

    string establish_course_prefix();

    string establish_instructor_name();

private:
    string course_name;
    string course_prefix;
    string instructor_name;
};