// --------------------------------------------------------------------------------
/// <summary>
/// _5_Classes.cpp
/// </summary>
/// <created>ʆϒʅ,18.09.2018</created>
/// <changed>ʆϒʅ,01.06.2019</changed>
// --------------------------------------------------------------------------------

//#include "pch.h"
#include "LearningCplusPlus.h"
#include "Console.h"


#define Tab '\t'
#define Nline '\n'

const char tab { '\t' };
const char nline { '\n' };


class Number
{
private:
  int entity; // by default: private members
public:
  void set_value ( int ); // declaration but not definition (prototype)
  void print ( void )
  {
    std::cout << Tab << "-Value:" << Tab << entity << Nline;
  }
  int square ( void ) { return entity * 2; } // declaration and definition
};
void Number::set_value ( int a ) // scope operator: class member is defined outside
{
  entity = a;
}
void _17_01_ClassesI ()
{
  try
  {
    ColourCouter ( " -------------------------------------------------", F_bRED );
    ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

    //! ####################################################################
    //! ~~~~~ Classes I:
    // C++ language introduces classes as an expansion to data structures,
    // additionally to data members, they can contain functions as members.
    // an instantiation of a class result in an object
    // putting the concept of classes in that of variables, classes are types and objects are variables.
    // Note keywords: classes can be defined using keywords 'class' or 'struct'
    // Note syntax:
    // class class_name {
    // access_specifier1;
    // member1;
    // access_specifier2;
    // member2;
    // ...
    // } object_names;
    // declaration body contains members (data or function declaration), also optionally access specifiers.
    // access right of members get modified using access specifiers, which precede them.
    // Note access specifiers keywords: 'private' 'protected' 'public'
    // private: accessible form the members of the same class (or their 'friends')
    // protected: additionally to that of private, members are accessible from members of their derived classes
    // public: access to members is granted from everywhere, in which the object is visible
    // the default access specifier is private,
    // which is valid for every member declared using no access specifier, that is implicitly.
    // Note considering compiler differences, explicit way is always considered a better practice.
    // note that restrictions on data members of a class prevent modifications in an unexpected way.
    // since the class's data members get instantiated to be the properties of objects,
    // from the view point of objects, no unexpected modification should happens to their properties,
    // with other words, they must have full control on the art of modification procedure.

    //! - in addition:
    // definition of a class member outside of the class itself:
    // scope operator (::) (earlier in relation to namespaces)
    // scope operator grants the same scope properties, as when the member been defined within the class definition.
    // therefore it specifies the class of the member, while being defined outside.
    // a function defined completely within the class itself is automatically considered as inline.
    // when only its definition is included within the class, compiler considers it a normal (non-inline) class member.
    // the only difference being already mentioned, the behaviour stays the same,
    // thus in the end it may come to a possible compiler optimization.
    ColourCouter ( "~~~~~ Classes I:\n", F_bBLUE );
    ColourCouter ( "Classes are an expanded concept of data structure with the ability, not only containing data members but also functions as members.\n\n", F_YELLOW );
    class Number first;
    // like data structures, dot (.) method is used to directly access data or function member of a class
    first.set_value ( 3 );
    first.print ();
    std::cout << "Of which the square is:" << tab << first.square () << nline;
    class Number second;
    second.set_value ( 5 );
    second.print ();
    std::cout << "Of which the square is:" << tab << second.square () << nline << nline;
    // object-oriented paradigms are implemented in programming using classes,
    // this means that an object instantiated from a class, has its data and function members implemented within,
    // therefore the concept reduces the passing and carrying of handlers or other state variables as arguments to functions.

    //! - in addition:
    // classes defined using keywords 'struct' or 'union':
    //-- the keyword struct:
    // same syntax as keyword 'class' is needed and the only difference is that default access specifier is 'public'.
    //-- the keyword 'union'
    // despite different concepts with that of classes defined using keywords 'class' or 'struct',
    // unions are also classes, thus hold member functions.
    // default access specifier of unions is 'public'
  }
  catch ( const std::exception& )
  {

  }
}


