#ifndef STUDENTAS_H
#define STUDENTAS_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::vector;
using std::string;

class studentas
{
private:
//studento duomenys
string vardas_;
string pavarde_;
vector <int> nd_;
int egzaminas_;
double mediana_;
double galb_;

public:
//getters
string vardas() const {return vardas_;}
string pavarde() const {return pavarde_;}
vector<int> nd() const {return nd_;}
double mediana() const {return mediana_;}
double galb() const {return galb_;}
//setters
void set_vardas(string vardas) {vardas_ = vardas;}
void set_pavarde(string pavarde) {pavarde_ = pavarde;}
void set_nd(vector<int> nd) {nd_ = nd;}
void set_egzaminas(int egzaminas) {egzaminas_ = egzaminas;}
void set_mediana(double mediana) {mediana_ = mediana;}
void set_galb(double galb) {galb_ = galb;}

void median();
void finalinis();

};
  

void generate(int &kiekis);
void skaityti (vector <studentas> &x,int &kiekis);
void sortas(vector <studentas> &x,int &kiekis);
void print2(vector <studentas> &printable);
bool number(string const& c);
bool compare_m(studentas const & a, studentas const & b);

#endif