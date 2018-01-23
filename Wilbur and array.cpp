//complexity : log(n)

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    //cout << "nbr valeures" << endl;
    int taille;
    cin>>taille;

    int tab[taille];
    //cout<<"remplissage de tableau"<<endl;
    for(int i=0;i<taille;i++)
    {
        cin>>tab[i];
    }

    int nbrTours=0;
    bool fin=false;

    while(!fin)
    {
        bool toutEgal=true;
        for(int i=taille-1;i>1;i--)
        {
            if(tab[i]>tab[i-1])
            {
                nbrTours++;
                toutEgal=false;
                i=0;
                //cout<<"passe"<<endl;
                //-1 a partir du i
                for(int j=i;j<taille;j++)
                {
                    tab[j]--;
                }
            }
            if(tab[i]<tab[i-1])
            {
                nbrTours++;
                toutEgal=false;
                i=0;
                //cout<<"passe3"<<endl;
                //+1 a partir du i
                for(int j=i;j<taille;j++)
                {
                    tab[j]++;
                }
            }
        }

        if(toutEgal==true)
        {
            //cout<<"passree"<<endl;
            nbrTours+=tab[0];
            fin=true;
        }




        /*fin=true;*/
        for(int i=0;i<taille;i++)
        {
            //cout<<tab[i]<<" ";
            /*if(tab[i]!=0)
                fin=false;*/
        }

    }
    cout<<nbrTours<<endl;

    return 0;
}