class numberEntity
{
  int entity;
public:
  numberEntity ( int ); // constructor prototype (only declaration)
  // the default constructor:
  numberEntity (); // overloaded constructor prototype
  void print ( void )
  {
    std::cout << Tab << "-Value:" << Tab << entity << Nline;
  }
  int square ( void ) { return entity * 2; }
};
numberEntity::numberEntity ( int a ) // constructor definition
{
  entity = a;
}
numberEntity::numberEntity () // overloaded constructor definition
{
  entity = 0;
}
void _17_02_Constructors ()
{
  try
  {

    //! ####################################################################
    //! ----- constructors:
    // a call to a function member that uses uninitialized data members, causes undetermined results,
    // which can, having the best practice, get avoided using the special member function constructor.
    // instantiation of an object automatically calls the constructor of class,
    // with the most obvious purpose, initialization of data members and allocation of the needed memory.
    // a constructor can be declared like regular functions, its identifier matches to that of the class itself,
    // while having the same structure, a constructor introduces no return type, not even void.
    // to add to the peculiarity of this special function member, a constructor can never get called explicitly,
    // therefore unlike regular functions, constructors are executed once at the instantiation moment of objects.
    ColourCouter ( "----- Constructors:\n", F_bBLUE );
    ColourCouter ( "A special function member to initialize data members or allocate memory.\n\n", F_YELLOW );
    ColourCouter ( "The class 'number' improved to introduce its constructor:\n", F_bYELLOW );
    class numberEntity first ( 2 ); // initialization at the moment of instantiation using class constructor
    numberEntity second ( 3 ); // no error, class has a constructor present, thus the 'class' keyword is optional
    first.print ();
    std::cout << "Of which the square is:" << tab << first.square () << nline << nline;

    //! ####################################################################
    //! ----- overloading constructors:
    // any regular function likewise, a constructor can be overloaded with different number or type of parameters.
    // being able to overload constructors, the default constructor can also get introduced,
    // which is the special kind, that takes no parameters.
    ColourCouter ( "----- Overloading constructors\n", F_bBLUE );
    ColourCouter ( "Constructors can also introduce different overloads.\n\n", F_YELLOW );
    numberEntity third ( 4 );
    third.print ();
    std::cout << "Of which the square is:" << tab << third.square () << nline << nline;
    ColourCouter ( "Instantiating using the default constructor:\n", F_bYELLOW );
    numberEntity forth; // Note without parenthesis
    forth.print ();
    std::cout << "Of which the square is:" << tab << forth.square () << nline << nline;

    //! - in addition:
    numberEntity fifth (); // declaration of a new function
    // Note peculiarity: default constructor is called using no parenthesis,
    // since following the object declaration with empty set of parenthesis introduces it as a new function,
    // which takes no parameters and returns a value of type class
  }
  catch ( const std::exception& )
  {

  }
}


