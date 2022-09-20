cmake_minimum_required(VERSION 3.22)
project(Ejercicio2_TP)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ejercicio2_TP main.cpp Comprobante.cpp Comprobante.h Fecha.cpp Fecha.h Cliente.cpp Cliente.h DetalleComprobante.cpp DetalleComprobante.h Factura.cpp Factura.h Presupuesto.cpp Presupuesto.h)
