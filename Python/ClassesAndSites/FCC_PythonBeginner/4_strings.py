phrase = "Giraffe Academy"
#         0123456789+

print("Giraffe\nAcademy") #new line
print("Giraffe\"Academy") #escape
print(phrase + "is cool") #concatenation
print(phrase.lower()) #function to convert to lower
print(phrase.upper()) #function to covert to upper
print(phrase.isupper()) #bool for upper
print(phrase.upper().isupper()) #can be daisychained
print(len(phrase)) #length function
print(phrase[0]) #treat strings like arrays
print(phrase.index("G")) #returns index of cap G
print(phrase.replace("Giraffe","Beetle")) #swaps