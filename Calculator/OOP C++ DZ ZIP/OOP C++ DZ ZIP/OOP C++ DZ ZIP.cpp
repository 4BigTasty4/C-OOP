#include <iostream>

using namespace std;

//N1 Создать класс калькулятор, который будет хранить следующие методы :
//
//+-/ *
//воззведение в степень
//процент от числа
//факториал числа

class Calculator {

public:

    int firsNumber;
    int secondNumber;
    int result;


    int Summ(int firsNumber, int secondNumber) {

        result = firsNumber + secondNumber;

        return result;

    }

    int Minn(int firsNumber, int secondNumber) {

        result = firsNumber - secondNumber;

        return result;

    }

    int Multiply(int firsNumber, int secondNumber) {

        result = firsNumber * secondNumber;

        return result;

    }

    int Division(int firsNumber, int secondNumber) {

        result = firsNumber / secondNumber;

        return result;

    }

    int Exponentiation(int firsNumber, int secondNumber) {

        result = 1;

        for (int i = 0; i < secondNumber; i++)
        {
            result *= firsNumber;
        }

        return result;

    }

    int PercentageoftheNumber(int firsNumber, int secondNumber) {

        result = (firsNumber * 100) / secondNumber;

        return result;

    }

    int Factorial(int firsNumber) {

        result = 1;

        for (int i = 1; i <= firsNumber; i++)
        {
            result *= i;
        }

        return result;

    }

};

int main()
{

    Calculator number = Calculator();

    cout << "Hello User" << endl;

    cout << "Unput Number 1: ";
    cin >> number.firsNumber;

    cout << "Unput Number 2: ";
    cin >> number.secondNumber;

    cout << endl;

    cout << "Summ: ";
    cout << number.Summ(number.firsNumber, number.secondNumber) << endl;

    cout << "Minn: ";
    cout << number.Minn(number.firsNumber, number.secondNumber) << endl;

    cout << "Multiply: ";
    cout << number.Multiply(number.firsNumber, number.secondNumber) << endl;

    cout << "Division: ";
    cout << number.Division(number.firsNumber, number.secondNumber) << endl;

    cout << "Exponentiation: ";
    cout << number.Exponentiation(number.firsNumber, number.secondNumber) << endl;

    cout << "Percentage of the Number: ";
    cout << number.PercentageoftheNumber(number.firsNumber, number.secondNumber) << "%" << endl;

    cout << "Factorial: ";
    cout << number.Factorial(number.firsNumber) << endl;

}