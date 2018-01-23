//complexity : k^n

#include <iostream>

using namespace std;

typedef struct deuxNum
{
    int x;
    int y;
}deuxNum;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    //cout << "Chaine de caracteres" << endl;
    string chaine;
    cin>>chaine;
    int nbrQueries;
    //cout<<"nbr queries"<<endl;
    cin>>nbrQueries;
    deuxNum tab[nbrQueries];
    for(int i=0;i<nbrQueries;i++)
    {
        //cout<<"entre x puis y"<<endl;
        cin>>tab[i].x;
        cin>>tab[i].y;
    }

    for(int i=0;i<nbrQueries;i++)
    {
        int res=0;
        for(int j=tab[i].x;j<tab[i].y;j++)
        {
            //cout<<"vals "<<chaine[j]<<" "<<chaine[j+1];
            if(chaine[j-1]==chaine[j])
            {
                //cout<<"oui"<<endl;
                res++;
            }
        }
        cout<<res<<endl;
    }


    return 0;
}
