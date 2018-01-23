//complexity : n^3

#include <iostream>
#include <vector>
using namespace std;

bool checkVerif(vector<string> B,string a);


int main()
{

    ios_base::sync_with_stdio(false); //useful to accelerate execution

    int T;
    string A,a;
    vector<string> B;
    cin>>T;

    for(int i=0;i<T;i++)
    {
        cin>>A;
        for(int j=0; j<A.length(); j++)
        {
            a = "";
            for(int k=j; k<A.length(); k++)
            {
                a += A[k];
                if(!checkVerif(B,a))
                {
                    B.push_back(a);
                }
            }
        }

        cout<<B.size()<<endl;
        B.clear();
    }
    return 0;
}


bool checkVerif(vector<string> B,string a)
{
    for(int i=0; i<B.size(); i++)
    {
        if(B[i]==a) return true;
    }
    return false;
}











