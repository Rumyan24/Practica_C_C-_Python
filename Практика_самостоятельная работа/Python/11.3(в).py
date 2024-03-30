import random 

# Генерация массива случайных вещественных чисел от 0 до 10
array_v = [random.uniform(0, 10) for _ in range(15)]
print("Массив вещественных чисел от 0 до 10:", array_v)
