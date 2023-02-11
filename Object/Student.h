#pragma once
#include<iostream>
#include<vector>
#include "Identity.h"
#include "ComputerRoom.h"
#include <fstream>
#include "../Const/computerRoomFile.h"
#include "OrderFile.h"
using namespace std;

//ѧ����
class Student :public Identity
{
public:
    //Ĭ�Ϲ���
    Student();

    //�вι���(ѧ�š�����������)
    Student(int id, string name, string pwd);

    //�˵�����
    virtual void operMenu();

    //����ԤԼ
    void applyOrder();

    //�鿴�ҵ�ԤԼ
    void showMyOrder();

    //�鿴����ԤԼ
    void showAllOrder();

    //ȡ��ԤԼ
    void cancelOrder();

    //ѧ��ѧ��
    int m_Id;

    //��������
    vector<ComputerRoom> vCom;
};

