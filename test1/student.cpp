
#include "student.h"
#include <iostream>

//采用初始化列表
CStudent::CStudent(string name, int age, float score) : m_name(name), m_age(age), m_score(score) {
    //TODO:
}
void CStudent::show() {
    cout << m_name << "的年龄是" << m_age << "，成绩是" << m_score << endl;
    cout << "Hello, world!" << "\n";
}
