def common(list1,list2):
    tempList = []
    for x in list1:
        for y in list2:
            if x == y:
                tempList.append(x)

    return tempList

def palindrome(stringList):
    tempList = []
    for x in stringList:
        x = str(x)
        y = x[::-1]
        if x == y:
            tempList.append(x)
    return tempList

def prime(numList):
    is_prime = [True] * len(numList)
    is_prime[0] = False
    is_prime[1] = False

    for i in range(2, int(max(numList) ** 0.5) + 1):

        if is_prime[i]:
            for j in range(i * i, max(numList) + 1, i):
                is_prime[j] = False

    tempList =[]
    for x in range(len(numList)):
        if is_prime(x):
            tempList.append(numList[x])

    return tempList

def anagram(word,word_list):
#if our word and list's word has same length and same letters retur it.
    tempList = []
    list1 = []
    list1[:0] = word
    list1.sort()
    for it in word_list:
        list2 = []
        list2[:0] = it
        list2.sort()
        if list1 == list2:
            tempList.append(it)
    return tempList

list =  ["enlists", "google", "inlets", "banana"]
word = "listen"

newList=anagram(word,list)
print(newList)

