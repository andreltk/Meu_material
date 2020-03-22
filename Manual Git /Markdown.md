 
# Sobre o Markdown

[![Markdown](https://raw.githubusercontent.com/dcurtis/markdown-mark/master/png/208x128-solid.png)](https://github.com/dcurtis/markdown-mark)


O Markdown é uma ferramenta de conversão de texto em HTML para escritores da web. O Markdown permite que você escreva usando um formato de texto simples, fácil de ler e de escrever, e depois convertê-lo em XHTML (ou HTML) estruturalmente válido.
 
## Como funciona?

  “Markdown” é duas coisas: (1) uma sintaxe de formatação de texto sem formatação; e (2) uma ferramenta de software, escrita em Perl, que converte a formatação de texto sem formatação em HTML. Consulte a página de [sintaxe](https://daringfireball.net/projects/markdown/syntax) para obter detalhes relacionados à sintaxe de formatação do Markdown.

https://www.markdownguide.org/getting-started

<br>
<br>
<br>

------------------------
------------------------
# **Títulos**


Tìtulos (```<h1>``` a ```<h6>```)

Para marcar um título, você vai usar ```# ```seguido de um espaço a quantidade de vezes que irá representar o nível do título. Exemplo:
```
1 # Título nível 1
2 ## Título nível 2
3 ### Título nível 3
4 #### Título nível 4
5 ##### Título nível 5
6 ###### Título nível 6
```
O resultado é: 

# Título nível 1
## Título nível 2
### Título nível 3
#### Título nível 4
##### Título nível 5
###### Título nível 6

### **Obs:** Outro modo para títulos nível 1 e 2 é sublinhar com ```=``` e ```-``` respectivamente

Ex:
```
Título de Primeiro Nível
========================

Título de Segundo Nível
------------------------
```
<br>
<br>
<br>


------------------------
------------------------
# **Parágrafos e quebra de linha**


Para gerar parágrafos, basta escrever o texto em uma linha:


```
1 - Este é um parágrafo.
2 -   
3 - Este é outro parágrafo.

```

Lembrando que é necessário pular de linha, ou então dar dois espaços no final da linha, o que insere a tag ``` <br> ```.

<br>
<br>
<br>


------------------------
------------------------
# **Ênfase**

Para dar ênfase a uma palavra ou trecho basta inseri-la entre ``` * ``` ou ``` _ ``` : 

 ``` 
_ Vamos tentar com esse!_
* E depois com aquele! *
 ``` 
Também é possível reforçar adicionando mais um de cada lado:
 ``` 
** Entra na porra do robô Shinji! **
 ``` 
Além de combinar estilos:
 ``` 
*__ No céu tem pão? __*
```

_Vamos tentar com esse!_

*E depois com aquele!*

**Entra na porra do robô Shinji!**

*__No céu tem pão?__*

<br>
<br>
<br>


------------------------
------------------------
# **Listas**

Há dois tipos de listas, as com e sem ordenação. Para as não ordenadas, basta colocar ``` * ``` , ```  + ``` ou ``` - ``` antes dos itens:

``` 
* Item 1
* Item 2

+ Item 1
+ Item 2

- Item 1
- Item 2

+ Item 1
- Item 2
 ``` 

Já nas ordenadas, basta colocar os números seguido por um  ``` . ``` :
``` 
1. Verde
2. Amarelo
``` 
E caso queria adicionar texto entre tens, basta adicionar uma linha antes e depois de cada:
 ``` 
1. Verde

    No quadrado

2. Amarelo

    No losango

```

* Item 1
* Item 2
+ Item 3
+ Item 4
- Item 5
- Item 6


1. Verde

    No quadrado

2. Amarelo

    No losango

<br>
<br>
<br>


------------------------
------------------------
# **Links**



No Markdown, há dois tipos de links.

No tipo inline, é o nome entre colchetes seguido do endereço entre parênteses, sendo possível atribuir títulos também
```
[Google](https://www.google.com.br "Google Brasil")
```
Caso o texto do link seja o próprio link, basta envolvê-lo entre ```<  >```

```
<https://www.kernel.org>
```

O segundo modo é links por referências. Nesse você define nomes e pode colocá-los onde quiser no documento:
```
Uma das distribuições GNU Linux mais famosas são:

+ [Ubuntu][1_U]
+ [Fedora][2_F]
+ [Linux Mint][3_M]

[1_U]: http://ubuntu.org/   "Ubuntu"
[2_F]: http://fedoraproject.org/   "Fedora"
[3_M]: http://linuxmint.org/   "Linux Mint"

```

[Google Brasil](https://www.google.com.br "Clique para acessar o site")

<https://www.kernel.org>

Uma das distribuições GNU Linux mais famosas são:

+ [Ubuntu][1_U]
+ [Fedora][2_F]
+ [Linux Mint][3_M]

[1_U]: http://ubuntu.org/   "Ubuntu"
[2_F]: http://fedoraproject.org/   "Fedora"
[3_M]: http://linuxmint.org/   "Linux Mint"

<br>
<br>
<br>


------------------------
------------------------
# **Imagens**

É bem similiar aos links

No Inline (Títulos são opcionais):

```
![Logo Firefox](https://www.mozilla.org/media/img/home/dino.d3d01561e288.svg) "Um Dino!")
```

E com referência:
```

![Panda Vermelho][001]

[001]: https://www.mozilla.org/media/protocol/img/logos/firefox/browser/og.4ad05d4125a5.png "O verdadeiro Firefox!"

```

![Logo Firefox](https://www.mozilla.org/media/img/home/dino.d3d01561e288.svg "Um Dino!")

![Panda Vermelho][001]

[001]: https://www.mozilla.org/media/protocol/img/logos/firefox/browser/og.4ad05d4125a5.png "O verdadeiro Firefox!"

