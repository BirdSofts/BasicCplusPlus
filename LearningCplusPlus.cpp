// --------------------------------------------------------------------------------
/// <summary>
/// Learning C++
/// --Programming needs patience and practical practice--
/// </summary>
/// <created>ʆϒʅ,11.04.2018</created>
/// <changed>ʆϒʅ,12.01.2019</changed>
// --------------------------------------------------------------------------------

// The reference used for this tutorial: http://www.cplusplus.com/doc/
// C++ reference: http://www.cplusplus.com/reference/

#include "pch.h"
#include "ConsoleAdjustments.h"
#include "_1_Introduction.h"
#include "_2_BasicsOfCplusPlus.h"
#include "_3_ProgramStructure.h"
#include "_4_CompoundDataTypes.h"
#include "_5_Classes.h"


// a C++ program always start from the main function, no matter the order of definitions.
// the main function is the only function which called automatically.
// other functions can be executed if they are called directly or indirectly from main function.

int main ()
{
    //using namespace std; // make writing code simple but by not using it name collision can be avoided.
#pragma region ConsoleAdjustments
    // font
    COORD fontS { 10,20 };
    ConsoleFont ( L"Consolas" );
    ConsoleFontSize ( fontS );
    ConsoleFontColour ( F_bWHITE );
    // screen
    COORD leftANDtop { 15,15 };
    COORD widthANDheight { 110,32 };
    COLORREF backColour { RGB ( 100,100,100 ) };
    ConsoleScreenPosition ( leftANDtop );
    ConsoleScreenSize ( widthANDheight );
    ConsoleScreenColour ( backColour );

    //// cursor
    //ConsoleCursorState ( false );

    //// codec
    //UINT consoleOutputCPstorage;
    //consoleOutputCPstorage = GetConsoleOutputCP ();
    //SetConsoleOutputCP ( CP_UTF8 );

    //// back to default codec
    //SetConsoleOutputCP ( consoleOutputCPstorage );
#pragma endregion

    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '#'; std::cout << '\n';
        std::cout << "\n\n..........................:: Introduction ::..........................\n\n";
        CplusPlusLanguage ();
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '#'; std::cout << '\n';
        std::cout << "\n\n..........................:: BASICS OF C++ ::..........................\n\n";
        HelloWorld ();
        VariablesAndTypes ();
        Constants ();
        Operators ();
        BasicInputOutput ();
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '#'; std::cout << '\n';
        std::cout << "\n\n..........................:: PROGRAM STRUCTURE ::..........................\n\n";
        ControlStructures ();
        Functions ();
        OverloadsAndTemplates ();
        NameVisibility ();
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '#'; std::cout << '\n';
        std::cout << "\n\n..........................:: COMPOUND DATA TYPES ::..........................\n\n";
        Arrays ();
        CharacterSequences ();
        Pointers ();
        DynamicMemory ();
        DataStructures ();
        OtherDataTypes ();
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '#'; std::cout << '\n';
        std::cout << "\n\n..........................:: CLASSES ::..........................\n\n";
        ClassesI ();
        ClassesII ();



    }
    catch ( const std::exception& )
    {

    }

    //TODO add alternatives for the next expression
    system ( "PAUSE" );
    // return 0;
    return EXIT_SUCCESS; // see the tutorials > functions section > the return value of main
}