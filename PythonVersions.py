def printString(input):
    print(input)

def intRandom1DArray(size):
    myList = []
    for x in range(size):
        n = random.randint(0,100)
        myList.append(n)
    return myList

def intRand2DArray(row, col):
    Matrix = [[random.randint(-2147483648, 2147483647) for x in range(col)] for y in range(row)]
    return Matrix

def int2DArrayToString(input):
    result = ''
    for j in range(len(input)):
         for i in range(len(input[0])):
               input[j][i] = str(input[j][i])
               result = result + input[j][i] + ' '
         result = result + '\n'
    return result

def promptForInput(msg):
    userInput = input(msg+"\n")
    return userInput
    
def orderedArray(size):
    list = []
    for x in range(size):
        list.append(x)

def make2d(row, col):
   arr=[]
   for i in range(row):
      mylist = []
      for j in range(col):
          mylist.append( i*10+j)
      arr.append(mylist)
   return arr
   
def sumArray(myList):
    result = 0
    for x in myList:
        result += x
    return result

def averageArray(myList):
    result = 0
    for x in myList:
        result += x
    return result

def make2d(inputArr):
   sum = 0;
   row = len(inputArr)
   col = len(inputArr[0])
   for i in range(row):
      for j in range(col):
         sum = sum + inputArr[i][j]
   return sum