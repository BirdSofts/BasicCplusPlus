// --------------------------------------------------------------------------------
/// <summary>
/// _5_OtherLanguageFeatures.cpp
/// </summary>
/// <created>ʆϒʅ,26.06.2019</created>
/// <changed>ʆϒʅ,02.07.2019</changed>
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
    // -- a signed type converted to an unsigned corresponds to its 2's complement bitwise representation,
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


class TypeOne
{
private:
  short entity;
public:
  TypeOne ( short a ) : entity ( a ) {};
  int get () { return entity; }
};
class TypeTwo
{
private:
  int element;
public:
  TypeTwo ( int a ) : element ( a ) {};
  // constructor conversion
  TypeTwo ( TypeOne& obj ) { element = obj.get (); };
  // assignment conversion
  TypeTwo& operator= ( TypeOne& obj ) { element = obj.get (); return *this; }
  // type-cast operator conversion
  operator TypeOne() { return TypeOne ( element ); }
  int get () { return element; }
};
void _21_03_ImplicitConversionsWithClasses ()
{
  try
  {
    //! ####################################################################
    //! ----- implicit conversion with classes:
    // for classes to manage implicit conversions, there are three member functions introduced:
    // -- Single-argument constructors: a particular type can implicitly be converted to initialize an object.
    // -- Assignment operator: a particular type can implicitly be converted on assignments.
    // -- Type-cast operator: conversions can implicitly be granted to a particular type.
    // Note: syntax of type cast operator:
    // operator destination_class_type () { return destination_class_type (); }
    // as above clearly obvious and additionally to see in the example, this feature introduces a peculiar syntax,
    // in which the operator is followed by the destination type and an empty set of parentheses,
    // on the other hand, since the return type is the destination type, it is not specified before the 'operator' keyword.
    ColourCouter ( "----- Implicit conversions with classes:\n", F_bBLUE );
    ColourCouter ( "Classes introduces three member functions to handle implicit conversions.\n\n", F_YELLOW );
    TypeOne first ( 10 );
    TypeTwo second { first }; // calls constructor
    std::cout << "Constructor conversion:" << "\t\t" << second.get () << nline;
    TypeTwo third { 100 };
    third = first; // calls assignment
    std::cout << "Assignment conversion:" << "\t\t" << third.get () << nline;
    TypeTwo forth { 1000 };
    first = forth; // calls type-cast operator
    std::cout << "Type-cast operator conversion:" << tab << first.get () << nline << nline;
  }
  catch ( const std::exception& )
  {

  }
}


class TheTypeOne
{
private:
  short entity;
public:
  TheTypeOne ( short a ) : entity ( a ) {};
  int get () { return entity; }
};
class TheTypeTwo
{
private:
  int element;
public:
  TheTypeTwo ( int a ) : element ( a ) {};
  // constructor conversion
  explicit TheTypeTwo ( TheTypeOne& obj ) { element = obj.get (); };
  // assignment conversion
  TheTypeTwo& operator= ( TheTypeOne& obj ) { element = obj.get (); return *this; }
  // type-cast operator conversion
  operator TheTypeOne() { return TheTypeOne ( element ); }
  int get () { return element; }
};
int square ( TheTypeTwo obj ) { int tmp { obj.get () }; return ( tmp *= tmp ); }
void _21_04_KeywordExplicit ()
{
  try
  {
    //! ####################################################################
    //! ----- keyword explicit:
    // C++ language grants one implicit conversion on the moment of calling a function for each argument,
    // which can be problematic considering classes, since the outcome may not be the intended one at all.
    // in the example, which builds upon the example of the section 'implicit conversion with classes,
    // when omitting the 'explicit' keyword preceded the special member function constructor,
    // the function, which takes an argument of type 'TheTypeTwo', can as well be called using an object of type 'TheTypeOne'.
    // while it may even be intended, it can be prevented qualifying the affected constructor with the keyword 'explicit'.
    // note that explicit constructors can not be called using assignment-like syntax.
    // additionally type-cast member functions can also be explicit defined,
    // which similar to explicit constructors prevents the implicit conversions to destination type.
    ColourCouter ( "----- Keyword explicit:\n", F_bBLUE );
    ColourCouter ( "Classes can introduce 'explicit' keyword to handle implicit conversions by special means.\n\n", F_YELLOW );
    TheTypeOne first ( 10 );
    //TheTypeTwo second = first; // not valid since constructor is explicit defined
    TheTypeTwo second { first };
    TheTypeTwo third { 100 };
    third = first;
    TheTypeTwo forth { 1000 };
    first = forth;
    int temp { 0 };
    //temp = square ( first ); not valid since constructor is explicit qualified
    temp = square ( third );
    std::cout << "The result of the 'square' function:" << tab << temp << nline << nline;
  }
  catch ( const std::exception& )
  {

  }
}


