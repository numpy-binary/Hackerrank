/*https://www.hackerrank.com/challenges/compare-the-triplets/problem?h_r=next-challenge&h_v=zen&isFullScreen=true
*/


#include<stdio.h>


int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count)
 {
         *result_count = 2 ;   
        static int arr[2] = { 0,0};
        int ali = 0 ,bob = 0 ,i ;
            for (int i = 0 ; i < 3 ; i++ )
            {
                if(a[i] > b[i])
                  ali = ali+1;
                else if(a[i] < b[i])
                     bob = bob +1;
                 
            }
            
            for ( i = 0 ; i < 2 ; i++)
            {
                if(i == 0)
                    arr[i] = ali ;
                else
                    arr[i] = bob;
            }
            return arr;
}

void populate_array(int*a , int size)
{

    for(int i =  0 ;i <3; i++)
    {
      scanf("%d",&a[i]);
    }
    printf("\n");

}

int main()
{
    int a_count = 3, b_count = 3 ,result_count,i;
    int a[a_count],b[b_count] ;
    
    printf("Enter the elements of alice\n");
    populate_array(a,a_count);

    printf("\nEnter the elements of bob\n"); 
    populate_array(b,b_count);
    

    int* result = compareTriplets(a_count, a, b_count, b, &result_count);
    printf("\nScore is : ");
    for(i =  0 ;i < result_count; i++)
    {
      printf("%d    ",result[i]);
    }
    
}
