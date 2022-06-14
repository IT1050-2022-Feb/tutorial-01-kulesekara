#include<stdio.h>

  int main(){
    int distance, fair;

    printf("Please input the distance traveled : ");
    scanf("%d", &distance);
  printf("\n");
    
    if (distance<=30){
      fair=distance*50;
      }
    else 
    fair=distance*50+(distance-30)*40;
    printf("your fair is --> %d",fair);

    return 0;
  }
