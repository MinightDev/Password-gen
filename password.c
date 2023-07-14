#include "gen.h"

int main() {
    int chars;
    int combo;
    char m[5][120] = {"",
    "Alphabets & numbers",
    "Alphabets & Symbols", 
    "Numbers & Symbol",
    "All (recommended)"};
    char pass[150];
    
    printf("*****Password Generator*****\n");
    
    do
    {
    printf("* we recommend using 12+ chars\n");
    printf("* How many characters: ");
    scanf("%d", &chars);
    }while (chars < 12);
    
    printf("****Select Combination****\n");
    while (getchar() != '\n');
    printf("+--------+--------+--------+--------+\n");
    printf("|1| Alphabets & numbers\n");
    printf("|2| Alphabets & Symbols\n");
    printf("|3| Numbers & Symbols\n");
    printf("|4| All (recommended)\n");
    printf("+--------+--------+--------+--------+\n");
    printf("Choose combination: ");
    scanf("%d", &combo);
    if (combo == 1 || combo == 2 ||combo == 3 ||combo == 4)
    {
        generator(combo, chars, pass);
        printf("+--------+--------+--------+--------+\n");
        printf("Generated Password: %s\n", pass);
        printf("Combination Used: %s\n", m[combo]);
        printf("Author: %s\n", "MinightDev");
        printf("+--------+--------+--------+--------+\n");
    }else
    {
        printf("Error, (%d) invalid choice", combo);
    }
    
    return 0;
}

char generator(int combo, int chars, char *pass)
{
    srand(time(NULL));
    int random;
    int i;
    /***********Alphabets & numbers*************/
    if (combo == 1)
    {
        for (i = 0; i < chars; i++)
        {
            if (rand() % 2 == 0) {
                random = 48 + rand() % (57 - 48 + 1);
            } else {
                random = 65 + rand() % (90 - 65 + 1);
            }
            pass[i] = random;
        }
        /***********Alphabets & Symbols*************/
    } else if (combo == 2)
    {
        for (i = 0; i < chars; i++)
        {
            if (rand() % 2 == 0) {
                random = 33 + rand() % (47 - 33 + 1);
            } else {
                random = 65 + rand() % (90 - 65 + 1);
            }
            pass[i] = random;
        }
        /***********Numbers & Symbols*************/
    } else if (combo == 3)
    {
        for (i = 0; i < chars; i++)
        {
            if (rand() % 2 == 0) {
                random = 33 + rand() % (47 - 33 + 1);
            } else {
                random = 48 + rand() % (57 - 48 + 1);
            }
            pass[i] = random;
        }
        /***********Alphabets & Numbers*************/
    } else if (combo == 4)
    {
        for (i = 0; i < chars; i++)
        {
                random = 33 + rand() % (122 - 33 + 1);
            pass[i] = random;
        }
    }
    
      return pass;
}