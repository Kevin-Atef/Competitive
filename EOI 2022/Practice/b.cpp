#include <bits/stdc++.h>
#include "guessx.h"

// You don't need to change anything in includes, 
// you can submit your code as it is.

#ifndef ONLINE_JUDGE
#include "grader.cpp"
#endif


int guess_number(int n)
{
   	int y=1;
    int l = 1;
    int h = n;
    int ans = l;
    while(l<=h) {
        y = l+(h-l)/2;
        if(isLessThanX(y)) {
            l = y+1;
        }
        else {
            ans = y;
            h = y-1;
        }
        
    }
    return ans;
}