// --------------------------------------------------------------------------------
/// <summary>
/// _1_Introduction.cpp
/// </summary>
/// <created>ʆϒʅ,20.12.2018</created>
/// <changed>ʆϒʅ,17.01.2019</changed>
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
        std::cout << "Over the years the evolution of the C++ language was constant.\n";
        std::cout << "Therefore having a compiler with the ability to support the most recent feature is self-explanatory.\n\n";

        //! ####################################################################
        //! ----- C++ compilers:
        // 
        ColourCouter ( "----- C++ Compilers:\n", F_bBLUE );
        std::cout << "The compiler job is to rewrite the code in higher level language into machine language.\n";
        std::cout << "Special programs called compilers, interpreters or assemblers get the job done based on the type of the high level language.\n";
        std::cout << "These special programs have been built into various programming applications.\n";
        std::cout << "Since C++ designed to be a compiled language, its code generally get translated into machine language, which results to a highly efficient program.\n";
        std::cout << "For this purpose, a set of tools, known as development toolchain, are needed, whose core are a compiler and its linker.\n\n";

        //! ####################################################################
        //! ----- console programs:
        // 
        ColourCouter ( "----- Console Programs:\n", F_bBLUE );
        std::cout << "They are programs that use characters to communicate with the user and the environment i.e. printer, keyboard etc.\n";
        std::cout << "The fact of easy interaction, simple implementation and identical behaviour of console programs across all platforms make them very useful to learn the basics of a programming language.\n";
        std::cout << "The programmer's decision to use a particular tool defines the way, in which a console program get compiled.\n\n";

        //! ####################################################################
        //! ----- IDE:
        // 
        ColourCouter ( "----- IDE:\n", F_bBLUE );
        std::cout << "The easiest way for a beginner is to use an Integrated Development Environment (IDE).\n";
        std::cout << "Generally several development tools get integrated in an IDE, which includes a text editor and tools to compile the program directly.\n\n";

        //! - in addition:
        //
        ColourCouter ( "Some free IDE's:\n", F_bBLUE );
        ColourCouter ( "IDE \t\t\t Platform\n", F_bCYAN );
        ColourCouter ( "Code::blocks \t\t Windows/Linux/MacOS\n", F_bCYAN );
        ColourCouter ( "Visual Studio Express \t Windows\n", F_bCYAN );
        ColourCouter ( "Dev-C++ \t\t Windows\n\n", F_bCYAN );

        //! - in addition:
        //
        ColourCouter ( "Probable additional Linux features:\n", F_bBLUE );
        std::cout << "If there is a Linux or Mac environment with development features at disposal, with including the C++11 flags in the command for the compiler, any code could be compilable.\n";
        ColourCouter ( "IDE \t Platform \t\t\t Command\n", F_bCYAN );
        ColourCouter ( "GCC \t Linux, among others... \t g++ -std=c++0x example.cpp -o example_program\n", F_bCYAN );
        ColourCouter ( "Clang \t OS X, among others... \t\t clang++ -std=c++11 -stdlib=libc++ example.cpp -o example_program\n\n", F_bCYAN );
    }
    catch ( const std::exception& )
    {

    }
}