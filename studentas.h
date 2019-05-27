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
//***rule of three
studentas(){};//construtor'ius
~studentas(){};//destructor'ius

studentas(const studentas &stud) //copy assignment operator'ius (=) (obj. kopijavimas)
  {
    vardas_ = stud.vardas_;
    pavarde_ = stud.pavarde_;
    nd_ = stud.nd_;
    egzaminas_=stud.egzaminas_;
    mediana_ = stud.mediana_;
    galb_ = stud.galb_;
  }
  //***rule of three

  studentas operator=(studentas other)
  {
    std::swap(vardas_, other.vardas_);
    std::swap(pavarde_, other.pavarde_);
    std::swap(nd_, other.nd_);
    std::swap(egzaminas_, other.egzaminas_);
    std::swap(mediana_, other.mediana_);
    std::swap(galb_, other.galb_);

  }

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

  friend std::ostream& operator<<(std::ostream& out, const studentas &stud) {
      out << stud.vardas_ << " " << stud.pavarde_ << " " << stud.galb_ << "\n";
      return out;
    };
    friend std::istream& operator>>(std::istream& in, studentas &stud) {
      in >> stud.vardas_ >> stud.pavarde_ >> stud.galb_;
    }

  friend bool operator!=(studentas a, studentas b)
  {
    return !(a == b);
  }
  friend bool operator==(studentas a,studentas b)
  {
    return a == b;
  }
};
  

void generate(int &kiekis);
void skaityti (vector <studentas> &x,int &kiekis);
void sortas(vector <studentas> &x,int &kiekis);
void print2(vector <studentas> &printable);
bool number(string const& c);
bool compare_m(studentas const & a, studentas const & b);

#endif
