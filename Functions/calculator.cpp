#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Welcome to the calculator" << endl;

    do {
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Enter which operation you want: ";
        int choice; // Change opt to choice, and it should be an integer.
        cin >> choice;

        cout << "Enter number 1 --> ";
        cin >> n1;
        cout << "Enter number 2 --> ";
        cin >> n2;

        switch (choice) { // Use the choice variable for comparison.
            case 1:
                cout << "Addition is : " << n1 + n2 << endl;
                break;
            case 2:
                cout << "Subtraction is : " << n1 - n2 << endl;
                break;
            case 3:
                cout << "Multiplication is : " << n1 * n2 << endl;
                break;
            case 4:
                if (n2 != 0) {
                    cout << "Division is : " << static_cast<double>(n1) / n2 << endl;
                } else {
                    cout << "Cannot divide by zero." << endl;
                }
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    } while (n2 != 0);

    return 0;
}
