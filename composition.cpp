
#include <iostream>
#include <string>
#include "MobilePhone.h"


int main() {
    MobilePhone phone("Nokia");
    string q;
    while (true) {
        if (phone._isPhoneOn()) {
            gif().standOn();
        }
        else { gif().standOff(); }
        cout << "\n\t\t\t\t\t Power on ---- 1\n";
        cout << "\t\t\t\t\t Power off --- 2\n";
        cout << "\t\t\t\t\t Make a snap - 3\n";
        cout << "\t\t\t\t\t Play game --- 4\n";
        cout << "\t\t\t\t\t Exit -------- e\n";
        cin >> q;
        if (q == "e" || q == "E") {
            return 0;
        }
        else if (q == "1") {
            if (phone._isPhoneOn()) {
                cout << "\t\t\t\t\t Already on\n";
                Sleep(600);
                continue;
            }
            phone.powerOn();
        }
        else if (q == "2") {
            if (!phone._isPhoneOn()) {
                cout << "\t\t\t\t\t Already off\n";
                Sleep(600);
                continue;
            }
            phone.powerOff();
        }
        else if (q == "3") {
            if (!phone._isPhoneOn()) {
                cout << "\t\t\t\t\t Phone is off\n";
                Sleep(600);
                continue;
            }
            phone.makephoto();
        }
        else if (q == "4") {
            if (!phone._isPhoneOn()) {
                cout << "\t\t\t\t\t Phone is off\n";
                Sleep(600);
                continue;
            }
            phone.playGame();
        }

    }

    return 0;
}