void _21_05_TypeCasting ()
{
  try
  {
    //! ####################################################################
    //! ----- type casting:
    // since C++ language is a strong-typed language, when it comes to conversion,
    // specially those that interpret the value differently, require an explicit conversion.
    // the already introduced inherited from C language explicit generic type-casting operators known as 'functional' and 'c-like',
    // Note syntaxes:
    // (new_type) expression
    // new_type (expression)
    // satisfy the conversion needs of most fundamental date types to and from each other.
    // on the other hand, when it comes to classes and pointers to classes,
    // these aged ways can lead to syntactically correct code that cause runtime error or unexpected result.
    // using these, unrestricted type casting indiscriminately grants converts of any pointer type to another one.
    // C++ language additionally introduces four specific casting operators, each one embeds its own characteristics,
    // and they then take control over type conversion between classes.
    // Note syntaxes:
    // dynamic_cast <new_type> (expression)
    // reinterpret_cast <new_type> (expression)
    // static_cast <new_type> (expression)
    // const_cast <new_type> (expression)
    ColourCouter ( "----- Type casting:\n", F_bBLUE );
    ColourCouter ( "The fact that C++ is a strong-type language satisfies the demand of explicit type casting in many cases.\n\n", F_YELLOW );
  }
  catch ( const std::exception& )
  {

  }
}


class Base
{
private:
  int entity;
public:
  Base ( int ent ) : entity ( ent ) {}
  virtual void dummy () { std::cout << "The Base is pointed!" << nline; }
};
class Derived :public Base
{
private:
  char element;
public:
  Derived ( char ent, int  elm ) : Base ( ent ), element ( elm ) {}
  void dummy () { std::cout << "The Derived is pointed!" << nline; }
};
void _21_06_DynamicCast ()
{
  try
  {
    //! ####################################################################
    //! ----- dynamic_cast:
    // the use case of 'dynamic_cast' border itself to pointers, void* pointers and references to classes.
    // the purpose there of is to assure that the result of conversion is a valid complete object of the destination pointer type.
    // it naturally can handle conversions from pointer-to-derived to pointer-to-base known as 'pointer upcast',
    // exactly like the allowed implicit conversion which is already introduced.
    // additionally to up-casting, it grants the process other way around known as 'pointer downcast' to polymorphic classes,
    // on the condition that the pointed object is a valid complete object of the target type.
    // in case of failure while performing the dynamic_cast on an incomplete object, a null-pointer is the result of the operation,
    // and performing impossible conversion to a reference type through dynamic_cast operator,
    // results to an exception of type bad_cast instead.
    // furthermore, this operator can handle other allowed implicit casts such as casting any pointer type to void* pointers,
    // and casting the types of null pointers to each other even between unrelated classes.
    // Note Compatibility note: to keep track of dynamic types, this type of dynamic_cast needs Run_Time Type Information (RTTI).
    // some compilers, while supporting this feature, have it as disabled by default,
    // which then needs to be enabled to properly work with these types.
    ColourCouter ( "----- dynamic_cast:\n", F_bBLUE );
    ColourCouter ( "This operator introduces different useful features when casting the types of different pointers.\n\n", F_YELLOW );
    Base* toBase_1 = new Derived ( 1, 1 );
    Base* toBase_2 = new Base ( 2 ); // an incomplete object, just the base and therefore unusable for the purpose
    toBase_1->dummy ();
    toBase_2->dummy ();
    Derived* toDerived_1 { nullptr }; // to use for down-casting
    Derived* toDerived_2 { nullptr }; // to use for down-casting
    Base* toBase_3 { nullptr }; // to use for up-casting
    toDerived_1 = dynamic_cast<Derived*>( toBase_1 ); // down casting
    toDerived_1->dummy ();
    toDerived_2 = dynamic_cast<Derived*>( toBase_2 ); // down casting
    if ( toDerived_2 != nullptr )
      toDerived_2->dummy (); // handled exception because of an incomplete object
    toBase_3 = dynamic_cast<Base*>( toDerived_1 ); // up casting
    toBase_3->dummy ();
    std::cout << nline;
  }
  catch ( const std::exception& error )
  {
    std::cout << nline << "Exception:" << error.what () << nline;
  }
}


