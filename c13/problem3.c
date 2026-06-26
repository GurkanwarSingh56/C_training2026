#include<stdio.h>
#include<string.h>
int main(){
    char st1[]="Gurkanwar\0";
    char st2[15];    
    strcpy(st2,st1);
    printf("%s %s ",st1,st2);

}