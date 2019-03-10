// --------------------------------------------------------------------------------
/// <summary>
/// _4_CompoundDataTypes.cpp
/// </summary>
/// <created>ʆϒʅ,30.05.2018</created>
/// <changed>ʆϒʅ,11.03.2019</changed>
// --------------------------------------------------------------------------------

#include "pch.h"
#include "ConsoleAdjustments.h"


#define Tab '\t'
#define Nline '\n'

const char tab { '\t' };
const char nline { '\n' };


void _07_01_Arrays ()
{
    // the functions used in this section are defined above it.
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ~~~~~ arrays:
        // an array is built a chain of same type elements placed in contiguous memory locations.
        // every individual element can be referred to by its unique index identifier.
        // in C++ language the first element index of an array is always zero.
        // an array like a variable is usable after declaration.
        // Note declaration syntax: type name [elements];
        // elements field which is always enclosed in square brackets [] specifies the length of the array in terms of the number of elements.
        // elements field specifies the length of the array in terms of number. (always enclosed in square brackets)
        // arrays are blocks of static memory, which sizes are determined at the compile time,
        // therefore the element field of an array must be a constant expression.
        ColourCouter ( "~~~~~ Arrays:\n", F_bBLUE );
        ColourCouter ( "Same type elements can build series of elements known as arrays and every element can be referenced by adding an index to the array's unique identifier.\n\n", F_YELLOW );
    }
    catch ( const std::exception& )
    {

    }
}


void print_simple_array ( int arg [], int length )
{
    std::cout << tab;
    for ( int n = 0; n < length; n++ )
    {
        std::cout << arg [n];
        if ( arg [n] < 9 ) std::cout << "   "; else std::cout << "  ";
    }
    std::cout << Nline << Nline;
}
void _07_02_InitializingArrays ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ----- initializing arrays:
        // arrays of local scope like variables are uninitialized by default
        // to explicitly initialize an array, the values must be enclosed in curly braces.
        // the number of values must not be grater than the exact number of elements in the array.
        // if the array is initialized with less, the remaining elements will be set to their default values.
        // the default value for fundamental types is zero.
        // empty curly braces are to be used to initial an array with default values.
        // with leaving square braces empty for an initialization-provided array,
        // C++ automatically assume a size for the array that matches the number of its values.
        // evolution of C++ has provided universal initialization also for arrays,
        // so equal signs in between of their declarations and identifiers aren't needed any more.
        ColourCouter ( "----- Initialization of Arrays:\n", F_bBLUE );
        ColourCouter ( "Uninitialized arrays of local scope have undetermined values.\n\n", F_YELLOW );
        int array1 [5]; // uninitialized
        int array2 [5] = { 0,10,20,30,40 }; // explicitly initialized
        int array3 [5] = { 0,10,20 }; // remaining elements will be initialized with array's type default value
        int array4 [5] = {}; // all elements are initialized with array's type default value
        int array5 [] = { 0,10,20,30,40 }; // compiler of C++ assumes the size of array automatically
        int array6 [5] { 0,10,20,30,40 }; // universal initialization
        std::cout << "The elements of an uninitialized array (it can be inserted):" << nline;
        print_simple_array ( array1, 5 );
        std::cout << "The elements of an array with explicit initialization:" << "\t\t";
        print_simple_array ( array2, 5 );
        std::cout << "The remaining uninitialized elements of an array:" << "\t\t";
        print_simple_array ( array3, 5 );
        std::cout << "Initialization of an array with default values of its elements:" << tab;
        print_simple_array ( array4, 5 );
        std::cout << "Assuming the size of an array automatically:" << "\t\t\t";
        print_simple_array ( array5, 5 );
        std::cout << "Declaring an array with the use of universal initialization:" << tab;
        print_simple_array ( array6, 5 );
    }
    catch ( const std::exception& )
    {

    }
}


void _07_03_AccessingValues ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ----- accessing the values of an array:
        // the value of any element in an array can be accessed just like the value of regular variable of the same type.
        // Note syntax: name[index]
        ColourCouter ( "----- Accessing the values of an array:\n", F_bBLUE );
        ColourCouter ( "Elements of an array can be accessed by their indices.\n\n", F_YELLOW );
        int a_array [5] {};
        std::cout << "The array's elements are (automatically initialized):" << "\t\t";
        print_simple_array ( a_array, 5 );
        a_array [0] = 11;
        a_array [2] = 33;
        a_array [4] = 55;
        std::cout << "The array's elements are (after assignment):" << "\t\t\t";
        print_simple_array ( a_array, 5 );

        //! - in addition:
        // exceeding the valid (defined) range of array indices is syntactically (compiler doesn't cause any error) correct,
        // but it can cause error at runtime and the reason for this being allowed will be seen in pointers chapter.
        // giving heed to the different uses that brackets [] have concerning arrays is also important. (define and access time)
        // following comes some expansion on valid operations with arrays.
        ColourCouter ( "More on arrays, their indices and some other valid operations:\n", F_bYELLOW );
        int b_array [5] {}; // first use of brackets: in declaration to specify the size
        b_array [1] = 22; // second use of brackets: to access an element of the array
        int a { 3 };
        b_array [0] = a;
        b_array [a] = 33;
        int b { b_array [a + 1] }; // equivalent: int b {0};
        b_array [b_array [a] / 11] = b_array [2] + 5; // equivalent: b_array[3] = 5;
        std::cout << "The array's elements are (after some valid operation):" << "\t\t";
        print_simple_array ( b_array, 5 );
        int result {};
        for ( int n = 0; n < 5; n++ )
        {
            result += b_array [n];
        }
        std::cout << "Subtraction of all the array's elements are:" << "\t\t\t\t" << result << nline << nline;
    }
    catch ( const std::exception& )
    {

    }
}


void print_bidimensional_array ( int arg [] [5], int width, int height )
{
    std::cout << tab;
    for ( int n = 0; n < width; n++ )
    {
        for ( int m = 0; m < height; m++ )
        {
            std::cout << arg [n] [m];
            if ( arg [n] [m] < 9 ) std::cout << "   "; else std::cout << "  ";
        }
        std::cout << Nline << tab;
    }
    std::cout << Nline;
}
// depth parameter: to represent a simple array in a table (bidimensional):
// explanation in multidimensional arrays section
void print_simple_array_bidimensional ( int arg [], int length, int depth = 0 )
{
    std::cout << tab;
    for ( int n = 0; n < length; n++ )
    {
        if ( depth != 0 )
            if ( ( n != 0 ) && ( n % ( length / depth ) ) == 0 )
                std::cout << nline << tab;
        std::cout << arg [n];
        if ( arg [n] < 9 ) std::cout << "   "; else std::cout << "  ";
    }
    std::cout << Nline << Nline;
}
void _07_04_MultidimensionalArrays ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ----- multidimensional arrays:
        // arrays with more than one dimension can be described as 'arrays of arrays'.
        // a bidimensional array can be described as a two-dimensional table made of elements, all of the same uniform data type.
        // with each additional dimension for an array, the number of its indices is going to be added to, and with it the amount of needed memory is also increases exponentially
        // multidimensional arrays are just an abstraction for the programmers, since the same result can be achieved with a simple array, by multiplying its indices.
