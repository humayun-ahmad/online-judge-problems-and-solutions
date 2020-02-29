#include <iostream>

using namespace std;

int main()
{
    int limak,bob,c=0;

    cin >> limak >> bob;

    while(limak<=bob){
       c++;
       limak =  limak*3;
       bob  = bob*2;

    }

    cout << c << endl;

    return 0;
}
