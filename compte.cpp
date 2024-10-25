#include "compte.h"
#include <ctime>
using std::string;
using std::cout;
using std::cin;
using std::endl;


Compte::Compte(string nom, string prenom, int id, int solde){
    _nom = nom;
    _prenom = prenom;
    _id = id;
    _solde = solde;
}

Compte Compte::CreateCompte(){
    std::string nom;
    std::string prenom;
    int id;
    int solde;

    cout << "Entrez un nom" << endl;
    cin >> nom;
    cout << "Entrez un prenom" << endl;
    cin >> prenom;
    srand(time(0));
    id = rand();
    solde = 0 + solde;

    Compte c(nom, prenom, id, solde);
    return c;
}

string Compte::InfoCompte(Compte person){
    return "M./Mme " + _prenom + _nom + "Solde = " + std::to_string(_solde) + "EUR";
}

 string Compte::getFullName(){
    return "M./Mme. " + _nom + " " + _prenom;
}

int Compte::getId(){
    _id = rand();
    return _id;
}

int Compte::getSolde(){
    _solde = 0+_solde;
    return _solde;
}

 string Compte::Retrait(int val){

    if(_solde >= val){
        _solde = _solde - val;
        return "Retrait effectué avec succès" ;
    }
    else if(_solde < val){
        return "Solde insuffisant";
    }
    else{
        return "Une erreur est survenue";
    }
}

 string Compte::Credit(int val){

    _solde = _solde + val;
    return "Crédit effectué avec succès";
}

 string Compte::Virement(Compte &person1, Compte &person2, int val){
     string tmp1 = person1.Credit(val);
     string tmp2 = person2.Retrait(val);
     string s =  std::to_string(val);

    return "Virement de " + s + " EUR effectué avec succès";
}
