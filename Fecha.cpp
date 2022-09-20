//
// Created by Maxi Blanco on 10/9/2022.
//

#include "Fecha.h"
#include <iostream>

using namespace std;

Fecha::Fecha() {}

Fecha::Fecha(const int dd, const int mm, const int aaaa) {
    this->dd = dd;
    this->mm = mm;
    this->aaaa = aaaa;
}

Fecha::~Fecha() {}

void Fecha::Mostrar() const {
    cout << this->dd << "/" << this->mm << "/" << this->aaaa << endl;

}
