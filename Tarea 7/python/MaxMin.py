
cantidad = 15
numeros = []
for i in range(cantidad):
    try:
        n = float(input(f"dame el numero {i+1}: "))
        numeros.append(n)
    except:
        print("SOlO NUMEROS, vuelve a intentarlo")
        exit()
max = numeros[0]
min = numeros [0]

for n in numeros:   
    if max<n:
        max = n
    if min>n:
        min = n
print("El maximo es: ", max)
print("El minimo es: ", min)

