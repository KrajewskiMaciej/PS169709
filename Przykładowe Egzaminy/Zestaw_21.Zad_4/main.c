#include <stdio.h>
#include <stdlib.h>
/*
Napisz funkcjê, która przyjmuje jako argument listê z g³ow¹ o elementach typu:
struct node {
    char z;
    struct node * next;
};
Funkcja ma zwróciæ napis utworzony z liter przechowywanych na liœcie. Stwórz przypadek
testowy.
*/

struct node {
    char z;
    struct node * next;
};

char* napisl(struct node *glowa){
    int s=0;
    struct node *current=glowa;

    while(current != NULL){
        s++;
        current=current->next;
    }

    char* napis=(char*)malloc((s+1)*sizeof(char));

    current = glowa;
    int i=0;
    while (current != NULL){
        napis[i]=current->z;
        current=current->next;
        i++;
    }

    napis[s]='\0';

    return napis;
}

int main()
{
    struct node *glowa=NULL;
    struct node *druga=NULL;
    struct node *trzecia=NULL;

    glowa=(struct node*)malloc(sizeof(struct node));
    druga=(struct node*)malloc(sizeof(struct node));
    trzecia=(struct node*)malloc(sizeof(struct node));

    glowa->z='H';
    glowa->next = druga;

    druga->z='e';
    druga->next=trzecia;

    trzecia->z='l';
    trzecia->next=NULL;

    char *napis=napisl(glowa);
    printf("Napis: %s\n",napis);

    free(glowa);
    free(druga);
    free(trzecia);
    free(napis);

    return 0;
}
