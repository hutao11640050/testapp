// #pragma warning( disable : 4996)
// #define _CRT_SECURE_NO_WARNINGS
//#pragma once
//#define _CRTDBG_MAP_ALLOC
#include <iostream>
#include <string>
#include<vector>
#include<algorithm>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<memory>

using namespace std;
//开闭原则
//对扩展开放
//对修改关闭，增加功能是增加代码实现，而不是修改源代码。
//迪米特法则： 又叫最少知识原则

class AbstractCaculator {
public:
    virtual int  getResult() = 0;
    virtual void setOperatorNumber(int a, int b) = 0;

};
//加法计算器

class PlusCaculator : public AbstractCaculator
{
public:
    virtual void setOperatorNumber(int a, int b)
    {
        this->mA = a;
        this->mB = b;
    }
    virtual int getResult() {
        return mA + mB;
    }
public:
    int mA;
    int mB;

};

class SubCaculator : public AbstractCaculator
{
public:
    virtual void setOperatorNumber(int a, int b)
    {
        this->mA = a;
        this->mB = b;
    }
    virtual int getResult() {
        return mA - mB;
    }
public:
    int mA;
    int mB;

};

int main()
{
    AbstractCaculator* cal = new PlusCaculator;
    cal->setOperatorNumber(10, 20);
    cout << "ret: " << cal->getResult() << endl;
   
    system("pause");
    return 0;
}
