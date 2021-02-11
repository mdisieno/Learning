weight = int(input("Input your weight: "))
lbsOrKgs = input("Kg(K/k) or Lbs?(L/l): ")
conversion = 0.0
if (lbsOrKgs is "k" or "K"):
    conversion = weight * 2.204262
    print("Your weight in Lb is: ", conversion)
elif (lbsOrKgs is "l" or "L"):
    conversion = weight * 0.453592
    print("Your weight in Kg is: ", conversion)