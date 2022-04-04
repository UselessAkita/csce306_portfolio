// Joshua M Buhr
// CSCE 306; Spring 2022
// Portfolio Assignment - main.cpp


// Code Summary:

#include <iostream>
#include <string>
#include "NewDate.h"
#include "ClassCourse.h"

using namespace std;

class Task {
public:
protected:
private:
    string task_name;
    NewDate assigned_date;
    NewDate due_date;
    ClassCourse course_assigned;
    string assignment_description;
    int task_priority;
};