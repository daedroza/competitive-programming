/*
Identify the logic behind the series

6 28 66 120 190 276....

The numbers in the series should be used to create a Pyramid. The base of the Pyramid will be the widest and will start converging towards the top where there will only be one element. Each successive layer will have one number less than that on the layer below it. The width of the Pyramid is specified by an input parameter N. In other words there will be N numbers on the bottom layer of the pyramid.

The Pyramid construction rules are as follows
1.    First number in the series should be at the top of the Pyramid
2.    Last N number of the series should be on the bottom-most layer of the Pyramid, with Nth number being the right-most number of this layer.
3.    Numbers less than 5-digits must be padded with zeroes to maintain the sanctity of a Pyramid when printed. Have a look at the examples below to get a pictorial understanding of what this rule actually means.
Example

If input is 2, output will be

 00006
00028 00066

If input is 3, output will be

  00006
 00028 00066
00120 00190 00276

Formal input and output specifications are stated below 
Input Format: 

First line of input will contain number N that corresponds to the width of the bottom-most layer of the Pyramid 
Output Format: 

The Pyramid constructed out of numbers in the series as per stated construction rules 
Constraints:
1.    0 < N <= 14
*/

#include<stdio.h>
int main()
{
 long int n,a[14], i,p=0,sp, j,sum=0,k=0;
 scanf("%ld",&n);
 if(n > 0)
 for(i=n;i>=1;i--)
 {
  sum=sum+i;
 }
 for(i=0,k=2;i<sum;i++)
 {
  a[i]=k*(2*k-1);
  k=k+2;
 }
 for(i=1;i<=n;i++)
 {
  for(sp=0;sp<n-i;sp++)
   {
    printf(" ");
   }
   for(j=1;j<=i;j++)
   {
    if(a[p]/10==0)
    {
     printf("0000%ld ",a[p]);
     p++;
    }
    else  if(a[p]/100==0)
    {
     printf("000%ld ",a[p]);
     p++;
    }
    else  if(a[p]/1000==0)
    {
     printf("00%ld ",a[p]);
     p++;
    }
    else  if(a[p]/10000==0)
    {
     printf("0%ld ",a[p]);
     p++;
    }
    else
    {
     printf("%ld ",a[p]);
     p++;
    }
    }
   printf("\n");
 }
return 0;

}
