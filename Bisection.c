#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    return(x*x-x-1);
}
void main()
{
    float a,b,m,e;
    int i;


    printf("\n Enter the value of a: ");
    scanf("%f",&a);
    printf("\n Enter the value of b: ");
    scanf("%f",&b);
    printf("\n Enter the value of  error e: ");
    scanf("%f",&e);


    if(f(a)*f(b)>0)
        printf("\nSorry!!Inalid Interval");
    else
         m=(a+b)/2;
        i=1;
    while(fabs(f(m)>e));
    {

        printf("\n %d %f %f% %f %f %f",i,a,b,m,f(m),f(a)*f(m));
        if(f(a)*f(m)>0)
            a=m;
        else
            b=m;
        m=(a+b)/2;
        i=i+1;
    }
    printf("rrot= %f",&m);

    getch();


}
