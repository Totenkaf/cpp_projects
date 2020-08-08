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


bool operator == (Rational a, Rational b) { //перезгузим оператор ==
    if ((a.Numerator() == b.Numerator()) && (a.Denominator() == b.Denominator())) {
        return true;
    }
    else {
        return false;
    }
}
Rational operator + (Rational a, Rational b) { //и тут перегрузим, и дальше тоже
    int p = (a.Numerator() * b.Denominator()) + (b.Numerator() * a.Denominator());
    int q = a.Denominator() * b.Denominator();
    return Rational(p, q);
}
Rational operator - (Rational a, Rational b) {
    int p = (a.Numerator() * b.Denominator()) - (b.Numerator() * a.Denominator());
    int q = a.Denominator() * b.Denominator();
    return Rational(p, q);
}

int main() {
    {
        Rational r1(4, 6);
        Rational r2(2, 3);
        bool equal = r1 == r2;
        if (!equal) {
            cout << "4/6 != 2/3" << endl;
            return 1;
        }
    }

    {
        Rational a(2, 3);
        Rational b(4, 3);
        Rational c = a + b;
        bool equal = c == Rational(2, 1);
        if (!equal) {
            cout << "2/3 + 4/3 != 2" << endl;
            return 2;
        }
    }

    {
        Rational a(5, 7);
        Rational b(2, 9);
        Rational c = a - b;
        bool equal = c == Rational(31, 63);
        if (!equal) {
            cout << "5/7 - 2/9 != 31/63" << endl;
            return 3;
        }
    }

    cout << "OK" << endl;
    return 0;
}