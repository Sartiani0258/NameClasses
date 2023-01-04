#include <iostream>
#include "Student.h"

using namespace std;


int main() {
    int age, height;
    string first_name, last_name;
    cout << "Zadej vek jmeno prijmeni a vysku: ";
    cin >> age >> first_name >> last_name >> height;

    Student st;
    st.set_age(age);
    st.set_height(height);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_height() << "\n";
    cout << "\n";
    cout << st << endl;
    return 0;
}
