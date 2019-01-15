// --------------------------------------------------------------------------------
/// <summary>
/// _2_Basics.cpp
/// </summary>
/// <created>ʆϒʅ,11.04.2018</created>
/// <changed>ʆϒʅ,20.12.2018</changed>
// --------------------------------------------------------------------------------

#include "pch.h"


void _2_1_StructureOfaProgram ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '-'; std::cout << '\n';

        //! ####################################################################
        //! ~~~~~ structure of a program:
        // a C++ program always start from the main function, no matter the order of definitions.
        // the main function of this program is in LearningCplusPlus.cpp file.
        // the main function is the only function which called automatically.
        // other functions can be executed if they are called directly or indirectly from main function.

        std::cout << "\n~~~~~ Structure of a program:\n";
        std::cout << "Programming needs patience and practical practice.\n";

        // line comment

        /* block
        comment*/

        std::cout << "\nHello World! "; // inserting an output, '/n' is the newline character
        std::cout << "I'm a C++ program.\n";

        //using namespace std; // make writing code simple but by not using it name collision can be avoided.
    }
    catch ( const std::exception& )
    {

    }
}


void _2_2_VariablesTypesAndIdentifiers ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '-'; std::cout << '\n';

        //! ####################################################################
        //! ~~~~~ variables, types and identifiers:
        // variables are portions of memory that have types and are defined to store values.
        std::cout << "\n~~~~~ Variables, types and identifiers:\n";
        std::cout << "Portions of memory to store values of different types.\n";

        //! ####################################################################
        //! ----- definition and initialization in different C++ revisions
        // a valid identifiers could be built by a sequence of one or more letters, digits or underscore _
        // identifiers shall always begin with letters, additionally they can begin with underscore too.
        // programmers identifiers can not match C++ reserved keywords.
        // C++ is a case-sensitive language.
        // more info on identifiers: http://www.cplusplus.com/doc/tutorial/variables/
        // std::endl: flushes the stream and prints the newline character
        std::cout << "\n----- Definition and initialization in different C++ revisions:\n";
        int a1 = 0; // C-like initialization
        int a2 ( 0 ); // constructor initialization (C++ language)
        int a { 0 }, b { 0 }, result { 0 }; // C++ standard initialization (2011 revision)
        std::cout << "a: " << a << '\t' << "b: " << b << '\t' << "Result: " << result << std::endl;

        //! - in addition
        // the assignment of new values plus process
        std::cout << "\nAssigning new values and process:\n";
        a = 5;
        b = 2;
        a = a + 1;
        result = b - a;
        // insertion
        std::cout << "a: " << a << '\t' << "b: " << b << '\t' << "Result of (b-a): " << result << std::endl;
    }
    catch ( const std::exception& )
    {

    }
}


