//complexity : n

#include <iostream>
#include <vector>
using namespace std;

string A,B;

int LCS(int i, int j);



int main()
{

    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,tailleA,tailleB;
    cin>>T;

    for(int i=0; i<T;i++)
    {
        cin>>tailleA;
        cin>>tailleB;
        cin>>A;
        cin>>B;

        int max = LCS(tailleA,tailleB);
        cout<<max<<endl;
    }

    return 0;
}




int LCS(int i, int j)
{
    if(i==0 || j==0)
        return 0;

    if(A[i]==A[j])
        return LCS(i-1,j-1);

    else
        return max(LCS(i-1,j),LCS(i,j-1));
}






