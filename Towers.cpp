//complexity : log(n)+n

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
    int nbrCases;

    cin>>nbrCases;
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
            if(aTraiter[i]<aTraiter[i+1])
            {
                fin=true;
                tamp=aTraiter[i+1];
                aTraiter[i+1]=aTraiter[i];
                aTraiter[i]=tamp;
            }
        }
    }

    //resolution du probleme
    int actuel=aTraiter[0];
    int tourAct=1;
    int maxTour=1;
    int nbrTour=1;
    for(int i=1;i<nbrCases;i++)
    {
        if(aTraiter[i]==actuel)
        {
            tourAct++;
        }
        else
        {
            if(tourAct>maxTour)
            maxTour=tourAct;
            actuel=aTraiter[i];
            tourAct=1;
            nbrTour++;
        }
    }
    cout<<maxTour<<" "<<nbrTour<<endl;





    return 0;
}

