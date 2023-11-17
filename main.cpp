#include <iostream>
#include <conio.h>
#include <windows.h>
#include "GitCalc.h"

using namespace std;


int main() {
    double num1, num2;
    char operation;
    bool running = true;
    char key;
    COORD c;
    c.X = 40;
    c.Y = 12;
 
    SetConsoleCursorPosition(
        GetStdHandle(STD_OUTPUT_HANDLE), c);
 
    printf("Hello, Welcome to GitCalc - Simple c++ calculator");
    getch();
    system("cls");
    while (running) {
        cout << "Enter the operation (+, -, *, /, %) \n or press 'q' to quit: ";
        cin >> operation;

        if (operation == 'q') {
            running = false;
            break;
        }

        cout << "Please, enter two numbers: ";
        cin >> num1 >> num2;

        switch (operation) {
            case '+':
                cout << "Result: " << GitCalc::add(num1, num2) << endl;
                break;	
            case '%':
                cout << "Result: " << GitCalc::mod((int)num1, (int)num2) << endl;
                break;				
	    case '-':
	        cout << "Result: " << GitCalc::sub(num1, num2) << endl;
		break;
		/*
		*
		*
		*/
            default:
                cout << "Invalid operation!" << endl;
        }
    }
    cout << "\nPress any key to continue.... ";
    key = getch();
    return 0;
}

