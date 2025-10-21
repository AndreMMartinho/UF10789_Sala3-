# UF10789_Sala3-
Atividade assíncrona em grupo

O programa trocos.c foi desenvolvido em linguagem C e tem como objetivo calcular o número mínimo de moedas necessárias para representar um determinado montante em euros introduzido pelo utilizador.

1 - O utilizador introduz um valor em euros, podendo incluir cêntimos.

2 - O programa converte esse valor em cêntimos (multiplicando por 100) e utiliza a função round() para evitar erros de arredondamento.

3 - De seguida, o código calcula quantas moedas de cada tipo são necessárias — começando pelas maiores (2 €) até às menores (1 cêntimo).

4 - Para cada tipo de moeda, o programa:

Divide o valor total pelo valor da moeda;

Mostra o número de moedas necessárias;

Atualiza o valor restante com o operador % (resto da divisão).