#define HEIGHT 3 // using defined constants for better readability and easiness of later changes in one place
#define WIDTH 5 // the same
        ColourCouter ( "----- Multidimensional arrays:\n", F_bBLUE );
        ColourCouter ( "Can be described as 'arrays of arrays'.\n\n", F_YELLOW );
        int bidimensional_array [HEIGHT] [WIDTH] {}; // declaration of a bidimensional array of 3 per 5 elements of type int
        bidimensional_array [0] [2] = 13; // to reference to the element vertically first and horizontally third
        std::cout << "The bidimensional arrays's elements are:" << nline;
        print_bidimensional_array ( bidimensional_array, HEIGHT, WIDTH );

        //! - in addition:
        // a simple array can replace every multidimensional array by multiplying the needed indices. (multidimensional is just an abstraction for programmers.)
        // the only and useful difference is the depth of every imaginary dimension of an multidimensional array, which compiler automatically remembers.
        ColourCouter ( "Representing a bidimensional array with a simple array:\n", F_bYELLOW );
        int equivalent_simple_array [HEIGHT*WIDTH] {}; // equivalent to bidimensional_array (3*5=15)
        int o { 1 };
        for ( int n = 0; n < HEIGHT; n++ )
        {
            for ( int m = 0; m < WIDTH; m++ )
            {
                // both piece of code produce the same result:
                bidimensional_array [n] [m] = o; // using a bidimensional array
                equivalent_simple_array [n * WIDTH + m] = o; // using a simple array
                ++o;
            }
        }
        std::cout << "The bidimensional arrays's elements are:" << nline;
        print_bidimensional_array ( bidimensional_array, HEIGHT, WIDTH );
        std::cout << "The simple arrays's elements are (same result is achieved):" << nline;
        print_simple_array ( equivalent_simple_array, HEIGHT* WIDTH );
        std::cout << "The simple arrays's elements are (same result is achieved plus printing bidimensional):" << nline;
        print_simple_array_bidimensional ( equivalent_simple_array, HEIGHT* WIDTH, 3 );
    }
    catch ( const std::exception& )
    {

    }
}


void _07_05_ArraysAsParameters ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ----- arrays as parameters:
        // C++ language passes the address of an array to a function.
        // in practice this has the same effect as passing the entire block of memory, while being more efficient and much faster.
        // to accept an array as parameter for a function, the parameters can be declared as the array type but with empty brackets, omitting the actual size of the array, thus the format is: base_type parameter_name[]
        // for a function to accept an array as parameter, the parameter must be declared as the type of the array but with empty brackets [], and with this the actual array size is omitted.
        // Note format: base_type parameter_name[]
        // Note syntax: void procedure (int arg[])  --accepts an array of type int as parameter
        // Note calling format: function_identifier ( array_identifier ) --without brackets
        ColourCouter ( "----- Arrays as parameters:\n", F_bBLUE );
        ColourCouter ( "In C++ the address of an array can be passed to a function.\n\n", F_YELLOW );
        int first_array [] { 5, 10, 15 };
        int second_array [] { 2, 4, 6, 8, 10 };
        std::cout << "Passing two simple arrays as argument to an earlier defined function:" << nline;
        print_simple_array ( first_array, 3 );
        print_simple_array ( second_array, 5 );

        //! - in addition:
        // a function can also have a multidimensional array as parameter.
        // Note the format for tridimensional arrays: base_type parameter_name[] [depth] [depth]
        // Note syntax: void procedure (int myarray[][depth][depth])
        // for the compiler to determines the depth of each additional dimension, the size of all dimensions after the first one is necessary. (just first twin brackets stays empty)
        // explanation behind is, that for historical reasons, arrays can't be directly copied, therefore all arrays after passing as arguments lose one dimension, and the actual passed is just a pointer.
        // for this to be really understood, a clear understanding in pointer section helps a lot.
        int another_array [2] [5] { 1, 3, 5, 7, 9, 2, 4, 6, 8, 10 };
        std::cout << "Passing a bidimensional array as argument of an earlier defined function:" << nline;
        print_bidimensional_array ( another_array, 2, 5 );
    }
    catch ( const std::exception& )
    {

    }
}


void print_library_array ( std::array<int, 3> arg )
{
    std::cout << tab;
    for ( int element : arg )
        std::cout << element << tab;
    std::cout << Nline << Nline;
}
void _07_06_LibraryArrays ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ----- library arrays:
        // all the arrays up until now were directly implemented as language features and inherited from C Language.
        // while they are great features, the restriction on copy and decay into pointers make them suffer from an excess of optimization.
        // to over come some of these issues, C++ provides an alternative array type, a type template (a class template in fact) as a standard container, defined in header <array>.
        // this alternative operates similar to built-in one, exception is that the expensive copying of entire block of memory is allowed and it decays into pointers by means of its member data only when explicitly told to do so.
        // in practice the main difference lays on the declaration and the additional inclusion of needed header.
        // classes and containers will be explained later.
        ColourCouter ( "----- Library arrays:\n", F_bBLUE );
        ColourCouter ( "To introduce an alternative for overcoming the issues with built-in C++ language arrays.\n\n", F_YELLOW );
        std::cout << "A built in array in practice:" << nline << tab;
        int built_in_array [] { 10, 20, 30 };
        for ( int i = 0; i < 3; i++ )
            ++built_in_array [i];
        for ( int element : built_in_array ) // range-based for loop
            std::cout << element << tab;
        std::cout << nline;
        //
        std::cout << "A library array in practice:" << nline << tab;
        std::array<int, 3> library_array { 10, 20, 30 };
        for ( int i = 0; i < library_array.size (); i++ ) // Note the easiness of accessing the size of the library array
            ++library_array [i];
        for ( int element : library_array )
            std::cout << element << tab;
        std::cout << nline;
        std::cout << "The same library array passed as argument:" << nline;
        print_library_array ( library_array );
    }
    catch ( const std::exception& )
    {

    }
}


