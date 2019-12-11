#include <iostream>
#include <math.h>
using namespace std;


int main()
{
    int valBin[8], bit = 0;
    cout << "Ecrire valeurs des 8 bits " << endl;
    
    
    
    //Boucle ecriture du code binaire
    for (int i=0; i<8; i++)
    {
        cout << "bit" << i << " = ";
	    cin >> valBin[i];
	    if(valBin[i] != 1 and valBin[i] != 0)
	    {
	        cout << "Entrer une valeur 0 ou 1" << endl;
	        i--;
	    }
	}
	cout << endl;
	
	
	
	//Boucle affichage du code binaire
	for (int i=0; i<8; i++)
    {
        cout << "bit" << i << " : " << valBin[i] << endl;
	}

	
	
	//Boucle conversion decimal
	int result = 0, puissance = 7;
	for (int i=0; i<8; i++)
    {
        result = result + valBin[i] * pow(2, puissance);
        puissance--;
	}
	cout << "Resultat : " << result << endl;
	return 0;
}
