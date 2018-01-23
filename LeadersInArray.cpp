//complexity : n²

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
        for(int i=0;i<nbrCases;i++)
        {
            //cout<<"hauteur de ce sol :"<<endl;
            cin>>aTraiter
            [i];
        }
                        //debut de la resolution
                        for(int g=0;g<nbrCases;g++)
                        {
                            bool grand=true;
                            for(int b=g;b<nbrCases;b++)
                            {
                                if(aTraiter[g]<=aTraiter[b])
                                {
                                    b=nbrCases;
                                    grand=false;

                                }

                            }
                            if(grand==true)
                            {
                                cout<<aTraiter[g]<<" ";
                            }
                        }
                        cout<<endl;
                    }
                    return 0;
        }

