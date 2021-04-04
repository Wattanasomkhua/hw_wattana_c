#include <stdio.h>
int main() 
{
   int aaa[10] = {12,14,115,45,45};

  // printf("aaa[%d]: %d\n",3,aaa[3]);

   for(int i=0;i< 5;i++){
        printf("aaa[%d]: %d\n",i,aaa[i]); 
	if(aaa[i] == 115){
		break;
	}
   }
	return 0;
}
