#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

void shows_Exception() {
    int y = 50, z = 0;
    int x = y / z;

    cout << "Divided by zero";
}

int main() {
    int value;
    value = atexit(shows_Exception);

    if (value != 0) {
        cout << "atexit() function registration failed";
        exit(1);
    }

    cout << "Registration successful" << endl;

    _getch();
    return 0;
}