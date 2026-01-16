# include <stdio.h>
# include <string.h>

// MAD LIBS GAME

int main (){
    char adj[50] = "";
    char noun[50] = "";
    char adj1[50] = "";
    char verb[50] = "";
    char adj2[50] = "";

    printf("This is the mad libs game!");
    printf("Enter an adjective (description): ");
    fgets(adj, sizeof(adj), stdin);
    adj[strlen(adj) - 1] = '\0';

    printf("Enter a noun (animal or person): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adj1, sizeof(adj1), stdin);
    adj1[strlen(adj1) - 1] = '\0';

    printf("Enter a verb (ending w/ ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb) - 1] = '\0';

    printf("Enter an adjective (description): ");
    fgets(adj2, sizeof(adj2), stdin);
    adj2[strlen(adj2) - 1] = '\0';

    printf("Today I went to an %s zoo!\n", adj);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun, adj1, adj2);
    printf("I was %s!\n", verb);

    return 0;
}