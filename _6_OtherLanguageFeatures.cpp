// --------------------------------------------------------------------------------
/// <summary>
/// _5_OtherLanguageFeatures.cpp
/// </summary>
/// <created>ʆϒʅ,26.06.2019</created>
/// <changed>ʆϒʅ,29.06.2019</changed>
// --------------------------------------------------------------------------------

//#include "pch.h"
#include "LearningCplusPlus.h"
#include "Console.h"


#define Tab '\t'
#define Nline '\n'

const char tab { '\t' };
const char nline { '\n' };


void _21_01_TypeConversions ()
{
  try
  {
    ColourCouter ( " -------------------------------------------------", F_bRED );
    ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

    //! ####################################################################
    //! ~~~~~ type conversions:
    // there are different ways to convert types to each other.
    ColourCouter ( "~~~~~ Type conversions:\n", F_bBLUE );
    ColourCouter ( "Introduction of different ways to convert types to or from each other.\n\n", F_YELLOW );
  }
  catch ( const std::exception& )
  {

  }
}


void _21_02_ImplicitConversion ()
{
  try
  {
    //! ####################################################################
    //! ----- implicit conversion:
    // the values of two compatible fundamental types are automatically convertible to each other.
    // this implicit conversion known as standard conversion happens at the moment of copying,
    // and allows numerical types, boolean type and some pointer types to be converted to and from each other.
    // this implicit feature from smaller types to larger compatible ones is known as promotion,
    // and the destination type is guaranteed to contain the exact same value.
    // note that, while converting between other arithmetic types, the outcome isn't always the exact value:
    // -- a signed type converted to unsigned corresponds to its 2's complement bitwise representation,
    // this means that for example -1 is converted to the largest value in destination type, -2 to the second largest and so on.
    // -- in boolean case: false is equivalent to zero and true corresponds to all the other values for numeric types,
    // additionally false is converted to null pointer for pointer types.
    // -- the decimal part is dropped and the value is truncated when converting from floating-point to an integer type,
    // on the other hand, the result is undefined, if converted value lies outside the range of representable values by the type.
    // -- in the end, the conversion between the numeric types of the same kind, while being valid,
    // the result is implementation-specific and may not be portable.
    // note that the compiler signals with a warning, when some of these conversions imply a loss of precision,
    // which then can be avoided using an explicit conversion.
    // when it comes to converting non-fundamental types, arrays and functions are implicitly converted to pointers,
    // while pointers generally grant the following conversions:
    // -- null pointers are convertible to pointers of any type, and all type of pointers can be converted to void pointers.
    // -- pointers to a derived class are convertible to pointers of an accessible and unambiguous base class,
    // and the conversion known as pointer upcast is performable not even modifying the pointer's constant or volatile qualification.
    ColourCouter ( "----- Implicit conversion:\n", F_bBLUE );
    ColourCouter ( "The values of compatible types can be automatically converted to each other at the moment of copying.\n\n", F_YELLOW );
    int int_var { 100 };
    long long_var { int_var }; // implicit conversion and initialization
    std::cout << "The converted value is:" << tab << long_var << nline;
    long_var = int_var; // implicit conversion and assignment
    std::cout << "The converted value is:" << tab << long_var << nline << nline;
  }
  catch ( const std::exception& )
  {

  }
}


void _21_03_ImplicitConversionsWithClasses ()
{
  try
  {
    //! ####################################################################
    //! ----- implicit conversion with classes:
    // 
    ColourCouter ( "----- Implicit conversions with classes:\n", F_bBLUE );
    ColourCouter ( ".\n\n", F_YELLOW );



    //ColourCouter ( "\n", F_bYELLOW );
    //ColourCouter ( "\n", F_bCYAN );
    //! - in addition:
  }
  catch ( const std::exception& )
  {

  }
}
