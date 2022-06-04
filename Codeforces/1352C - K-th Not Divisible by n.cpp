/**
 *    author:  Humayun Ahmad
 *    created: 4:15 PM
 *    Friday, June 3, 2022 (GMT+6)
 *    Time in Matihar Thana
**/

/**

**/


#include <bits/stdc++.h>

using namespace std;

int main(){

    int t,number,k_th_number;
    cin >> t;

    for(int i = 1; i <= t; i++){
        cin >> number >> k_th_number;

        int need = (k_th_number - 1) / (number - 1);

        cout << need + k_th_number << endl;

    }

}
