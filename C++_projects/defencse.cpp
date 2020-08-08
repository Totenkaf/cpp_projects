#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Specialization {
    string value;
    explicit Specialization(string new_value) {
        value = new_value;
    }
};

struct Course {
    string value;
    explicit Course(string new_value) {
        value = new_value;
    }
};

struct Week {
    string value;
    explicit Week(string new_value) {
        value = new_value;
    }
};

struct LectureTitle {
  string specialization;
  string course;
  string week;

  LectureTitle(Specialization new_spec, Course new_course, Week new_week) {
      specialization = new_spec.value;
      course = new_course.value;
      week = new_week.value;
  };
};


void PrintLecture(const LectureTitle& title) {
    cout << title.specialization << " " << title.course << " " << title.week << endl;
}

int main() {
    LectureTitle title(Specialization("C++"), Course("White belt"), Week("4th"));
    PrintLecture(title);
    return 0;
}