void _2_3_FundamentalTypesAndDeduction ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '-'; std::cout << '\n';

        //! ####################################################################
        //! ----- fundamental types: characters
        std::cout << "\n----- Fundamental types: characters" << std::endl;

        std::cout << "size of char: " << sizeof ( char ) << '\n';
        char ch1 { 'A' }; // std::string: ascii, iso8559-x, utf-8, gb18030, or any other byte size encoding
        std::cout << "char: " << ch1 << std::endl;

        std::cout << "size of char16_t: " << sizeof ( char16_t ) << '\n';
        char16_t ch2 { 'A' }; // std::u16string: utf-16, ucs2, or any other 16-bit size encoding
        std::cout << "char16_t: " << static_cast<char>( ch2 ) << std::endl;

        std::cout << "size of char32_t: " << sizeof ( char32_t ) << '\n';
        char32_t ch3 { 'A' }; // std::u32string: utf-32/ucs4 or any other 32-bit size encoding
        std::cout << "char32_t: " << static_cast<char>( ch3 ) << std::endl;

        std::cout << "size of wchar_t: " << sizeof ( wchar_t ) << '\n';
        wchar_t ch4 { 'A' }; // std::wstring (supposed to store ucs4 or any other 32-bit encoding,
                             // dose it on Linux/Unix, but stores utf-16 on Windows for backwards compatibility)
        std::cout << "wchar_t: " << static_cast<char>( ch4 ) << "\n";

        //! ####################################################################
        //! ----- fundamental types: integers
        std::cout << "\n----- Fundamental types: integers" << std::endl;

        signed char num1_1 { -128 }; // one byte: -128 to 127 (no difference to char type)
        unsigned char num1_2 { 255 }; // one byte: 0 to 255
        std::cout << "size of char: " << sizeof ( char ) << '\n';
        std::cout << "signed char: " << static_cast<int>( num1_1 ) << '\n';
        std::cout << "unsigned char: " << static_cast<int>( num1_2 ) << "\n\n";

        short num2_1 = { -32578 }; // two bytes: -32768 to 32767
        unsigned short num2_2 { 65535 }; // two bytes: 0 to 65535
        std::cout << "size of short: " << sizeof ( short ) << '\n';
        std::cout << "signed short: " << num2_1 << '\n';
        std::cout << "unsigned short: " << num2_2 << "\n\n";

        int num3_1 { -2147483647 }; // four bytes: -2,147,483,647 to 2,147,483,647
        unsigned int num3_2 { 4294967295 }; // four bytes: 0 to 4,294,967,295
        std::cout << "size of int: " << sizeof ( int ) << '\n';
        std::cout << "signed int: " << num3_1 << '\n';
        std::cout << "unsigned int: " << num3_2 << "\n\n";

        long num4_1 { -2147483647 }; // four bytes: -2,147,483,647 to 2,147,483,647
        unsigned long num4_2 { 4294967295 }; // four bytes: 0 to 4,294,967,295
        std::cout << "size of long: " << sizeof ( int ) << '\n';
        std::cout << "signed long: " << num4_1 << '\n';
        std::cout << "unsigned long: " << num4_2 << "\n\n";

        long long num5_1 { -9223372036854775807 }; // eight bytes: -9,223,372,036,854,775,807 to 9,223,372,036,854,775,807
        unsigned long long num5_2 { 18446744073709551615 }; // eight bytes: 0 to 18,446,744,073,709,551,615
        std::cout << "size of long long: " << sizeof ( long long ) << '\n';
        std::cout << "signed long long: " << num5_1 << '\n';
        std::cout << "unsigned long long: " << num5_2 << "\n";

        //! ####################################################################
        //! ----- fundamental types: floats
        std::cout << "\n----- Fundamental types: floats" << std::endl;

        float num6 { static_cast<float> ( 3.4e-38 ) }; // four bytes: 3.4E +/- 38 (7 digits)
        std::cout << "size of float: " << sizeof ( float ) << '\n';
        std::cout << "float: " << num6 << '\n';

        double num7 { 1.7e-308 };  // eight bytes: 1.7E +/- 308 (15 digits)
        std::cout << "size of double: " << sizeof ( double ) << '\n';
        std::cout << "double: " << num7 << '\n';

        long double num8 { 1.7e-308 };  // same as double
        std::cout << "size of long double: " << sizeof ( long double ) << '\n';
        std::cout << "long double: " << num8 << "\n";
        // check the link for more details on float: http://de.cppreference.com/w/cpp/language/types

        //! ####################################################################
        //! ----- fundamental other types: bool, void and nullptr
        // bool is boolean type, a logical type that can store 'true' or 'false' as values
        std::cout << "\n----- Fundamental other types: bool, void and nullptr" << std::endl;
        bool bool_var { true };
        std::cout << "size of bool: " << sizeof ( bool ) << '\n';
        std::cout << "bool: " << bool_var << "\n";

        // void typed pointers identify the lack of type, used in function return types, function parameters and universal pointers
        // they can't point to constant and volatile variables
        // in fact there is no variable of type void.
        // they can be dereferenced only by casting to another type
        // they can be converted to other types of data pointer
        // they can point to a function but not to a class member
        // more on void and nullptr will be mentioned in pointer section
        void *void_poi;
        int *int_poi;
        int int_i { 22 };
        void_poi = &int_i;
        int_poi = (int*) void_poi; // casting operation: optional in C, required in C++
        nullptr; // is a spacial type of pointer

        //! ####################################################################
        //! ----- strings:
        // the class string is one of the compound types in C++.
        // header file is <string>.
        std::cout << "\n----- Strings:" << std::endl;
        std::cout << "One of the compound types in C++ is the class string." << std::endl;
        std::string str1 = { "This is the initial string." }; // initialization in C++ standard form.
        std::cout << "string: " << str1 << std::endl;
        // more details on standard C++ strings: http://www.cplusplus.com/string

        // the properties of fundamental types in particular systems and compiler implementations: http://www.cplusplus.com/%3Climits%3E
        // types of specific sizes: http://www.cplusplus.com/%3Ccstdint%3E

        //! ####################################################################
        //! ----- deduction of type:
        // auto and decltype shall mainly be used when the type can't be determined or for improving the readability. the example below is non of them.
        std::cout << "\n----- Deduction of type:\n";
        int int_var { 0 };
        auto aut_var { int_var }; // same as: int aut_var{ int_var }
        decltype( int_var ) dec_var { int_var }; // same as: int dec_var { int_var }
        std::cout << "Normal declaration and initialization: " << int_var << std::endl;
        std::cout << "Using auto for declaration: " << aut_var << std::endl;
        std::cout << "Using decltype for declaration:" << dec_var << std::endl;

    }
    catch ( const std::exception& )
    {

    }
}


