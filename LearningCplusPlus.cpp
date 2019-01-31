// --------------------------------------------------------------------------------
/// <summary>
/// ............................::Nerd snow sayings!::............................
/// nerd Snow's sayings!
/// Learning C++
/// Programming needs patience and practical practice.
/// Programming in a way, that no nerdy dog in the future is able to compile it, is to be avoided!
/// I was almost a good nerd and emptied my Recycle Bin regularly at the night! :) So be a lamb (^.^) and stay a good nerd!
/// </summary>
/// <created>ʆϒʅ,11.04.2018</created>
/// <changed>ʆϒʅ,01.02.2019</changed>
// --------------------------------------------------------------------------------


#include "pch.h"
#include "ConsoleAdjustments.h"
#include "_1_Introduction.h"
#include "_2_BasicsOfCplusPlus.h"
#include "_3_ProgramStructure.h"
#include "_4_CompoundDataTypes.h"
#include "_5_Classes.h"




int main ()
{
    try
    {
#pragma region ConsoleAdjustments
        // font
        COORD fontS { 10,20 };
        ConsoleFont ( L"Consolas" );
        ConsoleFontSize ( fontS );
        ConsoleFontColour ( F_WHITE );
        // screen
        COORD leftANDtop { 15,15 };
        COORD widthANDheight { 110,32 };
        COLORREF backColour { RGB ( 50,50,50 ) };
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
        //! ...................................:: References ::...................................
        // http://www.cplusplus.com/doc/
        // http://de.cppreference.com/
        // https://docs.microsoft.com/
        // C++ reference: http://www.cplusplus.com/reference/
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        ColourCouter ( "References:\n", F_bBLUE );
        ColourCouter ( "http://www.cplusplus.com/doc/\n", F_YELLOW );
        ColourCouter ( "http://de.cppreference.com/\n", F_YELLOW );
        ColourCouter ( "https://docs.microsoft.com/\n", F_YELLOW );
        ColourCouter ( "C++ reference: http://www.cplusplus.com/reference/\n", F_YELLOW );
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        //! ...............................:: nerd Snow's sayings! ::...............................
        ColourCouter ( "Nerd snow's sayings!\n", F_bBLUE );
        ColourCouter ( "Programming needs patience and practical practice.\n", F_YELLOW );
        ColourCouter ( "Programming in a way, that no nerdy dog in the future is able to compile it, is to be avoided!\n", F_YELLOW );
        ColourCouter ( "I was almost a good nerd and emptied my Recycle Bin regularly at the night! :) So be a lamb (^.^) and stay a good nerd!\n", F_YELLOW );
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n\n", F_bRED );

        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        ColourCouter ( ".:: Introduction ::.\n", F_bBLUE );

        //_1_1_Introduction ();

        //! .................................:: BASICS OF C++ ::.................................
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        ColourCouter ( ".:: BASICS OF C++ ::.\n", F_bBLUE );

        //_2_1_StructureOfaProgram ();
        //_2_2_VariablesTypesAndIdentifiers ();
        //_2_3_FundamentalTypesAndDeduction ();
        //_2_4_ConstantNumerals ();
        //_2_5_ConstantLiterals ();
        //_2_6_OtherConstantLiterals ();
        //_2_7_ArithmeticOperators ();
        //_2_8_LagicalOperators ();
        //_2_9_OtherOperators ();
        //_2_10_PrecedenceOfOperators ();
        //_2_11_BasicInputOutput ();


        //! ...............................:: PROGRAM STRUCTURE ::...............................
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        ColourCouter ( ".:: PROGRAM STRUCTURE ::.\n", F_bBLUE );

        ControlStructures ();
        //Functions ();
        //OverloadsAndTemplates ();
        //NameVisibility ();


        //! ..............................:: COMPOUND DATA TYPES ::..............................
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        ColourCouter ( ".:: COMPOUND DATA TYPES ::.\n", F_bBLUE );

        //Arrays ();
        //CharacterSequences ();
        //Pointers ();
        //DynamicMemory ();
        //DataStructures ();
        //OtherDataTypes ();


        //! ....................................:: CLASSES ::....................................
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n", F_bRED );
        ColourCouter ( ".:: CLASSES ::.\n", F_bBLUE );

        //ClassesI ();
        //ClassesII ();



    }
    catch ( const std::exception& )
    {

    }

    //TODO add alternatives for the next expression
    system ( "PAUSE" );
    // return 0;
    return EXIT_SUCCESS; // see the tutorials > functions section > the return value of main
}