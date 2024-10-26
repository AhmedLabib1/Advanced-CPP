#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define TEXT_FILE_PATH "C:\\Users\\pc\\OneDrive\\Desktop\\C++ Course Level 2\\Advanced-CPP\\16) File Handling\\Data\\Data.txt"

enum option {Add = 1, View = 2};

void AddToFile(string txt, string FilePath)
{
    try{
        ofstream output(FilePath, ios::out | ios::app);
        output << txt << endl;
        output.close();
    }catch (exception& e){
        cout << "--> Standard exception: " << e.what() << endl;
    }
}

void ReadFromFile(string FilePath)
{
    ifstream input(FilePath, ios::in | ios::app);
    if (!input) cerr << "Error: Could not open the File!" << endl;

    string Line;
    while(getline(input, Line)) cout << Line << endl;

    input.close();
}

int main ()
{
    while(true)
    {
        cout << "=========================" << endl;
        cout << "1- Add new record" << endl;
        cout << "2- View records"   << endl;
        cout << "Any other key to Exit" << endl;
        cout << "=========================" << endl;


        int options;
        cin >> options;
        cin.ignore();

        switch (options)
        {
        case option::Add:{
            string Line;

            cout << "Enter line to add: " ;
            getline(cin, Line);

            if (Line == "0") return 0;
 
            AddToFile(Line, TEXT_FILE_PATH);
            break;
        }
        
        case option::View:
            cout << "\n--------- File Content ---------" << endl;
            ReadFromFile(TEXT_FILE_PATH);
            cout << "----------------------------------\n" << endl;
            break;

        default:
            cout << "Exiting..." << endl;
            return 0;
        }
    }
}