'''
This would be useful for CC
'''
#lets you choose file
#first arg file, second arg mod (rawr+)
employeeFile = open("employees.txt", "r")

#check if readable
print(employeeFile.readable())

#single line read
print(employeeFile.readline())

#read and push to array
print(employeeFile.readlines())

#looped through each val in array from file
for employee in employeeFile.readlines():
    print(employee)

#its good to close after opening file
employeeFile.close()
