//complexity : n!

#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int nbrCases;
    int tailleFenetre;
    int diffTest;
    //cout<<"Nombre de differents test : "<<endl;
    cin>>diffTest;


    for(int o=0;o<diffTest;o++)
    {
        //cout<<"nombre de cases : "<<endl;
        cin>>nbrCases;
        //cout<<"taille de la fenetre"<<endl;
        cin>>tailleFenetre;
        int aTraiter[nbrCases];
        for(int i=0;i<nbrCases;i++)
        {
            //cout<<"hauteur de ce sol :"<<endl;
            cin>>aTraiter
            [i];
        }
        for(int i=0; i<=(nbrCases-tailleFenetre);i++)
        {
            int maxi=aTraiter[i];
            //cout<<endl<<endl;
            for(int j=i;j<(i+tailleFenetre);j++)
            {
                //cout<<"j : "<<j<<" valeure "<<aTraiter[j]<<" ";
                if(aTraiter[j]>maxi)
                {
                    maxi=aTraiter[j];
                }
            }
            cout<<maxi<<" ";
        }
        cout<<endl;




    }
    return 0;
}