void print_simple_array_of_characters ( char arg [], int length )
{
    for ( int n = 0; n < length; n++ )
    {
        std::cout << arg [n]; // printing characters as a word in a loop
    }
    std::cout << Nline << Nline;
}
void _08_01_CharacterSequences ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ~~~~~ character sequences:
        // while string class is a powerful feature to handle and manipulate strings,
        // they can aslo be represented by plain arrays of a character type, since they are also sequences of characters
        // by convention, the end of strings represented in character sequences is signalled by null character with literal value \0.
        // the capacity of the array doesn't need to be fully exhausted.
        ColourCouter ( "~~~~~ Character Sequences:\n", F_bBLUE );
        ColourCouter ( "Since strings are sequences of characters, plain character type arrays can also represent them.\n\n", F_YELLOW );

        //! ####################################################################
        //! ----- initialization of null-terminated character sequences:
        // arrays of characters are ordinary arrays with the same rules, so the initialization can be done just like any other array.
        // the second way to initialize an array of character is to directly use string literals.
        // string literals, as introduced earlier, are specified by enclosing the text in double quotes (").
        // string literals or literal constants are of type null-terminated arrays of characters, this means that null character automatically appear at the end of their strings.
        // note that the talk here is about the initialization of the arrays in the declaration time.
        // in fact because the string literals are regular arrays, they have the same restriction,
        // therefore they can only be used at declaration time.
        // to assign a new value to an array containing a sequence of character, each element of the array needs to be assigned a value separately.
        ColourCouter ( "----- Initialization of null-terminated character sequences:\n", F_bBLUE );
        ColourCouter ( "Arrays of characters and their different initializations.\n\n", F_YELLOW );
        // normal initialization of a null-terminated character sequence using an array (needs null character at the end)
        char the_word_hello_1 [] { 'H','e','l','l','o','\0' };
        // initialization of a null-terminated character sequence with a string literal using an array
        char the_word_hello_2 [] { "How are you?" };
        std::cout << "First array's string (initialized normally):" << nline << tab;
        print_simple_array_of_characters ( the_word_hello_1, 6 );
        std::cout << "Second array's string (initialized by string literals):" << nline << tab;
        print_simple_array_of_characters ( the_word_hello_2, 13 );
        the_word_hello_1 [0] = 'B';
        the_word_hello_1 [1] = 'y';
        the_word_hello_1 [2] = 'e';
        the_word_hello_1 [3] = '\0';
        std::cout << "New string assigned to each elements of first array is:" << nline << tab;
        print_simple_array_of_characters ( the_word_hello_1, 4 );

        //! ####################################################################
        //! ----- strings and null-terminated character sequences:
        // C-strings describe plain arrays with null-terminated character sequences, which is the typical types to represents strings in C language.
        // natural way to represent strings in C++ language is still C-strings,
        // therefore string literals still always produce null-terminated character sequences and not string objects.
        // both representations for strings (C-string and library string) coexist in standard library, and most functions with strings requirement are overloaded to support both.
        // for example: cin and cout both support null-terminated sequences directly (direct extraction and insertion just like strings).
        // the main difference between C-strings and library strings:
        // arrays have fixed size that need to be specified either implicit or explicitly in the declaration time (the size of arrays is determined on compilation)
        // while no size specified, strings are simply strings, since strings have a dynamic size determined during runtime.
        ColourCouter ( "----- Strings and null-terminated character sequences:\n", F_bBLUE );
        ColourCouter ( "In standard library both representations of strings (C-string and library string) coexist.\n\n", F_YELLOW );
        ColourCouter ( "A demonstration that use both representations:\n", F_bYELLOW );
        char question_1 [] { "What is your name?" };
        std::string question_2 { "Where do you live?" };
        char answer_1 [80];
        std::string answer_2;
        std::cout << question_1 << nline << tab << "- ";
        std::cin >> answer_1;
        std::cout << question_2 << nline << tab << "- ";
        std::cin >> answer_2;
        std::cout << nline << "Hello, " << answer_1 << " from " << answer_2 << "!" << nline << nline;

        //! - in addition:
        // in any case, null- terminated character sequences and strings are easily transformed from and to one another.
        // null-terminated character sequences can be transformed into strings implicitly.
        // transformation of strings into null-terminated character sequences can happen with string's member functions c_str or data and both are equivalent.
        ColourCouter ( "Null-terminated character sequences and strings are easily transformed from or to one another.\n", F_bYELLOW );
        char a_c_string [] { "some text" };
        std::string a_string = a_c_string; // implicit transformation into library string
        std::cout << "A string in C-string representation:" << "\t\t\t\t\t" << a_c_string << nline;
        std::cout << "The same string transformed into library string representation:" << "\t\t" << a_string << nline;
        std::cout << "The same string inserted as C-string representation by using c_str:" << tab;
        std::cout << a_string.c_str () << nline; // print as a C-string
        std::cout << "The same string inserted as C-string representation by using data:" << tab;
        std::cout << a_string.data () << nline << nline; // print as a C-string
    }
    catch ( const std::exception& )
    {

    }
}


void _09_01_PointersBasics ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ~~~~~ Pointers:
        // variables identifiers give to program the ability to access locations in memory, without the need to care about the physical address of the data in the memory.
        // for a C++ program, succession of memory cells, each one byte in size and with a unique address is known as memory.
        // the order of these memory cells allows the data representations larger than one byte to occupy memory in cells with consecutive addresses.
        // the locations of these cells can easily located by the means of their unique addresses.
        // declaration of a variable provides needed memory for its value on a specific location with a unique address.
        // active decision on the exact storage address of a variable is fortunately left to the environment (generally an OS) where the C++ program runs, and it happens on runtime.
        // it may be useful for a C++ program to obtain the exact address of a variable in the runtime to access the relevant data cells at a certain position, which happens with the help of pointers.
        ColourCouter ( "~~~~~ Pointers:\n", F_bBLUE );
        ColourCouter ( "To obtain the address of a variable at runtime in order to access its relative data sells which are at a certain position.\n\n", F_YELLOW );

        //! ####################################################################
        //! ----- reference operator (&):
        // the ampersand sign (&) preceding the variable identifier can be used to obtain the address of it.
        // pointers are a kind of variable that can store the address of other variables.
        // for a language like C++ with a lot of uses in low-level programming pointers are a powerful feature.
        // Note reference operator (&) itself can be read as "address of"
        ColourCouter ( "----- Reference operator:\n", F_bBLUE );
        ColourCouter ( "The reference operator (&) can be used to obtain the address of the variable identifier.\n\n", F_YELLOW );
        int variable { 25 };
        int* pointer { &variable }; // declaring and assigning the address of a variable to a pointer
        int variable2 = variable; // normal assignment
        std::cout << "Stored address of the variable in the pointer is:" << tab << pointer << nline << nline;

        //! ####################################################################
        //! ----- dereference operator (*):
        // to give it a more simple description, pointers point to the variable whose address they store.
        // an interesting property of pointers is, that by preceding the pointer identifier with asterisk sign (*),
        // pointers can be used to access the variable they point to directly.
        // Note dereference operator itself (*) can be read as "value pointed to by"
        // since reference and dereference operators are complementary, identified opposite meaning to know is:
        // an address obtained with ampersand (&) can be dereferenced with asterisk (*)
        ColourCouter ( "----- Dereference Operator (*):\n", F_bBLUE );
        ColourCouter ( "The dereference operator can be used to access the variable directly which the pointers point to.\n\n", F_YELLOW );
        variable2 = *pointer; // 'variable2' equal to value pointed to by 'pointer'
        std::cout << "The value pointed to by the pointer and accessed directly by the dereference operator is: " << variable2 << nline << nline;

        //! ####################################################################
        //! ----- declaring pointers:
        // when it comes to different types of variable, a pointer has different properties,
        // due to its ability to directly refer to the value of the variable it points to.
        // the type needs to be known for dereferencing and it can happens in the moment of declaration of the pointer.
        // Note syntax: type* name;
        // the type is not the type of the pointer itself but the type of the data pointed to.
        // asterisk (*) in declaration is just a part of the pointer's type compound specifier,
        // therefore it is to be differentiate with dereference operator.
        // all pointers types likely to occupy the same amount of memory, since the pointer size in memory depends on the platform where the program runs.
        ColourCouter ( "----- Declaring Pointers:\n", F_bBLUE );
        ColourCouter ( "Different properties of the pointers when they directly refer to the values of variables justify the need to declare them with the needed specified data type.\n\n", F_YELLOW );

        int* number;
        char* character;
        double* decimal;

        //! - in addition:
        // an example:
        // setting values to variables indirectly through pointers (using the memory location addresses of variables)
        // a pointer can point to different variables during its life time.
        int firstValue, secondValue;
        int* myPointer;
        myPointer = &firstValue;
        *myPointer = 10; // assigning a value to the variable pointed by the pointer
        myPointer = &secondValue;
        *myPointer = 20; // the same
        ColourCouter ( "Indirectly setting values to variables through pointers.\n", F_bYELLOW );
        std::cout << "The value of firstValue is:" << tab << firstValue << nline;
        std::cout << "The value of secondValue is:" << tab << secondValue << nline << nline;

        //! - in addition:
        // when declaring multiple pointers, each individual one needs an asterisk (*) in its declaration.
        // spaces aren't matter and it is even better to declare each pointer in a different statement.
        // to get familiar with the way to read each statement, pay attention to their following comments.
        ColourCouter ( "A more elaborated demonstration on setting new values:\n", F_bYELLOW );
        firstValue = 5; secondValue = 15;
        std::cout << "First value is:" << "\t\t" << firstValue << nline << "Second value is:" << tab << secondValue << nline << nline;
        int* p1, *p2; // asterisk (*) for each pointer -due to the precedence rules-
        p1 = &firstValue;  // address of
        p2 = &secondValue; // the same
        *p1 = 10;          // value pointed to by
        *p2 = *p1;         // the same
        p1 = p2;           // assignment of pointers values (the addresses)
        *p1 = 20;          // value pointed to by
        std::cout << "Indirectly modified values through pointers are:" << nline;
        std::cout << "First value is:" << "\t\t" << firstValue << nline << "Second value is:" << tab << secondValue << nline << nline;
    }
    catch ( const std::exception& )
    {

    }
}


