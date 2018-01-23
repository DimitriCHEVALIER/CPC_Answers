//complexity : n

#include <iostream>
#include <vector>
using namespace std;

string A;
int T;

int LPS(int i, int j);


int main()
{

    ios_base::sync_with_stdio(false); //useful to accelerate execution
    cin>>T;

    for(int i=0; i<T;i++){
        cin>>A;
        int max = LPS(0,A.length()-1);
        cout<<max<<endl;
    }
    return 0;
}

int LPS(int i, int j)
{
    if(i>j)
        return 0;
    if(i==j)
        return 1;
    else
    {
        if(A[i]==A[j])
            return LPS(i+1,j-1)+2;

        else
            return max(LPS(i+1,j),LPS(i,j-1));
    }
}

