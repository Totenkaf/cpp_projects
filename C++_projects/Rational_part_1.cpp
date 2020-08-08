#include <iostream>
#include <sstream>
#include <cmath>
#include <string>
#include <set>
#include <map>
#include <vector>

using namespace std;
class Rational {
public:
    Rational() { //конструктор по умолчанию
        num = 0;
        den = 1;
    }
    Rational(int numerator, int denominator) {
        if (denominator < 0) { //постепенно все проверяем, что пришло на вход
            if (numerator < 0) { //и следим за отрицательностью
                denominator = abs(denominator);
                numerator = abs(numerator);
            }
            else {
                denominator = abs(denominator);
                numerator = (-1) * numerator;
            }
        }
        if (numerator == 0) {
            denominator = 1;
        }
        //обязательно сократим дробь, если можно
        int nod = Nod(abs(numerator), abs(denominator));
        num = numerator / nod;
        den = denominator / nod;
    }
    int Numerator() const { //тут просто возвращаем значения
        return num;
    }
    int Denominator() const { //и тут
        return den;
    }
private:
    int num; //поле числитель
    int den; //и знаменатель
 
    int Nod(int a, int b) { //маленькая функция нахождения делителя, алгоритм Евклида
        while (a > 0 && b > 0) {
            if (a > b) {
                a %= b;
            }
            else {
                b %= a;
            }
        } //while
        return a + b;
    }
};

int main() {
    {
        const Rational r(3, 10);
        if (r.Numerator() != 3 || r.Denominator() != 10) {
            cout << "Rational(3, 10) != 3/10" << endl;
            return 1;
        }
    }

    {
        const Rational r(8, 12);
        if (r.Numerator() != 2 || r.Denominator() != 3) {
            cout << "Rational(8, 12) != 2/3" << endl;
            return 2;
        }
    }

    {
        const Rational r(-4, 6);
        if (r.Numerator() != -2 || r.Denominator() != 3) {
            cout << "Rational(-4, 6) != -2/3" << endl;
            return 3;
        }
    }

    {
        const Rational r(4, -6);
        if (r.Numerator() != -2 || r.Denominator() != 3) {
            cout << "Rational(4, -6) != -2/3" << endl;
            return 3;
        }
    }

    {
        const Rational r(0, 15);
        if (r.Numerator() != 0 || r.Denominator() != 1) {
            cout << "Rational(0, 15) != 0/1" << endl;
            return 4;
        }
    }

    {
        const Rational defaultConstructed;
        if (defaultConstructed.Numerator() != 0 || defaultConstructed.Denominator() != 1) {
            cout << "Rational() != 0/1" << endl;
            return 5;
        }
    }

    cout << "OK" << endl;
    return 0;
}