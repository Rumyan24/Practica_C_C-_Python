import math

# Функция для вычисления x
def calculate_x(a, b):
    return 2 / (a**2 + 25) + (b / (1 / math.sqrt(b)) + a + b / 2)

# Функция для вычисления y
def calculate_y(a, b):
    return (abs(a) + 2 * math.sin(b)) / (5.5 * a)

# Ввод значений a и b
a = float(input("Введите a: "))
b = float(input("Введите b: "))

# Вычисление и вывод результатов
x = calculate_x(a, b)
y = calculate_y(a, b)
print("x =", x)
print("y =", y)
