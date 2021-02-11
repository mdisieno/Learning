def translation(phrase):
    translation = ""
    for letter in phrase:
        if letter.lower() in "aeiou":
            translation += "g"
            if letter.isupper():
                translation += "G"
        else:
            translation += letter
    return translation

print(translation(input("Enter a phrase: ")))