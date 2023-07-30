
 #include <stdio.h>
 int main(){
    int n;
    printf(" Enter the matrix row/column: ");
    scanf("%d",&n);
    int arr_3305[n][n];
    printf("Enter the elements in the array : ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr_3305[i][j]);
        }
    }
    //to display the array
    printf("The array is \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr_3305[i][j]);
        }
        printf("\n");
    }
    // nonzero elements in A
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr_3305[i][j]!=0){
                count++;
            }
        }
    }
    printf("The number of nonzero elements in the array is : %d\n",count);

    // sum of the elements above the leading diagonal.
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum+=arr_3305[i][j];
        }
    }
    printf("The sum of the elements above the leading diagonal is : %d\n",sum);
    
    // display the elements below the minor diagonal.
    printf("The elements below the minor diagonal are : ");
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("%d ",arr_3305[i][j]);
        }
    }
    printf("\n");

    //product of the diagonal elements.
    int product=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                product*=arr_3305[i][j];
            }
        }
    }
    printf("The product of the diagonal elements is : %d\n",product);
}