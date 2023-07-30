#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int arr_3305[n];
    printf("Enter the number in the array : ");
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr_3305[i]);
    }
    //to dispaly the array
    printf("The arrray is");
    for(int i=0;i<n;i++){
        printf("%d ",arr_3305[i]);
    }
    printf("\n");
    //a) Find out the total number of duplicate elements.
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr_3305[i]==arr_3305[j]){
                count++;
            }
        }
    }
    printf("The total number of duplicate elements is : %d\n",count);
    //b) Find out the most repeating element in the array.
    int max=0;
    int max_count=0;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr_3305[i]==arr_3305[j]){
                count++;
            }
        }
        if(count>max_count){
            max_count=count;
            max=arr_3305[i];
        }
    }
    printf("The most repeating element in the array is : %d\n",max);
}