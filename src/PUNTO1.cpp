#include <iostream>
int main()
{
    using namespace std;
    int entero;
    cout << "IDENTIFICAR SI UN NUMERO ENTERO POSITIVO MAYOR QUE 1 ES PRIMO O NO\n\n";
    cout << "INGRESE UN NUMERO ENTERO: ";
    cin >> entero;
    cout << endl;
    if (entero%2==0 && entero!=2)
    {   
        cout << "EL NUMERO NO ES PRIMO\n\n";
    }
    else if (entero==2)
    {
        cout << "EL NUMERO ES PRIMO\n\n";
    }
    else
    {
        cout << "EL NUMERO ES PRIMO\n\n";
    }
}