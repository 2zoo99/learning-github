#include <stdio.h>

int main()
{
    int i=0, j=10, k=30;
    i /= j;
    j -= i;
    k %= j;

    printf("%d, %d, %d\n", i, j, k);
}

/*
i = i/j = 0 : �� ������
j = j-i = 10
k = k%j = 0 : ������ ������ 
*/
// output : 0, 10, 0