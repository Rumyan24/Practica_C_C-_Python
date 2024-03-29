import math

# Функция для вычисления z
def calculate_z(x, y):
    numerator = x + 2 + y / x**2  # Числитель
    denominator = y + 1 / math.sqrt(x**2 + 10)  # Знаменатель
    return numerator / denominator

# Функция для вычисления q
def calculate_q(x, y):
    return 7.25 * math.sin(x) - abs(y)

# Ввод значений x и y
x = float(input("Введите x: "))
y = float(input("Введите y: "))

# Вычисление и вывод результатов
z = calculate_z(x, y)
q = calculate_q(x, y)
print("z =", z)
print("q =", q)
