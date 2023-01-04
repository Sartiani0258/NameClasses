#ifndef INC_02_CLASS_STUDENT_H
#define INC_02_CLASS_STUDENT_H

#include <iostream>
#include <sstream>
/**
 * Vytvoří třídu Student
 */
class Student {
private:
    int age;
    std::string first_name;
    std::string last_name;
    int standard;
public:
    Student();

    int get_age() const;

    void set_age(int age);

    void set_first_name(const std::string &firstName);

    void set_last_name(const std::string &lastName);

    void set_height(int height);

    const std::string &get_first_name() const;

    const std::string &get_last_name() const;

    int get_height() const;

    friend std::ostream &operator<<(std::ostream &os, const Student &student);
};


#endif //INC_02_CLASS_Student_H