void _2_4_ConstantNumerals ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '-'; std::cout << '\n';

        //! ####################################################################
        //! ~~~~~ constants numerals:
        // first kind of the most obvious constants are numerals, which can be be of types integer or floating-point.
        // like variables numerals have types.
        // in the statement "i=5;" 5 is a numeral constant.
        std::cout << "\n~~~~~ Constants numerals:\n";
        std::cout << "One of the most obvious kind of constants are numerals.\n";

        //! ####################################################################
        //! ----- integer constants:
        // C++ allows the use of numbers in octal or hexadecimal base
        std::cout << "\n----- Integer constants: \n";
        const int con1 { 75 }; // decimal
        const int con2 { 0113 }; // octal (preceded with 0)
        const int con3 { 0x4b }; // hexadecimal (preceded with 0x)
        std::cout << "Defining integer constant (decimal): " << con1 << '\n';
        std::cout << "Defining integer constant (octal): " << con2 << '\n';
        std::cout << "Defining integer constant (hexadecimal): " << con3 << '\n';

        //! - in addition:
        // by default integer literals are "int" but it can be modified by appending certain suffixes which aren't case-sensitive.
        const int con4 { 75u }; // unsigned
        const int con5 { 0113lU }; // unsigned long
        const int con6 { 0x4bll }; // long long
        const int con7 { 0X4buLl }; // unsigned long long
        std::cout << "Modification of type (to unsigned): " << con4 << '\n';
        std::cout << "Modification of type (to unsigned long): " << con5 << '\n';
        std::cout << "Modification of type (to long long): " << con6 << '\n';
        std::cout << "Modification of type (to unsigned long long): " << con7 << "\n";

        //! ####################################################################
        //! ----- floating point constants:
        // expressing real values which can include either decimal point or "e" character
        // "e" character stands for exponents, isn't case-sensitiv.
        // expresses "by ten at the Xth height" where "X" is an integer value that follows "e".
        // modification of types: the suffixes used below, aren't case-sensitiv.
        std::cout << "\n----- Floating point constants: \n";
        const double con8 { 3.14159f }; // PI ("f" suffix stand for float)
        const float con9 { static_cast<float>( 6.02e23L ) }; // the number of Avogadro ("l" suffix make long double)
        const double con10 { 1.6E-19 }; // electric charge of an electron
        const float con11 { 3.0 }; // a float number expressed in decimal point
        std::cout << "PI number: " << con8 << '\n';
        std::cout << "Avogadro number: " << con9 << '\n';
        std::cout << "Electric charge number of an electron: " << con10 << '\n';
        std::cout << "A float number: " << con11 << "\n";
    }
    catch ( const std::exception& )
    {

    }
}


void _2_5_ConstantLiterals ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '-'; std::cout << '\n';

        //! ####################################################################
        //! ~~~~~ constant literals:
        // second kind of the most obvious constants are literals, which can be of types character or string
        // this kind of constants are enclosed in quotes.
        // ' for characters and "  for strings
        std::cout << "\n~~~~~ Constant literals: \n";
        std::cout << "Another of the most obvious kind of constants are literals.\n";

        std::cout << "\n----- Some character or string constants: \n";
        const char con12 { 'Z' };
        const std::string con13 = { "How do you do?" };
        std::cout << "'Z' character: " << con12 << '\n';
        std::cout << "A string: " << con13 << "\n\n";

        //! - in addition:
        // character and string literals can be used to represent special characters,
        // which are in most cases difficult or impossible to be used in the source code.
        const char con14 { '\n' };
        const std::string con15 { "One\tTwo\tThree" };
        std::cout << "Special characters in constants (New line): " << con14;
        std::cout << "Special characters in constants (Tab): " << con15 << "\n\n";
        // a list of single character escape codes: http://de.cppreference.com/w/cpp/language/escape

        //! - in addition:
        // every character in computer is an ASCI code. literals can be represented directly by using a "\" character and their codes
        // for octal "\nnn" and for hexadecimal "\xnn"
        // examples: "\202","\x2d". for more on this check the above link.
        const char con16 { '\202' };
        const char con17 { '\x2d' };
        std::cout << "Using ASCI code of characters in octal or hexadecimal to initial constants:\t" << con16 << '\t' << con17 << "\n\n";

        //! - in addition:
        // simply by separating several literal strings by blank spaces they will be concatenated in one.
        // in C++ big literal strings within a twin of quotes can be written in more than one line by using "\" backslash character.
        // only blank spaces which are within the quotes are a part of the literal, other ones will be ignored.
        const std::string con18 { "This strIng ""In "
          "the"   " soURce c0de"	  " IS"  " \
paRTed"  " And "		  "wriTTen In TreeLine" };
        std::cout << "A useful feature to initial literal strings:\n" << con18 << "\n\n";

        //! - in addition:
        // the type of the character and string literals can be modified by using specific prefixes
        // they are case sensitiv.
        // "u" for char16_t, "U" for char32_t and "L" for wchar_t
        const char16_t con19 { ( 'uZ' ) };
        const char32_t con20 { ( 'UZ' ) };
        const wchar_t con21 { ( 'LZ' ) };
        std::cout << "Modification of type (to char16_t): " << con19 << '\n';
        std::cout << "Modification of type (char32_t): " << con20 << '\n';
        std::cout << "Modification of type (wchar_t): " << con21 << '\n';

        //! - in addition:
        // two more prefixes are: "u8" for UTF_8 and "R" for raw strings
        // in a raw string there aren't any special characters and it can be used in
        // format: R"sequence(string)sequence"
        // where the both sequences must be alike and can be anything and are going to be ignored.
        // if needed you can combine raw prefix with other ones.
        const char32_t con22 { static_cast<char32_t>( 'u8Z' ) };
        const std::string con23 { R"aRawString(--\"'/(^&@#$&!) AnY likeable StrIng (^&@#$&!)\'"/--)aRawString" };
        std::cout << "Modifying the type of literal constant to UTF_8: " << con22 << "\n\n";
        std::cout << "A raw string:\t" << con23 << "\n";
    }
    catch ( const std::exception& )
    {

    }
}


