height = input("Height:")

while not height.isdigit():
    height = input("Height:")

height = int(height)

for rows in range(height):

    for empty_space in range(height - rows):
        print(" ", end="")

    for hashtag in range(rows):
        print("#", end="")
    
    print("  ", end="")

    for hashtag in range(rows):
        print("#", end="")

    print("\n")

    