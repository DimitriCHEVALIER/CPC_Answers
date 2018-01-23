//complexity : n²

#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <cmath>

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
        int nbrPrime=0;
        for(int i=0;i<nbrCases;i++)
        {
            int tamp=i+aTraiter[i]+1;
            if(aTraiter[i]!=0)
            {
                bool premier=true;
                int tampDiv=sqrt(tamp);
                //cout<<"premier? "<<tamp<<endl;

                for(int j=2;j<=tampDiv;j++)
                {
                    if(tamp%j==0)
                    {

                        premier=false;
                        j=tampDiv+1;
                    }
                }
                if(premier)
                    nbrPrime++;

            }
        }
        cout<<nbrPrime<<endl;



    }
    return 0;
}

