#include<iostream>
using namespace std;
#include "Worker.h"

//Ա����
class Employee :public Worker
{
public:

    //���캯��
    Employee(int id, string name, int dId)
    {
        this->m_Id = id;
        this->m_Name = name;
        this->m_DeptId = dId;
    }


    //��ʾ������Ϣ
    void showInfo()
    {
        cout << "ְ����ţ� " << this->m_Id
             << " \tְ�������� " << this->m_Name
             << " \t��λ��" << this->getDeptName()
             << " \t��λְ����ɾ�����������" << endl;
    }

    //��ȡְ����λ����
    string getDeptName()
    {
        return string("Ա��");
    }
};
