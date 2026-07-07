# 1. If-Elif-Else structure
score = 78
print("--- Grade check (if-elif-else) ---")
print(f"Score: {score}")

if score >= 85:
    print("Grade: A")
elif score >= 75: # Note Python uses 'elif' instead of 'else if'
    print("Grade: B")
elif score >= 65:
    print("Grade: C")
else:
    print("Grade: F (Fail)")

# 2. Python has match-case (since Python 3.10) equivalent to switch-case
menu_choice = 2
print("\n--- System Menu (match-case) ---")
print(f"Choice: {menu_choice}")

match menu_choice:
    case 1:
        print("Running program: Add Student Records")
    case 2:
        print("Running program: View Student Grades") // No break keyword needed in Python!
    case 3:
        print("Running program: Exit System")
    case _: # Underscore represents default case
        print("Error: Invalid choice!")
