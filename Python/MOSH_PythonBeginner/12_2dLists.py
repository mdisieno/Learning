matrix = [
[1,2,3],
[4,5,6],
[7,8,9],
]

print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
for row in matrix:
    for item in row:
        print(item)
        

numbers=[5,2,1,7,4]
numbers.append(20)
numbers.insert(0,9)
numbers.remove(5)
numbers.insert(2,6)
print("Numbers before sort: ",numbers)
numbers.sort()
print("Numbers after sort:", numbers)
numbers.reverse()
print("Numbers reversed: ", numbers)
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
#Duplicate killer

#he worked backwords and made new one uniques
#easier and faster
numbers = [1,2,3,4,5,1,3,2]
uniques = []
print("Original list: ",numbers)
for x in numbers:
    if x not in uniques:
        uniques.append(x)
print(uniques)