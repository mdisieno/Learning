monthConversions = {
    "Jan":"January",
    "Feb":"February",
    "Mar":"March",
    "Apr":"April",
    "May":"May",
    "Jun":"June",
    "Jul":"July",
    "Aug":"August",
    "Sep":"September",
    "Oct":"October",
    "Nov":"November",
    "Dec":"December",
}

input = input("Give me a 3 digit month: ")
if len(input) == 3:
    print(monthConversions.get(input))
else:
    print("Invalid Input")