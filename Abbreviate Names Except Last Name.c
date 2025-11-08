#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char word[20];
    int i, j = 0, len;

    printf("Enter full name:\n");
    gets(name);

    printf("Abbreviated name: ");
    len = strlen(name);
    for(i=0; i<=len; i++) {
        if(name[i]==' ' || name[i]=='\0') {
            word[j] = '\0';
            if(name[i]=='\0') {
                printf("%s", word);  
            } else {
                printf("%c. ", word[0]); 
            }
            j=0;
        } else {
            word[j++] = name[i];
        }
    }
    return 0;
}
