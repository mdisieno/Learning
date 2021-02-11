secretWord = "giraffe"
guess = ""
guessCount = 0
outOfGuesses = False

while guess != secretWord and not(outOfGuesses):
    if guessCount < 3:
        guess = input("Enter guess: ")
        guessCount += 1
    else:
        outOfGuesses = True

if outOfGuesses:
    print("Sorry, you lost")
else:
    print("You win!")