# 🎮 Hangman Game (C)

A console-based **Hangman Game** developed in C where the player attempts to guess a randomly selected word one letter at a time. The player has a limited number of incorrect attempts to reveal the hidden word before losing the game.

## Features

* 🎲 Random word selection from a predefined word list
* 🔤 Guess one letter at a time
* 📝 Hidden word displayed using underscores (`_`)
* ❤️ Limited number of incorrect attempts
* 🏆 Win by correctly guessing the complete word
* ❌ Lose when all attempts are exhausted

## Technologies Used

* C Programming
* Arrays
* Strings (`string.h`)
* Random Number Generation (`stdlib.h`)
* Time Library (`time.h`)

## Game Rules

1. A random word is selected from the predefined list.
2. The word is displayed as underscores (`_`), one for each letter.
3. The player guesses one letter per turn.
4. If the guessed letter exists in the word, all occurrences are revealed.
5. If the guessed letter is incorrect, one attempt is deducted.
6. The game ends when:

   * The player successfully guesses the entire word, or
   * The player runs out of attempts.

## How to Run

### Compile

```bash
gcc hangman.c -o hangman
```

### Run

```bash
./hangman
```

> **Windows (MinGW):**
>
> ```bash
> gcc hangman.c -o hangman.exe
> hangman.exe
> ```

## Sample Gameplay

```text
Welcome to The HangMan Game!!

Word to guess: ______

Enter a letter --> a

Word to guess: _a____

Enter a letter --> p

Word to guess: _app__

Enter a letter --> l

Word to guess: _appl_

Enter a letter --> e

Congratulations! You have guessed the word: apple
```

## Project Structure

```text
hangman.c
README.md
```

## Learning Outcomes

This project demonstrates:

* Random number generation
* String manipulation
* Arrays
* Loops and conditional statements
* Functions
* Character input handling
* Basic game development in C

## Future Improvements

* 🎨 Draw the Hangman figure after every incorrect guess.
* 🔁 Prevent repeated guesses from reducing attempts.
* 📚 Load words from an external file.
* ⭐ Add multiple difficulty levels.
* 🏅 Maintain player scores and high scores.
* 💡 Add hints for each word.
* 🔠 Ignore uppercase/lowercase differences.
* 🎮 Allow players to play multiple rounds without restarting the program.

## Author

**Maulik Singh**

---
