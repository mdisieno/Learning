try:
    number = int(input("Enter a Number: "))
    print(number)
except ZeroDivisionError as err:
    print("Division By Zero Error")
    print(err)
except ValueError as err:
    print("Invalid Input")
    print(err)
