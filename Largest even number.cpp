//complexity : n*log(n)

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

    //cout<<"Nombre de differents test : "<<endl;


        cin>>nbrCases;
        string aTraiter[nbrCases];
        for(int i=0;i<nbrCases;i++)
        {
            //cout<<"valeure case :"<<endl;
            cin>>aTraiter[i];
        }
        for(int i=0;i<nbrCases;i++)
        {
            bool fin=true;
            char tamp;
            while(fin)
            {
                fin=false;
                for (int j=0;j<aTraiter[i].length()-1;j++)
                {
                    if(aTraiter[i][j]<aTraiter[i][j+1])
                    {
                        fin=true;
                        tamp=aTraiter[i][j+1];
                        aTraiter[i][j+1]=aTraiter[i][j];
                        aTraiter[i][j]=tamp;
                    }
                }
            }
            if(aTraiter[i][aTraiter[i].length()-1]== '1'|| aTraiter[i][aTraiter[i].length()-1]=='3'|| aTraiter[i][aTraiter[i].length()-1]=='5'|| aTraiter[i][aTraiter[i].length()-1]=='7'|| aTraiter[i][aTraiter[i].length()-1]=='9')
            {
                for(int j=aTraiter[i].length()-1;j>=0;j--)
                {
                    if(!(aTraiter[i][j]== '1'|| aTraiter[i][j]=='3'|| aTraiter[i][j]=='5'|| aTraiter[i][j]=='7'|| aTraiter[i][j]=='9'))
                    {

                        char tampo;
                        tampo=aTraiter[i][j+1];
                            aTraiter[i][j+1]=aTraiter[i][j];
                            aTraiter[i][j]=tampo;
                        j=0;
                    }
                }
            }
        }

        for(int i=0;i<nbrCases;i++)
        {
            cout<<aTraiter[i]<<endl;
        }

    return 0;
}
