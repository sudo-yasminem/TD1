#include <iostream>
#include "compte.h"
using  std::string;
using  std::cout;
using  std::cin;
using  std::endl;

int main(){

    Compte a = a.CreateCompte();

    string fullname = a.getFullName();
    int ID = a.getId();
    int Solde = a.getSolde();

     cout << "Bienvenue " << fullname <<  endl;
     cout << "Numéro de compte: " << ID <<  endl;
     cout << "Solde actuel: " << Solde << " EUR" <<  endl;
     cout <<  endl; 
     
     string status_retrait = a.Retrait(90);
     cout << status_retrait <<  endl;
    Solde = a.getSolde();
     cout << "Solde après retrait 1: " << Solde << " EUR" <<  endl;

     string status_credit = a.Credit(50);
     cout << status_credit <<  endl;
    Solde = a.getSolde();
     cout << "Solde après crédit 1: " << Solde << " EUR" <<  endl;
     cout <<  endl;   
    
    return 0;

}