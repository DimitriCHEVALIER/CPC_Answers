//complxity : n

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); //useful to accelerate execution
    //cout << "mot" << endl;
    string mot;
    cin>>mot;
    string hello="hello";

    int cpt=0;
    for(int i=0;i<mot.length();i++)
    {
        if(mot[i]==hello[cpt])
        {
            cpt++;
        }
    }
    if(cpt==hello.length())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
