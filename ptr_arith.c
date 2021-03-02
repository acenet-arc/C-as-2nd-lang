#include<stdio.h>
#include<stdlib.h>
int main(){
  void* p=malloc(1000*sizeof(int));
  printf("p=%p\n",p);
  printf("(void*)p+1=%p\n",p+1);
  printf("(int*)p+1=%p\n",(void*)( (int*)p +1 ));
}
