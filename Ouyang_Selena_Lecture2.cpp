//Selena Ouyang 
//Lecture 2
//09-16-2024

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Declaring and assigning simple data types
    int intNum = 11;
    float floatNum = 11.1;
    double doubleNum = 3.33;
    char myLetter = 'S';
    bool myBoolean = false;
    string myString = "home";

    // Outputting simple data types
    cout <<"int: " << intNum << endl;
    cout <<"float: " << floatNum << endl;
    cout <<"double: " << doubleNum << endl;
    cout <<"myLetter: " << myLetter << endl;
    cout <<"myString: " << myString << endl<< endl;

    //Comparing two characters 
    char char1 = 'A';
    char char2 = 'B';
    cout<< "A < B = " << (char1 >= char2) <<endl <<endl;

    //Perform and outputting expressions:
    cout << "2 + 3.5 = " << 2 + 3.5 << endl;
    cout << "6 / 4 +3.9 = " << 6 / 4 +3.9 << endl;
    cout << "5.4*2 - (13.6 + 18 / 2) " << 5.4*2 - (13.6 + 18 / 2) << endl;

    return 0;
}