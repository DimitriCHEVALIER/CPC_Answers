//complexity : n²

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false); //useful to accelerate execution
    int T,N,p,tmp,tmp1;

    int exc=0;
    int iter=0;

    vector<int> A;
    cin>>T;


    for(int i=0;i<T;i++)
    {
        cin>>N;
        tmp=0;
        tmp1=0;
        iter=0;
        exc=0;

        for(int j=0;j<N;j++)
        {
            cin>>p;
            A.push_back(p);
        }
        for(int j=0;j<N;j++)
        {
            if(j+tmp>A.size()-1)
            {
                cout<<iter<<endl;
                break;
            }

            else
            {
                if(tmp==0)
                {
                    if(exc != 0)
                    {
                        j=exc;
                        exc=0;
                    }
                    tmp=tmp1=A[j];
                    iter++;
                }
                else
                {
                    if(tmp1<(A[j]-tmp))
                        exc = j;
                }
                tmp--;
            }
        }
    }
    return 0;
}
