// complexity : log(n)+(n)+n²
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    //cout << "nbr iterations" << endl;
    int nbrIte;
    cin>>nbrIte;

    for(int y=0;y<nbrIte;y++)
    {
        //cout<<"nbr typeObj"<<endl;
        int nbrObjets;
        cin>>nbrObjets;
        //cout<<"taille sac"<<endl;
        int taille;
        cin>>taille;
        int tabNbrO[nbrObjets];
        int tabTailleO[nbrObjets];

        //cout<<"nbr obj"<<endl;
        int nbrTotObj=0;
        for(int i=0;i<nbrObjets;i++)
        {
            cin>>tabNbrO[i];
            nbrTotObj+=tabNbrO[i];
        }
        //cout<<"taille obj"<<endl;
        for(int i=0;i<nbrObjets;i++)
        {
            cin>>tabTailleO[i];
        }
        int tabOrdo[nbrTotObj];


        //tri des valeures
        bool fin=true;
        int tamp;
        while(fin)
        {
            fin=false;
            for (int i=0;i<nbrObjets-1;i++)
            {
                if(tabTailleO[i]>tabTailleO[i+1])
                {
                    fin=true;
                    tamp=tabTailleO[i+1];
                    tabTailleO[i+1]=tabTailleO[i];
                    tabTailleO[i]=tamp;
                    tamp=tabNbrO[i+1];
                    tabNbrO[i+1]=tabNbrO[i];
                    tabNbrO[i]=tamp;

                }
            }
        }
        /*for(int u=0;u<nbrObjets;u++)
        {
            cout<<tabTailleO[u]<<" ";
        }
        for(int u=0;u<nbrObjets;u++)
        {
            cout<<tabNbrO[u]<<" ";
        }*/

        //here we will have a big array sorted from the smallest value. with all repeated.
        int cptVal=0;
        for(int i=0;i<nbrObjets;i++)
        {
            for(int j=0;j<tabNbrO[i];j++)
            {
                tabOrdo[j+cptVal]=tabTailleO[i];
            }
            cptVal+=tabNbrO[i];
        }

        /*for(int u=0;u<nbrTotObj;u++)
        {
            cout<<tabOrdo[u]<<" ";
        }*/

        //now we just have to count until the bag is full
        int affich=0;
        int dejaMis=0;
        for(int i=0;i<nbrTotObj;i++)
        {
            if(dejaMis+tabOrdo[i]<=taille)
            {
                dejaMis+=tabOrdo[i];
                affich++;
            }
            else
                i=nbrTotObj;
        }
        cout<<affich<<endl;

    }
    return 0;
}





