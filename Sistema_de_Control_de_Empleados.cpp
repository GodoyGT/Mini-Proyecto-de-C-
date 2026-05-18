/*
CLASE 11 
MINI PROYECTO DE C++ 

Tema: SISTEMA DE CONTROL DE EMPLEADOS

Autor: Godoy Galo
Fecha: 17 de mayo de 2026
Enunciado: Una empresa desea llevar un control básico de sus empleados mediante un programa en C++.

El sistema permitirá registrar empleados almacenando datos como nombre, edad y sueldo. 
Además, el programa contará con un menú en consola para mostrar empleados, buscar e
mpleados, calcular el sueldo total y mostrar el empleado con mayor y menor sueldo.

La información deberá almacenarse utilizando arreglos y el programa deberá estar organizado mediante 
funciones y validaciones básicas.
*/

#include <iostream>
using namespace std;

// VARIABLES GLOBALES
string nombres[100];
int edades[100];
float sueldos[100];

int cantidad = 0;

//FUNCION PARA REGISTRAR EMPLEADOS
void registrarEmpleados ()
{
    int n;

    cout << endl;
    cout << "CUANTOS EMPLEADOS DESEA REGISTRAR: ";
    cin >> n;

    //VALIDACIÓN
    while (n <= 0)
    {
        cout << "Ingrese una cantidad valida: ";
        cin >> n;
    }

    for (int i=0; i < n; i++)
    {
        cout << endl;
        cout << "EMPLEADO #" << i + 1 << endl;

        cout << "Nombre: ";
        cin >> nombres[cantidad];

        cout << "Edad: ";
        cin >> edades[cantidad];

            while (edades[cantidad] <= 0)
            {
            cout << "Edad invalida. Ingrese nuevamente: ";
            cin >> edades[cantidad];
            }

        cout << "Sueldo: ";
        cin >> sueldos[cantidad];

            while (sueldos[cantidad] < 0)
            {
            cout << "Sueldo invalido. Ingrese nuevamente: ";
            cin >> sueldos[cantidad];
            }
    
        cantidad++;
    }
    cout << endl;
    cout << "EMPLEADOS REGISTRADOS CORRECTAMENTE." << endl;
} 
// FUNCION PARA MOSTRAR EMPLEADOS
void mostrarEmpleados()
{
    if (cantidad==0)
    {
        cout << endl;
        cout << "NO HAY EMPLEADOS REGISTRADOS." << endl;
    }
    else
    {
        cout << endl;
        cout << "LISTA DE EMPLEADOS" << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << endl;
        cout << "EMPLEADO#" << i + 1 << endl;
        cout << "Nombre: " << nombres[i] << endl;
        cout << "Edad: " << edades[i] << endl;
        cout << "Sueldo: $" << sueldos[i] << endl;
    }
    }
}
