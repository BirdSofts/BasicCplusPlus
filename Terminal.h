
// ===========================================================================
/// <summary>
/// MacOs's terminal screen manipualtions at runtime
/// Terminal.h
/// CplusPlus
/// created by Mehrdad Soleimanimajd on 12.01.2023
/// </summary>
/// <returns></returns>
/// <created>ʆϒʅ, 12.01.2023</created>
/// <changed>ʆϒʅ, 02.07.2023</changed>
// ===========================================================================

#ifndef TERMINAL_H
#define TERMINAL_H

#ifdef __APPLE__


// ANSI escape sequences
// F: forground, B: background, b: bright
//#define F_BLACK(prm)            "\033["+std::to_string(prm)+"m"
#define F_BLACK                 "\033[30m"
#define F_RED                   "\033[31m"
#define F_GREEN                 "\033[32m"
#define F_YELLOW                "\033[33m"
#define F_BLUE                  "\033[34m"
#define F_PURPLE                "\033[35m"
#define F_CYAN                  "\033[36m"
#define F_WHITE                 "\033[37m"
#define F_bBLACK                "\033[90m"
#define F_bRED                  "\033[91m"
#define F_bGREEN                "\033[92m"
#define F_bYELLOW               "\033[93m"
#define F_bBLUE                 "\033[94m"
#define F_bPURPLE               "\033[95m"
#define F_bCYAN                 "\033[96m"
#define F_bWHITE                "\033[97m"

#define B_BLACK                 "\033[40m"
#define B_RED                   "\033[41m"
#define B_GREEN                 "\033[42m"
#define B_YELLOW                "\033[43m"
#define B_BLUE                  "\033[44m"
#define B_PURPLE                "\033[45m"
#define B_CYAN                  "\033[46m"
#define B_WHITE                 "\033[47m"
#define B_bBLACK                "\033[100m"
#define B_bRED                  "\033[101m"
#define B_bGREEN                "\033[102m"
#define B_bYELLOW               "\033[103m"
#define B_bBLUE                 "\033[104m"
#define B_bPURPLE               "\033[105m"
#define B_bCYAN                 "\033[106m"
#define B_bWHITE                "\033[107m"

//// expanded piece of code from wikipedia: https://en.wikipedia.org/wiki/ANSI_escape_code#Colors
//int i, j, n{0};
//
//for (i = 0; i < 11; i++)
//{
//    for (j = 0; j < 10; j++)
//    {
//        n = 10 * i + j;
//        if (n > 108)
//            break;
//        std::string spaceStr{""};
//        if (i == 0)
//        {
//            spaceStr = "  ";
//
//            printf("\033[%dm%s%3d\033[m", n, " ", n);
//            if (i == 0 && j == 0)
//            {
//                std::cout << spaceStr + " "
//                          << "\033[" << std::to_string(n)
//                          << "m" << std::to_string(n) << spaceStr;
//                spaceStr = "";
//            }
//            else
//            {
//                std::cout << spaceStr << "\033[" << std::to_string(n)
//                          << "m" << std::to_string(n) << spaceStr;
//                spaceStr = "";
//            }
//        }
//        else
//        {
//            printf("\033[%dm%s%3d\033[m", n, " ", n);
//            std::cout << "  "
//                      << "\033[" << std::to_string(n) << "m" << std::to_string(n) << " ";
//        }
//    }
//    std::cout << "\n";
//}
//printf("\n\n");

void ConsoleFont (const char32_t* fontName);
void ConsoleFontSize (const coordinateType fontSize);
void ConsoleFontColour (const int16_t fontColour);
void ConsoleScreenPosition (const coordinateType screenPosition);
void ConsoleScreenSize (const coordinateType ColRowCount);
//void ConsoleScreenColour ( const COLORREF BGcolour );
void ConsoleCursorState (const bool CursorVisibility);
void ColourCouter (const std::string strCharacter, const std::string Colour);


#endif

#endif //TERMINAL_H