void _21_07_StaticCast ()
{
  try
  {
    //! ####################################################################
    //! ----- static_cast:
    // through this operator upcast and downcast conversions between pointers to related classes are a possibility.
    // concerning polymorphic classes, it suffers the setback that no runtime checks are performed,
    // therefore there is no guarantee that the state of an object being converted fully matches the destination type,
    // on the other hand it doesn't incur certain type-safety overhead, from which dynamic_cast operator suffers.
    // thus while being fast, the programmer needs to ensure the safety of the performed operation.
    // the operator therefore is able to perform additional conversions on pointers to classes,
    // which are the opposite of implicitly allowed ones i.e. those that it handles as standard.
    // note that the example below uses the polymorphic classes defined in the dynamic_cast section.
    //! to conclude this section, static_cast can perform:
    // --all implicit conversions and their opposites not only to pointers to classes.
    // --operations from void* to any pointer type, guaranteeing the same pointer value as result,
    // when the obtained void* value matches to the pointer type under operation.
    // --conversions of integer or floating-point values and enum types to enum types.
    // --explicit calls to single argument constructors or conversion operators of classes.
    // --casting operations to revalue references.
    // --conversions of enum class values to integer or floating-point values.
    // --conversions of any type to valid, while evaluating and discarding the value.
    ColourCouter ( "----- static_cast:\n", F_bBLUE );
    ColourCouter ( "This operator can perform different conversion operations to a vast sphere of data types.\n\n", F_YELLOW );
    Base* toBase = new Base ( 1 ); // an incomplete object
    toBase->dummy ();
    Derived* toDerived { nullptr };
    toDerived = static_cast<Derived*>( toBase );
    //toDerived->dummy (); // note that this dereference could lead to runtime error
    std::cout << nline;
  }
  catch ( const std::exception& )
  {

  }
}


class One
{
public:
  void trier () { std::cout << "The class One!" << nline; }
};
class Two
{
public:
  void trier () { std::cout << "The class Two!" << nline; }
};
void _21_08_ReinterpretCast ()
{
  try
  {
    //! ####################################################################
    //! ----- reinterpret_cast:
    // this operator can handle the conversion of any pointer type to any other pointer type, even of unrelated classes.
    // it simply copy the value from one pointer to another as binary code,
    // no check on pointer content and pointer type is performed, and grants all pointer conversions.
    // additionally it converts pointers to or from integer types, formatting the resulted integer value platform-specific.
    // there is only one guarantee for this represented pointer through integer type result,
    // that if the destination type is spaced enough (like 'intptr_t' in heather 'stdint.h') to fully contain the interpretation,
    // it can be cast back to a valid pointer.
    // note that this operator is aimed to perform low-level operations based on reinterpreting the type's binary representation,
    // which static_cast operator isn't able to handle, and the result is then system-specific not-portable code.
    // the example below is compilable and introduces an unsafe dereference to 'second' pointer,
    // since the pointer is reinterpreted from an object with a total unrelated and likely incompatible class.
    ColourCouter ( "----- reinterpret_cast:\n", F_bBLUE );
    ColourCouter ( "To reinterpret the binary representations of the types using low-level operations.\n\n", F_YELLOW );
    One* first = new One;
    first->trier ();
    Two* second = reinterpret_cast<Two*>( first );
    second->trier (); // an unsafe dereferencing
    std::cout << nline;
  }
  catch ( const std::exception& )
  {

  }
}


void _21_09_ConstCast ()
{
  try
  {
    //! ####################################################################
    //! ----- const_cast:
    // 
    ColourCouter ( "----- const_cast:\n", F_bBLUE );
    ColourCouter ( ".\n\n", F_YELLOW );



    //ColourCouter ( "\n", F_bYELLOW );
    //ColourCouter ( "\n", F_bCYAN );
    //! - in addition:
  }
  catch ( const std::exception& )
  {

  }
}
