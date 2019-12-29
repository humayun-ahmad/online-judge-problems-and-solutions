#include<bits/stdc++.h>
#define INF 1073741824
#define ll long long
#define ull unsigned long long
#define PI acos(-1.0)
#define Hare printf("here\n")
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define on(val,pos) val|(1<<pos)
#define off(val,pos) val&(~(1<<pos))
#define check(val,pos) (val&(1<<pos))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a)*((b)/gcd(a,b)))
#define loop(i,n) for(int i=0;i<n;i++)



using namespace std;

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n;
    set<int,greater<int> >st;
    set<int,greater<int> >st1;
    set<int>::iterator it1;
    cin >> n;
    int arr[200010],rem1[200010];
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        st.insert(arr[i]);
    }

    int sz = st.size();
    int j = 0;

    for(int i = 1; i <=n;i++){
        st.insert(i);
        if(st.size() > sz){


            sz = st.size();
            st1.insert(i);
            rem1[j] = i;
            j++;
        }
    }
//    sort(rem1, rem1+n+5, greater<int>());
//    j = 0;
//    for(int i = 1; i <= n; i++){
//        if(arr[i] == 0) {
//            if(rem1[j] == i){
//                arr[i] = rem1[j+1];
//                rem1[j+1] = rem1[j];
//                j++;
//            }
//            else{
//                arr[i] = rem1[j];
//                j++;
//            }
//        }
//    }
//    sort(rem1, rem1+n+5, greater<int>());
//    for(int i = 1;i <= n; i++){
//        cout << rem1[i]<<" ";
//    }
// .......................................
//    for(int i = 1; i <= n; i++){
//        cout << *(st1.begin())<<" ";
//        st1.erase(*(st1.begin()));
//    }
//.........................................

    int t = 0,rem3,pos,temp;
    for(int i = 1; i <= n; i++){
        int rem2 = *(st1.begin());
        if(i == rem2 && i < n){

            temp = rem2;
            st1.erase(temp);
            if(*(st1.begin()) != 0){
                rem2 = *(st1.begin());
                st1.insert(temp);
            }
        }
//        else{
//            rem2 = *(st1.begin());
//
//        }

        if(arr[i] == 0){

            if(t == 0){
                rem3 = rem2;
                pos = i;
                t = 1;
            }
            arr[i] = rem2;
            //cout << rem2 <<endl;
            st1.erase(rem2);
        }

    }

    for(int i = 1;i <= n; i++){
        if(arr[i] == i){
            temp = arr[i];
            arr[i] = rem3;
            arr[pos] = temp;
        }
    }

    for(int i = 1;i <= n; i++){
        cout << arr[i]<<" ";
    }





//
//    sort(rem1, rem1+n, greater<int>());
//
//    for(int i = 1; i <= n; i++){
//        cout << rem1[i]<<endl;
//    }





//    for (it1 = st.begin(); it1!=st.end();  ++it1) {
//        cout << *it1 << " ";
//    }





    return 0;
}
