while True:
    try:
        palavras = input().lower().split()
        cont = 0
        isAliteracao = False 

        for i in range(len(palavras) - 1):
            primeira = palavras[i]
            prox = palavras[i + 1]
            if primeira[0] == prox[0]:
                if not isAliteracao:
                    cont += 1
                    isAliteracao = True
            else:
                isAliteracao = False

        print(cont)
    
    except EOFError:
        break
