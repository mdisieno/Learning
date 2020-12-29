#first val is key

customer = {
    "name":"John Smith",
    "age" : 30,
    "is_verified": True
}
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
#call key
print(customer["name"])




# Exercise
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
numbers = {
    "1":"One ",
    "2":"Two ",
    "3":"Three ",
    "4":"Four ",
    "5":"Five ",
    "6":"Six ",
    "7":"Seven ",
    "8":"Eight ",
    "9":"Nine ",
    "0":"Zero "
}
number = input("What is your number going to be?: ")
for x in number:
    print(numbers[x])