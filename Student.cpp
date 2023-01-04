#include "Student.h"
#include <iostream>
#include <iostream>
#include <sstream>


Student::Student() : age(1),
                           first_name(
                                   "firstName"),
                           last_name(
                                   "lastName"),
                           standard(
                                   0) {}

int Student::get_age() const {
    return age;
}

const std::string &Student::get_first_name() const {
    return first_name;
}

const std::string &Student::get_last_name() const {
    return last_name;
}

int Student::get_height() const {
    return standard;
}

void Student::set_age(int age_st) {
    Student::age = age_st;
}

void Student::set_first_name(const std::string &firstName) {
    first_name = firstName;
}

void Student::set_last_name(const std::string &lastName) {
    last_name = lastName;
}

void Student::set_height(int height) {
    Student::standard = height;
}

std::ostream &operator<<(std::ostream &os, const Student &student) {
    os << student.age << "," << student.first_name << "," << student.last_name
       << "," << student.standard;
    return os;
}
