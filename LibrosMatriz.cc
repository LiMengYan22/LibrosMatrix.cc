#include "iostream"
#include "stdio.h"
#include "string"
using namespace std;

void punteros(char *titulo, char *autor);
char titulo;
char autor;
int main()
{
    string libros[3][2]; //inicio un array que es la matriz de 5 filas y 2 columnas= N O D O  (nombre +puntero)
    cout << "\n Mete info de Libros: \n";
  
string titulo, autor; //declaracion de variables
    for(int i = 0; i < 3; i++) //bucle que recorre las posiciones del array
    {
        cout << "\n-----| Libro " << i + 1 << ": |-----\n"; //SALEN datos
        cout << "Titulo: ";
        getline(cin,titulo); // e inserta los datos de ENTRADA
        cout << "Autor: ";
        getline(cin,autor);
        libros[i][0] = titulo;
        libros[i][1] = autor;
    }
    cout << endl; cout << "Elementos de la Biblioteca/Matriz" << endl; 
    cout << "(con su dirección en memoria): " << endl;
    cout << endl; //recorre matriz:
    
    for (int i = 0; i < 3; i++) {
        libros[i][0] = i + 0;
        cout << libros[1][i] << "--> "; 
        cout << libros[i][1] << endl;
        cout << endl;
    }
    //system("pause");
    return 0;
}
