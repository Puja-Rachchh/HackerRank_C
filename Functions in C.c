#include <stdio.h>
int max_of_four(int x,int y,int z,int w)
{
    int max1=(x>y?x:y);
    int max2=(z>w?z:w);
    int ans=(max1>max2?max1:max2);
    return ans;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
