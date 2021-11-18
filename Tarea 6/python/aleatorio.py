import random
numeroaleatorio = random.randint(0,10)
salir = str()
while salir != 'n' and salir != 'N':
    numusuario = input("Adivina el numero del 0 al 10: ")
    numusuario = int(numusuario)
    if numusuario < 0:
            print("Dame solo numeros positivos")
    if numusuario > 10:
        print("no tiene que ser mayor a 10")
    if numusuario>=0 and numusuario <=10:
        if numusuario == numeroaleatorio:
                print("adivinaste felicidades")
        if numusuario != numeroaleatorio:
                print("Ese no es el numero vuelve a intentar")
    salir = input("Deseas volver a intentarlo? S/N: ")