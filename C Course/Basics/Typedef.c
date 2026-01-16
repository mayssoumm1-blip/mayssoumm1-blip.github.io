#include <stdio.h>

typedef int number;
typedef char string;
typedef char initials[3];
int main(){

    // typedef = reserved keyword that gives an exciting datatype a "nickname"
    // that helps simplify complex types and improves code readability.
    // typedef existing_type new_name;

    number x = 3;
    number y = 5;
    number z = x+y;
    printf("%d\n", z);

    string name[] = "Mayssem Tlili";
    printf("%s\n", name);

    string ch = 'A';
    printf("%c\n", ch);

    initials user1 = "BC";
    initials user2 = "MT";
    initials user3 = "SH";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);

    return 0;
}