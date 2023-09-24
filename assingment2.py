num = int(input("Enter a number between 1-99: "))
if (num > 0 and num < 100):
    if (num == 70 or num % 10 == 7):
        print("BUZZ")
    elif (num % 7 == 0 ):
        print("BUZZ-BUZZ")
    else:
        print(num)
else:
    print("Invalid number, input number between 1-99")