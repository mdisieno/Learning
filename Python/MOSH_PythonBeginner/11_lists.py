names = ['John','James','Bill','Mark','Steve']
for name in names:
    print(name)

temp = 0
numbers = [1,2,3,4,5,6,12,17,20,30,7,8,9]
for number in numbers:
    if number > temp:
        temp = number
print("Biggest number is: ", temp)