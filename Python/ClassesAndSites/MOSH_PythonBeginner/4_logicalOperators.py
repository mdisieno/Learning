income = 0
goodCredit = True;

if((income > 20) and (goodCredit == True)):
    print("Eligible for Loan")
else:
    if(income < 20):
        print("you need more money")
    elif(goodCredit == False):
        print("work on your credit")