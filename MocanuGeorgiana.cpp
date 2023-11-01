#include <iostream>
#include <string>

using namespace std;

class Minge 
{
public:
    string sport;
    double diametru;
    static int numarMingi;
    const string culoare = "alba";

    Minge() : sport("Necunoscut"), diametru(0.0) {
        numarMingi++;
    }

    Minge(string sport) : sport(sport), diametru(0.0) {
        numarMingi++;
    }

    Minge(string sport, double diametru) : sport(sport), diametru(diametru) {
        numarMingi++;
    }

    static void AfiseazaInformatii() {
        cout << "Mingi create: " << numarMingi << endl;
    }
};

int Minge::numarMingi = 0;

class Gantera 
{
public:
    double greutate;
    string material;
    static int numarGanteri;
    const string culoare = "neagra";

    Gantera() : greutate(0.0), material("Necunoscut") {
        numarGanteri++;
    }

    Gantera(double greutate) : greutate(greutate), material("Necunoscut") {
        numarGanteri++;
    }

    Gantera(double greutate, string material) : greutate(greutate), material(material) {
        numarGanteri++;
    }

    static void AfiseazaInformatii() {
        cout << "Ganteri creati: " << numarGanteri << endl;
    }
};

int Gantera::numarGanteri = 0;

class Greutate 
{
public:
    double masa;
    string unitateMasura;
    static int numarGreutati;
    const string culoare = "argintiu";

    Greutate() : masa(0.0), unitateMasura("kg") {
        numarGreutati++;
    }

    Greutate(double masa) : masa(masa), unitateMasura("kg") {
        numarGreutati++;
    }

    Greutate(double masa, string unitateMasura) : masa(masa), unitateMasura(unitateMasura) {
        numarGreutati++;
    }

    static void AfiseazaInformatii() {
        cout << "Greutati create: " << numarGreutati << endl;
    }
};

int Greutate::numarGreutati = 0;

int main() 
{
    Minge minge1;
    Minge minge2("Fotbal");
    Minge minge3("Baschet", 29.5);

    Gantera gantera1;
    Gantera gantera2(10.0);
    Gantera gantera3(15.0, "Otel");

    Greutate greutate1;
    Greutate greutate2(5.0);
    Greutate greutate3(2.5, "lbs");

    Minge::AfiseazaInformatii();
    Gantera::AfiseazaInformatii();
    Greutate::AfiseazaInformatii();

    return 0;
}