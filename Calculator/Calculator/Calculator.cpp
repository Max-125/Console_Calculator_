#include <windows.h>
#include <iostream>
#include <iomanip>
#include "Header.h"
#include "Source.h"


using namespace std;

int main()
{
   
	Calculator calc;
	Scientific scien;

	//Assign calculator pointer to the simple calc object
	Calculator* calcPtr = &calc;

	bool scienActive = false;
    bool mathAreaActive = false;

    system("COLOR 2");
    cout << "Welcome to my Calculator App\n\n"
        << "This calculator has 2 modes, normal and scientific.\n"
        << "You can change it using the 'change' keyword.\n\n"
        << "This app has 2 other special keywords, result and mem.\n"
        << "result stores the result of the previous calculation.\n"
        << "mem allows you to store and access a number.\n"
        << "Both can be used instead of numbers during calculations.\n"
        << "They are both local to the mode you are using.\n";


    calcPtr->welcome();

    cout << setprecision(15);

    string input = " ";

    while (cin >> input && input != "exit")
    {
        if (input == "change")
        {
            if (scienActive)
            {
                calcPtr = &calc;
                scienActive = false;
                cout << "\nSimple Calculator Activated";
            }
            else 
            {
                calcPtr = &scien;
                scienActive = true;
                cout << "\nScientific Calculator Activated";
            }
        }

        calcPtr->parseOperation(input);
        calcPtr->welcome();
    }
    return 0;
}