void _2_6_OtherConstantLiterals ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '-'; std::cout << '\n';

        //! ####################################################################
        //! ~~~~~ other constant literals:
        // in C++ there are 3 more keyword literals. true, false and nullptr.
          //Numerals and literals are the most obvious kind of constants. they can be integer, floating-point, characters, strings, boolean, pointers and user-defined.
        // second kind of the most obvious constants are literals, which can be of types character or string
        // nullptr is the null pointer value.
        std::cout << "\n~~~~~ Other constant literals: \n";
        const bool con24 { false };
        std::cout << "A boolean constant:\t" << con24 << "\n";
        const int *p { nullptr };

        //! ####################################################################
        //! ----- typed constant expressions:
        // for convenience sake, since some literals will often be repeated in source code. an example:
        std::cout << "\n----- Typed constant expressions: \n";
        const char tab { '\t' };
        const char nline { '\n' };
        const double pi { 3.1415926 };
        double r { 5.0 }, circle;
        circle = 2 * r * pi;
        std::cout << "Example of using constant" << nline << tab << circle << nline;

        //! ####################################################################
        //! ----- preprocessor definitions (#define):
        // another way to define constant values
        //? syntax:
        // #define identifier replacement
        // the occurrences of identifier will be interpreted to replacement and it can be any set of characters till the end of the line.
        // the replacement happens before compiling by the preprocessor so it is a blind replacement and there is no verification of the involved syntax.
        std::cout << "\n----- Another mechanism to define constants (preprocessor definitions): \n";
#define Tab '\t'
#define Nline '\n'
#define Pi 3.1415926
        circle = 2 * r * Pi;
        std::cout << "Defining constant by #define" << Nline << Tab << circle << Nline;
        // #define lines are preprocessor directives, these are single line instructions and unlike statements don't need semicolons.
        // a semicolon in the replacement will be a part of the sequence and is going to be included in all of the occurrences.
    }
    catch ( const std::exception& )
    {

    }
}


