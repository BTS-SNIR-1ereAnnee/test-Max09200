//******************************************************
//*Inititation aux fonctions
//******************************************************

#include <iostream> 

using namespace std;

double surface(double rayon);
double pi(void);
double perimetre(double rayon);
 
int main()
{
	double r;
	cout << "Introduire le rayon du cercle (en cm): ";
	cin >> r;
	cout << "La surface du disque est de : " << surface(r) << " cm²" << endl;
	cout << "Le perimètre du cercle est de : " << perimetre(r) << " cm" << endl;
	return 0;
}

double surface(double rayon)
{
	return pi()*rayon*rayon;
}

double pi(void)
{
  	return 3.14159265;
}

double perimetre (double rayon)
{
	return 2 * pi() * rayon;
}
