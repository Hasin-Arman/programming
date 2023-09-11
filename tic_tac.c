#include<stdio.h>
#include<stdbool.h>

int is_won(int ara[][4],int n)
{
    //row checking
    for(int i=1; i<=n; i++)
    {
        if(ara[i][1]==ara[i][2]&& ara[i][2]==ara[i][3])
        {
            return ara[i][1];
        }
    }
    //column checking
    for(int i=1; i<=n; i++)
    {
        if(ara[1][i]==ara[2][i]&& ara[2][i]==ara[3][i])
        {
            return ara[1][i];
        }
    }
    if(ara[1][1]==ara[2][2] && ara[2][2]==ara[3][3])
    {
        return ara[1][1];
    }

    if(ara[1][3]==ara[2][2] && ara[2][2]==ara[3][1])
    {
        return ara[1][3];
    }
    return -1;
}

void print_cell(int ara[][4],int n)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(ara[i][j]==-1)
                printf(" ");
            if(ara[i][j]==1)
                printf("X");
            if(ara[i][j]==2)
                printf("O");
            if(j<n)
                printf("\t|\t");
        }
        printf("\n");
        if(i<n)
            printf("----------------------------------");
        printf("\n\n");
    }

}

void print_won(int ara[][4],int n,int who)
{
    int i,j;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(ara[i][j]==who){
                if(ara[i][j]==1)
                    printf("X");
                else
                    printf("O");
            }
            else
                printf(" ");

            if(j<n)
                printf("\t|\t");
        }
        printf("\n");
        if(i<n)
            printf("----------------------------------");
        printf("\n\n");
    }

}

int main()
{
    int n=3;
    int ara[4][4];
    int i,j;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            ara[i][j]=-1;
        }
    }

    bool player1=true;
    bool player2=false;
    print_cell(ara,n);
    while(true)
    {
        if(player1)
        {
            int r,c;
label1:
            printf("player 1 Turn(X),Enter row and column:");
            scanf("%d%d",&r,&c);
            if(ara[r][c]!=-1)
            {
                goto label1;
            }
            ara[r][c]=1;
            print_cell(ara,n);
            player1=false;
            player2=true;
        }
        else
        {
            int r,c;
label2:
            printf("player 2 Turn(O),Enter row and column:");
            scanf("%d%d",&r,&c);
            if(ara[r][c]!=-1)
            {
                goto label2;
            }
            ara[r][c]=2;
            print_cell(ara,n);
            player2=false;
            player1=true;
        }
        //check for win
        if(is_won(ara,n)==1)
        {
            printf("player 1 won!\n");
             print_won(ara,n,1);
            break;
        }

        else if(is_won(ara,n)==2)
        {
            printf("player 2 won!\n");
            print_won(ara,n,2);
            break;
        }

    }
    return 0;
}
