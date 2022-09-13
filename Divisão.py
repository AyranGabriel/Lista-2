#******************************************************************************
#                               Divisao de doces.
#*****************************************************************************/
#*-* coding: utf-8 *-*

#Definindo variaveis;

p1=0
p2=0
posicao=0
numero_maior=0
numero_menor=0
lista = []

#Tenho que transformacar em string para aceitar mais de um valor;
num, num2 = input().split(" ")

#Depois tenho que converter de novo para inteiro;
num = int(num)
num2 = int(num2)

if (num>num2):
    numero_maior = num
    numero_menor = num2
elif(num2>num):
    numero_maior = num2
    numero_menor = num

def divisores(num):
    for i in range(1, num//2+1):
        if num % i == 0: 
            yield i
    yield num
        
for i in range(numero_menor,numero_maior+1):
    divisores(i)
    lista.append(len((list(divisores(i)))))
    #print(len((list(divisores(i)))))


p1 = lista.index(max(lista))  
p2 = p1+numero_menor
posicao = p2
#(list(divisores(i))).index()
print("{} {}".format(posicao,max(lista)))

#print((list(divisores(i))))
#print(len((list(divisores(i)))))

#print((list(divisores(num))))
#print(len((list(divisores(num)))))