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
