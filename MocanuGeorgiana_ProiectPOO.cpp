#include <iostream>
#include <string>

using namespace std;

class Minge {
private:
    string sport;
    double diametru;
    static int numarMingi;
    const string culoare = "alba";

public:
    Minge() : sport("Fotbal"), diametru(0.0) {
        numarMingi++;
    }

    Minge(string sport) : sport(sport), diametru(0.0) {
        numarMingi++;
    }

    Minge(string sport, double diametru) : sport(sport), diametru(diametru) {
        numarMingi++;
    }

    Minge(const Minge& p) : sport(p.sport), diametru(p.diametru) {
        numarMingi++;
    }

    ~Minge() {
        numarMingi--;
    }

    string GetSport() const {
        return sport;
    }

    void SetSport(const string& newSport) {
        sport = newSport;
    }

    double GetDiametru() const {
        return diametru;
    }

    void SetDiametru(double newDiametru) {
        diametru = newDiametru;
    }

    static int GetNumarMingi() {
        return numarMingi;
    }

    Minge& operator=(const Minge& p) {
        if (this == &p) {
            return *this;
        }

        sport = p.sport;
        diametru = p.diametru;

        return *this;
    }

    friend void FunctiePrietenaMinge(const Minge& minge);

    Minge operator+(const Minge& p) {
        Minge rezultat;
        rezultat.diametru = this->diametru + p.diametru;
        return rezultat;
    }

    Minge operator*(double scalar) {
        Minge rezultat;
        rezultat.diametru = this->diametru * scalar;
        return rezultat;
    }

    bool operator==(const Minge& p) {
        return sport == p.sport && diametru == p.diametru;
    }

    bool operator!=(const Minge& p) {
        return !(*this == p);
    }

    Minge& operator++() {
        diametru++;
        return *this;
    }

    Minge operator++(int) {
        Minge temp(*this);
        diametru++;
        return temp;
    }

    friend ostream& operator<<(ostream& os, const Minge& minge);

    static void AfiseazaInformatii() {
        cout << "Mingi create: " << numarMingi << "\n";
    }
};

int Minge::numarMingi = 0;

void FunctiePrietenaMinge(const Minge& minge) {
    cout << "Functie prietena - Sport: " << minge.sport << ", Diametru: " << minge.diametru << "\n";
}

ostream& operator<<(ostream& os, const Minge& minge) {
    os << "Sport: " << minge.sport << ", Diametru: " << minge.diametru;
    return os;
}

class Gantera {
private:
    double greutate;
    string material;
    static int numarGanteri;
    const string culoare = "neagra";

public:
    Gantera() : greutate(0.0), material("otel") {
        numarGanteri++;
    }

    Gantera(double greutate) : greutate(greutate), material("otel") {
        numarGanteri++;
    }

    Gantera(double greutate, string material) : greutate(greutate), material(material) {
        numarGanteri++;
    }

    Gantera(const Gantera& other) : greutate(other.greutate), material(other.material) {
        numarGanteri++;
    }

    ~Gantera() {
        numarGanteri--;
    }

    double GetGreutate() const {
        return greutate;
    }

    void SetGreutate(double newGreutate) {
        greutate = newGreutate;
    }

    string GetMaterial() const {
        return material;
    }

    void SetMaterial(const string& newMaterial) {
        material = newMaterial;
    }

    static int GetNumarGanteri() {
        return numarGanteri;
    }

    Gantera& operator=(const Gantera& k) {
        if (this == &k) {
            return *this;
        }

        greutate = k.greutate;
        material = k.material;

        return *this;
    }

    friend void FunctiePrietenaGantera(const Gantera& gantera);

    Gantera operator+(const Gantera& k) {
        Gantera rezultat;
        rezultat.greutate = this->greutate + k.greutate;
        return rezultat;
    }

    Gantera operator*(double scalar) {
        Gantera rezultat;
        rezultat.greutate = this->greutate * scalar;
        return rezultat;
    }

    bool operator==(const Gantera& k) {
        return greutate == k.greutate && material == k.material;
    }

    bool operator!=(const Gantera& k) {
        return !(*this == k);
    }

    Gantera& operator++() {
        greutate++;
        return *this;
    }

    Gantera operator++(int) {
        Gantera temp(*this);
        greutate++;
        return temp;
    }

    friend ostream& operator<<(ostream& os, const Gantera& gantera);

    static void AfiseazaInformatii() {
        cout << "Gantere create: " << numarGanteri << "\n";
    }
};

int Gantera::numarGanteri = 0;

void FunctiePrietenaGantera(const Gantera& gantera) {
    cout << "Functie prietena - Greutate: " << gantera.greutate << " kg, Material: " << gantera.material << "\n";
}

