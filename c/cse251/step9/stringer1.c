#include <stdio.h>
#include <string.h>
#include <ctype.h>

int StringLength(char str[]);
void PrintLength(char str[]);
void Reverse(char str[]);
int NumberOfSpaces(char str[]);
int NumberOfAppearances(char str[], char ch);

int main()
{
    int len;
    char mySentence[80];
    char ch;

    printf("Enter a sentence: ");
    fgets(mySentence, 80, stdin);
    len = strlen(mySentence);
    mySentence[len - 1] = '\0';
    printf("The entered sentence is: %s\n", mySentence);

    printf("Enter a ch: ");
    scanf("%c", &ch);
    // // fgets(ch, 1, stdin);
    printf("%c\n", ch);

    PrintLength(mySentence);

    printf("The number of spaces is: %d\n", NumberOfSpaces(mySentence));

    printf("The '%c' in '%s' counts %d times\n", ch, mySentence, NumberOfAppearances(mySentence, ch));

    Reverse(mySentence);
    printf("%s\n", mySentence);
}

int StringLength(char str[])
{
    int numChars = 0;

    while(str[numChars] != '\0') {
        numChars++;
    }

    return numChars;
}

void PrintLength(char str[])
{
    printf("The string %s is %d characters long\n", str, strlen(str));
}

void Reverse(char str[])
{
    int front = 0;
    int back = strlen(str) - 1;
    char t; /* A temporary place to put a character */
    while (front < back)
    {
        t = str[front];
        str[front] = str[back];
        str[back] = t;
        front++;
        back--;
    }
}

int NumberOfSpaces(char str[])
{
    int i;
    int numSpaces = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            numSpaces++;
        }
    }

    return numSpaces;
}

int NumberOfAppearances(char str[], char ch)
{
    int i;
    int numAppears = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == tolower(ch)) {
            numAppears++;
        }
    }

    return numAppears;
}
