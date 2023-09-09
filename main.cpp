#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    
    string option;

    double a;
    double b;
    start:
        cout << "Choose what do you want to do: + | - | * | /  " << endl;
        cin >> option; 
        cout << endl;

        if(option == "+"){

            cout << "The result of adding these numbers is: " << adding(takeNum(a), takeNum(b)) << endl;

        } else if (option == "-") {

            cout << "The result of substracting these numbers is: " << substract(takeNum(a), takeNum(b)) << endl;

        } else if (option == "*"){

            cout << "The result of multiplying these numbers is: " << multiply(takeNum(a), takeNum(b)) << endl;

        } else if (option == "/"){

            cout << "The result of dividing these numbers is: " << division(takeNum(a), takeNum(b)) << endl;

        } else{

            cout << "You provided the wrong prompt" << endl;
            goto start;

        }

    return 0;
}

double takeNum(double x){
    cout << "Provide the number: "; cin >> x; cout << endl;
    return x;
}

double adding(double x, double y) {
    double result = x + y;
    return result;
}

double substract(double x, double y) {
    double result = y - x;
    return result;
}

double multiply(double x, double y) {
    double result = x * y;
    return result;
}

double division(double x, double y) {
    double result = y / x;
    return result;
}