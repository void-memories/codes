#include <stdio.h>
#include <stdlib.h>
void main()
{
  int *p,n,sum=0;
  scanf("%d",&n);
  p=(int *)malloc(sizeof(int)*n);

  if(p==NULL)
  printf("Memory cant be allocated\n");

  else
  {

  for(int i=0;i<n;i++)
  {
  scanf("%d",p+i);
  sum=sum+*(p+i);
  }

  for(int i=0;i<n;i++)
  printf("\n%d",*(p+i));

  printf("\n%d\n",sum);
  free(p);
  }
}
