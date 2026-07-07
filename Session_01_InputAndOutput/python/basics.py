# 1. Output
print("Hello from Python!")

# 2. Variables (dynamically typed)
age = 19
gpa = 3.75
grade = 'A'
name = "Budi"

print(f"Name: {name}")
print(f"Age: {age} | GPA: {gpa} | Grade: {grade}")

# 3. Input
# Note: input() always returns a string, so we must cast it to int if needed
age_input = input("Enter a new age: ")
age = int(age_input)

print(f"Updated Age: {age}")
