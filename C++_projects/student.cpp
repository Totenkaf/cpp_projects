#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

struct Student {

    // имя и фамилия студента
    string firstname;
    string lastname;

    //день, месяц и год рождения
    int day;
    int month;
    int year;
};

int main () {
    int N;
    cin >> N;

    vector<Student> student;
    string fisrtname, lastname;
    int day, month, year;

    for (int i = 0; i < N; ++i) {
        cin >> fisrtname >> lastname >> day >> month >> year;               //считываем из строчки данные и раскидываем их по переменным
        student.push_back(Student{fisrtname, lastname, day, month, year});
    }

    int M;
    cin >> M;

    string query;               //переменная запроса
    int student_number;         //номер студента

    for (int j = 0; j < M; ++j) {
        cin >> query >> student_number;
        --student_number;       //уменьшаем номер студента на единицу, так как в векторе нумерация начинается с нуля, и 1 студент будет на 0 позиции

        if (query == "name" && student_number >= 0 && student_number < N) {
            cout << student[student_number].firstname << " "
            << student[student_number].lastname << endl;
        }

        else if (query == "date" && student_number >= 0 && student_number < N) {
            cout << student[student_number].day << "."
            << student[student_number].month << "."
            << student[student_number].year << endl;
        }

        else {
            cout << "bad request" << endl;
        }
    }
    return 0;
}
