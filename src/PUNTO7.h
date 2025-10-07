#include <iostream>
using namespace std;
void menu()
{
    int brochaCerda, rodillo, sellador, producto;
    cout << "Por favor indique qué productos desea comprar:\n\n";
    cout << "1. Brocha de cerdas\n";
    cout << "2. Rodillo\n";
    cout << "3. Sellador\n";
    cin >> producto;
    switch(producto)
    {
        case 1:
            cout << "Tiene un 20% de descuento";
            break;
        case 2:
            cout << "Tiene un 15% de descuento";
            break;
        case 3:
            cout << "Sin descuento";
            break;
    }
}