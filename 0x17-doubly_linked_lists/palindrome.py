#!/usr/bin/python3
def largest_palindrome:
    largest_palindrome = 0
    
    for x in range(100, 1000):
        for j in range(100, 10000):
            product = x * j
            if str(product) == str(product)[::-1] and product > largest_palindrome:
                largest_palindrome = product

    with open("102-result", "w") as file:
        file.write(str(largest_palindrome))
