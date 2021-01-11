luckyNumbers = [4, 8, 15, 17, 23, 42]
friends = ["Steve","Bob","Mark","Calvin","Jim","Travis"] #list
otherFriends = ["Nike","Bill","Gary"] #additional list to add
luckyNumbers = [1,42,33,234,75,56,37,28,93,10]
friends.extend(otherFriends)
friends.append("Creed") #addss to the end
friends.remove("Bob") #remove specific el
friends.insert(1, "Kelly") #two arg, location/val
print(friends)
print(friends.index("Calvin"))
print(friends.count("Jim"))

friends.sort() #sort alpha
print(friends) 
luckyNumbers.sort() #sort int
print(luckyNumbers)
luckyNumbers.reverse() #reverse int
print(luckyNumbers)
friends2 = friends.copy() #copy from var to var
