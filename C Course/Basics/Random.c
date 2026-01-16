# include <stdio.h>
# include <stdlib.h>
# include <time.h>

// Pseudo-random = Appear random but are determined by a mathematical formula
//                 that uses a seed-value to generate a predictible sequence of numbers.
//                 Advanced: Mersenne Twister or /dev/random (hardware entropy)

 int main(){
    
    srand(time(0));
    int min = 50;
    int max = 100;

    int random1 = (rand() % (max - min + 1) + min);
    int random2 = (rand() % (max - min + 1) + min);
    int random3 = (rand() % (max - min + 1) + min);

    printf("%d\n", RAND_MAX);  // RAND_MAX = display the maximum value of random (constant)
    printf("%d  %d  %d", random1, random2, random3);
    
    return 0;
 }