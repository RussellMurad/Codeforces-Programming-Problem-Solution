#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("Output.txt","w",stdout);*/

    int N,Arr[110],State=0,Flag=0;
    cin >> N;

    for(int i=0; i<N; i++)
    {
        scanf("%d",&Arr[i]);
    }

    for(int i=0; i<N-1; i++)
    {
        if(State == 0)
        {
            if(Arr[i] == Arr[i+1])
            {
                State=1;
            }

            else if(Arr[i] > Arr[i+1])
            {
                State=2;
            }
        }

        else if(State == 1)
        {
            if(Arr[i] < Arr[i+1])
            {
                Flag=1;
            }

            else if(Arr[i] > Arr[i+1])
            {
                State=2;
            }
        }

        else if(State == 2)
        {
            if(Arr[i] < Arr[i+1] || Arr[i] == Arr[i+1])
            {
                Flag=1;
            }
        }
    }

    if(Flag != 0)
    {
        cout << "NO" << endl;
    }

    else
        cout << "YES" << endl;

    return 0;
}
