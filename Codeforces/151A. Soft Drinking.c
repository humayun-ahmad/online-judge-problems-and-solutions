#include <stdio.h>

int main()
{
    int n, k, l, c, d, p, nl, np,liter,tost,lime,store;

    scanf("%d %d %d %d %d %d %d %d",&n, &k, &l, &c, &d, &p, &nl, &np);

    liter = k*l;
    liter = liter/nl;
    lime = c*d;
    tost = p/np;

    if(liter<lime){
        if(liter<tost){
            store =  liter;
        }
        else{
            store = tost;
        }
    }
    else if(lime < tost){
            store = lime;
    }
    else{
        store = tost;
    }

    printf("%d\n", store/n);

    return 0;
}
