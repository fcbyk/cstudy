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

    //教师菜单
    void TeacherMenu(Identity * &teacher);

    //学生菜单
    void studentMenu(Identity * &student);

    //管理员菜单
    void managerMenu(Identity * &manager);

    //登录功能
    void LoginIn(string fileName, int type);

};
