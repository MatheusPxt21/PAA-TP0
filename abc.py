import random

# Função para imprimir o quadro na tela
def imprimir_quadro(quadro):
    for linha in quadro:
        print(''.join(linha))

# Função para criar uma figura aleatória
def criar_figura():
    figura = random.choice([asterisco, soma, letra_x])
    return figura

# Função para criar um quadro com figuras aleatórias
def criar_quadro(linhas, colunas, num_figuras):
    quadro = [[' ' for _ in range(colunas)] for _ in range(linhas)]

    for _ in range(num_figuras):
        figura = criar_figura()
        linha, coluna = random.randint(1, linhas - 2), random.randint(1, colunas - 2)

        # Verificar se a posição está ocupada
        while quadro[linha][coluna] != ' ':
            linha, coluna = random.randint(1, linhas - 2), random.randint(1, colunas - 2)

        # Colocar a figura no quadro
        for i in range(len(figura)):
            for j in range(len(figura[0])):
                quadro[linha + i][coluna + j] = figura[i][j]

    # Preencher bordas com '-' e '|'
    for i in range(linhas):
        quadro[i][0] = '|'
        quadro[i][-1] = '|'
    for j in range(colunas):
        quadro[0][j] = '-'
        quadro[-1][j] = '-'

    return quadro

# Definir as figuras básicas
asterisco = ['*']
soma = ['*', '*', '*']
letra_x = ['* *', ' * ', '* *']

# Solicitar ao usuário o tipo de figura e a quantidade
tipo_figura = input("Escolha o tipo de figura (asterisco, soma, letra_x ou aleatório): ")
num_figuras = int(input("Quantas figuras você deseja (digite um número maior que 0): "))

if tipo_figura == 'aleatório':
    tipo_figura = random.choice(['asterisco', 'soma', 'letra_x'])

# Limitar o número de figuras a um máximo de 100
num_figuras = min(100, max(1, num_figuras))

# Tamanho do quadro
linhas = 20
colunas = 80

# Criar o quadro com as figuras
quadro = criar_quadro(linhas, colunas, num_figuras)

# Imprimir o quadro na tela
imprimir_quadro(quadro)