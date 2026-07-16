#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include <locale.h>
int upnch(char *pass);
int passwordlen(char *pass);
int uppercase(char *pass);
int lowercase(char *pass);
int passsql(char *pass );
int password_check(char *pass){
    int score =0;
    printf("the score  is %d\n",score);
    score=score+passwordlen(pass);
    printf("passwordlen return value is %d\n",passwordlen(pass));
    printf("the score after passwordlen is %d\n",score);
    score=score+uppercase(pass);
    printf("uppercase(pass) return value is %d\n",uppercase(pass));
    printf("the score after uppercase is %d\n",score);
    score=score+lowercase(pass);
    printf("lowercase(pass) return value is %d",lowercase(pass));
    printf("the score after lowercase is %d\n",score);
    score=score+upnch(pass);
    printf("upnch(pass) return value is %d\n",upnch(pass));
    printf("the score after upnch is %d\n",score);
    score=score+passsql(pass);
    printf("passsql(pass) return value is %d\n",passsql(pass));
    printf("the score after passsql is %d\n",score);
    return score;
}
int passwordlen(char *pass){
    int min =8;
    if (strlen(pass)>=min)
    {
        return 1;
    }
    else
    {
        return 0;
    }
       
}

int uppercase(char *pass){
    for (int i=0;i<strlen(pass);i++)
    {
        if (isupper(pass[i]))
        {
            return 2;
        }
    
    }
    return 0;
    
}

int lowercase(char *pass){
    int count =0;
    for (int i=0;i<strlen(pass);i++)
    {
        if (islower(pass[i]))
        {
            count++;
            if (count>=3)
            {
                break;
            }
            
        }
        
    }
    if (count>=3)
    {
        return 2;
    }
    else
    {
        return 0;
    }
    
   
}
int upnch(char *pass){
    int count =0;
    for (int i=0;i<strlen(pass);i++)
    {
        if (ispunct(pass[i]))
        {
            count++;
        }
    
    }
    if (count>0)
    {
        return 2;
    }
    else
    {
        return 0;
    }
    
    
}
int passsql(char *pass ){
    int s=0;
    int count =0;
    for (int i=0;i<strlen(pass);i++)
    {
        if (isdigit(pass[i]))
        {
            count++;
        }
    }
    if (count>0)
    {
        s=s+1;
        for (int i; i<strlen(pass); i++)
        {
            if (isdigit(pass[i]))
            {
                int d1=pass[i];
                if (isdigit(pass[i+1]))
                {
                    int d2 = pass[i+1];
                    if (d1-d2==1)
                    {
                        if (isdigit(pass[i+2]))
                        {
                            int d3 = pass[i+2];
                            if ( d2-d3==1)
                            {
                                printf("is sencual %d %d %d ",d1,d2,d3);
                                 s=s+1;
                            }
                            else{
                                continue;
                            }
                        
                        }
                        else
                        {
                            continue;
                        }
                    
                     }
                    else
                    {
                        continue;
                    }
                
                }
            
          
             }
            else
            {
                s=+2;
            }
        
         }

    }
    return s;
   
}


