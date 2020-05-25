#include <stdio.h>
#include <stdlib.h>

int main(){
    char cmdStr[1024];

    while (1)
    {
        scanf("%s",cmdStr);
        if(strcmp(cmdStr,"help")){
            printf("help\n");
        }
    }
    
    return 0;
}