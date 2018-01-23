#include <iostream>

using namespace std;

typedef struct deuxNum
{
    int x;
    int y;
}deuxNum;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int tailleTab;
    //cout<<"tailleTab"<<endl;
    cin>>tailleTab;
    int nbrQueries;
    //cout<<"nbrqueries"<<endl;
    cin>>nbrQueries;

    int aTraiter[tailleTab];
    for(int i=0;i<tailleTab;i++)
    {
        //cout<<"valeure case :"<<endl;
        cin>>aTraiter[i];
    }

    deuxNum tab[nbrQueries];
    for(int i=0;i<nbrQueries;i++)
    {
        //cout<<"entre x puis y"<<endl;
        cin>>tab[i].x;
        cin>>tab[i].y;
    }

    int casesUtilises[tailleTab];
    for (int i=0;i<tailleTab;i++)
    {
        casesUtilises[i]=0;
    }
    for(int i=0;i<tailleTab;i++)
    {
        for(int j=tab[i].x;j<=tab[i].y;j++)
        {
            //cout<<i<<"jicrusn"<<endl;
            casesUtilises[j-1]++;
        }
    }

    //cout<<"avant tri"<<endl;
    /*for (int i=0;i<tailleTab;i++)
    {
        cout<<aTraiter[i];
    }cout<<endl<<endl;

    for (int i=0;i<tailleTab;i++)
    {
        cout<<casesUtilises[i];
    }cout<<endl<<endl;*/

    bool fin=true;
    int tamp;
    while(fin)
    {
        fin=false;
        for (int i=0;i<tailleTab-1;i++)
        {
            if(aTraiter[i]<aTraiter[i+1])
            {
                fin=true;
                tamp=aTraiter[i+1];
                aTraiter[i+1]=aTraiter[i];
                aTraiter[i]=tamp;
            }
        }
    }

    while(fin)
    {
        fin=false;
        for (int i=0;i<tailleTab-1;i++)
        {
            if(casesUtilises[i]<casesUtilises[i+1])
            {
                fin=true;
                tamp=casesUtilises[i+1];
                casesUtilises[i+1]=casesUtilises[i];
                casesUtilises[i]=tamp;
            }
        }
    }

    for (int i=0;i<tailleTab;i++)
    {
        cout<<aTraiter[i];
    }cout<<endl<<endl;

    for (int i=0;i<tailleTab;i++)
    {
        cout<<casesUtilises[i];
    }cout<<endl<<endl;




    return 0;
}
