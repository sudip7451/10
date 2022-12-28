

def printMenu():
	print('-----------------Menu--------------------')
	print('1. Enter a string: ')
	print('2. Find the longest word in the string: ')
	print('3. Find Frequency of occurence of char: ')
	print('4. Find Frequency of occurence of word: ')
	print('5. Check for palindrome: ')
	print('6. Index of first appearance of substring: ')
	print('7. Exit: ')
	print('-----------------------------------------')
	choice=int(input('Enter a choice (1-7): '))
	return choice
#function to find character occurrence
def count_Occurrence(ch, str1):
    count = 0
    for i in range(len(string)):
        if(string[i] == char):
            count = count + 1
    return count

#function to find word occurence
def word_Occurrence(word, string):
    count = 0
    for i in range(len(string)):
        if(words[i] == word):
            count = count + 1
    return count  


def index_Substring(s1, s2):
	M = len(s1)
	N = len(s2)

	for i in range(N - M + 1):
		for j in range(M):
			if (s2[i + j] != s1[j]):
				break

		if j + 1 == M:
			return i

	return -1

choice = printMenu()
flag = False
while(choice != 7):
	if choice == 1:
		flag = True
		#Input a string
		string=input('Enter a string: ')
	elif choice == 2:
		if flag == False:
			print("Please Enter Choice 1")
		else:
			#Finding the length of the longest word
			words = string.split()
			print(words)
			maxlen = 0
			maxword = ''
			for word in words:
				if len(word) > maxlen:
					maxlen = len(word)
					maxword = word
			print('The longest word is : ',maxword)
			print('length of the longest word is : ',maxlen)
					
	elif choice == 3:
		if flag == False:
			print("Please Enter Choice 1")
		else:
			#finding the occurrence of input char
			char = input("Please enter your own Character : ")
			cnt = count_Occurrence(char, string)
			
			print("The total Number of Times ", char, " has Occurred = " , cnt)
			
	elif choice == 4:
		if flag == False:
			print("Please Enter Choice 1")
		else:
			word = input("Please enter your own Word : ")
			wrd = word_Occurrence(word, string)
			
			print("The total Number of Times ", word, " has Occurred = " , wrd)


	elif choice == 5:
		if flag == False:
			print("Please Enter Choice 1")
		else:
			#s is reverse of string
			a = string.lower()
			s = a[::-1] 
			if (s == a):
				print('The string is palindrome')
			else:
				print('The string is not a palindrome')
	elif choice == 6:
		if flag == False:
			print("Please Enter Choice 1")
		else:
			substring = input('Enter a substring: ')
			res = index_Substring(substring, string)
			if res == -1:
				print("Not present")
			else:
				print("Present at index " + str(res))
		

	elif choice == 7:
		if flag == False:
			print("-----------Exit-----------")			


	choice = printMenu()				

