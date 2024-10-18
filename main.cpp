#include <iostream>
#include "compte.h"

int main(){
    Compte a("Jean","Caissetou",329,290);
    Compte b("Ines","Péré",410,20);

    std::string fullname = a.getFullName();
    int ID = a.getId();
    int Solde = a.getSolde();
    std::cout << "Bienvenue " << fullname << std::endl;
    std::cout << "Numéro de compte: " << ID << std::endl;
    std::cout << "Solde actuel: " << Solde << " EUR" << std::endl;
    std::cout << std::endl;
     
    std::string status_retrait = a.Retrait(90);
    std::cout << status_retrait << std::endl;
    Solde = a.getSolde();
    std::cout << "Solde après retrait 1: " << Solde << " EUR" << std::endl;

    std::string status_credit = a.Credit(50);
    std::cout << status_credit << std::endl;
    Solde = a.getSolde();
    std::cout << "Solde après crédit 1: " << Solde << " EUR" << std::endl;
    std::cout << std::endl;   
    

    std::string fullname2 = b.getFullName();
    ID = b.getId();
    Solde = b.getSolde();
    std::cout << "Bienvenue " << fullname2 << std::endl;
    std::cout << "Numéro de compte: " << ID << std::endl;
    std::cout << "Solde actuel: " << Solde << " EUR" << std::endl;
    std::cout << std::endl;

    std::string status_virement = a.Virement(b,10);
    std::cout << status_virement << std::endl;
    Solde = b.getSolde();
    std::cout << "Solde après Virement reçu: " << Solde << " EUR chez " << fullname2 << " de la part de " << fullname << std::endl;
    return 0;
}