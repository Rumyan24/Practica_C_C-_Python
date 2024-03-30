import math

# Функция для вычисления a
def calculate_a(e, f):
    return (e + f / 2) / 3

# Функция для вычисления b
def calculate_b(h, g):
    return abs(h**2 - g)

# Функция для вычисления c
def calculate_c(g, h, e):
    return math.sqrt((g - h)**2 - 3 * math.sin(e))

# Ввод значений e, f, g и h
e = float(input("Введите e: "))
f = float(input("Введите f: "))
g = float(input("Введите g: "))
h = float(input("Введите h: "))

# Вычисление и вывод результатов
a = calculate_a(e, f)
b = calculate_b(h, g)
c = calculate_c(g, h, e)
print("a =", a)
print("b =", b)
print("c =", c)
