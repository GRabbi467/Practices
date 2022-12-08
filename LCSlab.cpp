#include<stdio.h>
#include<string.h>

void Print_LCS(char b[][],char X[],int i,int j)
{
    if(i == 0 || j ==0)
        return;
    if(b[i][j] == 'c')
    {
        Print_LCS(b,X,i,j-1);
        printf("%c ",X[i-1]);
    }
    else if (b[i][j] == 'u')
    {
        Print_LCS(b,X,i-1,j);
    }
    else
        Print_LCS(b,X,i,j-1);
}

void LCS_Length(char x[], char y[],int m,int n)
{
    int c[m+1][n+1];
    char b[m+1][n+1];

    for (int i=0; i<=m; i++)
        c[i][0]=0;
    for (int i=0; i<=n; i++)
        c[0][i]=0;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='c';
            }
            else if(c[i-1][j]>= c[i][j-1])
            {
                c[i][j]= c[i-1][j];
                b[i][j]='u';
            }
            else
            {
                c[i][j] = c[i][j-1];
                b[i][j] = 's';
            }
        }
    }
    printf("Length is %d\n",c[m][n]);
    Print_LCS(b,x,m,n);
    //return b;
}

int main()
{
    printf("Enter First String\n");
    char str1[10], str2[10];
    scanf("%s",str1);
    printf("Enter Second String\n");
    scanf("%s",str2);

    int m = strlen(str1);
    int n = strlen(str2);

    printf("%s %s\n",str1,str2);
    printf("%d %d\n",m,n);
    LCS_Length(str1,str2,m,n);

    //Print_LCS(b,str1,m,n);

    return 0;
}
