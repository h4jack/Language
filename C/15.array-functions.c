#include <stdio.h>

void arreven(int arr[],int n);
void arrodd(int arr[],int n);
void arrsumavg(int arr[],int n);
void arrmaxmin(int arr[],int n);
void arrremdup(int arr[],int n);
void arrrev(int arr[],int n);


int main(){
    printf("Enter how much array size you want : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("array created just enter your values : ");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scon:
    printf("1) Print the even-valued elements\n2) Print the odd-valued elements\n3) Calculate and print the sum and average of the elements of array\n4) Print the maximum and minimum element of array\n5) Remove the duplicates from the array\n6) Print the array in reverse order\n");
    printf("Please choose your option by entering the number given : ");
    int ch;
    scanf("%d",&ch);
    switch(ch){
        case 1:
        arreven(arr,n);
        break;
        case 2:
        arrodd(arr,n);
        break;
        case 3:
        arrsumavg(arr,n);
        break;
        case 4:
        arrmaxmin(arr,n);
        break;
        case 5:
        arrremdup(arr,n);
        break;
        case 6:
        arrrev(arr,n);
        break;
        default:
        printf("Wrong value entered!");
        goto scon;
    }
    printf("\n do you want to repeat this step again? enter 1 for yes 0 for no :");
    scanf("%d", &ch);
    if(ch == 0)
    return 0;
    else
    goto scon;
    return 0;
}

//function to print the even values from an array
void arreven(int arr[],int n){
    for(int i = 0;i<n;i++){
        if(arr[i]%2==0)
        printf("%d \n",arr[i]);
    }
}

//finction to print the odd values from an array
void arrodd(int arr[],int n){
    for(int i = 0;i<n;i++){
        if(!(arr[i]%2==0))
        printf("%d \n",arr[i]);
    }
}

// function to print the sum and average of an array
void arrsumavg(int arr[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum = arr[i] + sum;
    }
    printf("The sum of array is %d \n",sum);
    printf("The Average of array is %d\n",sum/n);
}

//function to print the maximum and minimum elements of an array
void arrmaxmin(int arr[],int n){
    int max = arr[0],min = arr[0];
    for(int i = 0;i < n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("The Maximum Value of this array is %d and the minimum value of this array is %d",max,min);
}

//function to remove the duplicate elements from an array
void arrremdup(int arr[],int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            //repeat:
            if(arr[i] == arr[j]){
                for(int k = j; k < (n - 1); k++){
                    arr[k] = arr[k+1];
                }
                n--;
                printf("%d \n",arr[i]);
                //goto repeat;
            }
        }
        printf("%d \n",arr[i]);   
    }
}

//function to reverse an array
void arrrev(int arr[],int n){
    int temp;
    for(int i = 0;i<(n/2);i++){
        temp = arr[i];
        arr[i] = arr[n];
        arr[n] = temp;
        n--;
    }
    printf("%s \n",arr);
}