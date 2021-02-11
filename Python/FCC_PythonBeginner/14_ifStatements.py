isMale = True
isTall = False

if isMale and isTall: #checks if either true
    print("You are a tall male")
elif isMale and not(isTall):
    print("You are a male")
elif not(isMale) and isTall:
    print(("You are not a male, but are tall"))
else:
    print("You are a female")
