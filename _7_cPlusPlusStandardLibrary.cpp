// --------------------------------------------------------------------------------
/// <summary>
/// _7_cPlusPlusStandardLibrary.h
/// </summary>
/// <created>ʆϒʅ,07.07.2019</created>
/// <changed>ʆϒʅ,08.07.2019</changed>
// --------------------------------------------------------------------------------

//#include "pch.h"
#include "LearningCplusPlus.h"
#include "Console.h"


#define Tab '\t'
#define Nline '\n'

const char tab { '\t' };
const char nline { '\n' };


void _24_01_InputAndOutputWithFiles ()
{
  try
  {
    ColourCouter ( " -------------------------------------------------", F_bRED );
    ColourCouter ( "--------------------------------------------------\n\n", F_bRED );

    //! ####################################################################
    //! ~~~~~ input/output with files:
    // standard streams classes provided by C++ language to perform output/input operations to and from files are:
    // --ofstream: to write to files
    // --ifstream: to read from files
    // --fstream: to read and write from/to files
    // directly or indirectly the base of these classes are the classes 'istream' or 'ostream',
    // which are the same already introduced basic input/output stream classes,
    // whose objects i.e.: 'cin' and 'cout' were used in examples of this tutorials total uncounted.
    // the big difference when it comes to physical files is the needed association,
    // after which the file streams can be used exactly on the same manner as objects of i/ostream.
    // to operate on physical files the header <fstream> is to be included additionally to <iostream>.
    // the used codes in the example below is going to be explained extended in the following sections.
    ColourCouter ( "~~~~~ Input/output with files:\n", F_bBLUE );
    ColourCouter ( "The diverted file stream classes from basic i/ostream classes satisfy the purpose.\n\n", F_YELLOW );
    std::ofstream firstTXTfile;
    firstTXTfile.open ( ".\\x64\\Debug\\text.txt" );
    firstTXTfile << "An output to a text file written using standard C++ file streams.";
    firstTXTfile.close ();
  }
  catch ( const std::exception& )
  {

  }
}


void _24_02_OpeningAndClosingFiles ()
{
  try
  {
    //! ####################################################################
    //! ----- opening files:
    // an object instantiated from the standard classes described above and provided to operate on files
    // generally needs to first associate a real existing file on the physical drives.
    // the procedure being known as to open a file,
    // the resulted object wraps the opened file and represents it as a stream object within the program.
    // afterward all the performed operations on this stream object is applied to the associated physical file.
    // Note: member function syntax: stream_object_identifier.open (filename, mode);
    // --the 'filename' parameter is to be passed a string representing the name of the physical file.
    // additionally the path to the file can be included to this parameter:
    // Note: example: "..\\.\\Directory\\FileName.ext"
    // two dots (..) for one directory backward, dot (.) to set the direction forward and double backslashes (\\) as separator.
    // --the optional parameter 'mode' is passable with arguments of a combined following flags:
    // -------------------------------------------------------------------------------------------------------------------------
    // flag         representation
    // ios::in      to open for inputting
    // ios::out     to open for outputting
    // ios::binary  to set the open mode 'binary'
    // ios::ate     to set the initial position at the end of the file (by default it is at the beginning of the file)
    // ios::app     set to operate at appending mode to add to the current file content
    // ios::trunc   if an existed file is open to output, it will delete the previous file content and replace them with new one
    // -------------------------------------------------------------------------------------------------------------------------
    // note that 'ios' in table is an abbreviation for either of the streams 'ofstream', 'ifstream' and 'fstream',
    // therefore in real expressions it needs to be replaced and in case be preceded by the namespace 'std'.
    // the combination of the above flags using the bitwise operator (|) make it possible to choose different modes together.
    // Note: example of a binary file: stream_object_identifier.open ( "FileName.bin", ios::out | ios::app | ios::binary );
    // the open member functions of the classes 'ofstream', 'ifstream' and 'fstream' define the defaults of these modes,
    // if these member functions is called using just the first obligatory parameter:
    // -------------------------------
    // class      defined default mode
    // ofstream   ios::out
    // ifstream   ios::in
    // fstream    ios::in | ios::out
    // -------------------------------
    // in case of calling the open member functions of 'ifstream' and 'ofstream' passing new arguments as their second parameters,
    // their already defined default modes are going to be combined with the new ones passed.
    // on the other hand the process is in case of 'fstream' different, to be precise its defaults are only used,
    // when the calling expression provides the first mandatory parameter, that is, when the second parameter is passed,
    // the defaults provided by this member function is overridden.
    // while opened streams in binary mode operate on files independent of any format consideration,
    // non-binary known as text files need some translation due the format of some special characters like newline or carriage return.
    // using the constructors of these classes, since generally the first task of a file stream is to open a file,
    // they take exactly these two parameters and automatically open the file at the moment of instantiation
    // by calling the open member function, their destructors then close the file.
    // Note: example: std::ofstream stream_object_identifier ( "FileName.bin", ios::out | ios::app | ios::binary );
    // no matter which way a file is opened, both of these forms are valid and equivalent.
    // the member function 'is_open' returns a boolean value of true indicating,
    // whether the stream object is successfully associated an open file or false otherwise.

    //! ----- opening files:
    // an opened file in a stream object takes some resources from operating system,
    // thus after the operation with a file is done, OS needs awareness to free and set those resources available again.
    // calling the member function 'close' satisfies the purpose, flushes the buffers and closes the file opened by a stream object.
    // after closing a file using this member function, the stream object is available to open another file,
    // subsequently the closed file can be opened by other processes to operate on.
    // when a stream object is destroyed while being associated an open file,
    // the destructor automatically closes the file calling the member function 'close'.
    ColourCouter ( "----- Opening and closing files:\n", F_bBLUE );
    ColourCouter ( "For a successful operation, a file needs to probably be opened and closed.\n\n", F_YELLOW );
  }
  catch ( const std::exception& )
  {

  }
}


void _24_03_TextFiles ()
{
  try
  {
    //! ####################################################################
    //! ----- text files:
    // 
    ColourCouter ( "----- Text files:\n", F_bBLUE );
    ColourCouter ( ".\n\n", F_YELLOW );



    //ColourCouter ( "\n", F_bYELLOW );
    //ColourCouter ( "\n", F_bCYAN );
    //! - in addition:
  }
  catch ( const std::exception& )
  {

  }
}
