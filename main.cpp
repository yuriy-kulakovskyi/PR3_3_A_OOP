#include "./classes/PublicFraction.h"
#include "./classes/PrivateFraction.h"
#include <iostream>

using namespace std;

int main() {

    cout << "\n=====  PublicFraction =====" << endl;
    cout << "Input first value:" << endl;
    PublicFraction a;
    cin >> a;
    cout << "Input second value:" << endl;
    PublicFraction b;
    cin >> b;
    cout << "Entered first: " << a << endl;
    cout << "Entered second: " << b << endl;

    PublicFraction c = a + b;
    cout << "(a + b): " << c << endl;

    PublicFraction d = a * b;
    cout << "(a * b): " << d << endl;

    cout << "\nIncrements/decrements:" << endl;
    cout << "Entered first: " << a << endl;
    PublicFraction temp;
    temp = ++a;
    cout << "temp = ++a: " << endl;
    cout << "a = " << a << ", temp = " << temp << endl;
    temp = --a;
    cout << "temp = --a: " << endl;
    cout << "a = " << a << ", temp = " << temp << endl;
    temp = a++;
    cout << "temp = a++: " << endl;
    cout << "a = " << a << ", temp = " << temp << endl;
    temp = a--;
    cout << "temp = a--: " << endl;
    cout << "a = " << a << ", temp = " << temp << endl;

    cout << "\n===== PrivateFraction =====" << endl;
    cout << "\nInput first value: " << endl;
    PrivateFraction pa;
    cin >> pa;
    cout << "Input second value:" << endl;
    PrivateFraction pb;
    cin >> pb;
    cout << "Entered first: " << pa << endl;
    cout << "Entered second: " << pb << endl;

    PrivateFraction pc = pa + pb;
    cout << "(pa + pb): " << pc << endl;

    PrivateFraction pd = pa * pb;
    cout << "(pa * pb): " << pd << endl;

    cout << "\nIncrements/decrements:" << endl;
    cout << "Entered first: " << pa << endl;
    PrivateFraction ptemp;
    ptemp = ++pa;
    cout << "ptemp = ++pa: " << endl;
    cout << "pa = " << pa << ", ptemp = " << ptemp << endl;
    ptemp = --pa;
    cout << "ptemp = --pa: " << endl;
    cout << "pa = " << pa << ", ptemp = " << ptemp << endl;
    ptemp = pa++;
    cout << "ptemp = pa++: " << endl;
    cout << "pa = " << pa << ", ptemp = " << ptemp << endl;
    ptemp = pa--;
    cout << "ptemp = pa--: " << endl;
    cout << "pa = " << pa << ", ptemp = " << ptemp << endl;

    return 0;
}