void _09_02_PointersAndTypes ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ----- pointers and arrays:
        // the concepts of arrays and pointers are related, and they work very much like each other to their first elements.
        // implicitly the conversion of an array to a pointer of the proper type is possible.
        // whereas 'theArray' can never be assigned anything and will always represent the same block of 20 elements of type int.
        ColourCouter ( "----- Pointers and arrays\n", F_bBLUE );
        ColourCouter ( "Concepts of arrays and pointers are related.\n\n", F_YELLOW );
        int theArray [20];
        int* thePointer;
        // after the next assignment, the array and the pointer are equivalent with very similar properties.
        // main difference is the possibility of new assignment of a different address to the pointer.
        thePointer = theArray; // valid
        //theArray = thePointer; // not valid

        //! - in addition:
        // example: mixing arrays and pointers
        // the same set of operations with the same meaning are supported with both pointers and arrays.
        // as already explained brackets ([]) specify the index of an element of an array.
        // these brackets known as offset operator are in fact a dereferencing operator,
        // therefore they dereference the variable they follow like the operation of asterisk (*) to the variable it precedes,
        // and in addition they add the number between the brackets to the address.
        // for example:
        //a[5]=0; // a [offset of 5]
        //*(a+5)=0; // pointed to by (a+5)
        // no matter 'a' is an array or a pointer, these two expressions are equivalent and valid.
        // in case of an array, the array identifier refers to first element, just like a pointer.
        int numbers [10];
        int* p;
        p = numbers;
        *p = 10;
        p++; *p = 20;
        p = &numbers [2]; *p = 30;
        p = numbers + 3; *p = 40;
        p = numbers; *( p + 4 ) = 50;
        std::cout << "The values set to the array using pointers are (array way print):" << nline << tab;
        for ( int i = 0; i < 5; i++ )
        {
            std::cout << numbers [i] << tab; // array way
        }
        std::cout << nline << "The values set to the array using pointers are (pointer way print):" << nline << tab;
        for ( int i = 0; i < 5; i++ )
        {
            std::cout << *( p + i ) << tab; // pointer way
        }
        std::cout << nline << nline;

        //! ####################################################################
        //! ----- pointer initialization:
        // the initialization of pointers can be introduced at the very moment of their declaration.
        // what is going to be initialized is the address to be pointed to and never the value stored in memory.
        // pointers can be initialized not only to the address of a variable, but also to the value of another pointer or array.
        ColourCouter ( "----- Pointer Initialization:\n", F_bBLUE );
        ColourCouter ( "Like variables initialization of pointers can be done at the moment of declaration.\n\n", F_YELLOW );
        int myVar { 0 };            // a variable
        int* myPtr1 = &myVar; // point to address of variable
        int myArr [31] { 0 };     // an array
        int* myPtr2 = myPtr1; // point to the value of a pointer
        int* myPtr3 = myArr;  // point to an array
        std::cout << "First pointer's value and pointed value (points to a variable) are:" << nline << tab << myPtr1 << tab << *myPtr1 << nline;
        std::cout << "Second pointer's value and pointed value (points to first pointer) are:" << nline << tab << myPtr2 << tab << *myPtr2 << nline;
        std::cout << "First pointer's value and pointed value (points to an array) are:" << nline << tab << myPtr3 << tab << *myPtr3 << nline << nline;

        //! ####################################################################
        //! ----- pointer arithmetics:
        // when conduction arithmetical operations on pointers, there are these differences to pay attention to:
        // first of all only addition and subtraction operations are allowed.
        // even these two allowed operations have slightly different behaviours, since types have different sizes,
        // and this size is going to be added or subtracted to the stored address value in pointers.
        // on the other hand the exact size of data types is also dependent on the system.
        ColourCouter ( "----- Pointer arithmetics:\n", F_bBLUE );
        ColourCouter ( "Arithmetical operations on pointers result in different behaviours and outputs than regular integer types.\n\n", F_YELLOW );
        char Char { 'A' };
        char* ptrChar { &Char };
        short Short { 4454 };
        short* ptrShort { &Short };
        long Long { 44544454 };
        long* ptrLong { &Long };
        std::cout << "The address values and the values pointed to before the addition:" << nline;
        std::cout << "myChar is:" << tab << ptrChar << tab << *ptrChar << nline;
        std::cout << "myShort is:" << tab << ptrShort << "\t\t\t\t" << *ptrShort << nline;
        std::cout << "myLong is:" << tab << ptrLong << "\t\t\t\t" << *ptrLong << nline;
        ++ptrChar;
        ++ptrShort;
        ++ptrLong;
        std::cout << "The address values and the values pointed to after the addition:" << nline;
        std::cout << "myChar is:" << tab << ptrChar << tab << *ptrChar << nline;
        std::cout << "myShort is:" << tab << ptrShort << "\t\t\t\t" << *ptrShort << nline;
        std::cout << "myLong is:" << tab << ptrLong << "\t\t\t\t" << *ptrLong << nline << nline;

        // combinations: dereference operator with both prefix or postfix versions of increment or decrement operators
        // increment/decrement operator: higher priority (left-to-right)
        // reference/dereference operator: lower priority (right-to-left)
        // as always parenthesis reduce confusion and add legibility to expressions.
        // postfix: *p++ = *q++;   is roughly equivalent to:   *p = *q; ++p; ++q;
        ColourCouter ( "Four possible combinations of dereference operator with both prefix or postfix versions of increment or decrement operators:\n", F_bYELLOW );
        int ptrVar { 4454 };
        int* ptr;
        int temp;
        std::cout << "The stored value in the variable is:" << tab << ptrVar << nline;
        ColourCouter ( "The temp variable is storage of each operation, so it could be shown.\n\n", F_bCYAN );
        ptr = &ptrVar;
        std::cout << "ptr value is:" << "\t\t\t\t" << ptr << nline;
        temp = *ptr++;   // same as *(ptr++): increment pointer, and dereference un-incremented address
        std::cout << "ptr after incrementation *ptr++ is:" << tab << ptr << nline;
        std::cout << "result of incrementation *ptr++ is:" << tab << temp << nline << nline;
        //
        ptr = &ptrVar;
        std::cout << "ptr value is:" << "\t\t\t\t" << ptr << nline;
        temp = *++ptr;   // same as *(++p): increment pointer, and dereference incremented address
        std::cout << "ptr after incrementation *++ptr is:" << tab << ptr << nline;
        std::cout << "result of incrementation *++ptr is:" << tab << temp << nline << nline;
        //
        ptr = &ptrVar;
        std::cout << "ptr value is:" << "\t\t\t\t" << ptr << nline;
        temp = ++*ptr;   // same as ++(*p): dereference pointer, and increment the value it points to
        std::cout << "ptr after incrementation ++*ptr is:" << tab << ptr << nline;
        std::cout << "result of incrementation ++*ptr is:" << tab << temp << nline << nline;
        //
        ptr = &ptrVar;
        std::cout << "ptr value is:" << "\t\t\t\t" << ptr << nline;
        temp = ( *ptr )++; // dereference pointer, and post-increment the value it points to.
                         // without parenthesis the incrementation happens to the pointer itself too.
        std::cout << "ptr after incrementation (*ptr)++ is:" << tab << ptr << nline;
        std::cout << "result of incrementation (*ptr)++ is:" << tab << temp << nline << nline;

    }
    catch ( const std::exception& )
    {

    }
}


