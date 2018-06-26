#include <stdio.h>
#include <stdlib.h>
#include "phonebook.h"
#include "game.h"
#include "musics.h"

int main()
{
    int choice;

    printf("\n    *****************************WELCOME***********************************    \n");
    for(;;)
    {
        printf("\n1.Contacts\n2.Music\n3.Game\n4.Exit");
        printf("\nEnter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: phonebook();
                     break;
            case 2 :musics();
                    break;
            case 3 :game();
                     break;
            default : exit(0);

        }
    }


    return 0;
}