// can be used from this point, in which they are defined:
const char tab { '\t' };
const char nline { '\n' };
int x { 0 }, y { 2 }, z { 4 };
void _2_7_ArithmeticOperators ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '-'; std::cout << '\n';

        //! ####################################################################
        //! ~~~~~ mathematical operators:
        // mathematical operators will be used to have mathematical operations on operands.
        std::cout << nline << "~~~~~ Mathematical operators:" << nline;
        std::cout << "Mathematical operators represent the most important and basic mathematical operations." << nline;

        //! ####################################################################
        //! ----- assignment operator (=):
        // the assignment operation always takes place from right to left.
        std::cout << nline << "----- Assignment operator (=):" << nline;
        std::cout << "x: " << x << tab << "y: " << y << nline;
        x = 5;
        std::cout << "x = 5;" << nline << "x: " << x << tab << "y: " << y << nline;
        x = y;
        std::cout << "x = y;" << nline << "x: " << x << tab << "y: " << y << nline;
        x = y = 3; // this statement is valid in C++
        std::cout << "x = y = 3;" << nline << "x: " << x << tab << "y: " << y << nline << nline;

        //! - in addition:
        // assignment operation can be evaluated meaning the assignment itself has a value 
        // in fundamental types it is the value that assigned in the operation.
        std::cout << "The value of assignment operation:" << nline;
        y = 6 + ( x = 10 ); // y is 6 + the value of another assignment operation
        std::cout << "y = 6 + (x = 10);" << nline << "x: " << x << tab << "y: " << y << nline;


        //! ####################################################################
        //! ----- arithmetic operators (+, -, *, /, %):
        // percentage sign represent modulo which is the remainder of a division.
        std::cout << nline << "----- Arithmetic operator (+, -, *, /, %):" << nline;
        x = 40 % 9;
        std::cout << "x = 40 % 9;" << tab << "x: " << x << nline;

        //! ####################################################################
        //! ----- compound assignments (+=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=):
        // modification of the current value of the variable by performing an operation on it.
        std::cout << nline << "----- Compound assignments (+=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=):" << nline;
        std::cout << "x: " << x << tab << "y: " << y << nline;
        y *= x + 1; // equivalent to y=y*(x+1)
        std::cout << "y *= x + 1;" << nline << "x: " << x << tab << "y: " << y << nline;

        //! ####################################################################
        //! ----- increment and decrement (++, --):
        // increase or decrease by one the value stored in a variable.
        std::cout << nline << "----- Increment and decrement (++, --):" << nline;
        std::cout << "x: " << x << tab << "y: " << y << nline;
        x++;
        --y;// equivalent to x+=1 and x=x+1
        std::cout << "x++;" << tab << "--y;" << nline;
        std::cout << "x: " << x << tab << "y: " << y << nline << nline;

        //! - in addition:
        // these operators can be used both as prefix and as suffix.
        // although simple expressions like ++x and x++ have the same meaning, they result a different value in different expressions.
        std::cout << "Difference between 'y = ++x' and 'y = x++':" << nline;
        x = 3;
        y = ++x; // y = x after the increment
        std::cout << "x=3;" << tab << "y = ++x;" << nline;
        std::cout << "x: " << x << tab << "y: " << y << nline;
        x = 3;
        y = x++; // y = x before the increment
        std::cout << "x=3;" << tab << "y = x++;" << nline;
        std::cout << "x: " << x << tab << "y: " << y << nline;
    }
    catch ( const std::exception& )
    {

    }
}


void _2_8_LagicalOperators ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '-'; std::cout << '\n';

        //! ####################################################################
        //! ~~~~~ boolean operators:
        // boolean operators will be used to have logical operations on operands.
        std::cout << nline << "~~~~~ Boolean operators:" << nline;
        std::cout << "Boolean operators represent the logical operations." << nline;

        //! ####################################################################
        //! ----- relational and comparison operators (==, !=, <, > ,<=, >=):
        // the results of comparison will be boolean. any value can be compared.
        std::cout << nline << "----- Relational and comparison operators (==, !=, <, > ,<=, >=):" << nline;
        std::cout << "x: " << x << tab << "y: " << y << tab << "z: " << z << nline;
        if ( ( x + 16 ) >= ( y*x ) )
        {
            if ( ( z - x ) <= y )
            {
                std::cout << "(z != y): " << ( z != y ) << nline;
                std::cout << "((z = 2) == x): " << ( ( z = 2 ) == x ) << tab << "z: " << z << nline; // pay attention to the use of = and == operators
            }
        }

        //! ####################################################################
        //! ----- logical operators (!, &&, ||):
        // the operator ! (logical NOT) inverts its one operand which will be written to its right.
        std::cout << nline << "----- Logical operators (!, &&, ||):" << nline;
        std::cout << "x: " << x << tab << "y: " << y << tab << "z: " << z << nline;
        std::cout << "!(x <= y): " << !( x <= y ) << nline;
        std::cout << "!(y >= z): " << !( y >= z ) << nline;

        //! - in addition:
        // short circuit evaluation: C++ only evaluates what is necessary to come up with the combined relational result. this evaluation happens from left to right. 
        // for example in '(x==y)&&(x<=y)' statement, considering the logical AND, if 'x==y' is false, C++ never checks the rest of the statement.
        std::cout << nline << "Short circuit evaluation in C++:" << nline;
        if ( !( x == y ) )
        {
            std::cout << "((x == y) && (x <= y)): " << ( ( x == y ) && ( x <= y ) ) << nline;
            std::cout << "((x == y) || (x >= y)): " << ( ( x == y ) || ( x >= y ) ) << nline;
        }
        // this is most important when it comes to statements that has side effects
        // for example altering values in the right-hand expression.
        std::cout << nline << "Side effects of short circuit evaluation:" << nline;
        std::cout << "x: " << x << tab << "y: " << y << tab << "z: " << z << nline;
        if ( ( x == 4 ) || ( ++y > z ) ) // if x==4 is true, then ++y will never be executed
        {
            std::cout << "The right-hand expression of ((x == 4) || (++y > z)) will never be executed:" << nline;
        }
        std::cout << "x: " << x << tab << "y: " << y << tab << "z: " << z << nline;

        //! ####################################################################
        //! ----- conditional ternary operator (?):
        // if its condition is true, the operator will return result1 and otherwise result2.
        //? statement syntax (format):
        // condition ? result1 : result2
        std::cout << nline << "----- Conditional ternary operator (?):" << nline;
        std::string str_result;
        int int_result;
        std::cout << "x: " << x << tab << "y: " << y << tab << "z: " << z << nline;
        str_result = ( ( x == y ) && ( x > z ) ) ? "True" : "False";
        int_result = ( ( x == y ) && ( x > z ) ) ? x : z;
        std::cout << "str_result = ((x == y) && (x > z)) ? \"True\" : \"False\";" << nline << "str_result: " << str_result << nline;
        std::cout << "int_result = ((x == y) && (x > z)) ? x : z;" << nline << "int_result: " << int_result << nline;

        //! ####################################################################
        //! ----- comma operator (,):
        // this operator will be used to separate the expressions,
        // when there are more than one expression in a statement that actually suppose to have one.
        std::cout << nline << "----- Comma operator (,):" << nline;
        std::cout << "x: " << x << tab << "y: " << y << tab << "z: " << z << nline;
        z = ( x = 2, ++y * x );
        std::cout << "z = (x = 2, ++y * x);" << tab << "z: " << z << nline;

        //! - in addition:
        // the need of evaluation in expressions with comma operator:
        // only the most right one will be considered.
        std::cout << nline << "In evaluation sets only the right expression will be considered:" << nline;
        std::cout << "x: " << x << tab << "y: " << y << tab << "z: " << z << nline;
        z = ( x >= 2, y <= 4, y != 4 ); // the expressions 'x>=2' and 'y<=4' won't be considered
        std::cout << "z = (x >= 2, y <= 4, y != 4);" << tab << "z: " << z << nline;
    }
    catch ( const std::exception& )
    {

    }
}