void increment_all_PointersUsed ( int* start, int* stop )
{
    int* current = start;
    while ( current != stop )
    {
        ++( *current );
        ++current;
    }
}
void print_all_ConstantPointersUsed ( const int* start, const int* stop )
{
    const int* current = start;
    while ( current != stop )
    {
        std::cout << *current << Tab;
        ++current;
    }
    std::cout << Nline << Nline;
}
void _09_03_PointersAndLiterals ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ----- pointers and constants:
        // to access variables by pointers read-only, it is enough to qualify the type pointed to as constant.
        // pointers to non-const are implicitly convertible to pointers to constant, but as a safety feature, the other way around isn't possible.
        ColourCouter ( "----- Pointers and Constants:\n", F_bBLUE );
        ColourCouter ( "To access a variable for just reading purposes, not modifying.\n\n", F_YELLOW );
        int x;
        int y { 10 };
        const int* const_ptr { &y }; // points to a variable but in a constant-qualified manner
                                     // allowed (non-const type (address of) to constant):
                                     // the type of y is int* and is assigned to a pointer of type constant int*.
        x = *const_ptr; // ok: reading p
        //*const_ptr = x; // error: modifying constant-qualified
        std::cout << "The value accessed by a constant-qualified pointer is:" << tab << x << nline << nline;

        //! - in addition:
        // one of the use cases: function parameters can include pointers to constant elements to prevent modifications on the passed arguments.
        // to be more clear: pointers that are constant type qualified (point to constant content), can still point to new addresses, but they can not modify the pointed content.
        ColourCouter ( "Two functions with normal and constant-qualified pointers as parameters:\n", F_bYELLOW );
        int numbers_array [] { 10,20,30 };
        std::cout << "The array elements are:" << nline << tab;
        for ( int i = 0; i < 3; i++ )
        {
            std::cout << numbers_array [i] << tab;
        }
        std::cout << nline << nline;
        std::cout << "The array elements after execution of the functions are:" << nline << tab;
        increment_all_PointersUsed ( numbers_array, numbers_array + 3 );
        print_all_ConstantPointersUsed ( numbers_array, numbers_array + 3 );

        //! - in addition:
        // constant pointers:
        // a second dimension to the constness of pointers is that the pointers themselves can also be constant.
        // to define a pointer as constant the 'const' keyword needs to be appended to the pointed type (after the asterisk).
        // the syntaxes concerning pointers and their constant aspects are tricky,
        // therefore it needs a grow experience to recognise best suited use cases.
        // a sooner deep understanding of constness, pointers and references is of course better.
        ColourCouter ( "Pointers themselves can also be constant.\n", F_bYELLOW );
        int x_var { 0 };
        int         *       ptr1 { &x_var }; // non-const pointer to non-const int
        const int   *       ptr2 { &x_var }; // non-const pointer to constant int
        int         * const ptr3 { &x_var }; // constant pointer to non-const int
        const int   * const ptr4 { &x_var }; // constant pointer to constant int
        std::cout << "The value of variable referenced four times:" << "\t\t" << *ptr1 << tab << *ptr2 << tab << *ptr3 << tab << *ptr4 << nline;

        //! - in addition:
        // the above syntaxes get even more complex by considering,
        // that the pointed type can either be preceded or followed by the constant qualifier and both exact same meaning.
        // the order of constant qualifier like the surrounding spaces of asterisk is simply a matter of style.
        // on the internet the discussion on the merits of each still goes on intensely.
        const int* ptr5 { &x_var }; //      non-const pointer to constant int
        int const* ptr6 { &x_var }; // also non-const pointer to constant int
        std::cout << "The value of variable referenced again two times:" << tab << *ptr5 << tab << *ptr6 << nline << nline;


        //! ####################################################################
        //! ----- pointers and string literals:
        // additional to direct insertion into cout, initialization of strings and arrays of character,
        // string literals can be accessed directly by pointers.
        // another description: arrays of proper array type to contain all its character plus null-character and each element of type constant char.
        // each element of a character sequence is accessible by a pointer that point to the sequence, exactly like it is accessible using the same array way.
        // this is because of the before described fact, that arrays and pointers behave essentially the same way in expressions.
        ColourCouter ( "----- Pointers and string literals:\n", F_bBLUE );
        ColourCouter ( "By using pointers string literals can be accessed directly.\n\n", F_YELLOW );
        const char* Ptr_StrLit { "Hello!" }; // a pointer pointed to an array of respected literal representation
        std::cout << "Accessing a character sequence directly in usual array and pointers way:" << nline << tab;
        for ( int i = 0; i <= 5; i++ )
        {
            std::cout << Ptr_StrLit [i]; // accessing in usual array way
            if ( Ptr_StrLit [i] != '!' )
                std::cout << '_';
        }
        std::cout << "\t\t";
        for ( int i = 0; i <= 5; i++ )
        {
            std::cout << *( Ptr_StrLit + i ); // accessing in usual pointer way
            if ( *( Ptr_StrLit + i ) != '!' )
                std::cout << '_';
        }
        std::cout << nline << nline;
    }
    catch ( const std::exception& )
    {

    }
}


void increase ( void* data, int p_size )
{
    if ( p_size == sizeof ( char ) )
    {
        char* p_char;
        p_char = static_cast<char*>( data );
        ++( *p_char );
    }
    if ( p_size == sizeof ( int ) )
    {
        int* p_int;
        p_int = static_cast<int*>( data );
        ++( *p_int );
    }
}
void _09_04_MoreOnPointers ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ----- pointers to pointers:
        // C++ provides the use of pointers that point to pointers.
        // the result is a defined pointer that in different levels of indirection points to data or even other pointers.
        // the declaration syntax simply requires an additional asterisk for each level of indirection.
        ColourCouter ( "----- Pointers to pointers:\n", F_bBLUE );
        ColourCouter ( "In C++ pointers are allowed to point to pointers.\n\n", F_YELLOW );
        int int_var;
        int* int_ptr;
        int** int_ptr_ptr; // a pointer to pointer
                           // useable in three different levels of indirection and each one correspond to a different value.
        int_var = 89;
        int_ptr = &int_var;
        int_ptr_ptr = &int_ptr;
        std::cout << "Pointed values in three different levels of indirection are:" << nline << tab;
        std::cout << int_ptr_ptr << tab; // first level, the address of the pointer to pointer
        std::cout << *int_ptr_ptr << tab; // second level, the address of pointed pointer
        std::cout << **int_ptr_ptr << nline << nline; // third level, the value being pointed by pointed pointer

        //! ####################################################################
        //! ----- void pointers: (a special type of pointer)
        // as already pointed out void represents absence of type,
        // therefore void pointers point to values without any infos about their exact type,
        // therefore also an undetermined length and undetermined dereferencing properties.
        // Note: void pointers great flexibility: being able to point to any type, additionally:
        // void pointers great limitation: absence of direct dereference of pointed data (logical: no type to reference to)
        // to be able to dereference void pointers, they need to be transformed into some other concrete data type.
        // one of void pointers uses may be to pass generic argument as parameters to a function.
        // already described sizeof operator is integrated in C++, returns the size of its argument in bytes,
        // which for non-dynamic data types it is a constant value.
        ColourCouter ( "----- Void pointers:\n", F_bBLUE );
        ColourCouter ( "Void pointers are able to point to values without any infos on their exact types.\n\n", F_YELLOW );
        char a { 'A' };
        int b = 24;
        std::cout << "Values ready to be passed are:" << nline << tab << a << tab << b << nline;
        increase ( &a, sizeof ( a ) );
        increase ( &b, sizeof ( b ) );
        std::cout << "Increased values in the function with a void pointer as parameter are:" << nline;
        std::cout << tab << a << tab << b << nline << nline;

        //! ####################################################################
        //! ----- invalid pointers and null pointers:
        // while pointers are meant to point to valid addresses, they can actually point to any address,
        // including addresses that refer to no valid element like uninitialized variables and non-existent elements of an array.
        // this fact introduces invalid pointers in C++, which means that a pointer can take any address value,
        // no matter whether there actually something is stored or not.
        ColourCouter ( "----- Invalid pointers and null pointers:\n", F_bBLUE );
        ColourCouter ( "In C++ pointers can point to any address values, no matter their storage state.\n\n", F_YELLOW );
        // the two pointer definitions below, while not pointing to any address with value, aren't cause of any compile error.
        // but dereferencing them is a different story and causes runtime error or undefined behaviours
        int* pp; // uninitialized pointer (local variable) (no error)
        int anArray [10];
        int* qq { &anArray [20] }; // element out of bound (no error)
        //std::cout << pp << nline; // error: used without initialization
        std::cout << "The pointed address is (out of bound of the array addresses):" << tab << qq << nline << nline;

        //! - in addition:
        // as in past sections somewhat described: null pointers: pointers can NULL, 0 or nullptr to represent that they point to nowhere.
        // null pointers satisfy the need of explicit point to nowhere, and not just an invalid address.
        // all null pointers compare equal to other null pointers.
        // Note as already described: void pointers: point to somewhere without a specific type
        int* pp2 { 0 };
        int* qq2 { nullptr };
        int* rr { NULL }; // quite usual in old codes: using the defined constant NULL to refer to null pointer value
                         // NULL is defined in several headers of the standard library
                         // it is also defined as an alias of some null pointer constant such as 0 or nullptr
        std::cout << "The pointed addresses of defined null pointers are:" << nline;
        std::cout << tab << pp2 << tab << qq2 << tab << rr << nline << nline;
    }
    catch ( const std::exception& )
    {

    }
}


