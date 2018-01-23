#include <iostream>

using namespace std;


//faux
int main()
{
    cout << "taille sequence" << endl;
    int taille;
    cin>>taille;

    int tab[taille];
    for(int i=0;i<taille;i++)
    {
        cin>>tab[i];
    }

    int maxRenvoi=1;
    int prec=0;
    int maxtamp=1
    for(int i=0;i<taille;i++)
    {
        prec=tab[i];
        maxtamp=1;
        for(int j=0;j<taille;j++)
        {
            if(tab[j]>prec)
            {
                maxtamp++;
                prec=tab[j];
            }
        }
        if(maxRenvoi<maxtamp)
            maxRenvoi=maxtamp;
    }

    cout<<maxtamp<<endl;

    return 0;
}
