
#include "student.h"
#include <iostream>

//���ó�ʼ���б�
CStudent::CStudent(string name, int age, float score) : m_name(name), m_age(age), m_score(score) {
    //TODO:
}
void CStudent::show() {
    cout << m_name << "��������" << m_age << "���ɼ���" << m_score << endl;
    cout << "Hello, world!" << "\n";
}
