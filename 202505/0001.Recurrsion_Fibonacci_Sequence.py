#v1



def fib(n):
    a = b = 1

    if n >= 1:
        print("The 1st fib element is:", a)
    if n >= 2:
        print("The 2nd fib element is:", b)

    for i in range(3, n + 1):
        temp = a + b
        print(f'The {i}th fib element is:', temp)
        a = b
        b = temp





# Example usage:
#fib(10)






#v2







def main():
    a, b = 1, 1

    n = int(input("Enter how many numbers to print: "))

    # Print the first two numbers
    if n >= 1:
        print(a)
    if n >= 2:
        print(b)

    # Print the rest
    for i in range(3, n + 1):
        c = a + b
        print(c)
        a, b = b, c

if __name__ == "__main__":
    main()
