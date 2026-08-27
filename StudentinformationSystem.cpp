#include <iostream>
using namespace std;

int main() {
    int studentid;

        cout << "Welcome to my student information\n";
        cout << "Before the information shows, please enter the correct student ID: ";
        cin >> studentid;

        if (studentid == 425001172) {
         cout << "\nName: Chevron James B. Martobago\n";
         cout << "Age: 19\n";
         cout << "Hobbies: playing video games, video editing, creating games\n";
         cout << "Course: BSIT\n";
         cout << "Year & Block: 2.4\n";
         cout << "Personality: Kind, Friendly, and shy (sometimes)";
        }
        else {
         cout << "Wrong student number!";

        }
    return 0;
}
