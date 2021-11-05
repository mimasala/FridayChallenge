cmake_minimum_required(VERSION 3.20)
project(Aufgaben C)

set(CMAKE_C_STANDARD 99)

add_executable(Aufgaben main.c utils.h utils.c notenrechner.c rick_roll.c rick_roll.h)
