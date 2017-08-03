#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,Big=0,Comp=0;
    string ch;

    cin >> N;
    getchar();
    getline(cin, ch);

    for(int i=0; i<N; i++)
    {
        if(ch[i] != ' ')
        {
            if(isupper(ch[i]))
            {
                Comp++;
                if(Big < Comp)
                {
                    Big = Comp;
                }
            }
        }

        else
        {
            Comp = 0;
        }
    }

    cout << Big << endl;

    return 0;
}