void _2_9_OtherOperators ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '-'; std::cout << '\n';

        //! ####################################################################
        //! ~~~~~ other operators:
        // 
        std::cout << nline << "~~~~~ Other operators:" << nline;
        std::cout << "Some other important operators." << nline;

        //! ####################################################################
        //! ----- bitwise operators (&, |, ^, ~, <<, >>):
        // modifying an operand in its stored bit patterns which represent their value in system.
        // & bitwise And
        // | bitwise inclusive or
        // ^ bitwise exclusive or
        // ~ unary complement (bit inversion)
        // << shift bits left
        // >> shift bits right
        std::cout << nline << "----- Bitwise operators (&, |, ^, ~, <<, >>):" << nline;
        std::cout << "x: " << x << nline;
        std::cout << "The result of modification without storing it in the variable itself: " << nline;
        std::cout << "result of (x & x) " << ( x & x ) << nline;
        std::cout << "result of (x | x) " << ( x | x ) << nline;
        std::cout << "result of (x ^ x) " << ( x ^ x ) << nline;
        std::cout << "result of (~x) " << ( ~x ) << nline;
        std::cout << "result of (x << 2) " << ( x << 2 ) << nline;
        std::cout << "result of (x >> 2) " << ( x >> 2 ) << nline;

        //! ####################################################################
        //! ----- explicit type casting operator:
        // convert the value of a given type to another type
        std::cout << nline << "----- Explicit type casting operator:" << nline;
        float f { static_cast<float> ( 3.14 ) }; // initialization in C++ standard 2011 revision
        std::cout << "x (int): " << x << tab << "f (float): " << f << nline;
        x = (int) f; // C-like explicit type casting
        std::cout << "Converting the type (C-like explicit type casting): " << x << nline;
        x = int ( f ); // C++ functional notation casting
        std::cout << "Converting the type (C++ functional notation casting): " << x << nline;

        //! ####################################################################
        //! ----- The 'sizeof' operator:
        // sizeof: take one parameter (type or variable) and return the size in bytes.
        std::cout << nline << "----- The 'sizeof' operator:" << nline;
        std::cout << "x: " << x << nline;
        x = sizeof ( long long ); // the returned value of 'sizeof' is a compile-time constant (before program execution)
        std::cout << "x = sizeof (long long);" << tab << "x: " << x << nline;
    }
    catch ( const std::exception& )
    {

    }
}


