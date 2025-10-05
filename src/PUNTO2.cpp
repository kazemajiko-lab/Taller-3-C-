#include <iostream>
int main()
{
    using namespace std;
    int fahrenheit, celsius;
    do 
    {
        cout << "INGRESE UNA TEMPERATURA EN FAHRENHEIT: " << endl;
        cin >> fahrenheit;
        celsius = ((fahrenheit - 32)*5)/9;
        cout << "LA TEMPERATURA DE " << fahrenheit << " GRADOS FAHRENHEIT" << " en grados celsius equivale a " << celsius << endl << endl; 
    } while (fahrenheit!=999);
}