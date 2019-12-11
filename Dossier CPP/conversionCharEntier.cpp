/*
 Conversion d'une chaine en entier
 */
#include <iostream>
using namespace std;

bool valide_entier(char chaine[], int &refNombreEntier);

int main() {
   
    int nombreEntier;
    char chaine[20];
   
   do {
        cout << "Tapez une chaîne de caractères : ";
        cin >> chaine;
   } while (!valide_entier(chaine, nombreEntier));
   
	cout << "L'entier vaut : " << nombreEntier << endl;
    return EXIT_SUCCESS;
}


/**
 valide une chaine de caractère
 retourne la valeur entière

 @param chaine la chaine à valider
 @param refNombreEntier le nombre entier converti
 @return true si la chaine est un entier false sinon
 */
bool valide_entier(char chaine[], int &refNombreEntier) 
{
   
	bool valide = true;
	int i = 0;
   
    int resultat;
    for(i=0; chaine[i] != '\0' ;i++) 
    {
    	resultat = resultat*10+ int(chaine[i])-48;         
    }
    refNombreEntier = resultat;
    return valide;
}
