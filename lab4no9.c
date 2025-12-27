#include <stdio.h>
int main(){
    int score;


    while(1){
    scanf("%d",&score);
    if(score == -1)return 0;

    if(score < 0) {printf("error score"); return 0;}
    else if(score > 100) {printf("error score"); return 0;}

    if(score >= 68){
        if(score >= 85){printf("%d(A)",score);}
        else if(score >= 75){printf("B");}
        else{printf("%d(C)",score );}
    }else{
        if(score >= 55){printf("%d(D)",score);}
        else{printf("%d(F)",score);}

    }
    }
    return 0;
}
