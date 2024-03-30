import math

# Функция для вычисления a
def calculate_a(e, f, g):
    return math.pow(math.sqrt(abs((e - 3) / f)), 3) + g

# Функция для вычисления b
def calculate_b(e, h):
    return math.sin(e) + math.cos(h)**2

# Функция для вычисления c
def calculate_c(e, f, g):
    return 33 * g / (e * f) - 1/3

# Ввод значений e, f, g и h
e = float(input("Введите e: "))
f = float(input("Введите f: "))
g = float(input("Введите g: "))
h = float(input("Введите h: "))

# Вычисление и вывод результатов
a = calculate_a(e, f, g)
b = calculate_b(e, h)
c = calculate_c(e, f, g)
print("a =", a)
print("b =", b)
print("c =", c)
