#include <iostream>
#include "PUNTO7.1.h"
using namespace std;
void metodoPago()
{
    cout << "1. EFECTIVO\n";
    cout << "2. TARJETA DE CŔEDITO\n";
    cin >> paymentMethod; cout << "\n";
    switch (paymentMethod)
    {
        case 1:
            cout << "TIENE UN 7% DE DESCUENTO EN EL TOTAL DE SU FACTURA\n";
            cout << "TOTAL FACTURA CON DESCUENTO: ";
            cout << totalComprasCon;
            break;
        case 2:
            cout << "NO TIENE DESCUENTO ADICIONAL\n";
            cout << "TOTAL FACTURA: ";
            cout << totalCompras;
            break;
        default:
            cout << "OPCIÓN INVÁLIDA, POR FAVOR VUÉLVALO A INTENTAR\n\n\n";
            break;
    }
}
void brochas()
{
    if (contCiclosBrochas > 1)
    {
        cout << "¿Cuántas brochas desea comprar? "; cin  >> brochaCerda;
        cout << "\nDesea seguir comprando? (S/N): "; cin >> option;
        contUniBrochas += brochaCerda;
    }
    else
    {
        cout << "Tiene un 20% de descuento\n";
        cout << "¿Cuántas brochas desea comprar? "; cin  >> brochaCerda;
        cout << "\nDesea seguir comprando? (S/N): "; cin >> option;
        contUniBrochas += brochaCerda;
    }
}
void rodillos()
{
    if (contCiclosRodillo > 1)
    {
        cout << "¿Cuántos rodillos desea comprar? "; cin >> rodillo;
        cout << "\nDesea seguir comprando? (S/N): "; cin >> option;
        contUniRodillos += rodillo;
    }
    else
    {
        cout << "Tiene un 15% de descuento\n";
        cout << "¿Cuántos rodillos desea comprar? "; cin >> rodillo;
        cout << "\nDesea seguir comprando? (S/N): "; cin >> option;
        contUniRodillos += rodillo;
    }
}
void selladores()
{
    if (contCiclosSellador > 1)
    {
        cout << "¿Cuántos rodillos desea comprar? "; cin >> sellador;
        cout << "\nDesea seguir comprando? (S/N): "; cin >> option;
        contUniSelladores += sellador;
    }
    else
    {
        cout << "No tiene descuento\n";
        cout << "¿Cuántos selladores desea comprar? "; cin >> sellador;
        cout << "\nDesea seguir comprando? (S/N): "; cin   >> option;
        contUniSelladores += sellador;
    }
}
void menu()
{
    //VARIABLE INICIALIZATION
    contCiclosBrochas =      0;
    contCiclosRodillo =      0;
    contUniBrochas =         0;
    contUniRodillos =        0;
    contUniSelladores =      0;
    precUnitBrochas =     5000;
    precUnitRodillos =    8000;
    precUnitSelladores = 12000;
    opcionValida = true;
    do
    {
        contCiclosBrochas++;
        contCiclosRodillo++;
        cout << "1. Brocha de cerdas\n";
        cout << "2. Rodillo\n";
        cout << "3. Sellador\n";
        cout << "Por favor indique qué producto desea comprar: "; cin >> producto;
        switch(producto)
        {
            case 1:
                brochas();
                break;
            case 2:
                rodillos();
                break;
            case 3:
                selladores();
                break;
            default:
                cout << "Opción inválida, vuélvalo a intentar\n\n";
                opcionValida = false;
                break;
        }
    } while(option=='S' || opcionValida == false);
    cout << "*****************************************************\n";
    totalSinBrochas    = contUniBrochas     * precUnitBrochas;
    totalSinRodillos   = contUniRodillos    * precUnitRodillos;
    totalSelladores    = contUniSelladores  * precUnitSelladores;
    totalConBrochas    = (totalSinBrochas   - ((totalSinBrochas  * 20) / 100));
    totalConRodillos   = (totalSinRodillos  - ((totalSinRodillos * 15) / 100));
    if (contUniBrochas!=0)
    {
        cout << "Brochas C/U: "         << contUniBrochas     <<     "\n";
        cout << "Brocha Prec. Unit: "   << precUnitBrochas    <<     "\n";
        cout << "TOTAL SIN DESCUENTO: " << totalSinBrochas    <<     "\n";
        cout << "TOTAL CON DESCUENTO: " << totalConBrochas    <<     "\n";
        cout << "*****************************************************\n\n\n";
    }
    if (contUniRodillos!=0)
    {
        cout << "Rodillos C/U: "        << contUniRodillos    <<     "\n";
        cout << "Rodillo Prec. Unit: "  << precUnitRodillos   <<     "\n";
        cout << "TOTAL SIN DESCUENTO: " << totalSinRodillos   <<     "\n";
        cout << "TOTAL CON DESCUENTO: " << totalConRodillos   <<     "\n";
        cout << "*****************************************************\n\n\n";
    }
    if (contUniSelladores!=0)
    {
        cout << "Selladores C/U: "      << contUniSelladores  <<     "\n";
        cout << "Sellador Prec. Unit: " << precUnitSelladores <<     "\n";
        cout << "TOTAL: "               << totalSelladores    << "\n\n\n";
    }
    totalCompras = totalConBrochas + totalConRodillos + totalSelladores;
    totalComprasCon = (totalCompras - ((totalCompras * 7)/100));
    cout << "TOTAL FACTURA: " << totalCompras << "\n";
    cout << "ELIJA EL MÉTODO DE PAGO: \n";
    metodoPago();
    cout << "\n\n\n";
    , //anñadiendo un error apropósito
}