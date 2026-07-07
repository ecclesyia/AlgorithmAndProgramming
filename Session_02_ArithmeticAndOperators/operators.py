# 1. Arithmetic Operators
a = 15
b = 4

print("--- Arithmetic Operators ---")
print(f"{a} + {b} = {a + b}")
print(f"{a} - {b} = {a - b}")
print(f"{a} * {b} = {a * b}")
print(f"{a} / {b} = {a / b} (Python division returns float by default!)")
print(f"{a} // {b} = {a // b} (Floor division truncates decimals)")
print(f"{a} % {b} = {a % b} (Modulo)")

# 2. Relational & Logical Operators
age = 20
has_id = True

print("\n--- Relational & Logical Operators ---")
# Uses standard English keywords: and, or, not
print("Can enter club?", (age >= 18 and has_id))

is_weekend = False
is_holiday = True
print("Is day off?", (is_weekend or is_holiday))

print("Not day off:", not (is_weekend or is_holiday))
