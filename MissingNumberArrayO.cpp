//compexity : n

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
        //cout<<"nombre de cases : "<<endl;
        cin>>nbrCases;
        int aTraiter[nbrCases];
        for(int i=0;i<nbrCases-1;i++)
        {
            //cout<<"valeur :"<<endl;
            cin>>aTraiter
            [i];
        }

                        //debut de la resolution
                        int tot=0;
                        int totAttendu=0;
                        for(int g=0;g<nbrCases-1;g++)
                        {
                            tot=tot+aTraiter[g];
                            totAttendu=totAttendu+(g+1);
                        }
                        totAttendu=totAttendu+nbrCases;
                        int resultat=totAttendu-tot;

                        cout<<resultat<<endl;




                    }
                    return 0;
        }