class Circle
{
  double radius;
public:
  Circle ( double r )
  {
    radius = r;
    std::cout << "The radius of the new circle is:" << Tab << radius << Nline;
  }
  double circum () { return 2 * radius * 3.14159265; }
};
void _17_03_UniformInitialization ()
{
  try
  {

    //! ####################################################################
    //! ----- uniform initialization:
    // beside the above way to call constructors known as functional form which encloses their parameters in parenthesis, there are also other syntaxes for constructors to be called.
    // variable initialization syntax (constructors with a single parameter):
    // --class_name object_name = initialization_value;
    // uniform initialization syntax (recently introduced in C++, essentially the same as functional form, but using braces):
    // --class_name object_name {value, value, value, ...}
    // optionally, this last syntax can include an equal sign before the braces.
    std::cout << nline << "----- Uniform initialization:" << nline;
    std::cout << "There are different ways for a constructor to be called." << nline << nline;
    Circle circA ( 10.0 ); // functional form
    std::cout << "circA's circumference:" << tab << circA.circum () << nline << nline;
    Circle circB = 20.0; // assignment initialization
    std::cout << "circB's circumference:" << tab << circB.circum () << nline << nline;
    Circle circC { 30.0 }; // uniform initialization
    std::cout << "circC's circumference:" << tab << circC.circum () << nline << nline;
    Circle circD = { 40.0 }; // POD-like
    std::cout << "circD's circumference:" << tab << circD.circum () << nline;

    // an advantage of the uniform initialization is that since it uses braces, it can not be confused with function declarations,
    // and thus can explicitly be used to call the default constructor.
    numberEntity rect_test1; // default constructor called
    numberEntity rect_test2 (); // function declaration (default constructor not called)
    numberEntity rect_test3 {}; // default constructor called

    // the choice of syntax to call constructors is largely a matter of style.
    // most existing code uses the functional form.
    // even when the newer style guides suggest the use of the uniform initialization, it also has its potential pitfalls for its preference of initilizer_list as its type.
    // http://www.cplusplus.com/reference/initializer_list/initializer_list/
    /*

    */
    //ColourCouter ( "\n", F_bBLUE );
    //ColourCouter ( "\n\n", F_YELLOW );
    //ColourCouter ( "\n", F_bYELLOW );
    //ColourCouter ( "\n", F_bCYAN );
    //! - in addition:
  }
  catch ( const std::exception& )
  {

  }
}


class Rectangle_ex2
{
  int width, height;
public:
  Rectangle_ex2 ( int, int );
  int area ()
  {
    return width * height;
  }
};
Rectangle_ex2::Rectangle_ex2 ( int x, int y ) { width = x; height = y; } // the usual definition
//Rectangle_ex2::Rectangle_ex2 (int x, int y) : width (x) { height = y; } // using member initialization
//Rectangle_ex2::Rectangle_ex2 (int x, int y) : width (x), height (y) {} // the same
class Circle2
{
  double radius;
public:
  Circle2 ( double r ) :radius ( r )
  {
    std::cout << "This is the second class for circles." << Nline;
    std::cout << "The radius of the new circle is:" << Tab << radius << Nline;
  }
  double area () { return radius * radius * 3.14159265; }
};
class Cylinder
{
  Circle2 base;
  // since objects of the class Circle2 can only be constructed with a parameter,
  // Cylinder's constructor needs to call the base's constructor,
  // and the only way to do this is in the member initializer list.
  double height;
public:
  Cylinder ( double r, double h ) :base ( r ), height ( h )
  {
    std::cout << "The height of the new cylinder is:" << Tab << height << Nline;
  }
  // the use of uniform initializer syntax is also possible:
  //Cylinder (double r, double h) :base {r}, height {h} {}
  double volume () { return base.area () * height; }
};
void _17_04_MemberInitializationInConstructor ()
{
  try
  {

    //! ####################################################################
    //! ----- member initialization in constructors:
    // when a constructor is used to initialize other members, these other members can be initialized directly, without resorting to statements in its body.
    // this is done by inserting, before the constructor body, a colon (:) and a list on initializations for class members.
    // read the 'Rectangle_ex2' class and its comments.
    // in the last case, in which the constructor of the 'Rectangle_ex2' class is defined, the constructor does nothing more than initializing its members, hence empty function body
    // since members of fundamental types aren't initialized by default, it doesn't matter for them, in which way the constructor is defined,
    // but for the member objects (those whose type is a class), if they are not initialized after the colon, they are default-constructed, which means that they can only be initialized using these two ways.
    std::cout << nline << "----- Member initialization in constructors:" << nline;
    std::cout << "The process of initializing other members directly, which have been initialized using a constructor, without resorting to the statements in the body of the constructor." << nline << nline;

    // default-constructing all members of a class may or may not always be convenient:
    // this is a waste when the member then is reinitialized otherwise in the constructor.
    // in some other cases, default-construction is not even possible, when the class does not have a default constructor.
    // in these cases, members shall be initialized in the member initialization list.
    // for example: class Cylinder has a member object whose type is the Circle2 class.
    // read the 'Cylinder' class and its comments.
    Cylinder cylA { 10,20 };
    std::cout << "cylA's volume:" << tab << cylA.volume () << nline;
  }
  catch ( const std::exception& )
  {

  }
}


