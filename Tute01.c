#include<stdio.h>

int main(){
  int maths, physics, marks,average;
  printf("Please input the marks of maths : ");
  scanf("%d", &maths);

  
    if (maths<=100){
  printf("Please input the marks of physics : ");
  scanf("%d", &physics);
    }


 if (physics<=100){

  marks=maths+physics;
  average=marks/2;


  printf("Total marks are -->%d",marks);
  printf("\n");
  printf("average is -->%d",average);
    }
  
  else 
    printf("Invalide marks");
    
    return 0;
}
