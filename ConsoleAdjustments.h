// ********************************************************************************
/// <summary>
/// the searched and confronted ways for manipulation of Windows's console screen by the code itself in runtime.
/// </summary>
/// <returns></returns>
/// <created>ʆϒʅ,02.10.2018</created>
/// <changed>ʆϒʅ,15.12.2018</changed>
// ********************************************************************************

#pragma once

#define F_BLACK     0x00
#define F_BLUE      0x01
#define F_GREEN     0x02
#define F_CYAN      0x03
#define F_RED       0x04
#define F_PURPLE    0x05
#define F_YELLOW    0x06
#define F_WHITE     0x07
#define F_bBLACK    0x08
#define F_bBLUE     0X09
#define F_bGREEN    0x0a
#define F_bCYAN     0x0b
#define F_bRED      0x0c
#define F_bPURPLE   0x0d
#define F_bYELLOW   0x0e
#define F_bWHITE    0x0f
//  0: Black // 1: Blue  //  2 : Green  //  3 : Cyan  //  4 : Red  //  5 : Purple  //  6 : Yellow  //  7 : White  //  8 : bright black  //  9 : Bright blue  //  10 : Bright green  //  11 : Bright cyan  //  12 : Bright red  //  13 : Bright purple  //  14 : Bright yellow  //  15 : Bright white

void ConsoleFont_SizeColour (COORD, LPCWSTR, WORD);
void ConsoleScreen_SizeColourPosition (COORD, COORD, COLORREF);
void ConsoleCursor_State (bool);
void ColourCout (std::string, WORD);