import random
random_number = random.randint(1, 10)
print("Welcome to the Number Guessing Game!")
print("I'm thinking of a number between 1 and 10. Can you guess what it is?")
while True:
    guess = int(input("Enter your guess: "))
    
    if guess == random_number:
        print("Congratulations! You guessed the correct number.")
        break
    else:
        print("Try again. Hint: the number is between 1 and 10.")
if __name__ == "__main__":
    random_number = random.randint(1, 10)
    print("Welcome to the Number Guessing Game!")
    print("I'm thinking of a number between 1 and 10. Can you guess what it is?")
    
    while True:
        guess = int(input("Enter your guess: "))
        
        if guess == random_number:
            print("Congratulations! You guessed the correct number.")
            break
        else:
            print("Try again. Hint: the number is between 1 and 10.")
