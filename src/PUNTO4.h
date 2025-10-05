#include <iostream>
#include <iomanip>
using namespace std;
double num1, num2, result;
double division(double numero1, double numero2)
{
    return numero1/numero2;
}
void dataEntry()
{
    cout << "**************************" << endl;
    cout << " DIVISIÓN DE DOS NUMEROS" << endl;
    cout << "**************************" << endl << endl;
    do
    {
        cout << "INGRESE UN NUMERO ENTERO O DECIMAL: " << endl;
        cin >> num1;
        cout << endl;
        cout << "INGRESE OTRO NUMERO ENTERO O DECIMAL: " << endl;
        cin >> num2;
        cout << endl;
        if  (num2!=0)
        {
            cout << "EL RESULTADO DE LA DIVISIÓN ES: " << fixed << setprecision(2) << division(num1, num2) << endl << endl;
        }
        else
        {
            cout << "**********************************************" << endl;
            cout << "EL DIVISOR NO PUEDE SER CERO" << endl;
            cout << "POR FAVOR, VUÉLVALO A INTENTAR" << endl;
            cout << "**********************************************" << endl << endl;
        }
    }
    while(num2==0);
}