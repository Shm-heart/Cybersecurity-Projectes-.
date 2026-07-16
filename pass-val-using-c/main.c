#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include "password-check.c"
int main(int argc , char *argv[]){
        char *pass;
        int q;
        pass=getpass("enter a password : ");
        printf("the password is : %s\n",pass);
        q=password_check(pass);
        printf("%d",q);        
}       