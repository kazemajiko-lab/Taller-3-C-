#include <iostream>
using namespace std;
void mesesDelAnio()
{
    int mes;
    cout << "Ingrese un número del 1 al 12 para conocer la cantidad de días del mes correspondiente: ";
    cin >> mes;
    switch (mes)
    {
    case 1:
        cout << "Enero tiene 31 días." << endl;
        break;
    case 2:
        cout << "Febrero tiene 28 días (29 en años bisiestos)." << endl;
        break;
    case 3:
        cout << "Marzo tiene 31 días." << endl;
        break;
    case 4:
        cout << "Abril tiene 30 días." << endl;
        break;
    case 5:
        cout << "Mayo tiene 31 días." << endl;
        break;
    case 6:
        cout << "Junio tiene 30 días." << endl;
        break;
    case 7:
        cout << "Julio tiene 31 días." << endl;
        break;
    case 8:
        cout << "Agosto tiene 31 días." << endl;
        break;
    case 9:
        cout << "Septiembre tiene 30 días." << endl;
        break;
    case 10:
        cout << "Octubre tiene 31 días." << endl;
        break;
    case 11:
        cout << "Noviembre tiene 30 días." << endl;
        break;
    case 12:
        cout << "Diciembre tiene 31 días." << endl;
        break;
    default:
        cout << "Número inválido. Por favor, ingrese un número del 1 al 12." << endl;
        break;
    }
}