cmake_minimum_required(VERSION 3.19)
project(c_study C)

set(CMAKE_C_STANDARD 99)

add_executable(c_study main.c grammar/questions.c grammar/questions.h grammar/notes.c grammar/notes.h)