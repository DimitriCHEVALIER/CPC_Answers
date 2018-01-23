//complexity : log(n)+n²

#include <iostream>
#include <string>
#include <cstdio>
#include <fstream>
#include <vector>
#include <sstream>
#include <cstdlib>
#include <cmath>

using namespace std;

typedef struct Ville
{
    int x;
    int y;
    int pop;
    float dist;
} Ville;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int nbrVilleBan;
    cin>>nbrVilleBan;
    int popTomsk;
    cin>>popTomsk;

    Ville listeVille[nbrVilleBan];
    for(int i=0;i<nbrVilleBan;i++)
    {
        //cout<<"x,y,pop"<<endl;
        cin>>listeVille[i].x;
        cin>>listeVille[i].y;
        cin>>listeVille[i].pop;
        listeVille[i].dist=fabs(sqrt(pow(listeVille[i].x,2)+pow(listeVille[i].y,2)));
        //cout<<listeVille[i].dist<<endl;
    }


    //tri par distance
    bool fin=true;
    float tamp;
    while(fin)
    {
        fin=false;
        for (int i=0;i<nbrVilleBan-1;i++)
        {
            if(listeVille[i].dist>listeVille[i+1].dist)
            {
                fin=true;
                tamp=listeVille[i+1].dist;
                listeVille[i+1].dist=listeVille[i].dist;
                listeVille[i].dist=tamp;
            }
        }
    }
    int popTot=popTomsk;
    bool mega=false;
    float tampon;
    for(int i=0;i<nbrVilleBan;i++)
    {
        //cout<<"bukti  "<<listeVille[i].dist<<endl;
        tampon=listeVille[i].dist;
        popTot+=listeVille[i].pop;
        if(popTot>=1000000)
        {
            mega=true;
            i=nbrVilleBan;
            cout<<tampon<<endl;//i dont know why but i have to put the dist in other variable to keep the right value
        }
    }
    if(!mega)
        cout<<"-1"<<endl;


    return 0;
}

