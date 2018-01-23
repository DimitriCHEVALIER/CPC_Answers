//complexity : n²
#include <iostream>

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
        int bassin[nbrCases];
        for(int i=0;i<nbrCases;i++)
        {
            //cout<<"hauteur de ce sol :"<<endl;
            cin>>bassin[i];
        }

        int maxG=0;
        int maxD=0;
        int eauTot=0;
        for(int i=1;i<nbrCases;i++)
        {
            maxG=0;
            maxD=0;
            for(int j=i;j>=0;j--)
            {
                if(bassin[j]>maxG)
                    maxG=bassin[j];
            }
            for(int j=i;j<nbrCases;j++)
            {
                if(bassin[j]>maxD)
                    maxD=bassin[j];
            }

            if(maxD>bassin[i] && maxG>bassin[i])
            {
                if(maxD>maxG)
                {
                    eauTot+=maxG-bassin[i];

                }
                else
                {
                    eauTot+=maxD-bassin[i];

                }

            }


        }
        cout<<eauTot<<endl;

    }

    return 0;
}
