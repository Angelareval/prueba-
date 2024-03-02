#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Elemento
class Elemento {
public:
    string nombre;
    string estadoMateria;
    float temperatura;
    bool esNatural;

    // Constructor
    Elemento(string n, string estado, float temp, bool natural) : nombre(n), estadoMateria(estado), temperatura(temp), esNatural(natural) {}

    // Método para mostrar información del elemento
    void mostrarInfo() {
        cout << "Nombre: " << nombre << endl;
        cout << "Estado de la materia: " << estadoMateria << endl;
        cout << "Temperatura: " << temperatura << " grados Celsius" << endl;
        cout << "Es natural: " << (esNatural ? "Sí" : "No") << endl;
    }
};

// Clase Tierra hereda de Elemento
class Tierra : public Elemento {
public:
    string tipoSuelo;

    // Constructor específico para Tierra
    Tierra(string n, string estado, float temp, bool natural, string suelo)
        : Elemento(n, estado, temp, natural), tipoSuelo(suelo) {}

    // Método para mostrar información específica de Tierra
    void mostrarInfo() {
        Elemento::mostrarInfo();
        cout << "Tipo de suelo: " << tipoSuelo << endl;
        cout << "------------------------" << endl;
    }
};

// Clase Agua hereda de Elemento
class Agua : public Elemento {
public:
    int pureza;

    // Constructor específico para Agua
    Agua(string n, string estado, float temp, bool natural, int pureza)
        : Elemento(n, estado, temp, natural), pureza(pureza) {}

    // Método para mostrar información específica de Agua
    void mostrarInfo() {
        Elemento::mostrarInfo();
        cout << "Pureza: " << pureza << "%" << endl;
        cout << "------------------------" << endl;
    }
};

// Otros elementos pueden seguir el mismo patrón

// Ejemplo de uso
int main() {
    // Crear instancias de objetos
    Tierra tierra("Tierra", "Sólido", 25.0, true, "Arcilloso");
    Agua agua("Agua", "Líquido", 0.0, true, 95);

    // Mostrar información de los elementos
    tierra.mostrarInfo();
    agua.mostrarInfo();

    return 0;
}