class Rectangle3
{
  int width, height;
public:
  Rectangle3 ( int x, int y ) :width ( x ), height ( y ) { std::cout << "The width and the height of the new rectangle are:" << Tab << width << Tab << height << Nline; }
  int area ( void ) { return width * height; }
};
void _17_05_PointersToClasses ()
{

  try
  {

    //! ####################################################################
    //! ----- pointers to classes:
    // once declared, a class becomes a valid type and can be used as the type pointed to by a pointer, thus a pointer can also point to the objects of this new type.
    // similar to plain data structures, the arrow operator (->) can be used to directly access the members of an object from a pointer.
    std::cout << nline << "----- Pointers to classes:" << nline;
    std::cout << "A defined class is also a valid type, and can be used as the type pointed to by a pointer." << nline << nline;
    //Rectangle* prect; // error: the class doesn't have any constructor
    numberEntity* prect;
    // several operator used in the example below and a guide to them
    // -----------------------------------------------
    // |expression|can be read as                    |
    // -----------------------------------------------
    // |*x        |pointed to by x                   |
    // -----------------------------------------------
    // |&x        |address of x                      |
    // -----------------------------------------------
    // |x.y       |member y of object x              |
    // -----------------------------------------------
    // |x->y      |member y of object pointed to by x|
    // -----------------------------------------------
    // |(*x).y    |equivalent to the previous one    |
    // -----------------------------------------------
    // |x[0]      |first object pointed to by x      |
    // -----------------------------------------------
    // |x[1]      |second object pointed to by x     |
    // -----------------------------------------------
    // |x[n]      |(n+1)th object pointed to by x    |
    // -----------------------------------------------
    Rectangle3 Obj1 ( 10, 11 );
    Rectangle3* pObj1, * pObj2, * pObj3;
    pObj1 = &Obj1;
    pObj2 = new Rectangle3 ( 12, 13 );
    pObj3 = new Rectangle3 [2] { {14,15},{16,17} };
    std::cout << nline << "Obj1's area:" << Obj1.area () << nline;
    std::cout << "*pObj1's area:" << pObj1->area () << nline;
    std::cout << "*pObj2's area:" << pObj2->area () << nline;
    std::cout << "pObj3[0]'s area:" << pObj3 [0].area () << nline;
    std::cout << "pObj3[1]'s area:" << pObj3 [1].area () << nline;
    delete pObj2;
    delete [] pObj3;
  }
  catch ( const std::exception& )
  {

  }
}


