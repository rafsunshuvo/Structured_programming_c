#include<stdio.h>
int date=21,month=9,year=2020;
int date1=12, month1=7,year1=1997;
int day=0;
int day_count()
{

for(int i=year1;year1<=year;year1++)
{
    for(int j=month1;j<=12;j++)
    {
        int limit;
        if(j%2==0&&j!=2&&j<7)
        {
           limit=30;
        }
        else if(j%2!=0&&j<=7)
        {
            limit=31;
        }
        else if(j==2)
        {
            if(j%400==0||j%100==0||j%4==0)
            {
                limit=28;
            }
            else
            {
                limit=29;
            }
        }
        else if(j%2==0&&j>7)
        {
            limit=31;
        }
        else if(j%2!=0&&j>7)
        {
            limit=30;
        }
        for(int k=date1;k<=limit;k++)
        {
            if(k==date&&j==month&&i==year)
            {
                printf("%d",day);
                return 0;
            }
            else
            {
                day++;
                date1++;
            }


        }
        date1=1;
    }
}

}
int today=4,theday=4;
void find_day()
{
    for(int i=1;i<=day;i++)
    {
        if(theday>1)
        {
            theday--;
        }
        else if(theday==1)
        {
            theday=7;
        }
    }
    if(theday==1)
    {
        printf("FRIDAY\n");
    }
    else if(theday==2)
    {
        printf("SATURDAY\n");
    }
    else if(theday==3)
    {
        printf("SUNDAY\n");
    }
    else if(theday==4)
    {
        printf("MONDAY\n");
    }
    else if(theday==5)
    {
        printf("TUESDAY\n");

    }
    else if(theday==6)
    {
        printf("WEDNESDAY\n");
    }
    else if(theday==7)
    {
        printf("THURSDAY\n");
    }
}
main()
{
    day_count();
    find_day();

      //printf("%d",day);
}
