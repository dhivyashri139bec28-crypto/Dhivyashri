st = input("Enter a string: ")
def coun(st):
    space = 0
    alp = 0
    num = 0

    for i in st:
        if i.isalpha(): # Checks for letters
            alp += 1
        elif i.isdigit(): # Checks for numbers
            num += 1
        elif i.isspace(): # Checks for spaces
            space += 1

    print("The no. of alphabets:", alp)
    print("The no. of digits:", num)
    print("The no. of spaces:", space)
# Main routine
coun(st)
output:
Enter a string: dhivya@2007
The no. of alphabets: 6
The no. of digits: 4
The no. of spaces: 0