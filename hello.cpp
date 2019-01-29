#include <stdio.h>
int main(){
    
    int a = 0, b = 1023, c, answer;

    c = (a+b)/2;

    printf("Moe chislo %d :", c);
    scanf("%d", &answer);

    if (answer==-1) {
        b = c;
    } 
    if (answer==1) {
        a = c;
    } 


    c = (a+b)/2;

    printf("Moe chislo %d :", c);
    scanf("%d", &answer);

    if (answer==-1) {
        b = c;
    } 
    if (answer==1) {
        a = c;
    } 


    c = (a+b)/2;

    printf("Moe chislo %d :", c);
    scanf("%d", &answer);

    if (answer==-1) {
        b = c;
    } 
    if (answer==1) {
        a = c;
    } 


    return 0;
}