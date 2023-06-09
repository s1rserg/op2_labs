#ifndef MY_MODULE_H
#define MY_MODULE_H

#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Student {
    string name; // ϲ� ��������
    string group; // ����� �����
    string date_of_birth; // ���� ����������

public:
    Student(string &name1, string &group1, string &date_of_birth1) {
        name = name1;
        group = group1;
        date_of_birth = date_of_birth1;
    }

    Student() {
        name = "";
        group = "";
        date_of_birth = "";
    }

    void setName(string &name1) {
        name = name1;
    }

    void setGroup(string &group1) {
        group = group1;
    }

    void setDate_of_birth(string &date1) {
        date_of_birth = date1;
    }

    string getName() {
        return name;
    }

    string getGroup() {
        return group;
    }

    string getDate_of_birth() {
        return date_of_birth;
    }

    void input(int counter);

    void output();

    void findOldestStudent(Student* students, int count);
};

bool isValidDate(string &date);

#endif //MY_MODULE_H
