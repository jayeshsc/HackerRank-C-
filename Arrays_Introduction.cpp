#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a[10000],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }  
    for(i=n;i>0;i--){
        printf("%d ",a[i-1]);
    }
    return 0;
}
