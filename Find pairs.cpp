//log(n)+n²

#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>

using namespace std;
typedef struct Paire
{
    int x;
    int y;
} Paire;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int nbrCases;
    cin>>nbrCases;
    int k;
    cin>>k;

    int aTraiter[nbrCases];
    for(int i=0;i<nbrCases;i++)
    {
        //cout<<"valeure case :"<<endl;
        cin>>aTraiter[i];
    }

    //tri des valeures
    bool fin=true;
    int tamp;
    while(fin)
    {
        fin=false;
        for (int i=0;i<nbrCases-1;i++)
        {
            if(aTraiter[i]>aTraiter[i+1])
            {
                fin=true;
                tamp=aTraiter[i+1];
                aTraiter[i+1]=aTraiter[i];
                aTraiter[i]=tamp;
            }
        }
    }

    Paire tabPair[nbrCases*nbrCases];
    for(int i=0;i<nbrCases*nbrCases;i++)
    {
        tabPair[i].x=aTraiter[i/nbrCases];
        tabPair[i].y=aTraiter[i%nbrCases];
        //cout<<"x "<<tabPair[i].x<<" y "<<tabPair[i].y<<endl;
    }
    cout<<tabPair[k-1].x<<" "<<tabPair[k-1].y;


    return 0;
}







