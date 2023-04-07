#include <stdio.h>

void fill_array(int n,int arr[]){
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
}


float calculate_average(int n,int arr[]){
    float avg;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    avg=(float)sum/n;
    return avg;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    fill_array(n,arr);
    float average=calculate_average(n,arr);
    printf("%.2f\n",average);
    return 0;
}

