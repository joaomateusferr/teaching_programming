def main():

    n = int(input('Insert a number: '))

    if n > 0:
        print("It's positive")
    else:
        if n < 0:
            print("It's negative")
        else:
            print("It's zero")

main()