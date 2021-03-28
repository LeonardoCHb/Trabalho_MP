// Copyright 2021

#include<iostream>
#include <string>
#include "../include/romano.hpp"
//#define CATCH_CONFIG_MAIN 
//#include "../lib/catch.hpp"

Romano teste;

/* TEST_CASE("Reconhecer todos os numerais romanos", "ConverteRomano") {
REQUIRE(teste.ConverteRomano('I') == 1);
REQUIRE(teste.ConverteRomano('V') == 5);
REQUIRE(teste.ConverteRomano('X') == 10);
REQUIRE(teste.ConverteRomano('L') == 50);
REQUIRE(teste.ConverteRomano('C') == 100);
REQUIRE(teste.ConverteRomano('D') == 500);
REQUIRE(teste.ConverteRomano('M') == 1000);
} */

int main() {
    std::cout << teste.ConverteArabico("XXXX") <<std::endl;
    return 1;
}