int addition_Function ( int a, int b )
{
    return ( a + b );
}
int subtraction_Function ( int a, int b )
{
    return ( a - b );
}
int operation_FunctionCaller ( int x, int y, int ( *FuncToCall ) ( int, int ) )
{
    // calling the wished function using its stored executable address which is passed as argument
    int g;
    g = ( *FuncToCall ) ( x, y );
    return g;
}
void _09_05_PointersToFunctions ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ----- pointers to functions:
        // in C++ operations with pointers to function are allowed, they point to the executable function code,
        // and their typical uses are to call a function and to pass a function as an argument to another function.
        // pointers arithmetic aren't performable on the pointers to functions.
        // regular function declaration is the source for declaring pointers to function,
        // except that the pointer identifier is followed by an asterisk * and enclosed in parenthesis ().
        // parenthesis are needed and alter the higher precedence of function parameters.
        ColourCouter ( "----- Pointers to functions:\n", F_bBLUE );
        ColourCouter ( "Pointers to functions are introduced to call a function or to pass a function as argument to another function.\n\n", F_YELLOW );
        int a, b, c, d;
        int ( *minus )( int, int ) = subtraction_Function; // a pointer to function (two parameters and direct initialization)
        a = subtraction_Function ( 10, 5 ); // calling the function itself
        b = minus ( 15, 5 ); // calling the pointer to function
        c = operation_FunctionCaller ( 10, 7, addition_Function ); // passing the function itself
        d = operation_FunctionCaller ( 34, c, minus ); // passing the pointer to function
        std::cout << "First result (function itself):" << "\t\t\t" << a << nline;
        std::cout << "Second result (pointer to function):" << "\t\t" << b << nline;
        std::cout << "Third result (passing the function itself):" << tab << c << nline;
        std::cout << "Forth result (passing pointer to function):" << tab << d << nline << nline;
    }
    catch ( const std::exception& )
    {

    }
}


void _10_01_DynamicMemory ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ~~~~~ dynamic memory:
        // to this point of tutorial all needed memory was determined by defining the variables before the program execution.
        // there may be cases to determine the memory needs of a program on runtime, like when needed memory depends of user input.
        // for these cases C++ integrates operators 'new' and 'delete' to dynamically allocate memory.
        ColourCouter ( "~~~~~ Dynamic memory:\n", F_bBLUE );
        ColourCouter ( "To allocate memory during runtime, C++ language integrates the operators 'new' and 'delete'.\n\n", F_YELLOW );

        //! ####################################################################
        //! ----- operators new and new[]:
        // operator new is to be used to allocate dynamic memory.
        // Note syntax:
        // pointer = new type
        // pointer = new type [number_of_elements]
        // declaring sequences of more than one elements required to use the second declaration syntax,
        // where the number of elements (an integer value) is to specified within brackets.
        // the result is a pointer to the beginning of the new allocated block of memory.
        ColourCouter ( "----- Operators new and new[]:\n", F_bBLUE );
        ColourCouter ( "The integrated operator new is to be used to allocate dynamic memory.\n\n", F_YELLOW );
        int* ptr1;
        ptr1 = new int; // allocate memory to contain one single element of type int
        *ptr1 = 555;
        std::cout << "The address and value of dynamic allocated memory are:" << nline << tab << ptr1 << tab << *ptr1 << nline;
        // the substantial difference between declaring normal arrays and allocating dynamic memory is,
        // that allocation happens during runtime and the size is any variable value.
        char* ptr2;
        ptr2 = new char [6]; // allocate a block (an array) of char elements
        for ( int i = 0; i <= 5; i++ )
        {
            *( ptr2 + i ) = '$'; // accessing in usual pointer way
        }
        std::cout << "The address of first element of the dynamic allocated memory is:" << nline << tab << ptr2 << nline;
        std::cout << "The elements stored in the allocated memory are:" << nline << tab;
        for ( int i = 0; i <= 5; i++ )
        {
            std::cout << ptr2 [i] << tab; // accessing in usual array way
        } std::cout << nline << nline;

        //! - in addition:
        // the requested dynamic memory is going to be allocated by the system from memory heap.
        // computer memory is a limited resource and can be exhausted,
        // therefore system doesn't guarantee the success of any allocations using operator new.
        // C++ standard mechanisms to check the success of allocation:
        //! first mechanism: handling exceptions
        // when allocation fails, an exception of type bad-alloc is thrown.
        // if this exception isn't handled by a specific handler, the program execution is terminated.
        // an exception of type bad-alloc (even at declaration line) will be thrown when the allocation fails,
        // then this exception is the default one used by the operator new.
        // more on exceptions and handling them is going to come in later sections.
        //! second mechanism: known as 'nothrow'
        // inclusion of the specific nothrow object at declaration line and handling the state of the result pointer,
        // which, after its declaration with this object, when allocation fails, has nullpter as value,
        // and as result program continues its normal execution. 'nothrow' is declared in header <new>.
        // Note despite simplicity 'nothrow' is likely to produce less efficient code than exceptions,
        // since it implies explicit check on pointer value after each and every allocation,
        // thus, unless it is a critical allocation, the exception mechanism is preferred.
        int* ptr3;
        ptr3 = new ( std::nothrow ) int [5] { 0 };
        if ( ptr3 == nullptr )
            std::cout << "Error assigning memory!" << nline;
        else
        {
            std::cout << "The address of first element of the dynamic allocated memory is:" << nline << tab << ptr3 << nline;
            std::cout << "The elements stored in the allocated memory are:" << nline << tab;
            for ( int i = 0; i <= 4; i++ ) { std::cout << ptr3 [i] << tab; } std::cout << nline << nline;
        }

        //! ####################################################################
        //! ----- operators delete and delete[]:
        // since the allocated memory in most cases is only needed during specific periods of time within a program, with the operator delete, it can be freed once it is no longer needed, so that the memory become available for other requests of dynamic memory.
        // syntax:
        // delete pointer; (releases the memory of a single element allocated with new)
        // delete[] pointer; (there is no need to introduce the number of elements, the brackets are enough)
        // the second statement releases the memory allocated for the arrays of elements using new and a size in brackets.
        // the value passed as argument to delete shall be a pointer to a memory block previously allocated with new or a null pointer (in case of a null pointer, delete produces no effect).
        ColourCouter ( "----- Operators delete and delete[]:\n", F_bBLUE );
        ColourCouter ( "The integrated operator delete is to be used to free the allocated dynamic memory.\n\n", F_YELLOW );
        std::string _instring;
        int _number, _index;
        int* _pointer;
        std::cout << "How many numbers would you like to type?" << tab;
        std::getline ( std::cin, _instring );
        std::stringstream ( _instring ) >> _number;
        while ( _number > 2500 )
        {
            std::cout << "Come on! You don't want to enter so many numbers! Think and try again." << tab;
            std::getline ( std::cin, _instring );
            std::stringstream ( _instring ) >> _number;
        }
        if ( _number > 25 )
            std::cout << "Really? You do want to enter so many numbers? :| OK!" << nline;
        _pointer = new( std::nothrow ) int [_number]; // entered by the user and not a constant
        if ( _pointer == nullptr )
            std::cout << nline << "Error: memory could not be allocated!" << nline;
        else
        {
            std::cout << nline;
            for ( _index = 0; _index < _number; _index++ )
            {
                std::cout << "Enter number:" << tab;
                std::cin >> _pointer [_index]; // pointer way: *(_pointer + _index)
            }
            std::cout << nline << "You have entered:" << nline;
            for ( _index = 0; _index < _number; _index++ )
                std::cout << _pointer [_index] << tab; // pointer way: *(_pointer + _index)
            std::cout << nline;
            delete [] _pointer;
        }
        /*

        */
        //ColourCouter ( "\n", F_bBLUE );
        //ColourCouter ( "\n\n", F_YELLOW );
        //ColourCouter ( "\n", F_bYELLOW );
        //ColourCouter ( "\n", F_bCYAN );
        //! - in addition:

        // working with memory and allocating it during runtime, does always require great attention, specially when there is a need that the user introduces the inputs for it, since there is always a great chance that one user out there do bring not only the program also the running platform of the program in an unstable state.
        // it is always considered a good practice for programs to be able to handle the failures to allocate memory, not only by catching the proper exception, but also by controlling the user input and checking the pointer value (nothrow).


        // dynamic memory in C language
        // C++ integrates the operators new and delete for allocating dynamic memory, but these were not available in C language.
        // instead, C language, used library solution with the functions malloc, calloc, realloc, and free, defined in the header <cstdlib> (known as <stdlib.h> in C language).
        // these functions are also available and can be used to allocate and deallocate dynamic memory.
        // note, though, that the memory blocks allocated with these functions aren't necessarily compatible with those returned with new operator, thus they should not be mixed and each one should be handled with its own set of functions and operators.
    }
    catch ( const std::exception& )
    {

    }
}