void _2_10_PrecedenceOfOperators ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '-'; std::cout << '\n';

        //! ####################################################################
        //! ~~~~~ precedence of operators:
        // higher precedence of operators determines the evaluation order of operators in an expression
        std::cout << nline << "~~~~~ Precedence of operators:" << nline;
        std::cout << "x: " << x << nline;
        x = 2 + 5 % 2; // the remainder operator will be evaluated first
        std::cout << "x = 2 + 5 % 2;" << tab << "x: " << x << nline;

        //! - in addition:
        // uses of parenthesis:
        // to explicitly clarify the intended effect
        // to override the precedence of operators
        std::cout << nline << "Overriding the precedence of operators:" << nline;
        x = 2 + ( 5 % 2 ); // same as without paranthessis
        std::cout << "x = 2 + (5 % 2);" << tab << "x: " << x << nline;
        x = ( 2 + 5 ) % 2; // overriding the precedence
        std::cout << "x = (2 + 5) % 2;" << tab << "x: " << x << nline;

        //! - in addition:
        // evaluation of C++ operator from greatest to smallest happen in the following order:

        // -------------------------------------------------------------------------------------------------------
        // Level    Precedence Group        Operator            Description                         Grouping
        // -------------------------------------------------------------------------------------------------------
        // 1        Scope                   ::                  scope qualifier                     left-to-right
        // -------------------------------------------------------------------------------------------------------
        // 2        Postfix (unary)         ++ --               postfix increment / decrement       left-to-right
        // 2        "                       ()                  functional forms                    "
        // 2        "                       []                  subscript                           "
        // 2        "                       . ->                member access                       "
        // -------------------------------------------------------------------------------------------------------
        // 3        Prefix (unary)          ++ --               prefix increment / decrement        Right-to-left
        // 3        "                       ~ !                 bitwise NOT / logical NOT           "
        // 3        "                       + -                 unary prefix                        "
        // 3        "                       & *                 reference / dereference             "
        // 3        "                       new delete          allocation / deallocation           "
        // 3        "                       sizeof              parameter pack                      "
        // 3        "                       (type)              C-style type casting                "
        // -------------------------------------------------------------------------------------------------------
        // 4        pointer-to-member       .* ->*              access pointer                      left-to-right
        // 5        Arithmetic: scaling     * / %               multiply, divide, modulo            "
        // 6        Arithmetic: addition    + -                 addition, subtraction               "
        // 7        Bitwise shift           << >>               shift left, shift right             "
        // 8        Relational              < > <= >=           comparison operators                "
        // 9        Equality                == !=               equality / inequality               "
        // 10       And                     &                   bitwise AND                         "
        // 11       Exclusive or            ^                   bitwise XOR                         "
        // 12       Inclusive or            |                   bitwise OR                          "
        // 13       Conjunction             &&                  logical AND                         "
        // 14       Disjunction             ||                  logical OR                          "
        //          Assignment-level        = *= /= %= -=       assignment / compound
        // 15       expressions             >>= <<= &= ^= |=    assignment                          Right-to-left
        //                                  ? :                 conditional operator
        // 16       sequencing              ,                   comma separator                     left-to-right
        // -------------------------------------------------------------------------------------------------------

        // an expression that has two the same precedence level operators, either left-to-right or right-to-left groupings determine which one is first to be evaluated. so every operator based on its defined precedence and grouping is independent.
        // therefore, the consideration is there, that enclosure in parenthesis is a good practice and can improve the code readability.
    }
    catch ( const std::exception& )
    {

    }
}


