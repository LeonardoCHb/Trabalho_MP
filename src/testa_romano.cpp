// Copyright 2021

#include<iostream>
#include <string>
#include "../include/romano.hpp"
#define CATCH_CONFIG_MAIN
#include "../lib/catch.hpp"

Romano teste;

TEST_CASE("Deve reconhecer todos os numerais romanos", "TESTE 01") {
REQUIRE(teste.ConverteRomano('I') == 1);
REQUIRE(teste.ConverteRomano('V') == 5);
REQUIRE(teste.ConverteRomano('X') == 10);
REQUIRE(teste.ConverteRomano('L') == 50);
REQUIRE(teste.ConverteRomano('C') == 100);
REQUIRE(teste.ConverteRomano('D') == 500);
REQUIRE(teste.ConverteRomano('M') == 1000);
}

TEST_CASE("Deve retornar -1 caso os caracteres se repitam mais de tres vezes SEGUIDAS", "TESTE 02") {
REQUIRE(teste.ConverteArabico("IIIIXL") == -1);
REQUIRE(teste.ConverteArabico("IVVVV") == -1);
REQUIRE(teste.ConverteArabico("XVXXXX") == -1);
REQUIRE(teste.ConverteArabico("LLLLDIL") == -1);
REQUIRE(teste.ConverteArabico("DCLCCCC") == -1);
REQUIRE(teste.ConverteArabico("IXLDDDDD") == -1);
REQUIRE(teste.ConverteArabico("XXXIX") == 39);
}

TEST_CASE("Deve retornar -1 caso os caracteres 'V','L' e 'D' se dupliquem", "TESTE 03") {
REQUIRE(teste.ConverteArabico("VVLD") == -1);
REQUIRE(teste.ConverteArabico("LLDV") == -1);
REQUIRE(teste.ConverteArabico("LVDD") == -1);
REQUIRE(teste.ConverteArabico("LDVXLL") == -1);
REQUIRE(teste.ConverteArabico("DCVVLC") == -1);
REQUIRE(teste.ConverteArabico("IXLDD") == -1);
REQUIRE(teste.ConverteArabico("XVVX") == -1);
}

TEST_CASE("Letras devem ser somadas ou subtraidas dependendo do valor da letra maior adjacente", "TESTE 04") {
REQUIRE(teste.ConverteArabico("VIII") == 8);
REQUIRE(teste.ConverteArabico("XI") == 11);
REQUIRE(teste.ConverteArabico("IX") == 9);
REQUIRE(teste.ConverteArabico("MX") == 1010);
REQUIRE(teste.ConverteArabico("CD") == 400);
REQUIRE(teste.ConverteArabico("MMCCLXI") == 2261);
REQUIRE(teste.ConverteArabico("CDXLIX") == 449);
}

TEST_CASE("Deve retornar o numero decimal correspondente ao numero romano", "TESTE 05") {
REQUIRE(teste.ConverteArabico("LXXXIX") == 89);
REQUIRE(teste.ConverteArabico("MMXCIV") == 2094);
REQUIRE(teste.ConverteArabico("MMDLXXXIX") == 2589);
REQUIRE(teste.ConverteArabico("MMCMXCIX") == 2999);
REQUIRE(teste.ConverteArabico("MDLXXVI") == 1576);
REQUIRE(teste.ConverteArabico("MCMXXIII") == 1923);
REQUIRE(teste.ConverteArabico("MCMXCIX") == 1999);
}

TEST_CASE("Deve retornar -1 caso o numero romano for maior ou igual a 3000", "TESTE 06") {
REQUIRE(teste.ConverteArabico("MMMX") == -1);
REQUIRE(teste.ConverteArabico("MMMCCLI") == -1);
REQUIRE(teste.ConverteArabico("MMMDCCCLII") == -1);
REQUIRE(teste.ConverteArabico("MMMDCCCLXXIV") == -1);
}
