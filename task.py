#Author - Anas Jawed
#Date - 28/02/2024
#21BRS1336- ANAS JAWED

def reverse_number(num):
    rev = 0
    while num > 0:
        rev = rev * 10 + num % 10
        num //= 10
    return rev

num = int(input("Enter a 4-digit number: "))

for _ in range(10):
    reversed_num = reverse_number(num)
    num = num + reversed_num
    num = reverse_number(num)

print("Final result after 10 iterations:", num)
