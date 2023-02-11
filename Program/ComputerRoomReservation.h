#include<iostream>
#include "../Object/Identity.h"
#include "../Const/computerRoomFile.h"
#include "../Object/Student.h"
#include "../Object/Teacher.h"
#include "../Object/ComputerManager.h"
#include <fstream>
#include <string>
using namespace std;

class ComputerRoomReservation {
public:
    ComputerRoomReservation();

    int Launch();

    //��ʦ�˵�
    void TeacherMenu(Identity * &teacher);

    //ѧ���˵�
    void studentMenu(Identity * &student);

    //����Ա�˵�
    void managerMenu(Identity * &manager);

    //��¼����
    void LoginIn(string fileName, int type);

};
