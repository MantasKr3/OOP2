#include"vector"
#include"studentas.h"


#define CATCH_CONFIG_MAIN
#include"catch.hpp"


TEST_CASE("Medianos patikrinimas")
{
    studentas testas;
    std::vector<int> nd = {2,7,9};
    testas.set_nd(nd);
    testas.median();

    REQUIRE(testas.mediana()==7);
}


TEST_CASE("Galutinio balo patikrinimas")
{
    studentas testas;
    std::vector<int> nd = {2,2,2,2,2};
    int egz=8;
    testas.set_egzaminas(egz);
    testas.set_nd(nd);
    testas.finalinis();

    REQUIRE(testas.galb()==5.60);
}