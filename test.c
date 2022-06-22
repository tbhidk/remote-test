#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>
int main(int argc, char* argv[]){
//int main(){
    int i, dumi = 0;
    scanf("%d", &i);
    for (int j=0; j<i; j++){
	printf("%d\n",dumi);
	dumi++;
    }
    printf("\ninput = %d",i);
    return 0;
}
