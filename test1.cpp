#include <stdio.h>

int FinMin(int A[],int i,int j)
{
    int k;// = (i+j)/2;
//    if(i>=j)
  //     return A[i];
//    if(A[i]>A[j])
  //     return FinMin(A,k,j);
  //  else
  //     return FinMin(A,i,k);
    int t = 20;
    while(i<j&&t>0){
      t--;
      k = (i+j)/2;
//     printf("%d-",A[k]);
      if(A[i]<A[j]){
          j = k;
       }
      else{
          i = k;
      }
    }
    return A[k];
}

int main()
{
   int A[12] = {5,4,3,2,1,2,3,4,5,6,7,8};
   int n = 12;
   printf("%d \n",FinMin(A,0,n-1));
   return 0;
}
