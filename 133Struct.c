  #include<stdio.h>
struct time
{
    int hh,mm,ss;
};
int main()
{
    struct time t;
    printf("\n Enter Hour:");
    scanf("%d",&t.hh);
    printf("\n Enter Minute: ");
    scanf("%d",&t.mm);
    printf("\n Enter Second: ");
    scanf("%d",&t.ss);
    printf("\n%d Hours %d Minute and %d Second",t.hh,t.mm,t.ss);
    return 0;
}