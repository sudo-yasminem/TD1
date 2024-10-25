#include <iostream>


class Compte{
public:
    Compte(std::string nom, std::string prenom, int id, int solde);
    std::string getFullName();
    int getId();
    int getSolde();
    std::string InfoCompte(Compte person);
    Compte CreateCompte();
    std::string Retrait(int val);
    std::string Credit(int val);
    std::string Virement(Compte &person1, Compte &person2, int val);
    //void CreateCompte(Compte &compte);
private:
    int _id;
    std::string _nom;
    std::string _prenom;
    int _solde;
};