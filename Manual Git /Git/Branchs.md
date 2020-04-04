# Ramificações

## Criando uma nova ramificação

O que acontece quando você cria uma nova ramificação? Bem, isso cria um novo ponteiro para você se movimentar. Digamos que você queira criar um novo ramo chamado testing . Você faz isso com o comando git branch :
```
 git branch testing 
```
## Mudando de ramo

Para alternar para uma ramificação existente, execute o comando ```git checkout``` . Vamos mudar para o novo ramo de teste :
```
git checkout teste
```
Isso move _HEAD_ para apontar para o ramo de _teste_. 

OBS: Pode executar o comando git checkout com a opção -b :
```
git checkout -b teste
```
Este é um atalho para:
```
git branch teste

git checkout teste
```
Criando um novo ponteiro de ramificação.