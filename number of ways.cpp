//comlexity : n²
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int nbrCases;
    cin>>nbrCases;
    int aTraiter[nbrCases];
    int tot=0;
    for(int i=0;i<nbrCases;i++)
    {
        //cout<<"valeure case :"<<endl;
        cin>>aTraiter[i];
        tot+=aTraiter[i];
    }
    if(tot%3!=0)
        cout<<"0"<<endl;
    else
    {
        tot=tot/3;
        int res=0;
        int tabDeja[nbrCases];
        //bool aPlu=true;
        int addi1=0;
        int addi2=0;
        for(int i=0;i<nbrCases;i++)
        {
            addi1+=aTraiter[i];
            if(addi1==tot)
            {
                for(int j=nbrCases-1;j>=i;j--)
                {
                    addi2+=aTraiter[j];
                    if(addi2==tot && (j-i)>1)
                    {
                        res++;
                    }
                }

            }
        }
        cout<<res<<endl;

    }



    return 0;
}





