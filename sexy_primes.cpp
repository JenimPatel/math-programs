#include <iostream>
#include <math.h>
#define n 600000

using namespace std;

int main()
{
  unsigned long long int i,j,sr,k=0,pa[600000];

  for (i=2; i<n; ++i)
  {
    int f=0;
    int sr = sqrt(i);

    for(j=2; j<=sr; ++j)
      if(i%j==0)
      {
        f=1;
        break;
      }

    if(!f)
      pa[k++]=i;
  }

  cout<<"SEXY PRIMES:"<<endl;

  for(i=0; i<k-1; ++i)
  {
    j=i+1;
    while( pa[j] - pa[i] <= 6 )
    {
      if( pa[j] - pa[i] == 6 )
        cout<<pa[i]<<" "<<pa[j]<<endl;
      ++j;
    }
  }

  return 0;
}
