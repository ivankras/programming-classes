# Funciones accesorias

def doble(num):
    return num*2

def cuadrado(num: int):
    return num*num

# Programa principal

# Para los numeros entre 1 y 10:
#  - calcular el doble e imprimir
#  - elevar al cuadrado e imprimir
for i in range(1, 11):
    print(f'Numero {i}, doble {doble(i)}, cuadrado {cuadrado(i)}')
