/*==============================================*\
ID:          Gulam_Kibria

Name:     Gulam Kibria Chowdhury
Study:      CSE, NEUB
Address:  Sylhet, Bangladesh

 mail: gkpalash101@gmail.com
\*===============================================*/

#include<stdio.h>
int main()
{
    int i,a,b,c,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a<=20 && b<=20 && c<=20)
        {
            printf("Case %d: good\n",i);
        }
        else
            printf("Case %d: bad\n",i);
    }
    return 0;
}
