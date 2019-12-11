/*
 chaine de caractères
 essai sur la longueur d'une chaîne
 */

#include <iostream>


using namespace std;

int main() {
   
   char mot[8];
   
   cout << "donnez un mot" << endl;
   cin.getline(mot, 8); // permet de rajouter les espaces dans notre chaîne
   cout << mot << endl;
   
   return 0;
}

