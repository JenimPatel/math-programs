#include<stdio.h>

void main()
{
    int n,k=0,f,a,b,c,d,a3,b3,c3,d3;

    struct touple{
      int a,b,c,d,r;
    }t[1000],temp;

    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("\n");

    for(a=1;a<=n;a++)
    {
        a3=a*a*a;
        if(a3>n)
          break;
        for(b=a;b<=n;b++)
        {
            b3=b*b*b;
            if(a3+b3>n)
              break;
            for(c=a+1;c<=n;c++)
            {
                c3=c*c*c;
                if(c3>a3+b3)
                  break;
                for(d=c;d<=n;d++)
                {
                    d3=d*d*d;
                    if(c3+d3>a3+b3)
                      break;
                    if(c3+d3==a3+b3)
                    {
                        t[k].a = a; t[k].b = b; t[k].c = c; t[k].d = d; t[k].r = a3+b3 ;
                        k++;
                        //printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",(a3+b3),a,b,c,d);
                    }
                }
            }
        }
    }

    do
    {
        f=0;
        for(int j=0; j<k-1; ++j)
            if( t[j+1].r < t[j].r )
            {
                f=1;
                temp=t[j+1];
                t[j+1]=t[j];
                t[j]=temp;
            }
    }while(f);

    for(int i=0; i<k; ++i)
      printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", t[i].r, t[i].a, t[i].b, t[i].c, t[i].d );
}
