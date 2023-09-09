#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    
    string option;

    int a;
    int b;
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

int takeNum(int x){
    cout << "Provide the number: "; cin >> x; cout << endl;
    return x;
}

int adding(int x, int y) {
    int result = x + y;
    return result;
}

int substract(int x, int y) {
    int result = x - y;
    return result;
}

int multiply(int x, int y) {
    int result = x * y;
    return result;
}

int division(int x, int y) {
    int result = x / y;
    return result;
}