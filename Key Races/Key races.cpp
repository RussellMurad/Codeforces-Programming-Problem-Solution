#include <iostream>
using namespace std;

int main()
{
    int S,V1,V2,T1,T2,Result1,Result2;
    cin >> S >> V1 >> V2 >> T1 >> T2;

    Result1 = S * V1 + (T1 * 2);
    Result2 = S * V2 + (T2 * 2);

    if(Result1 == Result2)
        cout << "Friendship";

    else if(Result1 < Result2)
        cout << "First";

    else if(Result1 > Result2)
        cout << "Second";

    return 0;
}
