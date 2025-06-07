#include <iostream>                                     //este codigo esta bien :)
using namespace std;

int main()
{
    int a[12];

    cout << "porfavor ingrese los numeros que quiere en su arreglo: " << endl;

    for (int i = 0; i <= 11; i++)
    {
        cout << "ingrese un numero: " << endl;
        cin >> a[i];
    }

    cout << "se le mostrara a continuacion los numeros que ingreso en orden " << endl;

    for (int i = 0; i <= 11; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "se le mostrara los numeros que ingreso en orden inverso " << endl;
    for (int i = 11; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}

void col8() {}