#include <iostream>

using namespace std;

int main()
{
    int res, n;
    cout << "hola, podrias ingresar un numero entero";
    cin >> n;

    res = n % 2;
    switch (res) // When iniciating a switch, is not neccesary to add ;
    {
    case 1: // To define the cases, in this line is  Case 1
            // DO NOT forget the ':'
        cout << n << "it's a unpair number\n"; // the \n is for a Enter
        break;                                 // This is to STOP the code

    case 0:

        cout << n << "This is a pair number\n";
        break;

    default: // this is a case when the data is not equal to the previous cases
        cout << "Wrong data" << endl;
        break;
    }
    return 0;
}