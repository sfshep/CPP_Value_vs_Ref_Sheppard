//Practice working the Pass by Reference &
//Dr. Tyson McMillan 11-15-2017 (Stewart Sheppard 2/10/20)
// A study in pass by referenc vs. pass by value
#include <iostream>
using namespace std;

void doubleByValue(double);  //prototype by value pass a copy of the var.
void doubleByRef(double &); // prototype & pass the memory location of var.

int main() 
{
    // Pass by VALUE numVaLue and aVaLue are different
    cout << "Pass by VALUE numValue and aValue are different." << endl ;
    double numValue = 5; //intial value of number
    cout << "\t numValue now (initial) = " << numValue << endl;  //current value
    doubleByValue(numValue);  //doube num by referenc & memory location
    cout << "\t numValue now = " << numValue << endl;  //current value
    doubleByValue(numValue); //double num by reference & memory location
    cout << "\t numValue now = " << numValue << endl; //current value
    cout << "Note how numValue remains the same with each call of function\n";
    cout << "Note the function generates a result that is different from numValue. \n";
    cout << "Therefore, numValue and aValue are different variables (not linked) to each other. \n";

//Pass by REFERENCE (e) numRef and &ARef are the same
    cout << "\nPass by REFERENCE (&) numRef and &aRef are the same." << endl;
    double numRef = 5;  //initial value of num
    cout << "\t numRef now (initial) = " << numRef << endl;  //current value
    doubleByRef(numRef); //double num by reference & memory location
    cout << "\t numRef now = " << numRef << endl; //current value
    doubleByRef(numRef); //double num by reference & memory location
    cout << "\tnumRef now = " << numRef << endl; //current value
    cout << "Note how numRef's value changes with each call of function\n";
    cout << "Note the function generates a result that is the same as numRef. \n";
    cout << "Therefore, numRef and &aRef variables (are linked) to each other via memory location.\n" ;

    /***Expand this code ****/
    //Write a function to add 1 to a number in int main() when it is passed by & reference
    //Write a function to subtract 1 to a number in int main() when it is passed by & reference
}

void doubleByValue(double aValue)
{
  aValue *= 2; //double the value of aVaLue by making a copy of it
  cout << "\t aValue now = " << aValue << endl; //current value
}


void doubleByRef(double &aRef)
{ 
  aRef *=2; //double the value of ARef at the memory address
  cout << "\t aRef now = " << aRef << endl; //current value
}