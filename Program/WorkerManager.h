#pragma once
#include<iostream>
#include <fstream>
#include "../Object/Worker.h"
#include "../Object/Employee.cpp"
#include "../Object/Manager.cpp"
#include "../Object/Boss.cpp"
#define  FILENAME "empFile.txt"
using namespace std;

class WorkerManager
{
public:

    //���캯��
    WorkerManager();

    void WorkerManagerLaunch();

    void Show_Menu();

    void exitSystem();

    //��¼�ļ��е���������
    int m_EmpNum;

    //Ա�������ָ��
    Worker ** m_EmpArray;

    //����ְ��
    void Add_Emp();

    //�����ļ�
    void save();

    //��־�ļ��Ƿ�Ϊ��
    bool m_FileIsEmpty;

    //ͳ������
    int get_EmpNum();

    //��ʼ��Ա��
    void init_Emp();

    //��ʾְ��
    void Show_Emp();

    //ɾ��ְ��
    void Del_Emp();

    //����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
    int IsExist(int id);

    //�޸�ְ��
    void Mod_Emp();

    //����ְ��
    void Find_Emp();

    //����ְ��
    void Sort_Emp();

    //����ļ�
    void Clean_File();

    //��������
    ~WorkerManager();

};