class CVector1
{
public:
  int x, y;
  CVector1 () {};
  CVector1 ( int a, int b ) :x ( a ), y ( b )
  {
    std::cout << "The new instance using Cartesian vector class 'CVector1' created has the values:" << Tab << a << Tab << b << Nline;
  }
  CVector1 operator + ( const CVector1& );
  CVector1 operator = ( const CVector1& );
  void printValues ()
  {
    std::cout << "The object's (a Cartesian vector) values (x and y) are:" << Tab << x << Tab << y << Nline;
  }
};
// operator overloaded as member function
CVector1 CVector1::operator + ( const CVector1& param )
{
  CVector1 temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return temp;
}
// expansion on the example: the keyword this
// very similar to what actually the compiler generates implicitly for this class for the operator=
CVector1 CVector1::operator = ( const CVector1& param )
{
  x = param.x;
  y = param.y;
  return *this;
}
class CVector2
{
public:
  int x, y;
  CVector2 () {};
  CVector2 ( int a, int b ) :x ( a ), y ( b )
  {
    std::cout << "The new instance using Cartesian vector class 'CVector2' created has the values:" << Tab << a << Tab << b << Nline;
  }
};
// operator overloaded as non-member function
CVector2 operator + ( const CVector2& Lhs, const CVector2& Rhs )
{
  CVector2 temp;
  temp.x = Lhs.x + Rhs.x;
  temp.y = Lhs.y + Rhs.y;
  return temp;
}
class Dummy
{
public:
  bool IsItMe ( Dummy& param );
};
bool Dummy::IsItMe ( Dummy& param )
{
  if ( &param == this ) return true;
  else return false;
}
class Dummy2
{
public:
  static int n;
  Dummy2 () { n++; };
};
int Dummy2::n = 0; // a static data member of a class need to be initialized somewhere outside it.
class MyClass2
{
public:
  int x;
  MyClass2 ( int val ) :x ( val ) {}
  int get1 () { return x; }
  int get2 () const { return x; } // const keyword must follows the function prototype
  const int& get3 () const { return x; }; // const member function returning a const&
  const int& get4 () { return x; }; // member function returning a const&
  int& overloadedGet () { return x; };
  const int& overloadedGet () const { return x; };
};
void print ( const MyClass2& arg )
{
  std::cout << "Taking the object as constant reference and thus read-only access as result:" << Tab << arg.get2 () << Nline << Nline;
}
template <class T> // template parameter
class aPair // serves to store two elements of any valid type
{
  T values [2];
public:
  aPair ( T first, T second ) // the constructor is defined inline within the class definition
  {
    values [0] = first;
    values [1] = second;
  }
  std::string get ()
  {
    return Tab + std::to_string ( values [0] ) + Tab + std::to_string ( values [1] ) + Nline;
  }
  T getMax ();
};
template <class T> // member function is defined outside the definition of the class template
T aPair<T>::getMax () // the T between angel brackets is a requirement. 
                      // it specifies the source of the function's template parameter which is the class template parameter.
{
  T retVal;
  retVal = values [0] > values [1] ? values [0] : values [1];
  return retVal;
}
// class template:
template <class T>
class aContainer
{
  T element;
public:
  aContainer ( T arg ) { element = arg; }
  T get () { return  element; }
  T increase () { return ++element; }
};
// class template specialization
template <>
class aContainer <char>
{
  char element;
public:
  aContainer ( char arg ) { element = arg; }
  char get () { return  element; }
  char uppercase ()
  {
    if ( ( element >= 'a' ) && ( element <= 'z' ) )
      element += 'A' - 'a';
    return element;
  }
};


