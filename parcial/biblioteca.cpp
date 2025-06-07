#include <iostream>                                                           //este codigo no se termino :(
using namespace std;

int main()
{

    int carnet;
    char opcion;
    string nombre, libros[3] = {"mago de oz", "harry potter", "el joker"};

    cout << "ingrese su nombre" << endl;
    cin >> nombre;

    cout << "ingrese su carnet" << endl;
    cin >> carnet;

    while (true)
    {
        if (opcion == 'c')
        {
            break;
        }

        cout << "que es lo que quiere hacer";
        cout << "a. prestar libro" << endl;
        cout << "b. devolver libro" << endl;
        cout << "c. salir" << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 'a':
            cout <<"los libros disponibles son:"<<endl;
            cout<<"1. Mago de Oz";
            cout<<"2. Harry Potter";
            cout<<"3. El extranjero";
            break;
        case 'c':

            if (opcion == 'c')
            {
                break;
            }
            break;

        default:
            cout << "ponga una opcion valida" << endl;
            break;
        }
    }

    cout<<"gracisa por usar el sistema"<<endl;

    return 0;
}

void col8() {}