#include <stdio.h>

long fatnumbers(int n){ //função recursiva
    long int fat = 1;
    if(n == 1) return 1;
    else{ //senão
        fat = n * fatnumbers(n - 1);
        return fat;  
    }
}

long multpfat(int n){ //função recursiva
    long int fat2 = 1;
    if(n == 1) return 1;
    else{ //senão
        fat2 = fatnumbers(n) * multpfat(n-1);
        return fat2;  
    }
}

int main()
{
    int n; //valor sendo lido

    scanf("%d", &n);
    printf("%ld\n", multpfat(n));

    return 0;
}


