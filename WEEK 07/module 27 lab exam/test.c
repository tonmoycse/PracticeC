#include<stdio.h>

int prime_numbers(int *array, int n){
  int i, j, count=0;

  for(i=0; i<n; i++){
      int prime=1;
      int a = *(array + i);
      for(j=2;j<a;j++){
        if(a%j==0){
            prime=0;
        }
      }
      if(prime){
        count++;
      }
  }


  printf("Prime numbers: %d", count);

}

float average_of_numbers(int *array, int n){
    int i, sum=0;
    float avg;

    for(i=0; i<n; i++){
        sum+=*(array+i);
    }
    avg = sum/n;
    return avg;

}
int main(){
     int n, i, arr[100], count=0, is_prime=0, *array;
     float avg;
     scanf("%d", &n);

     for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
     }
     array = arr;

     prime_numbers(arr, n);

     avg = average_of_numbers(array, n);
     printf("\nAverage of all positive integers: %.2f", avg);
     return 0;
}