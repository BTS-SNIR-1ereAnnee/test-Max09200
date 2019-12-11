/*
 Conversion en majuscule
 */
#include <iostream>
using namespace std;

void minusculesVersMajuscules(char chaine[]);

int main() {
   
   char chaine[255];
   
   cout << "Tapez une chaîne de caractères à transposer en majuscules : ";
   cin >> chaine;
   
   cout << chaine << endl;
   
   minusculesVersMajuscules(chaine);
   
   cout << "La même chaîne en majuscules est : " << chaine << endl;
   return EXIT_SUCCESS;
}


/**
 Converti une chaine en majuscules

 @param chaine la chaine à convertir
 */
void minusculesVersMajuscules(char chaine[]) 
{
	int i = 0;
	for (i = 0; chaine[i] != '\0'; i++) // tant que la chaine n'a pas atteind sa limite
	{
		if (chaine[i] >= 'a' && chaine[i] <= 'z') // on donne une intervalle égale à l'alphabet
		{
			chaine[i] -= 'a' - 'A'; // on fera 97 - 65 = 32 qui sera la note de référence
		}
	}
	
	
	
}
