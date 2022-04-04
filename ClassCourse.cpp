// Joshua M Buhr
// CSCE 306; Spring 2022
// Portfolio Assignment - ClassCourse.cpp

// Code Summary: Driver file for ClassCourse.h

// Change Log:
//  - (4/4/22)
//      - Declared overloaded constructors and declared establish functions

#include "ClassCourse.h"

// Empty Constructor when no arguments are given
ClassCourse::ClassCourse() {
    set_course_name(establish_course_name());
    set_course_prefix(establish_course_prefix());
    set_instructor_name(establish_instructor_name());
}

// Constructor when only the course name is given
ClassCourse::ClassCourse(string passed_course_name) {
    set_course_name(passed_course_name);
    set_course_prefix(establish_course_prefix());
    set_instructor_name(establish_instructor_name());
}

// Constructor when only the course name and course prefix are given
ClassCourse::ClassCourse(string passed_course_name, string passed_course_prefix) {
    set_course_name(passed_course_name);
    set_course_prefix(passed_course_prefix);
    set_instructor_name(establish_instructor_name());
}

// Constructor when all arguments are given
ClassCourse::ClassCourse(string passed_course_name, string passed_course_prefix, string passed_instructor_name) {
    set_course_name(passed_course_name);
    set_course_prefix(passed_course_prefix);
    set_instructor_name(passed_instructor_name);
}

string ClassCourse::get_course_name() {
    return this->course_name;
}

string ClassCourse::get_course_prefix() {
    return this->course_prefix;
}

string ClassCourse::get_instructor_name() {
    return this->instructor_name;
}

void ClassCourse::set_course_name(string new_course_name) {
    this->course_name = new_course_name;
}

void ClassCourse::set_course_prefix(string new_course_prefix) {
    this->course_prefix = new_course_prefix;
}

void ClassCourse::set_instructor_name(string new_instructor_name) {
    this->instructor_name = new_instructor_name;
}

string ClassCourse::establish_course_name() {
    string est_course_name;
    cout << "Enter a course name (i.e., OO Software Development):" << endl;
    getline(cin, est_course_name);  // Takes the full string(including spaces)
    return est_course_name;
}

string ClassCourse::establish_course_prefix() {
    string est_course_prefix;
    cout << "Enter a course prefix (i.e., CSCE306):" << endl;
    getline(cin, est_course_prefix);
    return est_course_prefix;
}

string ClassCourse::establish_instructor_name() {
    string est_instructor_name;
    cout << "Enter your instructor's name (i.e., Clint):" << endl;
    getline(cin, est_instructor_name);
    return est_instructor_name;
}