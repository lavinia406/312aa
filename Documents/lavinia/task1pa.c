#include<stdio.h>
#include<stdlib.h>

int main()
{
//declararea datelor
    char m[10][10],a[10][10];
    int N,M,T,K;
    scanf("%d%d%d%d",&T,&N,&M,&K);
    int i,j;
    int VII,MORTI;
    int r,b;

    if(T==1)
    {

        for(i=0; i<N; i++)
        {
            for(j=0; j<M; j++)
            {
                scanf(" %c",&m[i][j]);
                a[i][j]=m[i][j];
            }
        }
        while(K!=0)
        {  printf("\n");
        for(i=0; i<N; i++)
        {
            for(j=0; j<M; j++)
            {
                m[i][j]=a[i][j];
            }
        }
            for(i=0; i<N; i++)
            {
                for(j=0; j<M; j++)
                {
                    if(i-1>=0&&j-1>=0&&i+1<N&&j+1<M)
                    {

                        VII=0;

                        if(m[i-1][j]=='X')
                            VII++;
                        if(m[i-1][j-1]=='X')
                            VII++;
                        if(m[i-1][j+1]=='X')
                            VII++;
                        if(m[i][j+1]=='X')
                            VII++;
                        if(m[i][j-1]=='X')
                            VII++;
                        if(m[i+1][j]=='X')
                            VII++;
                        if(m[i+1][j-1]=='X')
                            VII++;
                        if(m[i+1][j+1]=='X')
                            VII++;

                        if(m[i][j]=='X')
                        {

                            if(VII<2||VII>3)
                                a[i][j]='+';
                        }
                        else if(VII==3&&m[i][j]=='+')a[i][j]='X';

                    }
                    else if(i==0&&j==0)
                    {
                        VII=0;
                        MORTI=0;
                        if(m[i][j+1]=='X')
                            VII++;
                        else MORTI++;

                        if(m[i+1][j+1]=='X')
                            VII++;
                        else MORTI++;


                        if(m[i+1][j]=='X')
                            VII++;
                        else MORTI++;

                        if(m[i][j]=='X'&&VII<1)
                            a[i][j]='+';
                        if(m[i][j]=='+'&&VII==3)
                            a[i][j]='X';

                    }
                    else if(i==0&&j==M-1)
                    {
                        VII=0;
                        MORTI=0;
                        if(m[i][j-1]=='X')
                            VII++;
                        else MORTI++;

                        if(m[i+1][j-1]=='X')
                            VII++;
                        else MORTI++;


                        if(m[i+1][j]=='X')
                            VII++;
                        else MORTI++;

                         if(m[i][j]=='X'&&VII==1)
                            a[i][j]='+';
                        if(m[i][j]=='+'&&VII==3)
                            a[i][j]='X';

                    }
                    else if(i==N-1&j==0)
                    {
                        VII=0;
                        MORTI=0;
                        if(m[i][j+1]=='X')
                            VII++;
                        else MORTI++;

                        if(m[i-1][j+1]=='X')
                            VII++;
                        else MORTI++;


                        if(m[i-1][j]=='X')
                            VII++;
                        else MORTI++;

                        if(m[i][j]=='X'&&VII==1)
                            a[i][j]='+';
                        if(m[i][j]=='+'&&VII==3)
                            a[i][j]='X';

                    }
                    else if(i==N-1&&j==M-1)
                    {
                        VII=0;
                        MORTI=0;
                        if(m[i-1][j]=='X')
                            VII++;
                        else MORTI++;

                        if(m[i][j-1]=='X')
                            VII++;
                        else MORTI++;


                        if(m[i-1][j-1]=='X')
                            VII++;
                        else MORTI++;

                        if(m[i][j]=='X'&&VII==1)
                            a[i][j]='+';
                        if(m[i][j]=='+'&&VII==3)
                            a[i][j]='X';
                    }
                    else if (i==0)
                    {
                        VII=0;
                        MORTI=0;

                        if(m[i][j+1]=='X')
                            VII++;
                        else MORTI++;
                        if(m[i][j-1]=='X')
                            VII++;
                        else MORTI++;
                        if(m[i+1][j+1]=='X')
                            VII++;
                        else MORTI++;
                        if(m[i+1][j-1]=='X')
                            VII++;
                        else MORTI++;
                        if(m[i+1][j]=='X')
                            VII++;
                        else MORTI++;

                        if(m[i][j]=='X')
                        {

                            if(VII<2||VII>3)
                                a[i][j]='+';
                        }
                        else if(VII==3)a[i][j]='X';

                    }




                else if(i==N-1)
                {

                    VII=0;
                    MORTI=0;
                    if(m[i][j+1]=='X')
                        VII++;
                    else MORTI++;
                    if(m[i][j-1]=='X')
                        VII++;
                    else MORTI++;
                    if(m[i-1][j+1]=='X')
                        VII++;
                    else MORTI++;
                    if(m[i-1][j-1]=='X')
                        VII++;
                    else MORTI++;
                    if(m[i-1][j]=='X')
                        VII++;
                    else MORTI++;

                    if(m[i][j]=='X')
                    {

                        if(VII<2||VII>3)
                            a[i][j]='+';
                    }
                    else if(VII==3)a[i][j]='X';

                }



            else if(j==0)
            {

                VII=0;
                MORTI=0;
                if(m[i][j+1]=='X')
                    VII++;
                else MORTI++;
                if(m[i+1][j]=='X')
                    VII++;
                else MORTI++;
                if(m[i+1][j+1]=='X')
                    VII++;
                else MORTI++;
                if(m[i-1][j+1]=='X')
                    VII++;
                else MORTI++;
                if(m[i-1][j]=='X')
                    VII++;
                else MORTI++;
                if(m[i][j]=='X')
                {

                    if(VII<2||VII>3)
                        a[i][j]='+';
                }
                else if(VII==3)a[i][j]='X';

            }



        else if(j==M-1)
        {

            VII=0;
            MORTI=0;

            if(m[i+1][j]=='X')
                VII++;
            else MORTI++;
            if(m[i+1][j-1]=='X')
                VII++;
            else MORTI++;
            if(m[i-1][j]=='X')
                VII++;
            else MORTI++;
            if(m[i-1][j-1]=='X')
                VII++;
            else MORTI++;
            if(m[i][j-1]=='X')
                VII++;
            else MORTI++;

            if(m[i][j]=='X')
            {

                if(VII<2||VII>3)
                    a[i][j]='+';
            }
            else if(VII==3)a[i][j]='X';




    }









}
}
K--;

for(r=0; r<N; r++)
{
    for(b=0; b<M; b++)
    {
        printf("%c",a[r][b]);
    }
    printf("\n");

}
}
}





}
