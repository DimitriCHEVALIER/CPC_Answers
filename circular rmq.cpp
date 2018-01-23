//complexity : k^n

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int tailleTab;
    //cout << "tailleTab" << endl;
    cin>>tailleTab;

    int tableau[tailleTab];
    //cout<<"valeures"<<endl;
    for(int i=0;i<tailleTab;i++)
    {
        cin>>tableau[i];
    }
    int nbrRequetes;
    //cout<<"nbr requetes"<<endl;
    cin>>nbrRequetes;

    int deb,fin,val;
    //cout<<"requetes"<<endl;
    for(int i=0;i<nbrRequetes;i++)
    {
        cin>>deb;
        cin>>fin;
        cin>>val;

        if(val!=0)
        {
            if(fin>deb)
            {
                for (int j=deb;j<=fin;j++)
                {
                    tableau[j]+=val;
                }
            }
            else
            {
                for (int j=deb;j<tailleTab;j++)
                {
                    tableau[j]+=val;
                }
                for (int j=0;j<=fin;j++)
                {
                    tableau[j]+=val;
                }
            }
        }
        else
        {
            int affichage=tableau[deb];
            if(fin>deb)
            {
                for (int j=deb+1;j<=fin;j++)
                {
                    if(tableau[j]<affichage)
                    {
                        affichage=tableau[j];
                    }

                }
            }
            else
            {
                for (int j=deb+1;j<tailleTab;j++)
                {
                    if(tableau[j]<affichage)
                    {
                        affichage=tableau[j];
                    }

                }
                for (int j=0;j<=fin;j++)
                {
                    if(tableau[j]<affichage)
                    {
                        affichage=tableau[j];
                    }
                }
            }
            cout<<affichage<<endl;
        }

    }



    return 0;
}






