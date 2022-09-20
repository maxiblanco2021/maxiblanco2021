//
// Created by Maxi Blanco on 10/9/2022.
//

#ifndef EJERCICIO2_TP_CLIENTE_H
#define EJERCICIO2_TP_CLIENTE_H

#include <string>

using namespace std;

class Cliente {
private:

    //-------------
    // Dato Privado
    //-------------
    string nombre;
    string apellido;
    int dni;
    int nroTelefono;
    string direccion;


public:

    //--------------------
    // Constructor Publico
    //--------------------

    Cliente();

    Cliente(string nombre, string apellido, int dni, int nroTelefono, string direccion);

    //-------------------
    // Destructor Publico
    //-------------------

    ~Cliente();

    //-------------------------
    // Asignar Atributo Publico
    //-------------------------

    void AsignarNombre(string nombre);

    void AsignarApellido(string apellido);

    void AsignarDNI(int dni);

    void AsignarNroTelefono(int nroTelefono);

    void AsignarDireccion(string direccion);


    string ObtenerNombre() const;

    string ObtenerApellido() const;

    int ObtenerDNI() const;

    int ObtenerNroTelefono() const;

    string ObtenerDireccion() const;


    void Mostrar() const;

};


inline void Cliente::AsignarDNI(const int dni) {
    this->dni = dni;

}

inline void Cliente::AsignarNombre(string nombre) {
    this->nombre = nombre;
}

inline void Cliente::AsignarApellido(string apellido) {

    this->apellido = apellido;
}

inline void Cliente::AsignarNroTelefono(int nroTelefono) {
    this->nroTelefono = nroTelefono;
}

inline void Cliente::AsignarDireccion(string direccion) {

    this->direccion = direccion;
}


inline int Cliente::ObtenerDNI() const {
    return this->dni;
}

inline string Cliente::ObtenerNombre() const {
    return this->nombre;
}

inline string Cliente::ObtenerApellido() const {
    return this->apellido;
}

inline int Cliente::ObtenerNroTelefono() const {
    return this->nroTelefono;
}

inline string Cliente::ObtenerDireccion() const {
    return this->direccion;
}


#endif //EJERCICIO2_TP_CLIENTE_H
