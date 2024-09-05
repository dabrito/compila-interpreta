import random
import time

# Medir el tiempo de ejecución
start_time = time.time()

# Ejercicio 2: Contar pares e impares, randoms
pares = 0
impares = 0
for _ in range(500):
  valor = random.randint(50, 100)
  if valor % 2 == 0:
    pares += 1
  else:
    impares += 1

print(f"Pares: {pares}, Impares: {impares}")

# Fin del tiempo de ejecución
end_time = time.time()
print(f"Tiempo de ejecución en Python: {end_time - start_time} segundos")