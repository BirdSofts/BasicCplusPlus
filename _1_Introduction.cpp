// --------------------------------------------------------------------------------
/// <summary>
/// _1_Introduction.cpp
/// </summary>
/// <created>ʆϒʅ,20.12.2018</created>
/// <changed>ʆϒʅ,20.12.2018</changed>
// --------------------------------------------------------------------------------

#include "pch.h"


// ********************************************************************************
/// <summary>
/// C++ Language
/// </summary>
/// <created>ʆϒʅ,20.12.2018</created>
/// <changed>ʆϒʅ,20.12.2018</changed>
// ********************************************************************************
void CplusPlusLanguage ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '#'; std::cout << '\n';

        // #######################################
        //~~~ C++ language:
        // 
        std::cout << "\n~~~~~ C++ Language:\n";
        std::cout << "Over the years the evolution of the C++ language was constant.\n";
        std::cout << "Therefore having a compiler with the ability to support the most recent feature is self-explanatory.\n";

        // #######################################
        //--- C++ compilers:
        // 
        std::cout << "\n----- C++ Compilers:\n";
        std::cout << "The compiler job is to rewrite the code in higher level language into machine language.\n";
        std::cout << "Special programs called compilers, interpreters or assemblers get the job done based on the type of the high level language.\n";
        std::cout << "These special programs have been built into various programming applications.\n";
        std::cout << "Since C++ designed to be a compiled language, its code generally get translated into machine language, which results to a highly efficient program.\n";
        std::cout << "For this purpose, a set of tools, known as development toolchain, are needed, whose core are a compiler and its linker.\n";

        // #######################################
        //--- console programs:
        // 
        std::cout << "\n----- Console Programs:\n";
        std::cout << "They are programs that use characters to communicate with the user and the environment i.e. printer, keyboard etc.\n";
        std::cout << "The fact of easy interaction, simple implementation and identical behaviour of console programs across all platforms make them very useful to learn the basics of a programming language.\n";
        std::cout << "The programmer's decision to use a particular tool defines the way, in which a console program get compiled.\n";

        // #######################################
        //--- IDE:
        // 
        std::cout << "\n----- IDE:\n";
        std::cout << "The easiest way for a beginner is to use an Integrated Development Environment (IDE).\n";
        std::cout << "Generally several development tools get integrated in an IDE, which includes a text editor and tools to compile the program directly.\n\n";
        std::cout << "Some free IDE's:\n";
        std::cout << "IDE \t\t\t Platform\n";
        std::cout << "Code::blocks \t\t Windows/Linux/MacOS\n";
        std::cout << "Visual Studio Express \t Windows\n";
        std::cout << "Dev-C++ \t\t Windows";
        std::cout << "\n\nIf there is a Linux or Mac environment with development features at disposal, with including the C++11 flags in the command for the compiler, any code could be compilable:\n";
        std::cout << "IDE \t Platform \t\t\t Command\n";
        std::cout << "GCC \t Linux, among others... \t g++ -std=c++0x example.cpp -o example_program\n";
        std::cout << "Clang \t OS X, among others... \t\t clang++ -std=c++11 -stdlib=libc++ example.cpp -o example_program\n";
    }
    catch ( const std::exception& )
    {

    }
}