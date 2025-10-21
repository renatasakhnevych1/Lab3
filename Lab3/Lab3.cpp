#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    setlocale(LC_CTYPE, "polish");

    //ZAD 1
    /*int a, b;
    cout << "Podaj pierwszą liczbę"<<endl;
    cin >> a;
    cout << "Podaj drugą liczbę"<<endl;
    cin >> b;
    if (a == b) {
        cout << "Liczby są równe"<<endl;
    }
    else if (a < b) {
        cout << "Druga liczba jest większa" << endl;
    }
    else {
        cout << "Pierwsza liczba jest większa" << endl;
    }*/


    //ZAD 2
    /*int a, b;
    cout << "Podaj pierwszą liczbę" << endl;
    cin >> a;
    cout << "Podaj drugą liczbę" << endl;
    cin >> b;
    if (a == b) {
        cout << "Liczby są równe" << endl;
        if (a < b) {
            cout << "Druga liczba jest większa" << endl;
        }
    }
    else {
        cout << "Pierwsza liczba jest większa" << endl;
    }*/

    //ZAD 3
    /*double r;
    cout << "Podaj r:" << endl;
    cin >> r;
    if (0.7 <= r and r <= 1) {
        cout << "bardzo silna korelacja dodatnia" << endl;
    }
    else if (r >= 0.5) {
        cout << "silna korelacja dodatnia" << endl;
    }
    else if (r >= 0.3) {
        cout << "umiarkowana korelacja dodatnia" << endl;
    }
    else if (r >= 0.2) {
        cout << "słaba korelacja dodatnia" << endl;
    }
    else if (r >= 0) {
        cout << "brak korelacji" << endl;
    }*/


    //ZAD 4
    /*float a, b;
    char opcja;
    float wynik;

    cout << "Podaj pierwszą liczbę: " << endl;
    cin >> a;
    cout << "Podaj drugą liczbę: " << endl;
    cin >> b;
    cout << "Wybierz działanie (’+’ lub ’-’ lub ’*’ lub ’/’):" << endl;
    cin >> opcja;
    switch (opcja) {
    case '+':
        wynik = a + b;
        cout << a << " + " << b<<" = "<< wynik;
        break;
    case '-':
        wynik = a - b;
        cout << a << " - " << b << " = " << wynik;
        break;
    case '*':
        wynik = a * b;
        cout << a << " * " << b << " = " << wynik;
        break;
    case '/':
        if (b==0) {
            cout << "Nie można dzielić przez 0!" << endl;
            break;
        }
        else {
            wynik = a / b;
            cout << a << " / " << b << " = " << wynik;
            break;
        }
    default:
        cout << "Podano inna opcje niż + , -, *, lub /" << endl;
    }
    wynik = 0;*/


    //ZAD 5

    /*while (1) {
        cout << "Hello";
    }*/


    //ZAD 6


   /* float a, b;
    char opcja;
    float wynik;
    char opcja2 = 't';

    while (opcja2 == 't') {
        cout << "Podaj pierwszą liczbę: " << endl;
        cin >> a;
        cout << "Podaj drugą liczbę: " << endl;
        cin >> b;
        cout << "Wybierz działanie (’+’ lub ’-’ lub ’*’ lub ’/’):" << endl;
        cin >> opcja;
        switch (opcja) {
        case '+':
            wynik = a + b;
            cout << a << " + " << b << " = " << wynik;
            break;
        case '-':
            wynik = a - b;
            cout << a << " - " << b << " = " << wynik;
            break;
        case '*':
            wynik = a * b;
            cout << a << " * " << b << " = " << wynik;
            break;
        case '/':
            if (b == 0) {
                cout << "Nie można dzielić przez 0!" << endl;
                break;
            }
            else {
                wynik = a / b;
                cout << a << " / " << b << " = " << wynik;
                break;
            }
        default:
            cout << "Podano inna opcje niż + , -, *, lub /" << endl;
        }
        wynik = 0;
        cout << "\n Czy chcesz kontynuować ('t','n') ?" << endl;
        cin >> opcja2;
    }*/




        //ZAD 7
    /*while (1) {
        for (int i = 0; i <= 200; i++) {
            if (i % 2 != 0) {
                cout << i << ", ";
            }
        }
        break;
    }*/

    
//ZAD 8
//int n;
//cout << "Podaj naturalną liczbę dodatnią :" << endl;
//cin >> n;
//for (int i = 2; i <= sqrt(n); i++) {
//    if (n % i == 0) {
//        cout << "Pierwszy dzilnik dla n to: " << i << endl;
//    }
//    else {
//        cout << "Nie ma dzielnika z tego przedziału dla tej liczby "<< endl;
//    }
//}


}
