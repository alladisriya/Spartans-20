#include<stdio.h>
#include<string.h>

//using char array//
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    char str[500];
    char postfix[500];
    char stack[500];
    scanf("%s",str);
    int k=strlen(str);
    int i,j=0,d,m=-1;
        for(i=0;i<k;i++)
        {
            d=str[i];
            if(d>=97&&d<=122)
            {
                postfix[j]=str[i];
                j=j+1;
            }
            else if(str[i]!=')')
            {
                m=m+1;
                stack[m]=str[i];

            }
            else
            {
                while(stack[m]!='(')
                {
                    postfix[j]=stack[m];
                    j=j+1;
                    m=m-1;
                }
                m=m-1;
            }
        }
        for(i=0;i<j;i++){
            printf("%c",postfix[i]);
        }
        printf("\n");
    }
    return 0;
}
