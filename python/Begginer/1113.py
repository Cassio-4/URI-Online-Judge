while 1:
    X, Y = input().split()
    X = int(X)
    Y = int(Y)
    if X > Y: print('Decrescente')
    elif X < Y: print('Crescente')
    else: break