ostream& operator<<(ostream& os, const Gantera& gantera) {
    os << "Greutate: " << gantera.greutate << " kg, Material: " << gantera.material;
    return os;
}

class Greutate {
private:
    double masa;
    string unitateMasura;
    static int numarGreutati;
    const string culoare = "argintiu";

public:
    Greutate() : masa(0.0), unitateMasura("kg") {
        numarGreutati++;
    }

    Greutate(double masa) : masa(masa), unitateMasura("kg") {
        numarGreutati++;
    }

    Greutate(double masa, string unitateMasura) : masa(masa), unitateMasura(unitateMasura) {
        numarGreutati++;
    }

    Greutate(const Greutate& g) : masa(g.masa), unitateMasura(g.unitateMasura) {
        numarGreutati++;
    }

    ~Greutate() {
        numarGreutati--;
    }

    double GetMasa() const {
        return masa;
    }

    void SetMasa(double newMasa) {
        masa = newMasa;
    }

    string GetUnitateMasura() const {
        return unitateMasura;
    }

    void SetUnitateMasura(const string& newUnitateMasura) {
        unitateMasura = newUnitateMasura;
    }

    static int GetNumarGreutati() {
        return numarGreutati;
    }

    Greutate& operator=(const Greutate& g) {
        if (this == &g) {
            return *this;
        }

        masa = g.masa;
        unitateMasura = g.unitateMasura;

        return *this;
    }

    friend void FunctiePrietenaGreutate(const Greutate& greutate);

    Greutate operator+(const Greutate& g) {
        Greutate rezultat;
        rezultat.masa = this->masa + g.masa;
        return rezultat;
    }

    Greutate operator*(double scalar) {
        Greutate rezultat;
        rezultat.masa = this->masa * scalar;
        return rezultat;
    }

    bool operator==(const Greutate& g) {
        return masa == g.masa && unitateMasura == g.unitateMasura;
    }

    bool operator!=(const Greutate& g) {
        return !(*this == g);
    }

    Greutate& operator++() {
        masa++;
        return *this;
    }

    Greutate operator++(int) {
        Greutate temp(*this);
        masa++;
        return temp;
    }

    friend ostream& operator<<(ostream& os, const Greutate& greutate);

    static void AfiseazaInformatii() {
        cout << "Greutati create: " << numarGreutati << "\n";
    }
};

int Greutate::numarGreutati = 0;

void FunctiePrietenaGreutate(const Greutate& greutate) {
    cout << "Functie prietena - Masa: " << greutate.masa << " " << greutate.unitateMasura << "\n";
}

ostream& operator<<(ostream& os, const Greutate& greutate) {
    os << "Masa: " << greutate.masa << " " << greutate.unitateMasura;
    return os;
}

int main() {
    Minge minge1;
    Minge minge2("Fotbal");
    Minge minge3("Baschet", 29.5);

    Gantera gantera1;
    Gantera gantera2(10.0);
    Gantera gantera3(15.0, "Otel");

    Greutate greutate1;
    Greutate greutate2(5.0);
    Greutate greutate3(2.5, "kg");

    Minge::AfiseazaInformatii();
    Gantera::AfiseazaInformatii();
    Greutate::AfiseazaInformatii();

    FunctiePrietenaMinge(minge2);
    FunctiePrietenaGantera(gantera3);
    FunctiePrietenaGreutate(greutate1);

    Minge minge4 = minge1;
    Gantera gantera4 = gantera2;
    Greutate greutate4 = greutate3;

    Minge minge5("Volei");
    Minge minge6 = minge3 + minge5;
    Minge minge7 = minge1 * 2.0;

    Gantera gantera5(20.0);
    Gantera gantera6 = gantera4 + gantera5;
    Gantera gantera7 = gantera2 * 1.5;

    Greutate greutate5(10.0, "kg");
    Greutate greutate6 = greutate4 + greutate5;
    Greutate greutate7 = greutate3 * 0.5;

    cout << "Mingi create: " << Minge::GetNumarMingi() << "\n";
    cout << "Gantere create: " << Gantera::GetNumarGanteri() << "\n";
    cout << "Greutati create: " << Greutate::GetNumarGreutati() << "\n";

    minge2++;
    gantera3++;
    greutate2++;

    cout << "Diametru minge2 dupa incrementare: " << minge2.GetDiametru() << "\n";
    cout << "Greutate gantera3 dupa incrementare: " << gantera3.GetGreutate() << " kg" << "\n";
    cout << "Masa greutate2 dupa incrementare: " << greutate2.GetMasa() << " " << greutate2.GetUnitateMasura() << "\n";

    cout << "Minge minge3: " << minge3 << "\n";
    cout << "Gantera gantera6: " << gantera6 << "\n";
    cout << "Greutate greutate7: " << greutate7 << "\n";

    return 0;
}