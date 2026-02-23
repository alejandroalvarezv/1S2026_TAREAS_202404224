#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void leerArchivo() {
    ifstream archivo("inventario.inv");
    string linea;

    if (!archivo.is_open()) {
        cout << "\n[ERROR]: El archivo 'inventario.inv' no existe en esta carpeta." << endl;
        return;
}
    cout << "\n--- CONTENIDO DEL INVENTARIO ---" << endl;
    while (getline(archivo, linea)) {
        cout << linea << endl;
    }
    archivo.close();
}

int main() {
    int opcion;

    do {
        cout << "\n1. Leer archivo.inv e imprimir su contenido" << endl;
        cout << "2. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            leerArchivo();
        } else if (opcion == 2) {
            cout << "Saliendo..." << endl;
        } else {
            cout << "Opcion no valida." << endl;
        }
    } while (opcion != 2);

    return 0;
}
