
#include <stdio.h>

 int main(){
    int max;
    int min;
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr_3305[n];
    printf("Enter the number in the array : ");
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr_3305[i]);
    }
    max=arr_3305[0];
    min=arr_3305[0];

    for(int i=0;i<n;i++){
        if(arr_3305[i] < min){
            min=arr_3305[i];
        }
        if(arr_3305[i] > max){
            max=arr_3305[i];
        }
    }
   
    //to dispaly the array
    printf("The arrray is ");
    for(int i=0;i<n;i++){
        printf("%d ",arr_3305[i]);
    }
    printf("\n");
    printf("The maximum element in the array is : %d\n",max);
    printf("The minimum element in the array is : %d\n",min);
    return 0;
    }