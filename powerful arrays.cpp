//complexity : k^n

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int tailleTab;
    //cout<<"tailleTab"<<endl;
    cin>>tailleTab;
    int nbrQueries;
    //cout<<"nbrQueries"<<endl;
    cin>>nbrQueries;

    //cout<<"tab"<<endl;
    int tableau[tailleTab];
    for(int i=0;i<tailleTab;i++)
    {
        cin>>tableau[i];
    }

    int quer1;
    int quer2;
    int res=0;
    int occuTamp=0;


    for(int i=0;i<nbrQueries;i++)
    {
        cin>>quer1;
        cin>>quer2;
        res=0;
        bool fin=false;



        int incr=0;
        while(!fin || incr<10)
        {
            bool coupe[quer1-quer2+1];
            for(int r=0;r<(quer1-quer2+1);r++)
                coupe[r]=false;
            incr++;
            occuTamp=0;
            for(int j=quer1-1;j<quer2;j++)
            {
                //cout<<"indice courant "<<j<<" incr "<<incr<<" val ind courant "<<tableau[j]<<endl;
                if(incr==tableau[j])
                {
                    occuTamp++;
                    //cout<<"a ajoute indice "<<j<<endl;
                    coupe[j-quer1]=true;
                    fin=true;
                    //si toutes les valeures ont ete joues
                    for(int f=0;f<(quer1-quer2+1);f++)
                    {
                        if(coupe[f]==false)
                            fin=false;
                    }
                }
            }
            //cout<<"ajout, occuTamp : "<<occuTamp<<" valeur "<<incr<<endl;
            res+=occuTamp*occuTamp*incr;
        }
        cout<<res<<endl;
    }


    return 0;
}

