#include <iostream>
int main()
{
    int option;
    char continuar;
    using namespace std;
    cout << "******************************************" << endl;
    cout << "PROGRAMA QUE CUENTA DEL 1 AL 10 EN ESPAÑOL" << endl;
    cout << "******************************************" << endl;
    do
    {
        cout << "INGRESE UN NUMERO ENTRE 1 Y 10: " << endl;
        cin >> option;
        cout << endl;
        switch (option)
        {
            case 1:
                cout << "uno" << endl << endl;
                break;
            case 2:
                cout << "dos" << endl << endl;
                break;
            case 3:
                cout << "tres" << endl << endl;
                break;
            case 4:
                cout << "cuatro" << endl << endl;
                break;
            case 5:
                cout << "cinco" << endl << endl;
                break;
            case 6:
                cout << "seis" << endl << endl;
                break;
            case 7:
                cout << "siete" << endl << endl;
                break;
            case 8:
                cout << "ocho" << endl << endl;
                break;
            case 9:
                cout << "nueve" << endl << endl;
                break;
            case 10:
                cout << "diez" << endl << endl;
                break;
            default:
                cout << "INGRESE UNA OPCION VÁLIDA";
                cout << endl;
                cout << endl;
        }
        cout << "CONTINUAR? (S/N): ";
        cin >> continuar;
        cout << endl << endl;
    }
    while(continuar=='S');
    return 0;
}