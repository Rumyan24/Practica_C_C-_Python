import random

# Генерация массива случайных вещественных чисел от -50 до 50
array_g = [random.uniform(-50, 50) for _ in range(15)]
print("Массив вещественных чисел от -50 до 50:", array_g)