struct movies_t
{
    std::string title;
    int year;
} mine, yours;
void printMovie ( movies_t movie )
{
    std::cout << movie.title << " (" << movie.year << ")" << Nline;
}
// ********************************************************************************
/// <summary>
/// Data structures
/// </summary>
/// <created>ʆϒʅ,08.09.2018</created>
/// <changed>ʆϒʅ,11.09.2018</changed>
// ********************************************************************************
void DataStructures ()
{
    // the functions and structures used in this section are defined above it.
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ~~~~~ data structures:
        // a data structure is a group of data elements grouped together under one name.
        // these data elements, known as members, can have different types and different lengths.
        // syntax:
        // struct type_name {
        // member_type1 member_name1;
        // member_type2 member_name2;
        // .
        // .
        // } object_names;
        // where optional field object_names can be a set of valid identifiers for objects that have the type of this structure.
        // in cases that the optional field object_names is specified, the field type_name becomes optional: struct requires either a type_name or at least on name in object_names, but not necessarily both.
        // after declaration of an object using the determined structure type, its members can be accessed directly by using a dot (.) between the object name and the member name.
        // subsequently the members can be operated with like standard variables of their respective types.
        // the structures can be passed to functions like standard variables.
        // one of the features of data structures is the ability to refer to both their members individually or to the entire structure as whole. in both cases using the same identifier: the name of the structure.
        // each member of a defined object has the data type corresponding to the member it refers to in the data structure.
        std::cout << nline << "~~~~~ Data structures:" << nline;
        std::cout << "A group of data elements which can have different types and different lengths, grouped together under one name is called a data structure." << nline << nline;
        struct product
        {
            int weight;
            double price;
        } pear, grape; // demonstration of how to use the optional field object_names
        product apple; // after declaration used just like any other type
        product banana, melon;
        apple.price = 2.5;
        grape.weight = 4;
        melon.price = 4.3;
        pear.weight = 3;
        // a demonstration with structure types in action
        std::string strTemp;
        mine.title = "2001 A Space Odyssey";
        mine.year = 1968;
        std::cout << "Enter the title of your favourite movie: ";
        std::getline ( std::cin, yours.title );
        std::cout << "Enter its release year: ";
        std::getline ( std::cin, strTemp );
        std::stringstream ( strTemp ) >> yours.year;
        std::cout << nline << "My favourite movie is:" << nline << tab;
        printMovie ( mine );
        std::cout << "And yours is:" << nline << tab;
        printMovie ( yours );
        // structures are types, therefore using them as the type of arrays to construct tables or databases is another feature.
        std::cout << nline << "Filling and using an array which has an data structure as its type:" << nline;
        movies_t films [3];
        for ( int i = 0; i < 3; i++ )
        {
            std::cout << "Enter title: " << tab;
            std::getline ( std::cin, films [i].title );
            std::cout << "Enter year: " << tab;
            std::getline ( std::cin, strTemp );
            std::stringstream ( strTemp ) >> films [i].year;
        }
        std::cout << nline << "You have entered these movies:" << nline;
        for ( int i = 0; i < 3; i++ )
            printMovie ( films [i] );

        //! ####################################################################
        //! ----- pointers to structures:
        // structures can be pointed to by their own type of pointers just like any other type.
        // the arrow operator (->):
        // the arrow operator is a dereference operator that is used exclusively with pointers to objects that have members.
        // this operator serves to access the member of an object directly form its address.
        // a summarization of possible combinations of operators for pointers and for structure members:
        // ------------------------------------------------------------------
        // Expression | What is evaluated                        | Equivalent
        // ------------------------------------------------------------------
        // a.b        | member b of object a                     |
        // ------------------------------------------------------------------
        // a->b       | member b of object pointed to by a       | (*a).b 
        // ------------------------------------------------------------------
        // *a.b       | value pointed to by member b of object a | *(a.b)
        // ------------------------------------------------------------------
        std::cout << nline << "----- Pointers to structures:" << nline;
        std::cout << "Structures can be pointed to by their own type of pointers." << nline << nline;
        movies_t aMovie;
        movies_t* ptrMovie; // a pointer to point to objects of structure type movies_t
        ptrMovie = &aMovie;
        std::cout << "Pointing to and accessing an object which has structure as type:" << nline;
        std::cout << "Enter title: " << tab;
        std::getline ( std::cin, ptrMovie->title ); // for all purposes, equivalent to: (*ptrMovie).title
        std::cout << "Enter year: " << tab;
        std::getline ( std::cin, strTemp );
        std::stringstream ( strTemp ) >> ptrMovie->year;
        std::cout << nline << "You have entered:" << nline;
        std::cout << ptrMovie->title << " (" << ptrMovie->year << " )" << nline;
        // note that:
        // *ptrMovie.title which is rather equivalent to *(ptrMovie.title) in the case above, would access the value pointed by a hypothetical pointer member called 'title' of the structure object 'ptrMovie', which is not the case, since 'title' is not a pointer type.

        //! ####################################################################
        //! ----- nesting structures:
        // structures can also be nested, so an element of an structure is itself another structure.
        std::cout << nline << "----- Nesting structures:" << nline;
        std::cout << "To introduce elements in a structure that themselves are also structures." << nline << nline;
        struct friends_t
        {
            std::string name;
            std::string email;
            movies_t favorite_movie;
        } maria, charlie;
        friends_t* ptrFriends = &charlie;
        maria.name = "Marie";
        maria.email = "maria@gmail.com";
        maria.favorite_movie.title = "The Matrix";
        maria.favorite_movie.year = 1999;
        charlie.name = "Charlie";
        ptrFriends->email = "charlie@gmail.com";
        charlie.favorite_movie.title = "Blade Runner";
        charlie.favorite_movie.year = 1982; // refer to the same member as the next expression
        ptrFriends->favorite_movie.year = 1982; // refer to the same member as the next expression
        ( *ptrFriends ).favorite_movie.year = 1982;
        std::cout << "A demonstration of nesting structures:" << nline;
        std::cout << maria.name << nline;
        std::cout << maria.email << nline;
        printMovie ( maria.favorite_movie );
    }
    catch ( const std::exception& )
    {

    }
}


