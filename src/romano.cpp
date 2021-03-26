// Copyright 2021

#include<iostream>
#include "../include/romano.hpp"

int Romano::ConverteRomano(char numeroRomano) {
    switch (numeroRomano) {
        case 'I':
            return 1;
        break;
        case 'V':
            return 5;
        break;
        case 'X':
            return 10;
        break;
        case 'L':
            return 50;
        break;
        case 'C':
            return 100;
        break;
        case 'D':
            return 500;
        break;
        case 'M':
            return 1000;
        break;
        default:
            return 'Argumento invalido';
        break;
    }
}

