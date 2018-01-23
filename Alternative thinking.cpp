//complexity : n^3 + n

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    //cout << "nbr de cases" << endl;
    int taille;
    cin>>taille;
    //cout<<"cases"<<endl;
    int tab[taille];
    for(int i =0;i<taille;i++)
    {
        cin>>tab[i];
    }

    //resolution brute force
    int maxi=1;
    int tamp=1;
    int tabTamp[taille];
    for(int i=0;i<taille;i++)
    {
        for(int j=1;j<taille;j++)
        {
            for(int k=0;k<taille;k++)
            {
                if(k>=i && k<=j)
                {
                    if(tab[k]==1)
                        tabTamp[k]=0;
                    else
                        tabTamp[k]=1;
                }
                else
                    tabTamp[k]=tab[k];
            }
            int prec=tabTamp[0];
            for(int k=1;k<taille;k++)
            {
                if(prec!=tabTamp[k])
                {
                    tamp++;
                    prec=tabTamp[k];
                }

            }
            if(tamp>maxi)
                maxi=tamp;
            tamp=1;
        }
    }
    cout<<"max : "<<maxi<<endl;


    return 0;
}