void BasicInputOutput ()
{
    try
    {
        std::cout << '\n'; for ( int L = 0; L < 110; L++ ) std::cout << '-'; std::cout << '\n';
        const char tab { '\t' };
        const char nline { '\n' };

        //! ####################################################################
        //! ~~~~~ basic input/output: standard features to interact with users.
        // abstraction streams is the convenient way C++ use to perform input/ output operations in sequential media like screen. a stream is an entity to insert or extract characters to/from. there are a handful of streams in the standard library to access the standard source and destination in an environment where the program runs. the most useful ones are cin, cout, cerr and clog.
        // cerr and clog streams work like the cout stream with the difference that they identify streams for error messages and logging which in many cases and most environment setups they do the same thing which is printing on screen, although they can be individually redirected.
        std::cout << nline << "~~~~~ Basic Input/Output (cin, cout, cerr and clog):" << nline;
        std::cout << "The streams are the standard features to interact with users." << nline;
        std::cout << "The streams cin and cout will be mentioned in details." << nline;
        std::cout << "The streams cerr and clog work like cout and identify streams for special purposes." << nline;

        //! ####################################################################
        //! ----- standard output (cout): default output of this stream is screen and processes the operation with using the insertion operator (<<) which inserts the data into the stream that precedes it
        std::cout << nline << "----- Standard output (cout):" << nline;
        std::cout << nline << "Inserting outputs of different types:" << nline;
        std::cout << "An output string"; // a string literal
        std::cout << '\n'; // a character literal
        std::cout << 23487284; // a number
        std::cout << nline; // a variable of type char (\n)

        // chained insertion:
        std::cout << nline << "Chained insertion:" << nline;
        std::cout << "Below is my birth year." << tab << "Current year: " << 2018 << nline << 1989;

        // since cout dosen't automatically break the line, use '\n' or endl manipulator instead. endl manipulator also flushes the buffer which means to physically write the output in device. this affects the fully-buffered systems but cout generally isn't one.
        // it is a good idea to use it as an extra feature when needed since it incurs a certain overhead and on some devices it may produce a delay.
        std::cout << nline << "Breaking the line:" << nline;
        std::cout << "\n\n __This is the sentence in between__ \n" << std::endl;

        //! ####################################################################
        //! ----- standard input (cin): default input of this stream is keyboard and processes the operation with the help of extraction operator (>>) which followed by the variable where the extracted data needs to be stored.
        // the extraction of characters from input by cin stream will be continued till the user presses the enter or return key.
        // depended on the type of the variable cin stream determines how to interpret the entered characters.
        std::cout << nline << "----- Standard input (cin):" << nline;
        std::cout << nline << "Extracting inputs of different types:" << nline;
        char char_in;
        std::cout << "Please enter a character as input:" << tab;
        std::cin >> char_in;
        std::cout << "The character you have entered is:" << tab << char_in << nline;

        // taking input from the cin stream is easy but it has a big drawback. if the entered characters couldn't be interpreted to an integer type for example, when they need to, the program continue and the result of process is unknown.
        // a program shall handle invalid values properly, independent from what user enters. latter on the stringstreams will be used to have a better control on user input.
        std::cout << nline << "The drawback of cin (Entered input with invalid value):" << nline;
        int int_in;
        std::cout << "Please enter an integer value as input:" << tab;
        std::cin >> int_in; // unknown results caused from unwanted inputs
        std::cout << "The double of it is:" << tab << int_in * 2 << nline;

        // chained extraction of more than one datum in one line: user must separate inputs with blank spaces.
        // the blank spaces are white space, tab and new line.
        std::cout << nline << "Chained extraction:" << nline;
        int int_in2;
        std::cout << "Please enter two integer values as input (separate them with any kind of spaces):" << tab;
        std::cin >> int_in >> int_in2; // chained extraction
        std::cout << "The entered values are:" << tab << int_in << tab << int_in2 << nline;

        // the stream cin can extract strings just like other fundamental types. the only problem is that it consider any type of spaces as termination of the operation so it can only extract a single word by one extraction operator.
        // to get an entire line with the stream cin the function getline() from the standard library can be used.
        std::cout << nline << "Extracting strings in line:" << nline;
        std::string str_in;
        std::cout << "Please enter a line of string containing spaces:" << nline << tab;
        std::cin >> str_in; // extracting the input till first space
        std::cout << "The stream cin did extract the first word which is:" << tab << str_in << nline;
        std::cout << "Please enter another line of string containing spaces:" << nline << tab;
        std::getline ( std::cin, str_in ); // clear unneeded buffered characters
        // std::cin.ignore (100,'\n'); // clear unneeded buffered characters (another way but in most cases not a good idea)
        std::getline ( std::cin, str_in ); // getting a line with spaces
        std::cout << "The extracted line with getline function is:" << tab << str_in << nline;
        // what users generally expect for inputs to happen in console environment is to introduce the field and press enter or return. in terms of lines getline function can be used to obtain inputs from user.
        // if there isn't any strong reason not to, getline shall be used to extract inputs instead of cin.

        //! ####################################################################
        //! ----- stringstream: this type which is defined in standard header <sstream> allows the strings to be treated like streams, and thus allowing the insertion and extraction operations to be performed on strings like what happens in cin or cout streams.
        // the most useful means of this feature is to convert string to numeral values and vice versa.
        std::cout << nline << "----- The type stringstream:" << nline;
        std::cout << nline << "Converting string to int:" << nline;
        std::string str_var { "2048 ABC 1024" };
        std::cout << "The string containing numeral values:" << tab << str_var << nline;
        int int_var;
        std::stringstream ( str_var ) >> int_var; // extract the value from a stringstream constructed from the string variable
        std::cout << "The value converted from string to integer:" << tab << int_var << nline;

        // acquiring numeric values indirectly from the standard input: using getline and stringstream instead of cin
        // the goal is to separate the input process from its interpretation as data.
        // demonstration of extracting in the user-expected behaviour of console programs and in the same time gaining more control over the transformation of inputs into more useful data.
        std::cout << nline << "Separating input process from its interpretation:" << nline;
        std::string str_var2;
        float price { 0 }; int quantity { 0 };
        std::cout << "Enter the price:" << tab;
        //std::getline (std::cin, str_var2); //clear
        std::getline ( std::cin, str_var2 );
        std::cout << "The entered string is:" << tab << str_var2 << nline;
        std::stringstream ( str_var2 ) >> price;
        std::cout << "The interpreted value is:" << tab << price << nline;
        std::cout << "Enter the quantity:" << tab;
        //std::getline (std::cin, str_var2); //clear
        std::getline ( std::cin, str_var2 );
        std::cout << "The entered string is:" << tab << str_var2 << nline;
        std::stringstream ( str_var2 ) >> quantity;
        std::cout << "The interpreted value is:" << tab << quantity << nline;
        std::cout << nline << "The total price is:" << tab << price * quantity << nline;
    }
    catch ( const std::exception& )
    {

    }
}