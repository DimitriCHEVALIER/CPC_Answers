//complexity : n

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
    int diffTest;
    //cout<<"Nombre de differents test : "<<endl;
    cin>>diffTest;


    for(int o=0;o<diffTest;o++)
    {
        //valeure entrees de base
        int tailleTabBase;
        //cout<<"tailletabbase"<<endl;
        cin>>tailleTabBase;
        int tabBase[tailleTabBase];
        for(int i=0;i<tailleTabBase;i++)
        {
            tabBase[i]=0;
        }
        //requetes, remplissage du tableau
        int nbrQueries;
        //cout<<"nbrQueries"<<endl;
        cin>>nbrQueries;
        for(int i=0;i<nbrQueries;i++)
        {
            int deb,fin,val;
            //cout<<"requete"<<endl;
            cin>>deb;
            cin>>fin;
            cin>>val;
            for(int j=deb;j<=fin;j++)
            {
                tabBase[j]+=val;
            }

        }




        cin>>nbrCases;
        //cout<<"entre les recherches"<<endl;
        for(int i=0;i<nbrCases;i++)
        {
            int tampon;
            cin>>tampon;
            cout<<tabBase[tampon]<<endl;
        }
    }
    return 0;
}

