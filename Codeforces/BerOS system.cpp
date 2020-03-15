#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j=0,l=0,k,len;
    char ch[150],str[150];

    gets(ch);
    len = strlen(ch);
    str[0]='/';

    for( i=0; ch[i]!= '\0'; i++){
        if(ch[i] >= 'a' && ch[i]<='z'){
            k=i;
        }
    }
    //cout << i-1<<endl;

    for( i=0;ch[i]!='\0';i++){
        if(ch[i]!='/'){
            j++;
            str[j] = ch[i];


            l=1;
        }
        else if(l==1 && i<=k){
                j++;
            str[j] = '/';
            l=0;

        }
    }
    //cout << str[j] <<endl;

    str[j+1] = '\0';

    cout << str <<endl;

    return 0;
}
