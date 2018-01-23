//complexity : n

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
    tot=tot/2;
    int alice=aTraiter[0];
    int reducA=0;
    int tamp;
    int bob=aTraiter[nbrCases-1];
    int bobMange=1;
    int aliceMange=1;
    int reducB=0;
    int stop;
    if (nbrCases%2==0)
        stop=nbrCases/2;
    else
        stop=1+nbrCases/2;
    bool dejaFait=false;
    for(int i=1;(bobMange+aliceMange)<nbrCases;i++)
    {
        dejaFait=false;
        if(bob<alice && dejaFait==false)
        {
            dejaFait=true;
            //cout<<"bob<alice"<<endl;
            bob+=aTraiter[nbrCases-1-i+reducB];
            reducA++;
            bobMange++;
        }
        if(alice<bob && dejaFait==false)
        {
            dejaFait=true;
            //cout<<"bob>alice"<<endl;
            alice+=aTraiter[i-reducA];
            reducB++;
            aliceMange++;
        }
        if(bob==alice && (nbrCases-1-i+reducB)!=(i-reducA) && dejaFait==false)
        {
            dejaFait=true;
            //cout<<"les deux mangent"<<endl;
            alice+=aTraiter[i-reducA];
            bob+=aTraiter[nbrCases-1-i+reducB];
            bobMange++;
            aliceMange++;
        }

        if(bob==alice && (nbrCases-1-i+reducB)==(i-reducA) && dejaFait==false)
        {
            dejaFait=true;
            //cout<<"prio alice"<<endl;
            alice+=aTraiter[i-reducA];
            aliceMange++;
        }

        //cout<<i<<" finTour, alice : "<<alice<<" bob "<<bob<<" alice attend pour "<<i-reducA<<" reduca "<<reducA<<" bob attend pour "<<nbrCases-1-i+reducB<<endl<<" bob a mange "<<bobMange<<" alice a mane "<<aliceMange<<endl;

    }
    cout<<aliceMange<<" "<<bobMange<<endl;



    return 0;
}
