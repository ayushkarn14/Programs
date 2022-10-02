t = int(input())
for x in range(t):
    str = input()
    if str.casefold() == str[::-1].casefold():
        print("It is a palindrome")
    else:
        print("It is not a palindrome")
