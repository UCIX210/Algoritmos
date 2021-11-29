
salir = str()
while salir != 'x' and salir != 'X':
    nboletos=int(input("Numero de boletos: "))
    if nboletos<=12:
        tipo=str(input("Tipo de boleto (a para Gradas o b para General): "))
        if tipo=="a" or tipo=="A":
            Pagar=nboletos*925
            iva=Pagar*.16
            Tpagar=Pagar+iva
            print("Tipo boleto: Gradas")
            print("No de boletos: ", nboletos)
            print("Precio de la compra: ", nboletos, " x 925= ",Pagar)
            print("Total a pagar: ", Tpagar)
        if  tipo=="b" or tipo=="B" :
            Pagar=nboletos*810
            iva=Pagar*.16
            Tpagar=Pagar+iva
            print("Tipo boleto: General")
            print("No de boletos: ", nboletos)
            print("Precio de la compra: ", nboletos, " x 925= ",Pagar)
            print("Total a pagar: ", Tpagar)
        else:
            print("Ingreso invalido, a o b son validos")   
    else:
        print("Solo se pueden comprar maximo 12")
    salir = input("Enter para repetir o X para salir: ")
