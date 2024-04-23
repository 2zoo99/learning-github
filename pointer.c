#include <stdio.h>

int main()
{
    // 포인터 마스터 하기
    /*
        *__ : __가 가리키는 주소값에 저장된 데이터 값
        &__ : __변수의 주소값
        
    */
    int *p;

    printf("%p\n", p);
        //0000000000000008 : p포인터 변수가 가리키는 주소값
    printf("%d\n", p);
        //8                : p포인터 변수가 가리키는 주소값의 10진수
    //printf("%d\n", *p);
        //error
    printf("%p\n", &p);
        //00000000005FFE90 : p포인터 변수의 주소값
    printf("%d\n", &p);
        //6291088          : p포인터 변수의 주소값의 10진수

    printf("%s\n","------------------------------");

    int a = 10;

    p = &a;
        // p는 주소값을 가리키기 때문에 변수 a의 주소값을 저장해야함

    printf("%d\n", a);
        //10
    printf("%p\n", &a);
        //00000000005FFE8C
    printf("%p\n", p);
        //00000000005FFE8C
    printf("%d\n", *&a);
        //10
    printf("%d\n", *p);
        //10
    printf("%d\n", &*p);
        //6291084
    printf("%s\n","------------------------------");

    int arr[] = {1,2,3};

    p = arr;
        // 배열은 인덱스로 이루어지기 떄문에 arr 배열 변수가 곧 주소값 

    printf("%p\n", p);
        //00000000005FFE84 : p포인터 변수가 가리키는 주소값
    printf("%d\n", p);
        //6291076
    printf("%p\n", arr);
        //00000000005FFE84 : arr배열 변수의 주소값
    printf("%d\n", arr);
        //6291076
    printf("%d\n", *p);
        //1
    printf("%d\n", *arr);
        //1
    printf("%p\n", &p);
        //00000000005FFE90 : p포인터 변수의 주소값
    printf("%p\n", &arr);
        //00000000005FFE84 : arr배열 변수의 주소값
    printf("%d\n", *(p+1));
        //2
    printf("%d\n", *(arr+2));
        //3
    printf("%d\n", *(arr+0));
        //1
    printf("%d\n", *p+3);
        //4                : p포인터 변수가 가리키는 주소값에 저장된 데이터에 3을 더한 값 
    printf("%d\n", *(p+3));
        //0 : arr[3]은 없음, default 값이 0인가봄 
    printf("%d\n", *&*p);
        //1                : p포인터 변수가 가리키는 주소값에 저장된 데이터의 주소값이 가리키는 데이터 
    printf("%d\n", *++p);
        //2                : 이때부터 p는 계속 arr[1] 주소값을 가리킬 것임  

    printf("%s\n","------------------------------");

    char s[] = "DONGTAN";
    char *cp;
    cp = s;
        // s변수도 배열변수이기 떄문에 s변수 자체가 주소값 

    printf("%c\n", *cp);
        //D
    printf("%p\n", cp);
        //00000000005FFE7C
    printf("%d\n", cp);
        //6291068
    printf("%p\n", &cp);
        //00000000005FFE7A
    //printf("%s\n", *cp);
        //error : 문자열은 주소 변수(&)에 데이터를 저장하기 때문 
    printf("%s\n", cp);
        //DONGTAN
    printf("%s\n", cp+3);
        //GTAN
    printf("%s\n", s+3);
        //GTAN
    printf("%c\n", *cp+2);
        //F                : cp가 가리키는 주소값의 데이터가 D인데 +2 하면 F이므로 
    printf("%c\n", *(cp+5));
        //A                : s[5]에 저장된 데이터 값 
    printf("%c\n", s[4]);
        //T
    printf("%s\n", s);
        //DONGTAN
    printf("%p\n", s);
        //00000000005FFE7C
    printf("%p\n", &s);
        //00000000005FFE7C
    printf("%p\n", s[0]);
        //0000000000000044
    //printf("%s\n", s[3]);
        // error
    printf("%s\n","------------------------------");

    int *ary[3];
        // ary 포인터 배열 변수 
    int x = 10, y = 11, z = 12;
    ary[0] = &x;
    ary[1] = &y;
    ary[2] = &z;

    printf("%d\n", ary[0]);
        //6291036
    printf("%d\n", *ary[0]);
        //10
    printf("%d\n", **ary);
        //10
    printf("%d\n", **ary+2);
        //12
    printf("%d\n", **(ary+2));
        //12

    return 0;
}