#include <iostream>
using namespace std;

int main()
{
    string nombre;
    char opcion;
    int a[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0}, carnet, suma = 0, contador = 0;
    float promedio;

    cout << "porfavor ingrese su nombre: " << endl;
    cin >> nombre;
    cout << "ingrese su carnet" << endl;
    cin >> carnet;

    while (true)
    {
        if (opcion == 'd')
        {
            break;
        }

        cout << "que es lo que quiere hacer" << endl;
        cout << "a. agregar notas" << endl;
        cout << "b. consultar todas las notas" << endl;
        cout << "c. calcular promedio" << endl;
        cout << "d. salir" << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 'a':
            for (int i = 0; i <= 8; i++)
            {
                cout << "ingrese sus notas (entreo 0 y 10)" << endl;
                cin >> a[i];

                if (a[i] > 10)
                {
                    cout << "porfavor ingrese una nota valida" << endl;
                    a[i] = 0;
                    break;
                }
            }

            break;

        case 'b':
            cout << "aqui estan sus notas: " << endl;
            for (int i = 0; i <= 8; i++)
            {
                cout << a[i] << " ";
            }
            break;

        case 'c':
            cout << "su promedio es:" << endl;

            for (int i = 0; i <= 8; i++)
            {
                suma += a[i];
                contador++;
            }
            promedio = suma / contador;
            cout << promedio << endl;
            break;
        case 'd':
            if (opcion == 'd')
            {
                break;
            }

        default:
            cout << "porfavor escoge una de las opciones: " << endl;
            break;
        }
    }
    cout << "gracias por usar el sistema" << endl;
    return 0;
}

void col8() {}