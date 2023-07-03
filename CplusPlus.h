
// ===========================================================================
/// <summary>
/// CplusPlus.h
/// CplusPlus
/// created by Mehrdad Soleimanimajd on 16.04.2019
/// </summary>
/// <created>ʆϒʅ, 16.04.2019</created>
/// <changed>ʆϒʅ, 02.07.2023</changed>
// ===========================================================================

#ifndef CPLUSPLUS_H
#define CPLUSPLUS_H


#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN // rarely-used stuff exclusion
#endif // _WIN32


#include <stdio.h> // C language standard input output library
#ifdef _WIN32
#include <tchar.h> // Microsoft string's differences coverage library
#endif

#include <iostream> // C++ standard input and output streams
#include <iomanip> // C++ standard i/o manipulators

#include <string> // C++ standard string class

#include <cwchar> // C++ standard library to work with C wide strings
#ifdef _WIN32
#include <Windows.h> // Windows standard API's
//#else #elif #elif defined #elifndef
#elif defined __APPLE__
#include <termios.h>
#endif

#include <sstream> // C++ standard string streams

#include <thread> // C++ standard threads

#include <cstdlib> // C++ standard general utilities

#include <array> // C++ standard array container

#include <new> // C++ standard to manage dynamic memory

#include <fstream> // C++ standard file streams

typedef struct CoordinateType
{
    short x;
    short y;
} coordinateType;

#endif //CPLUSPLUS_H
