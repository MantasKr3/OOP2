# Manto Kraujelio VU Objektinio programavimo:
## Užduotis: 3 Užduotis

 ### Klaida - v1.1, v1.2, v1.5  main.cpp 56 line turi būt
 ```c++
 if(number(kiekis)==false||std::stoi(kiekis)<=0) 
 ```



**Dabartinės  versijos  panaudojimas. Programa seka ir apskaičiuoja moksleivio sugeneruotų pažymių vidurkį ir medianą:**<br/>
- Pradėjus programa reikia vadovautis nurodymais console'je, galima generuoti norimą skaičių studentų, tada jų rezultatai išvedami į failus  pavadintus `nenaudeliai.txt` ir `geriukai.txt`,  galima studento duomenis pasirinktinai (galutinį/medianą) ir namų darbus įvesti ranka, rezultatai išvedami į ekraną.

```shell
Jei norite generuoti studentus įrašykite - 1, jei ne - 2 
1
Iveskite generuojamu studentu kiekį
100000

100000 studentu GENERAVIMAS uztruko: 0.1831854 s
100000 studentu NUSKAITYMAS uztruko: 0.2222006 s
100000 studentu RUSIAVIMAS IR SPAUSDINIMAS uztruko: 0.4287586 

Jei norite generuoti studentus įrašykite - 1, jei ne - 2 
2
Jei norite įvesti studento duomenis įrašykite - 1, jei ne - 2 
1
Iveskite studento varda
Mantas
Iveskite studento parvarde
Kraujelis
Iveskite studento nd kieki
2
Iveskite 1 - generuoti atsitiktinai, 2 - ivesti ranka
1

Vardas    Pavarde    Galutinis (vid.)   Galutinis (med.)
--------------------------------------------------------
Mantas   Kraujelis   8.84               9.00       
```


## Programos naudojimas naudojant `g++` kompiliatorių

- `git clone https://github.com/MantasKr3/OOP2`
- `cd OOP2` 
- `g++  main.cpp F.cpp studentas.cpp  -o main` 
- `./main`

or
- `git clone https://github.com/MantasKr3/OOP2`
- `cd OOP2`
- `make`
- `./main`

## Versijų istorija 
### [v2.0]() 

- Sukurta dokumentacija naudojant Doxygen
- Pridėti unit testai

### [v1.5](https://github.com/MantasKr3/OOP2/releases/tag/v1.5) 

- Sukurta abstrakti bazinė klasė "žmogus"

### [v1.2](https://github.com/MantasKr3/OOP2/releases/tag/v1.2) 

- Pridėti operatoriai ir "rule of three"

### [v1.1](https://github.com/MantasKr3/OOP2/releases/tag/v1.1)

- Studentai dabar saugomi class objektuose
- Ištestuotas struct ir class greitis




