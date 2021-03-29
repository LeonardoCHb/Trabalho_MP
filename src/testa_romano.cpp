// Copyright 2021

#include<iostream>
#include <string>
#include "../include/romano.hpp"
#define CATCH_CONFIG_MAIN 
#include "../lib/catch.hpp"

Romano teste;

TEST_CASE("Deve reconhecer todos os numerais romanos", "ConverteRomano") {
REQUIRE(teste.ConverteRomano('I') == 1);
REQUIRE(teste.ConverteRomano('V') == 5);
REQUIRE(teste.ConverteRomano('X') == 10);
REQUIRE(teste.ConverteRomano('L') == 50);
REQUIRE(teste.ConverteRomano('C') == 100);
REQUIRE(teste.ConverteRomano('D') == 500);
REQUIRE(teste.ConverteRomano('M') == 1000);
}

TEST_CASE("Deve retornar -1 caso os caracteres se repita mais de tres vezes SEGUIDAS", "ConverteArabico") {
REQUIRE(teste.ConverteArabico("IIIIXL") == -1);
REQUIRE(teste.ConverteArabico("IVVVV") == -1);
REQUIRE(teste.ConverteArabico("XVXXXX") == -1);
REQUIRE(teste.ConverteArabico("LLLLDIL") == -1);
REQUIRE(teste.ConverteArabico("DCLCCCC") == -1);
REQUIRE(teste.ConverteArabico("IXLDDDDD") == -1);
REQUIRE(teste.ConverteArabico("XXXIX") == 39);
}

TEST_CASE("Deve retornar -1 caso os caracteres 'V','L' e 'D' se dupliquem", "ConverteArabico") {
REQUIRE(teste.ConverteArabico("VVLD") == -1);
REQUIRE(teste.ConverteArabico("LLDV") == -1);
REQUIRE(teste.ConverteArabico("LVDD") == -1);
REQUIRE(teste.ConverteArabico("LDVXLL") == -1);
REQUIRE(teste.ConverteArabico("DCVVLC") == -1);
REQUIRE(teste.ConverteArabico("IXLDD") == -1);
REQUIRE(teste.ConverteArabico("XVVX") == -1);
}