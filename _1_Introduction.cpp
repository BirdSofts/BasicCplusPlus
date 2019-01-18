// --------------------------------------------------------------------------------
/// <summary>
/// _1_Introduction.cpp
/// </summary>
/// <created>ʆϒʅ,20.12.2018</created>
/// <changed>ʆϒʅ,18.01.2019</changed>
// --------------------------------------------------------------------------------

#include "pch.h"
#include "ConsoleAdjustments.h"


void _1_1_Introduction ()
{
    try
    {
        ColourCouter ( "-------------------------------------------------------", F_bRED );
        ColourCouter ( "-------------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ~~~~~ C++ language:
        // 
        ColourCouter ( "~~~~~ C++ Language:\n", F_bBLUE );
        ColourCouter ( "Over the years the evolution of the C++ language was constant.\n", F_YELLOW );
        ColourCouter ( "Therefore having a compiler with the ability to support the most recent feature is self-explanatory.\n\n", F_YELLOW );

        //! ####################################################################
        //! ----- C++ compilers:
        // 
        ColourCouter ( "----- C++ Compilers:\n", F_bBLUE );
        ColourCouter ( "The compiler job is to rewrite the code in higher level language into machine language.\n", F_YELLOW );
        ColourCouter ( "Special programs called compilers, interpreters or assemblers get the job done based on the type of the high level language.\n", F_YELLOW );
        ColourCouter ( "These special programs have been built into various programming applications.\n", F_YELLOW );
        ColourCouter ( "Since C++ designed to be a compiled language, its code generally get translated into machine language, which results to a highly efficient program.\n", F_YELLOW );
        ColourCouter ( "For this purpose, a set of tools, known as development toolchain, are needed, whose core are a compiler and its linker.\n\n", F_YELLOW );

        //! ####################################################################
        //! ----- console programs:
        // 
        ColourCouter ( "----- Console Programs:\n", F_bBLUE );
        ColourCouter ( "They are programs that use characters to communicate with the user and the environment i.e. printer, keyboard etc.\n", F_YELLOW );
        ColourCouter ( "The fact of easy interaction, simple implementation and identical behaviour of console programs across all platforms make them very useful to learn the basics of a programming language.\n", F_YELLOW );
        ColourCouter ( "The programmer's decision to use a particular tool defines the way, in which a console program get compiled.\n\n", F_YELLOW );

        //! ####################################################################
        //! ----- IDE:
        // 
        ColourCouter ( "----- IDE:\n", F_bBLUE );
        ColourCouter ( "The easiest way for a beginner is to use an Integrated Development Environment (IDE).\n", F_YELLOW );
        ColourCouter ( "Generally several development tools get integrated in an IDE, which includes a text editor and tools to compile the program directly.\n\n", F_YELLOW );

        //! - in addition:
        //
        ColourCouter ( "Some free IDE's:\n", F_bBLUE );
        ColourCouter ( "IDE \t\t\t Platform\n", F_YELLOW );
        ColourCouter ( "Code::blocks \t\t Windows/Linux/MacOS\n", F_bCYAN );
        ColourCouter ( "Visual Studio Express \t Windows\n", F_bCYAN );
        ColourCouter ( "Dev-C++ \t\t Windows\n\n", F_bCYAN );

        //! - in addition:
        //
        ColourCouter ( "Probable additional Linux features:\n", F_bBLUE );
        std::cout << "If there is a Linux or Mac environment with development features at disposal, with including the C++11 flags in the command for the compiler, any code could be compilable.\n";
        ColourCouter ( "IDE \t Platform \t\t\t Command\n", F_YELLOW );
        ColourCouter ( "GCC \t Linux, among others... \t g++ -std=c++0x example.cpp -o example_program\n", F_bCYAN );
        ColourCouter ( "Clang \t OS X, among others... \t\t clang++ -std=c++11 -stdlib=libc++ example.cpp -o example_program\n\n", F_bCYAN );
    }
    catch ( const std::exception& )
    {

    }
}