#pragma once
class Konto
{
private:
    double saldo;

public:
    // constructor
    Konto();

    // destructor
    //~Konto();

    // getter
    double getSaldo();

    // setter
    void setSaldo(double newSaldo);

    // functions
    void bezahlen(const double& betrag);
    void einzahlen(const double& betrag);
    double kontostand();

};

