//complexity : 4n+n²

#include <iostream>

using namespace std;

/*idea of this program : build a boolean matrice, in line the list of employees, and the list of languages in column. true if the employee
is able to speak the language. After, we look employee by employee, with who he can discuss, and evryone with a link is part of a"grp".
So the answer is the number of group, because they need to learn as many languages as differents groupes to comunicate*/

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int nbrEmp;
    //cout<<"nbrEmplo"<<endl;
    cin>>nbrEmp;
    int nbrLangues;
    //cout<<"nbrLangues"<<endl;
    cin>>nbrLangues;
    int nbrLE;
    int tampLangue;

    bool matRecap[nbrEmp][nbrLangues];
    for(int i=0;i<nbrEmp;i++)
    {
        for(int j=0;j<nbrLangues;j++)
        {
            matRecap[i][j]=false;
        }
    }
    for(int i=0;i<nbrEmp;i++)
    {
        //cout<<"nbrLangues du mec"<<endl;
        cin>>nbrLE;
        for(int j=0;j<nbrLE;i++)
        {
            //cout<<"langue:"<<endl;
            cin>>tampLangue;
            matRecap[i][tampLangue]=true;
        }
    }

    int groupes[nbrEmp];
    groupes[0]=1;
    int grpRemp=1;
    int nbrGrp=1;
    for(int i=1;i<nbrEmp;i++)
    {
        groupes[i]=0;
    }

    for(int i=1;i<nbrEmp;i++)
    {
        bool grpCom[nbrGrp];
        for (int r=0;r<nbrGrp;r++)
        {
            grpCom[r]=false;
        }
        for (int g=0;g<grpRemp;g++)
        {
            for(int j=0;j<nbrLangues;j++)
            {
                if(matRecap[i][j]==matRecap[g][j])
                {
                    grpCom[g]=true;
                }
            }
        }
        int tampPremierGrp;
        bool appartient=false;
        for(int u=0;u<grpRemp;u++)
        {
            if(grpCom[u]==true && groupes[i]==0)
            {
                groupes[i]=u;
                tampPremierGrp=u;
                appartient=true;
            }
            if(grpCom[u]==true && groupes[i]!=0)
            {
                for(int y=0;y<grpRemp;y++)
                {
                    if(groupes[y]==u)
                    {
                        groupes[y]=tampPremierGrp;
                    }
                }
                appartient=true;
                groupes[i]=tampPremierGrp;
            }
            if(!appartient)
            {
                nbrGrp++;
                groupes[i]=nbrGrp;
            }
        }
        grpRemp++;
    }
    cout<<nbrGrp<<endl;



    return 0;
}








