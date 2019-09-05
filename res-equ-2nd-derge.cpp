#include <iostream.h>
#include <stdlib.h>
using namespace std ;
float A,B,C,D,x,y,z;

void fermeture();

void main()
{

/* message de bienvenue */

cout<<"		bienvenue\n";
cout<<"ceci est un programme permettant de\nresoudre une equation du second degre a une inconnue\n";
cout<<"AX2+BX+C=0\n";

/* invitation a la saisi */

cout<<"entrer la valeur de A\n";
cin>>A;
cout<<"\nentrer la valeur de B\n";
cin>>B;
cout<<"\nentrer la valeur de C\n";
cin>>C;
cout<<"resoudre:\n";
cout<<A<<"X2+"<<B<<"X+"<<C<<"=0\n\n\n";
cout<<"		calcul du discriminant... \n";

/* calcul du discriminant */

D = B * B - 4 * A * C;
cout<<"le discriminent est egal a:"<<D<<"\n\n\n";
cout<<"		recherche des solutions...\n\n";

/* choix de du mode de resolution */

if ( A == 0)
{
         float w =  ( -  C ) / B;
         cout<<"la solution est:  "<<w<<"\n";
         fermeture ();
         return 0;
}

if ( D >= 0 )
	{
        float d = sqrt(D) ;
		float z = ( B - d ) / ( 2 * A );
		float y = ( B + d ) / ( 2 * A );
        cout<<"les deux solutions sont:          "<<z<<"  et   "<<y<<"\n";
        fermeture();
        return 0;
	}

if (D == 0)
	{
		float x = B / 2 * A;
		cout<<"la solution est une racine double et de valeur  "<<z<<"\n";
         fermeture() ;
         return 0;
	}

if (D <= 0)
	{
         fermeture();
         return 0;
	}

}

//Fonction ajoutée.
void fermeture()
{
        cout<<"au revoir\n";
		system("pause");

}
