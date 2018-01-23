//complexity : n

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    string nbr;
    //cout << "nbr" << endl;
    cin>>nbr;
    bool magic=true;
    bool passe=false;
    for(int i=0;i<nbr.length()-1;i++)
    {
        passe=false;
        if(nbr[i]=='1')
        {
            passe=true;
        }
        if(nbr[i]=='1'&&nbr[i+1]=='4' )
        {
            passe=true;
            i++;
        }
        if(nbr[i]=='1'&&nbr[i+1]=='4'&&nbr[i+2]=='4')
        {
            passe=true;
            i++;
        }
        if(!passe)
        {
            i=nbr.length();
            magic=false;
            cout<<"NO"<<endl;
        }
    }

    if(magic)
        cout<<"YES"<<endl;
    return 0;
}







