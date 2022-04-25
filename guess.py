secret_word = "Narendra Damodardas Modi"
guess = ""
guess_count = 0
guess_limit = 3
out_of_guesses = False

print("Full Name Of The Honourable Mr. Prime Minister Of INDIA")
while guess != secret_word and not(out_of_guesses):
    if guess_count < guess_limit:
        guess = input ("Enter Guess:")
        guess_count +=1
    else:
        out_of_guesses = True 
if out_of_guesses:
    print("Out of Guesses, You LOST!")
    print(secret_word +" Is The right ANSWER")
else:
    print("YOU WIN!")
    print(secret_word +" Is The right ANSWER")
 
