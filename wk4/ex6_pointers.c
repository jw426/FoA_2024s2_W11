#include <stdio.h>
#include <stdlib.h>
void try_one_coin(int cents, int coin) ;
void print_change(int times, int cents) ;

int main(int argc, char** argv) {

    int amount; 
    scanf("%d", &amount);
      
    try_one_coin(&amount, 200);
    try_one_coin(&amount, 100);
    try_one_coin(&amount, 50);
    try_one_coin(&amount, 20);
    try_one_coin(&amount, 10);
    try_one_coin(&amount, 5);
    try_one_coin(&amount, 1);
    
    return 0;
}

void try_one_coin(int *cents, int coin) {
    
    int times = cents / coin;
    print_change(times, coin);
    // return cents - times * coin; 
}

void print_change(int times, int cents) {
 
    if (times > 0) {
        printf("give %d %3d-cent coins\n", times, cents);
    }
     
}


    