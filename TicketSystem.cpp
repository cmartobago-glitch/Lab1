#include <iostream>
using namespace std;

int main() {
    char customers[10][50];
    int count = 0;
    int choice;

    do {
        cout << "\nSimple Ticket \n";
        cout << "1. Add Customer\n";
        cout << "2. View Customers\n";
        cout << "3. Serve Customer\n";
        cout << "4. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count < 10) {
                cout << "Name: ";
                cin >> customers[count];
                count++;
                cout << "Added.\n";
            } else {
                cout << "Queue full.\n";
            }
        }
        else if (choice == 2) {
            if (count == 0) {
                cout << "No customers.\n";
            } else {
                for (int i = 0; i < count; i++) {
                    cout << i + 1 << ". " << customers[i] << endl;
                }
            }
        }
        else if (choice == 3) {
            if (count == 0) {
                cout << "Queue empty.\n";
            } else {
                cout << "Serving: " << customers[0] << endl;
                for (int i = 0; i < count - 1; i++) {
                    // shift left
                    for (int j = 0; j < 50; j++) {
                        customers[i][j] = customers[i + 1][j];
                    }
                }
                count--;
            }
        }
        else if (choice == 4) {
            cout << "Goodbye.\n";
        }
        else {
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