// ********************************************************************************
/// <summary>
/// Classes II
/// </summary>
/// <created>ʆϒʅ,25.09.2018</created>
/// <changed>ʆϒʅ,12.01.2019</changed>
// ********************************************************************************
void ClassesII ()
{
  // the classes used in this section are defined above it.
  try
  {
    ColourCouter ( " -------------------------------------------------", F_bRED );
    ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

    //! ####################################################################
    //! ~~~~~ Classes II:
    // more on classes.
    std::cout << nline << "~~~~~ Classes II:" << nline;
    std::cout << "More on the concepts of classes comes in this section." << nline << nline;

    //! ####################################################################
    //! ----- overloading operators:
    // Classes, essentially define new types to be used in C++ code, and these new types interact with code not only by means of constructors and assignments, but also operators.
    // for fundamental arithmetic types the meaning of such operators are obvious and unambiguous but this story can change in certain class types.
    // consider these two below examples:
    std::cout << "----- Overloading operators:" << nline;
    std::cout << "In C++, most operators can be overloaded, so they could have defined behaviours for almost any type." << nline << nline;
    int a, b { 1 }, c { 2 }; // example1: operation on fundamental types
    a = b + c; // tree different variable of a fundamental type (int) have been applied addition and assignment operators
    struct myClass
    {
      std::string product;
      float price;
    } d, e, f; // example2
    //d = e+f; // compilation error, since myClass has no defined behaviour for addition operator

    // C++, however, allows most operators to be overloaded, so that their behaviour can be defined for just about any type, including classes.
    // here a list of the operators that can be overloaded:
    // ---------------------------------------------------------------------------
    //   +    -    *    /    =    <    >    +=    -=    *=    /=    <<    >>
    // ---------------------------------------------------------------------------
    // ---------------------------------------------------------------------------
    //   <<=    >>=    ==    !=    <=    >=    ++    --    %    &    ^    !    |  
    // ---------------------------------------------------------------------------
    // ---------------------------------------------------------------------------
    //   ~&=    ^=    |=    &&    ||    %=    []    ()    ,    ->*    ->    new
    // ---------------------------------------------------------------------------
    // ---------------------------------------------------------------------------
    //   delete    new[]    delete[]
    // ---------------------------------------------------------------------------
    // operators are overloaded by means of the operator functions, which are regular functions with special names.
    // the syntax is:
    // type operator sign (parameter) { /* ... body ... */ }
    // there is no obligation that the functionality of an overloaded operator bears a relation to the mathematical or usual meaning of that operator, but it is strongly recommanded.
    // example: implementing addition operator on Cartesian vectors, which are sets of two coordinates: x and y.
    CVector1 Cartesian1 ( 3, 1 );
    CVector1 Cartesian2 ( 1, 2 );
    CVector1 CartesianR_1;
    // both expressions are equivalent:
    CartesianR_1 = Cartesian1 + Cartesian2; // calling the function operator+ implicitly
    CartesianR_1 = Cartesian1.operator+( Cartesian2 ); // calling the function operator+ explicitly
    std::cout << nline << "The result of the overloaded addition operator on two Cartesian vectors is:" << tab << CartesianR_1.x << tab << CartesianR_1.y << nline;

    // a summary of the parameters needed for each of the different operators that can be overloaded, since operators can come in diverse forms.
    // guide to the table:
    // please, replace @ by the operator in each case.
    // a is an object of the class A, b is an object of the class B, c is an object of the class C
    // TYPE is just any type (that operators overloads perform the conversion to type TYPE)
    // -------------------------------------------------------------------------------------------------------------
    // | Expression | Operator                                      | Member function        | Non-member function |
    // -------------------------------------------------------------------------------------------------------------
    // | @a         | + - * & ! ~ ++ --                             | A::operator@()         | operator@(A)        |
    // -------------------------------------------------------------------------------------------------------------
    // | a@	        | ++ --                                         | A::operator@(int)      | operator@(A, int)   |
    // -------------------------------------------------------------------------------------------------------------
    // | a@b        | + - * / % ^ & | < > == != <= >= << >> && || , | A::operator@(B)        | operator@(A, B)     |
    // -------------------------------------------------------------------------------------------------------------
    // | a@b        | = += -= *= /= %= ^= &= |= <<= >>= []          | A::operator@(B)        | -                   |
    // -------------------------------------------------------------------------------------------------------------
    // | a(b,c...)  | ()                                            | A::operator()(B, C...) | -                   |
    // -------------------------------------------------------------------------------------------------------------
    // | a->b       | ->                                            | A::operator->()        | -                   |
    // -------------------------------------------------------------------------------------------------------------
    // | (TYPE) a   | TYPE                                          | A::operator TYPE()     | -                   |
    // -------------------------------------------------------------------------------------------------------------
    // note, that some operators may be overloaded in two form: either as a member function or as a non-member function.
    // examples guide:
    // the operator overloaded as a member function in class 'CVector1'
    // the operator overloaded as a non-member function in class 'CVector2'
    // in case of overloading as a non-member function, the operator function takes an object of the proper class as first argument.
    std::cout << nline << "Overloading the operator as a non-member function:" << nline;
    CVector2 Cartesian3 ( 3, 1 );
    CVector2 Cartesian4 ( 1, 2 );
    CVector2 CartesianR_2;
    // the overloaded operator is not a member of the class so explicit expression produces error:
    CartesianR_2 = Cartesian3 + Cartesian4; // implicit
    //CartesianR_2 = Cartesian3.operator+(Cartesian4); // explicit
    std::cout << nline << "The result of the overloaded addition operator on two Cartesian vectors is:" << tab << CartesianR_2.x << tab << CartesianR_2.y << nline;

    //! ####################################################################
    //! ----- the keyword this:
    // the keyword 'this' represents a pointer to the object whose member function is being executed.
    // it is used within a class's member function to refer to the object itself.
    std::cout << nline << "----- The keyword this:" << nline;
    std::cout << "To refer to the object of the class within the class's member function." << nline << nline;
    class Dummy aA;
    class Dummy* bB { &aA };
    if ( bB->IsItMe ( aA ) )
      std::cout << "Yes, &aA is bB" << nline;

    // the keyword this is also frequently used in operator= member function, that returns objects by reference.
    // expanding the example1 on Cartesian vectors, its operator= member function could be defined and used as:
    std::cout << nline << "The use of the keyword 'this' in the operator= member function:" << nline << nline;
    CVector1 Cartesian5 ( 3, 1 );
    CVector1 Cartesian6 ( 1, 2 );
    Cartesian5 = Cartesian6;
    std::cout << "And the coordination after the assignment are:" << nline;
    std::cout << "The Cartesian 5 vector:";
    Cartesian5.printValues ();
    std::cout << "The Cartesian 6 vector:";
    Cartesian6.printValues ();

    //! ####################################################################
    //! ----- static members:
    // it is possible for a class to have either data or function as static member.
    // a static class member is also known as a 'class member', since there is only one common variable for all the objects of that same class, sharing the same value.
    // for example, it may be used as a variable within a class to contain the value of a counter, that stores the number of the objects of that class, which are already allocated.
    // in fact, static members, while having properties as non-member variables, enjoy class scope.
    // for this reason and to avoid their several declarations, they can not be initialized directly in the class.
    // a static class member, since it is a common variable value for all the objects of the same class,
    // it can be referred to as a member of any objects of that class (.) or even directly by the class name (::) (of course this is only valid for the static members).
    std::cout << nline << "----- Static members:" << nline;
    std::cout << "Static members, either data of functions, are common members of a class to all the objects of that class." << nline << nline;
    Dummy2 A;
    Dummy2 B [7];
    std::cout << "Counted allocations value stored in the common data member of the class till now is:" << tab << A.n << nline; // referring by an object identifier
    Dummy2* C = new Dummy2;
    std::cout << "Counted allocations value stored in the common data member of the class till now is:" << tab << Dummy2::n << nline; // referring by the class name
    delete C;

    // classes can also have static member functions, which represent the same:
    // common members of a class to all the objects of that class.
    // while being accessed similar to members of the class, acting exactly as non-member functions.
    // and since they are like non-member functions,
    // they lack the ability to access non-static members of the class, also member variables or member functions,
    // and they can neither use the keyword 'this'.


    //! ####################################################################
    //! ----- constant member functions:
    // defining an object of a class with qualification as constant means that the access to its data member from outside is read-only as if all its data member were constant, while the constructor is still called and has modification-right on these data member.
    // properties of:
    // no modification right on non-static data members or call right on non-constant member function
    // in essence, the state of an object shan't be modified by a constant member.
    // the limitation of accessing to only constant member functions
    // non-constant objects can access both constant and non-constant member functions alike.

    std::cout << nline << "----- Constant member functions:" << nline;
    std::cout << "Defining an object of a class with qualification as constant introduces the restricted read-only access to its own data member." << nline << nline;
    // constructor on constant object
    const MyClass2 aConstantObject ( 10 );
    int temp { 0 };
    //aConstantObject.x = 20; // not valid: unmodifiable value
    temp = aConstantObject.x;
    std::cout << "Qualified read only access to data member of an object:" << tab << temp << nline;
    //temp = aConstantObject.get1 (); // not valid: member function itself needs to be specified as constant member (see get2)
    temp = aConstantObject.get2 ();
    std::cout << "A callable member function of a constant object and its return value:" << tab << temp << nline << nline;

    // note: const keyword can be used to qualify the type returned by a member function.
    // this is different and independent and has its own place in the function prototype
    temp = aConstantObject.get3 ();
    std::cout << "A callable member function of a constant object and its constant return value:" << tab << temp << nline << nline;
    //temp = aConstantObject.get4 (); // not valid: member function itself needs to be specified as constant member

    // note: the consideration should be there that the use of constant objects are perfectly common, thus the effort of declaring all members that don't modify the object as constant worth it.
    // most functions with classes as parameters take them as constant reference, therefore they can only access their constant member.
    MyClass2 aObject ( 20 );
    print ( aObject );

    // note: overloads of member functions on their constant state is possible: i.e., two member functions with identical signatures of a class, one may be in constant state and other not.
    // therefore a call from a constant object goes to the constant overload and the non-constant object call the other version.
    MyClass2 OverloadsInUse1 ( 10 );
    const MyClass2 OverloadsInUse2 ( 20 );
    OverloadsInUse1.overloadedGet () = 15; // ok: overloadedGet() returns int&
    temp = OverloadsInUse1.overloadedGet ();
    std::cout << "First overload with modification right, thus setting and getting:" << tab << temp << nline;
    //OverloadsInUse2.overloadedGet () = 25; // not valid: overloadedGet() returns const int&
    temp = OverloadsInUse2.overloadedGet ();
    std::cout << "Second overload without modification right, thus getting:" << tab << temp << nline << nline;

    //! ####################################################################
    //! ----- class templates:
    // the same as function templates, class templates allow the classes to have members that use template parameters as type.
    // if the member function is defined outside the definition of the class template, it shall be preceded with the template <...> prefix.
    std::cout << nline << "----- Class templates:" << nline;
    std::cout << "To introduce classes that are able to have members that use template parameters as type." << nline << nline;
    aPair<int> twoInteger ( 100, 75 ); // an object of the class to store two int values
    aPair<double> twoDouble ( 3.3, 2.2 ); // an object of the class to store two double values
    std::cout << "The results of maximum evaluation in the class template 'aPair':" << nline;
    std::cout << "Two integers are:" << twoInteger.get ();
    std::cout << "The max in this pair is:" << tab << twoInteger.getMax () << nline;
    std::cout << "Two doubles are:" << twoDouble.get ();
    std::cout << "The max in this pair is:" << tab << twoDouble.getMax () << nline;

    //! ####################################################################
    //! ----- template specialization:
    // to define a different implementation for a template when a specific type is passed as argument
    // for example the simple increment function on types and a special implementation on char type:
    // the syntax used for the template specialization of the example:
    // template <> class aContainer <cahr> {...};
    // empty parameter list <> is needed, since all types are known and there is no need for any template arguments for this specialization.
    // the second note is the <char> specialization parameter, which identify the type, on which the class template is specialized for.
    // this difference is also notable:
    // generic class template: template <class T> class aContainter {...};
    // the specialization of: template <> class aContainer <cahr> {...};
    // note: in declaration of a specialization, all members of the generic class even identical members must be defined again, since no inheritance happens between a generic class and its specialization.
    std::cout << nline << "----- Template specialization:" << nline;
    std::cout << "Different implementation of a template when a specific type is passed." << nline << nline;
    aContainer <int> theInt ( 7 );
    aContainer <char> theChar ( 'j' );
    std::cout << "The integer value and its increment are:" << tab << theInt.get () << tab;
    std::cout << theInt.increase () << nline;
    std::cout << "The character and its uppercase are:" << "\t\t" << theChar.get () << tab;
    std::cout << theChar.uppercase () << nline;

    //! ####################################################################
    //! ----- special members:
    // 
    std::cout << nline << "----- Special members:" << nline;
    std::cout << "." << nline << nline;




  }
  catch ( const std::exception& )
  {

  }
}
