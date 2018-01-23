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
            //cout<<"hauteur de ce sol :"<<endl;
            cin>>aTraiter
            [i];
        }

                        //debut de la resolution
                        /*curMax = max(arr[i],arr[i] + curMax)
gMax =max(curMax , gMax)
return gMax*/
                        int totalMax=aTraiter[0];
                        for(int g=0;g<nbrCases;g++)
                        {
                           int totalTemp=0;
                           for(int b=g;b<nbrCases;b++)
                           {
                               totalTemp+=aTraiter[b];
                               if(totalTemp>totalMax)
                               {
                                   totalMax=totalTemp;
                               }
                           }
                        }

                        cout<<totalMax<<endl;




                }
            return 0;
    }



