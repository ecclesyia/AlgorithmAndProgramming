# 1. For Loop (Python uses range() generator)
print("--- For Loop (1 to 5) ---")
for i in range(1, 6): # Starts at 1, ends before 6
    print(f"{i} ", end="")
print()

# 2. While Loop
print("\n--- While Loop (Countdown) ---")
count = 3
while count > 0:
    print(f"{count}... ", end="")
    count -= 1
print("Launch!")

# 3. Python does not have do-while loops.
# To replicate do-while, we use "while True" with a conditional "break"
print("\n--- Simulating Do-While in Python ---")
while True:
    print("Choose Option (1 or 2): ", end="")
    user_input = 2 # Simulate valid input
    print(user_input)
    if user_input == 1 or user_input == 2:
        break # Exit loop
print("Valid option selected!")

# 4. Nested Loops: Star shape pattern
print("\n--- Nested Loops: Triangle Pattern ---")
size = 5
for row in range(1, size + 1):
    for col in range(1, row + 1):
        print("*", end="")
    print()
