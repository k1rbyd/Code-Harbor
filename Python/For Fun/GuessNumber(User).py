import random
def guess(x,lifeline):
    guess_number = random.randint(1,x)
    while lifeline > 0:
        num = int(input("Enter your guess: "))
        if num == guess_number:
            print("Yay! You guessed it correct!")
            break
        else:
            lifeline -= 1
            print("Nopeey. Guess again. You got %d more guesses" % lifeline)
            if lifeline == 1:
                print("Last Guess...be careful")
            elif num>guess_number:
                print("The guess is lower.")
            elif num<guess_number:
                print('The guess is higher.')
i = int(input("Enter the range: "))
no = int(input("Enter the number of guesses: "))
guess(i,no)