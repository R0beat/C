#include<stdio.h>

int main (){
  int i=7,j=1;
  while(i<=32){
    i=i-2;
    printf("Dia %d distancia del caracol %d\n",j,i);
    if(i==32){
      break;
    }
    else{
      i=i+7;
    }
    j++;

  }
}
