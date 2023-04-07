#include <stdio.h>
#include <math.h>
void plus(int n1,int n2){
    printf("%d\n",n1+n2);
}

void minus(int n1,int n2){
   printf("%d\n",n1-n2);
}

void product(int n1,int n2){
  printf("%d\n",n1*n2);
}

void division(int n1,int n2){
    printf("%d\n",n1/n2);
}

void modulus(int n1,int n2){
    printf("%d\n",n1%n2);
}

void square_root(int n1){
  double n=sqrt(n1);
    printf("%.2lf\n",n);
}

void power(int n1,int power){
    
    int nr=pow(n1,power);
    printf("%d",nr);
}

int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int p;
    scanf("%d",&p);
    plus(n1,n2);
    minus(n1,n2);
    product(n1,n2);
    division(n1,n2);
    modulus(n1,n2);
    square_root(n1);
    power(n1,p);
   
    return 0;
}
