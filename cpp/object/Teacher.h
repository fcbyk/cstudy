#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Identity.h"
using namespace std;

class Teacher :public Identity{
public:
    int m_EmpId; //��ʦ���

    Teacher();  //Ĭ�Ϲ���
    //�вι��� (ְ����ţ�����������)
    Teacher(int empId, string name, string pwd);
    virtual void operMenu(); //�˵�����
    void showAllOrder();    //�鿴����ԤԼ
    void validOrder();      //���ԤԼ
};