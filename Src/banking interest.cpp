/ C++ program to calculate Simple and Compound Interest for a given principal, rate, and time
#include <iostream>
#include <cmath> // for pow function
using namespace std;

int main() {
    int choice;
    double principal, rate, time, interest;

    do {
        cout << "\n===== Bank Interest Calculator =====\n";
        cout << "1. Simple Interest\n";
        cout << "2. Compound Interest\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if(choice == 1 || choice == 2) {
            cout << "Enter Principal Amount (₹): ";
            cin >> principal;
            cout << "Enter Rate of Interest (% per year): ";
            cin >> rate;
            cout << "Enter Time (in years): ";
            cin >> time;
        }

        switch(choice) {
            case 1: // Simple Interest
                interest = (principal * rate * time) / 100;
                cout << "Simple Interest = ₹" << interest << endl;
                cout << "Total Amount = ₹" << (principal + interest) << endl;
                break;

            case 2: // Compound Interest
                interest = principal * pow((1 + rate/100), time) - principal;
                cout << "Compound Interest = ₹" << interest << endl;
                cout << "Total Amount = ₹" << (principal + interest) << endl;
                break;

            case 3:
                cout << "Exiting... Thank You!\n";
                break;

            default:
                cout << "Invalid Choice! Try Again.\n";
        }

    } while(choice != 3);

    return 0;
}
