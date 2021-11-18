def multiplo(n):
    primero = bool(True)
    for i in range(1, 101):
        if i % n == 0:
            if primero == False:
                print(" ,", i ,end="")          
            if primero:
                primero = False
                print(i, end="")  


n=input("Dame un numero entero mayor a 0: ")

try:
    n=int(n)
    if n <= 0:
        exit("Por favor debe ser un numero entero mayor a 0")
    if n > 100:
        print("No hay multiplo es los primeros 100 numeros")
    else:
        multiplo(n)
        print("")
except ValueError:
    print("Por favor debe ser un numero entero mayor a 0")


