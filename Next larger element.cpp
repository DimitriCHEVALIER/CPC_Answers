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
    int diffTest;
    //cout<<"Nombre de differents test : "<<endl;
    cin>>diffTest;


    for(int o=0;o<diffTest;o++)
    {
        cin>>nbrCases;
        int aTraiter[nbrCases];
        for(int i=0;i<nbrCases;i++)
        {
            //cout<<"valeure case :"<<endl;
            cin>>aTraiter[i];
        }

        for(int i=0;i<nbrCases;i++)
        {
            int nextGrand=aTraiter[i+1];
            bool moinsUn=true;
            for(int j=i+1;j<nbrCases;j++)
            {
                if(aTraiter[j]>aTraiter[i])
                {
                    nextGrand=aTraiter[j];
                    moinsUn=false;
                    j=nbrCases;
                }
            }
            if(moinsUn)
                cout<<"-1 ";
            else
                cout<<nextGrand<<" ";
        }
        cout<<endl;




    }
    return 0;
}