// ********************************************************************************
/// <summary>
/// Other data types
/// </summary>
/// <created>ʆϒʅ,11.09.2018</created>
/// <changed>ʆϒʅ,18.09.2018</changed>
// ********************************************************************************
void OtherDataTypes ()
{
    try
    {
        ColourCouter ( "--------------------------------------------------", F_bRED );
        ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

        //! ####################################################################
        //! ~~~~~ other data types:
        // 
        std::cout << nline << "~~~~~ Other data types:" << nline;
        std::cout << "In the past sections, a lot of types have been introduced and there is even more about them." << nline;

        //! ####################################################################
        //! ----- type aliases (typedef / using):
        // in C++ any valid type either fundamental or compound can be aliased, which is a different name and then it can be referred to by it, which is its another identifier.
        // once the aliases are defined, they can be used in any declaration like any other valid type.
        //- the first syntax (inherited from the C language):
        // typedef existing_type new_type_name;
        //- second syntax introduced in C++:
        // using new_type_name = exising_type;
        std::cout << nline << "----- Type aliases (typedef / using):" << nline;
        std::cout << "To introduce different names for any valid type, so they could be used as another identifier for them." << nline;
        typedef char C; // obvious
        typedef unsigned int WORD; // alias WORD as unsigned int
        typedef char* pChar; // alias pChar as char*
        typedef char field [50]; // alias field as char[50]
        C myChar, anotherChar, *pTc1;
        WORD myWord;
        pChar ptc2;
        field name;
        using C2 = char;
        using WORD2 = unsigned int;
        using pChar2 = char*;
        using field = char [50];
        // both ways of definition define semantically equivalent aliases, the only difference being that typedef has certain limitation in the realm of templates, which means that using is more generic but typedef has longer history and probably more common in the existing code.
        // the purposes:
        // reducing the length of long or confusing type names
        // most useful as tools to abstract programs from the underlying types they use (i.e. to easily replace the types used in a program in a later version)

        //! ####################################################################
        //! ----- unions:
        // unions allow one portion of memory to be accessed as different date types. while its declaration is similar to the one of structures, its functionality is totally different.
        // syntax:
        // union type_name {
        // member_type1 member_name1;
        // member_type2 member_name2;
        // .
        // .
        // } object_names;
        // this creates a new union type, identified by type_name, in which all its members occupy the same physical space in the memory, and the size of this type is the size of the largest member element.
        // this means that the modification of one member in an union is going to affect all of its member,
        // therefore it is not possible to store different values for each member in an union in a way that each member is independent of the others.
        std::cout << nline << "----- Unions:" << nline;
        std::cout << "To introduce one portion of memory to be occupied by all members with different data types." << nline;
        union myTypes_t
        {
            char c;
            int i;
            float f;
        } myTypes;
        myTypes.c = 'A';

        // one of the uses of a union is to be able to access a value either in its entirety or as an array or structure of similar elements.
        // the exact alignment and order of the members of a union in memory depends on the system, with the possibility of creating portability issues.
        union mix_t
        { // assumptions:
            int l;      // 4 byte (entirety access)
            struct
            {
                short hi; // 2 byte (access in structure form)
                short lo; // 2 byte
            } s;
            char c [4];  // 4*1 byte (access in array form)
        } mix;

        //! ####################################################################
        //! ----- anonymous unions:
        // when unions are members of a class or structure, they can be declared with no names, with which they become anonymous unions, and their members are directly accessible from objects by their member name.
        // remember that the members of an union share a space in the memory so they can never have different values simultaneously.
        std::cout << nline << "----- Anonymous unions:" << nline;
        std::cout << "By declaring an union without any name in a class or structure, they become anonymous unions." << nline;
        struct book1_t
        {
            char title [50];
            char author [50];
            union
            {
                float dollar;
                int yen;
            } price; // a regular union in a structure
        } book1;
        struct book2_t
        {
            char title [50];
            char author [50];
            union
            {
                float dollar;
                int yen;
            }; // an anonymous union in a structure
        } book2;
        // accesses:
        book1.price.dollar = 3.4;
        book2.dollar = 3.4;

        //! ####################################################################
        //! ----- enumerated types (enum):
        // enumerated types are types that are defined with a set of custom identifiers, known as enumerators, as possible values.
        // objects of these enumerated types can take any of these enumerators as value.
        // syntax:
        // enum type_name {
        // value1
        // value2
        // .
        // .
        // } object_names;
        // objects (variables) of this type can directly be instantiated as object_names.
        std::cout << nline << "----- Enumerated types (enum):" << nline;
        std::cout << "To introduce a set of custom identifiers, known as enumerators, as possible values." << nline << nline;
        // a new data type from scratch without any base on the existing data types:
        enum colours_t { black, blue, green, cyan, red, purple, yellow, white };
        colours_t myColour;
        myColour = blue;
        if ( myColour = green )
            myColour = red;
        std::cout << "The value stored in the 'myColour' variable is:" << nline << tab << myColour << nline;

        // values of enumerated types declared with enum are implicitly convertible to an integer type and vice versa.
        // in fact, these values are always assigned an integer value internally, to or from which they can be implicitly converted.
        // if it is not specified the equivalent integer value to the first possible value is zero (0), the equivalent to the second is one (1) and so on.
        // any of the possible values in the enumerated type can be specified an integer value, and if the constant value that follows it, itself isn't given an integer value, it is automatically assumed to be the same value plus one.
        enum months_t
        {
            January = 1, February, March, April,
            May, June, July, August,
            September, October, November, December
        } y2k;
        y2k = January;
        std::cout << "The value stored in the 'y2k' variable is:" << nline << tab << y2k << nline;
        // the implicit conversation works both ways:
        // a value of type months_t can be assigned a value of 1 (equivalent to January)
        // or an integer variable can be assigned a value of January (equivalent to 1)

        //! ####################################################################
        //! ----- enumerated types with enum class:
        // in C++, real enum types can be created with enum class (or enum struct), which are then neither convertible to int and neither have enumerator values of type int, but of the enum type itself, thus preserving the type safety.
        // each of the enumerator values of an enum class needs to be scoped into its type (this is also possible with enum type, but it is only optional).
        // enumerated types declared with the enum class have also more control over their underlying type;
        // it may be any integral data type such as char, short, unsigned int, which essentially serve to determine the size of the type, which is specified with an colon and the underlying type following the enumerated type.
        std::cout << nline << "----- Enumerated types with enum class:" << nline;
        std::cout << "To introduce real enum types that preserve safety." << nline << nline;
        enum class Colours { black, blue, green, cyan, red, purple, yellow, white };
        Colours myColour2;
        myColour2 = Colours::blue; // needed scoping into the type
        if ( myColour2 == Colours::green )
            myColour2 = Colours::red;
        std::cout << "The value stored in the 'myColour2' variable is:" << nline << tab << static_cast<int>( myColour2 ) << nline;
        enum class EyeColour :char { blue, green, brown }; // + underlying type (a distinct type with the size of a char)
    }
    catch ( const std::exception& )
    {

    }
}