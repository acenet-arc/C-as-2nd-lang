#include<stdio.h>
#include<stdlib.h>
int main(){
  int array[10];
  void* p=&array[0];
  printf("p=%p\n",p);
  printf("(void*)p+1=%p\n",p+1);
  printf("(int*)p+1=%p\n",(int*)p+1 );
}
