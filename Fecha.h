//
// Created by Maxi Blanco on 10/9/2022.
//

#ifndef EJERCICIO2_TP_FECHA_H
#define EJERCICIO2_TP_FECHA_H

#include <string>

using namespace std;

class Fecha {
private:

    int dd;
    int mm;
    int aaaa;

public:

    Fecha();

    Fecha(const int, const int, const int);

    ~Fecha();

    int ObtenerDD() const;

    int ObtenerMM() const;

    int ObtenerAAAA() const;


    virtual void Mostrar() const;

};


inline int Fecha::ObtenerDD() const {
    return this->dd;
}

inline int Fecha::ObtenerMM() const {
    return this->mm;
}

inline int Fecha::ObtenerAAAA() const {
    return this->aaaa;
}

#endif //EJERCICIO2_TP_FECHA_H
