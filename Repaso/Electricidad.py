salir = str()
while salir != 's' and salir != 'S':
    zona=str(input("Dame tu zona A, B o C?: "))
    consumo=float(input("Dame el consumo: "))
    print(zona, consumo)

    if zona =='a' or zona =='A':
        costo1 =1.2;
        costo2 =1.8;
        costo3=2.4;
    if zona =='b' or zona =='B':
        costo1 =1.3;
        costo2 =1.9;
        costo3=2.6;
    if zona =='c' or zona =='C':
        costo1 =1.4;
        costo2 =2;
        costo3=2.8;

    if consumo<75:
        pagar=consumo*costo1
        print("El totoal a pagar es: ",consumo,"kWh * ",costo1," = $" ,pagar)
    if consumo>=75 and consumo<=150:
        pagar=consumo*costo2
        print("El totoal a pagar es: ",consumo,"kWh * ",costo2," = $" ,pagar)
    if consumo>150 and consumo<=500:
        pagar=consumo*costo3
        print("El totoal a pagar es: ",consumo,"kWh * ",costo3," = $" ,pagar)
    if consumo>500:
        pagar=(consumo*(costo3+1))+(100*costo3)
        print("El totoal a pagar es: (",consumo,"kWh * (",costo3,"+1)) + (100*",costo3,") = $",pagar)
    salir = input("Presiona S para salir: ")