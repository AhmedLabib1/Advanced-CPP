#include <iostream>
#include <fstream>
#include <string>
#include <ios>

using namespace std;


/*
    In C++, file handling allows programs to read from or write to files stored on disk.C++
    provides the fstream library to handle files.

    <iostream>: This header provides the definitions for istream (for input) and ostream
                (for output), including cin and cout for standard input and output.

    <fstream>: This header defines ifstream (for file input), ofstream (for file output),
               and fstream (for both file input and output).

    1- ostream: Represents output streams. It is used for writing data to files or the console (e.g., std::cout).
    2- istream: Represents input streams. It is used for reading data from files or the console (e.g., std::cin).
    
    3- ofstream: A specialized version of ostream for writing to   files.
    4- ifstream: A specialized version of istream for reading from files.

    <iostream> (Header File)
        ● Classes defined in <iostream>:
            ● istream: For input operations (e.g., cin).
            ● ostream: For output operations (e.g., cout)

    <fstream> (Header File)
        ● Classes defined in <fstream>:
            ● ifstream: Derived from istream, used for input from files.
            ● ofstream: Derived from ostream, used for output to files.
            ● fstream: Combines both ifstream and ofstream, used for both reading from and writing to files.

*/
int main ()
{
    ofstream my_first_file("my_first_file.txt");
    my_first_file << "Hello World" << endl;

    if (my_first_file.is_open()) cout << "it's open"  << endl;
    else                         cout << "it's close" << endl;

    my_first_file.close();

// --------------------------------------------------------------

/*
    When you open a file in C++ using streams (ifstream, ofstream, or fstream),
    you can specify how the file should be opened, using different file modes.
    These modes are defined in the ios class (short for input-output stream)
    and control the way the file is accessed.

    Opening Modes
    =============
    1- ios::in:     Used With ifstream & fstream.
    2- ios::out:    Used With ofstream & ftream.
    3- ios::app:    Used With ofstream & fstream.
    5- ios::trunc:  Used With ofstream & fstream.
    4- ios::binary: Used With ifstream & ofstream & fstream.
*/

//? 1- ios::in (Input Mode):

//    ● Purpose: Opens the file for reading.
//    ● Usage: This mode is typically used with ifstream because it allows you to read data from the file.
//    ● Effect: If the file exists, the file is opened, and the reading starts from the beginning of the file.
//    ● std::ifstream: Opens the file in input mode (ios::in) by default. It allows reading from the file; the file must exist, or it will fail to open.
//!   Note: If the file does not exist, it will fail to open.

    ifstream client("C:\\Users\\pc\\OneDrive\\Desktop\\C++ Course Level 2\\Advanced-CPP\\16) File Handling\\Data\\Clients.txt", ios::in);

    if (!client)
    {
        cerr << "Error: Could not open the file!" << endl;
        return 1;
    }

    cout << "File opened successfully!" << endl;

    if (client.is_open())
    {
        string Line;

        while(getline(client, Line))
        {
            cout << Line << endl;
        }
    }

    cout << "\n---------------------------------------------" << endl;

    // Other way to read files but first way is the better
    if (client.is_open())
    {
        string Word;
        while(!client.eof())
        {
            client >> Word;
            cout << Word << endl;
        }
    }
    
    else 
    {
        cerr << "Error: Could not open the file for reading" << endl;
    }
    cout << "\n---------------------------------------------" << endl;

// ------------------------------------------------------------------------

//? 2- ios::out (Output Mode):

//    ● Purpose: Opens the file for writing.
//    ● Usage: This mode is typically used with ofstream because it allows you to write data to the file.
//    ● Effect: If the file exists, it will overwrite the file's contents. If the file doesn’t exist, it will be created.
//    ● std::ofstream: Opens the file in output mode (ios::out) by default. If the file exists, it overwrites the contents; if not, it creates the file.

    char Name[100];
    int ID = 0;
    int count = 5;

    ofstream Data_2("Data_2.txt", ios::out);

    cout << "Add Users Names and IDs" << endl;
    while(count--)
    {
        cin >> Name >> ID;
        Data_2 << Name << " " << ID << endl;
    }
    Data_2.close();
// ------------------------------------------------------------------------

//? 3- ios::app (Append Mode):

//    ● Purpose: Opens the file for appending data.
//    ● Usage: This mode can be used with ofstream to add data to the end of the file without modifying the existing content.
//    ● Effect: The file is opened and positioned at the end, so any new data written will be appended to the existing data. The existing content of the file is not erased.
//!   Note: If the file does not exist, it will create a new one.

    ofstream Data_3("C:\\Users\\pc\\OneDrive\\Desktop\\C++ Course Level 2\\Advanced-CPP\\16) File Handling\\output\\Clients.txt", ios::app);
    Data_3 << "\nThe Data is Finished" << endl;
    Data_3.close();
}