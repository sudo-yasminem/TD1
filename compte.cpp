#include "compte.h"


Compte::Compte(std::string nom, std::string prenom, int id, int solde){
    _nom = nom;
    _prenom = prenom;
    _id = id;
    _solde = solde;
}

std::string Compte::getFullName(){
    return "M./Mme." + _nom + " " + _prenom;
}

int Compte::getId(){
    return _id;
}

int Compte::getSolde(){
    return _solde;
}

std::string Compte::Retrait(int val){

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

std::string Compte::Credit(int val){
    _solde = _solde + val;
    return "Crédit effectué avec succès";
}
//Virement marche pas
std::string Compte::Virement(Compte person1, Compte person2, int val){
    std::string tmp1 = person2.Credit(val);
    std::string tmp2 = person1.Retrait(val);
    std::string s = std::to_string(val);

    return "Virement de " + s + " EUR effectué avec succès";
}
