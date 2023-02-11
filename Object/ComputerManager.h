#pragma once
#include<iostream>
#include<vector>
#include <fstream>
#include <algorithm>
#include "Identity.h"
#include "Student.h"
#include "Teacher.h"
#include "ComputerRoom.h"
#include "../Const/computerRoomFile.h"
using namespace std;

class ComputerManager :public Identity
{
public:

    //Ĭ�Ϲ���
    ComputerManager();

    //�вι���  ����Ա����������
    ComputerManager(string name, string pwd);

    //ѡ��˵�
    virtual void operMenu();

    //����˺�
    void addPerson();

    //�鿴�˺�
    void showPerson();

    //�鿴������Ϣ
    void showComputer();

    //���ԤԼ��¼
    void cleanFile();

    //��ʼ������
    void initVector();

    //ѧ������
    vector<Student> vStu;

    //��ʦ����
    vector<Teacher> vTea;

    //����ظ� ����:(����id����������) ����ֵ��(true �������ظ���false����û���ظ�)
    bool checkRepeat(int id, int type);

    //��������
    vector<ComputerRoom> vCom;
};
