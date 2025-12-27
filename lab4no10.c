#include <stdio.h>
int main(){
    int score;
    int a=0,b=0,c=0,d=0,f=0;


    while(1){
    scanf("%d",&score);
    if(score == -1)break;

    if(score < 0) {printf("error score"); return 0;}
    else if(score > 100) {printf("error score"); return 0;}

    if(score >= 68){
        if(score >= 85){printf("%d(A)",score); a++;}
        else if(score >= 75){printf("%d(B)",score); b++;}
        else{printf("%d(C)",score ); c++;}
    }else{
        if(score >= 55){printf("%d(D)",score);d++;}
        else{printf("%d(F)",score);f++;}

    }
    }
    printf("A(%d)\nB(%d)\nC(%d)\nD(%d)\nF(%d)\n",
           a,b,c,d,f);
    return 0;
}
