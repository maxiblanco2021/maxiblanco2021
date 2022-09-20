//
// Created by Maxi Blanco on 10/9/2022.
//

#include "Cliente.h"

#include <iostream>


Cliente::Cliente() {}

Cliente::Cliente(string nombre, string apellido, int dni, int nroTelefono, string direccion) {
    this->nombre = nombre;
    this->apellido = apellido;
    this->dni = dni;
    this->nroTelefono = nroTelefono;
    this->direccion = direccion;

}

Cliente::~Cliente() {}

void Cliente::Mostrar() const {
    cout << "Nombre: " << this->ObtenerNombre() << endl;
    cout << "Apellido: " << this->ObtenerApellido() << endl;
    cout << "DNI: " << this->ObtenerDNI() << endl;
    cout << "Numero de telefono: " << this->ObtenerNroTelefono() << endl;
    cout << "Direccion: " << this->ObtenerDireccion() << endl;

}



