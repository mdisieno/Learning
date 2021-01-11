num1 = float(input("Enter your first number: "))
operator = input("Enter your operator: ")
num2 = float(input("Enter your second number: "))


if operator == "+":
    print(num1 + num2)
elif operator == "-":
    print(num1 - num2)
elif operator == "/":
    print(num1 / num2)
elif operator == "*":
    print(num1 * num2)
else:
    print("Invalid operator")