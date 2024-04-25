#include <stdio.h>
#include <stdbool.h>

int main() {

    int m=0;
    for(int i=5; i<3; i++){
        m++;
    }
    if(m==1){printf("if result is false execute one time");}
    else {printf("no execute"); }

    printf("\n");
    bool x = true;
    bool y = false;
    printf("%d", x&x); //1
    printf("%d", x&y); //0
    printf("%d", x|x); //1
    printf("%d", x|y); //1
    printf("%d", y|y); //0
    return 0;
}