def descomponer(n):
    print(n," = ", end="") 
    f_primo = 2
    primero = True
    while n>1:
        if n % f_primo == 0:
            if primero == True:
                primero = False
            else:
                print("x", end="")
            print(f_primo, end="")
            n = n/f_primo            
        else:  
            f_primo += 1
    if n<= 1:
        print("")

n=input("Dame un numero entero mayor a 1: ")

try:
    n=int(n)
    if n <= 1:
        print("Por favor debe ser un numero entero mayor a 1")
    else:
        descomponer(n)
except ValueError:
    print("Por favor debe ser un numero entero mayor a 1")

