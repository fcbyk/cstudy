#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Identity.h"
using namespace std;

class Teacher :public Identity
{
public:

    //Ĭ�Ϲ���
    Teacher();

    //�вι��� (ְ����ţ�����������)
    Teacher(int empId, string name, string pwd);

    //�˵�����
    virtual void operMenu();

    //�鿴����ԤԼ
    void showAllOrder();

    //���ԤԼ
    void validOrder();

    int m_EmpId; //��ʦ���

};