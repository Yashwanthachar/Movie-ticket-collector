//movie ticket counter
#include<stdio.h>
#include<stdlib.h>
char name[10];
char store[100];
int i,j,a=10,n,v,b,y,s,m,t,x,l;
int seat();
int time();
void display();
void main()
{
  
 
        printf("Enter your name:\n");
        scanf("%s",name);
        printf("Welcome to PVR:%s\n",name);
       again:printf("movies \n1.RR\n2.pushpa\n3.love mocktail 2\n4.KGF2\n5.Heropanthi2\n");
        printf("Please enter your choice\n");
        scanf("%d",&m);
        j=m;
         switch(m)
           {
             case 1:printf("you have selected movie RR\n");
                            printf( "total number of seats=30\n");
                            printf("avaliable seats and price format:\n1.1-10 gold-100rs\n2.11-20 silver-70rs\n3.21-30 normal-50rs\n");
                            seat();
                            time();
                            break;
                           
                    case 2:printf("you have selected movie pushpa\n");
                           printf("total number of seats=30\n");
                           printf("avaliable seats and price format:\n1.1-10 gold-100rs\n2.11-20 silver-70rs\n3.21-30 normal-50rs\n");
                            seat();
                            time();
                            break;
                           
                     case 3:printf("you have selected movie love mocktail 2\n");
                           printf("total number of seats=30\n");
                           printf("avaliable seats and price format:\n1.1-10 gold-100rs\n2.11-20 silver-70\n3.21-30 normal-50rs\n");
                            seat();
                            time();
                            break;
                           
                      case 4:printf("you have selected movie KGF2\n");
                           printf("total number of seats=30\n");
                           printf("avaliable seats and price format:\n1.1-10 gold-100rs\n2.11-20 silver-70\n3.21-30 normal-50rs\n");
                            seat();
                            time();
                            break;
                           
                       case 5:printf("you have selected movie Heropanthi2\n");
                           printf("total number of seats=30\n");
                           printf("avaliable seats and price format:\n1.1-10 gold-100rs\n2.11-20 silver-70\n3.21-30 normal-50rs\n");
                            seat();
                            time();
                            break;
                    default:printf("Entered movies are currently unavailable please check movies available and Enter again\n");
                            goto again;
                          
            }  
 }                                        
int seat()
{
    
       p:printf("Enter the seat format:\n");
        scanf("%d",&y);
        x=y;
        switch(y)
        {
            p1:case 1:printf("you have choosen goldseat\n");
                  printf("please enter number of seats\n");
                    scanf("%d",&n);
                    if(n>0 && n<=10)
                    {
                        printf("you have choosen %d seats\n",n);
                        v=a-n;
                        b=n*100;
                        printf("total amount:%d*100=%d\n",n,b);
                        printf("remaining seats are :%d\n",v);
  
                        break;
                    }
                    else 
                        printf("only 10 seats are avalilable please enter in between them\n");
                        goto p1;    
            p2:case 2:printf("you have choosen silverseat\n");
                    printf("please enter number of seats\n");
                    scanf("%d",&n);
                    if(n>0 && n<=10)
                    {   
                                      
                        printf("you have choosen %d seats\n",n);
                        v=a-n;
                         b=n*70;
                         printf("total amount:%d*70=%d\n",n,b);
                         printf("remaining seats are :%d\n",v);
                        
                         break;                        
                    }
                    else 
                        printf("only 10 seats are avalilable please enter in between them\n");
                         goto p2;  
             p3:case 3:printf("you have choosen normalseat\n");
                    printf("please enter number of seats\n");
                    scanf("%d",&n);
                    if(n>0 && n<=10)
                    {
                        printf("you have choosen %d seats\n",n);
                        v=a-n;
                        b=n*50;
                        printf("total amount:%d*50=%d\n",n,b);
                        printf("remaining seats are :%d\n",v);
                        break;
                    }
                    else 
                        printf("only 10 seats are avalilable please enter in between them\n");
                        goto p3;     
            default:printf("you have choosen wrong seat format please enter again\n");
                    goto p;
                    break;
        }  
}
int time() 
{ 
         
        k:printf("Available time slots are:\n1.8:00 AM-10:30 AM\n2.11:00 AM-1:30 PM\n3.2:00 PM-4:30 PM\n4.5:00 PM-7:30 PM\n");
        printf("please choose the required time slots\n");
        scanf("%d",&t);
        switch(t)
        {
            case 1:printf("You have choosen 8:00 AM-10:30 AM slot\n");
                    break;
            case 2:printf("You have choosen 11:00 AM-1:30 PM slot\n");
                    break;
            case 3:printf("You have choosen 2:00 PM-4:30 PM slot\n");
                    break;
            case 4:printf("You have choosen 5:00 PM-7:30 PM slot\n");
                    break;
            default:printf("you have entered wrong time please enter the valid timings\n");
                    goto k;
        }
    display(); 
       
}
void display() 
{
    printf("\tWelcome to PVR:%s\n",name);
    if(j==1)
        printf("\tYou have choosen movie RR\n");
    else if(j==2)
        printf("\tYou have choosen movie pushpa\n");
    else if(j==3)
        printf("\tYou have choosen movie love mocktail\n");
    else if(j==4)
        printf("\tYou have choosen movie KGF2\n");  
    else 
        printf("\tYou have choosen movie Heropanthi2\n");
    if(x=1)
        printf("\tyou have choosen goldseat\n");
    else if(x=2)
        printf("\tyou have choosen silverseat\n");
    else
        printf("\tyou have choosen normalseat\n");
    if(l==1)
        printf("\tYou have choosen 8:00 AM-10:30 AM slot\n");
    else if(l==2)
        printf("\tYou have choosen 11:00 AM-1:30 PM slot\n");
    else if(l==3)
        printf("\tYou have choosen 2:00 PM-4:30 PM slot\n");
    else 
        printf("\tYou have choosen 5:00 PM-7:30 PM slot\n\n");
    printf("\t Number of seats choosen is:%d\n",n);
    printf("\tTotal price:%d\n",b);
    printf("Remaining seats are:%d",v);



}