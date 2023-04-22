#ifndef _STUDENT_H_
#define _STUDENT_H_

#include<string>
using namespace std;

class CStudent {
private:
    string m_name;
    int m_age;
    float m_score;
public:
    CStudent(string name, int age, float score);
    void show();
};

#endif