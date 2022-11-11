
inicio = 0
fim = tamanho(vetor) - 1

Enquanto (inicio <= fim) :

  posMeio = (inicio + fim) / 2

  Se quero == valorMeio : retorno posMeio
  Se não se quero > meio : inicio = posMeio + 1
  Se não se quero < meio : fim = posMeio - 1


quero = 5
inicio = 1
fim = 1
posMeio = 
valorMeio = 

vetor = [2, 4, 6, 8, 10]
         

-----------------------
busca sequencial = n operações
busca binária = (log_2 n) operações