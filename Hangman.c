#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define Max_Attempts 6
#define Words_Count 11

const char *words[] = {"apple", "mango", "pineapple", "volcano", "dog", "grapes", "elephant", "monkey", "horse", "keyboard", "landscape"};

const char *getRandomWord(){
    int RandomIndex = rand() % Words_Count;
    return words[RandomIndex];
}

void delay(int seconds){
    int mili_seconds = seconds * 1000;
    clock_t start = clock();
    while (clock() < start + mili_seconds)
    {
        ;
    }
}

int main()
{
    srand(time(0));
    const char  *wordTOGuess = getRandomWord();
    int wordLength = strlen(wordTOGuess);
    char guessedWord[wordLength + 1];
    int attempts = 0;

    for (int i = 0; i < wordLength; i++)
    {
        guessedWord[i] = '_';
    }
    guessedWord[wordLength] = '\0';

    printf("Welcome to The HangMan Game!!\n");

    while (attempts < Max_Attempts)
    {
        printf("Word to guess: %s\n", guessedWord);
        char guess;
        printf("Enter a letter--> ");
        scanf(" %c", &guess);

        int found = 0;
        for (int i = 0; i < wordLength; i++)
        {
            if (wordTOGuess[i] == guess){
                guessedWord[i] = guess;
                found = 1;
            }
        }
        
        if (!found){
            attempts++;
            printf("Incorrect Guess, Attempts remaining: %d\n", Max_Attempts - attempts);
        }
        if (strcmp(wordTOGuess, guessedWord) == 0)
        {
            printf("Congratualtions you have guesses the word: %s\n", wordTOGuess);
            delay(5);
            break;
        }
        
    }
    if (attempts >= Max_Attempts){
        printf("You are out of attempts, the word was: %s\n", wordTOGuess);
        delay(5);
    }
    
     
    return 0;
}