#include<stdio.h>
struct time 
{
    int hh,mm,ss;
};
int main()
{
    struct time t;
    printf("\n Enter Hour: ");
    scanf("%d",&t.hh);
    printf("\n Enter Minute: ");
    scanf("%d",&t.mm);
    printf("\n Enter Second: ");
    scanf("%d",&t.ss);
    t.mm=t.mm+(t.ss/60);
    t.ss=t.ss%60;
    t.hh=t.hh+(t.mm/60);
    t.mm=t.mm%60;
    printf("\n %d hours %d Minutes and %d Seconds",t.hh,t.mm,t.ss);
    return 0;   
}