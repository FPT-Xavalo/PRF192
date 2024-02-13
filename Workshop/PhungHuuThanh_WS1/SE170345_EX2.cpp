#include<stdio.h>
int main(){
  int P, length, width;
  printf("Enter length =");
  scanf("%d",&length);
  printf("Enter width =");
  scanf("%d",&width);
  P=2*(length+width);
  printf("Perimeter of rectangle =%d",P);
  return 0;
}
