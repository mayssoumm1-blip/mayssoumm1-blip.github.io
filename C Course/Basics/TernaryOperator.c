 #include <stdio.h>
 #include <stdbool.h>

 int main(){
    // ternary operator ? = shorthand for if-else statement
    // (condition) ? expression_if_true : expression_if_false
    int x = 85;
    int y = 7;
    int max = (x > y) ? x : y;
    printf("The maximum vaue  is: %d\n", max);
 

    bool isOnline;
    printf("Are you Online?");
    scanf("%d", &isOnline); 
 }