#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>


int main(int argc, char const *argv[]){
    if (argc != 6)
    {
        printf("coloque os cincos parametro!\nusage: ./main.exe key1 key2 key3 key4 key5");
    }
    
    int num[5];
    int count = 1;
    num[0] = atoi(argv[1]);
    num[1] = atoi(argv[2]);
    num[2] = atoi(argv[3]);
    num[3] = atoi(argv[4]);
    num[4] = atoi(argv[5]);

    while (count < 6)
    {
        if (num[count - 1] == count)
        {
            printf("certo: %i\n", num[count-1]);
        }else{
            printf("errado: %i\n", num[count-1]);
        }
        count++;
    }
    

    return 0;
}