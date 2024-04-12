#include <stdio.h>

int main() 
{
    int result, a = 100, b = 200, c = 300;

    result = a < b ? b++ : --c;

    printf("%d, %d, %d\n", result, b, c);

}

/*
result = 100 < 200 ? 200 : 299
       = 200
b = 201
c = 300 !조건식이 true여서 --c는 실행되지 않으므로 값 변화는 없음 
*/
//output : 200, 201, 300