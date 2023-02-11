cmake_minimum_required(VERSION 3.19)
project(cpp_study)

set(CMAKE_CXX_STANDARD 14)

add_executable(cpp_study main.cpp Object/Circle.cpp Object/Student.cpp Program/AddressBook.cpp Program/AddressBook.h Object/Worker.h Object/Manager.cpp Object/Employee.cpp Object/Boss.cpp Program/WorkerManager.cpp Program/WorkerManager.h Object/Speaker.h Program/SpeechManager.cpp Program/SpeechManager.h)