# Linguagem de Marcação de Hipertexto



- HTML descreve a estrutura de uma página na Internet
- HTML consists of a series of elements
- HTML diz ao navegador como posicionar e exibir os elementos
- HTML elementos são representados por tags
- As tags HTML rotulam partes do conteúdo, como "cabeçalho", "parágrafo", "tabela" e assim por diante
- Os navegadores não exibem as tags HTML, mas as usam para renderizar o conteúdo da página 

## Tags HTML

Tags HTML são nomes de elementos entre colchetes angulares:

o conteúdo do ```<tagname>``` entra aqui ... ```</tagname>```

- As tags HTML normalmente vêm em pares como ```<p>``` e ```</p>```
- A primeira tag em um par é a tag inicial, a segunda tag é a tag final
- A tag final é escrita como a tag inicial, mas com uma barra inserida antes do nome da tag .

## Documentos HTML

Todos os documentos HTML devem começar com uma declaração de tipo de documento: ```<!DOCTYPE html>``` (HTML 5).

O próprio documento HTML começa com ```<html> ```e termina com ``` </html> ```.

A parte visível do documento HTML está entre ```<body>``` e ```</body>``` . 

### Estrututa de uma página:
![Estrutura](/Curso%20HTML/.recursos/estrutura_html.png "Somente o conteúdo dentro da seção <body> (a área branca acima) é exibido em um navegador.")

## Elementos

Um elemento HTML geralmente consiste em uma tag inicial e uma tag final , com o conteúdo inserido entre:

```
< tagname > O conteúdo entra aqui ... < / tagname >
```
Elementos HTML sem conteúdo são chamados de elementos vazios. Os elementos vazios não possuem uma tag final, como o elemento ```<br>``` (que indica uma quebra de linha)

O elemento HTML é tudo, desde a tag inicial até a tag final: 

## Atributos HTML

- Todos os elementos HTML podem ter atributos
- Atributos fornecem informações adicionais sobre um elemento
- Os atributos são sempre especificados na tag inicial
- Os atributos geralmente vêm em pares nome / valor, como: __name = "value"__

Uma lista completa de atributos disponível em https://www.w3schools.com/html/html_attributes.asp



<br><br><br><br><br>

















Parágrafos

Como criar parágrafos?

Para se declarar parágrafos em páginas pode-se utilizar a tag <p>. Entretanto, é possível aplicar diversos tipos de formatações a parágrafos. Veja o exemplo a seguir:

    <p>
        <b>Texto em negrito</b><br>
        <i>Texto em itálico</i><br>
        <u>Texto sublinhado</u><br>
        <sub>Texto subscrito</sub><br>
        <sup>Texto sobrescrito</sup><br>
        <big>Texto com fonte maior do que o padrão</big><br>
        <small>Texto com fonte menor do que o padrão</small><br>
        <em>Texto em itálico</em><br>
        <strong>Texto em negrito</strong>
    </p>

Ao exibir nosso código em um navegador veremos o seguinte resultado:


Podemos ainda alterar a fonte usando o atributo style e a propriedade font-family:

    <!-- Declarando uma única fonte -->
    <p style="font-family: 'Times New Roman'">Olá, mundo!</p>
     
    <!-- Declarando duas possíveis fontes -->
    <p style="font-family: 'Helvetica, Arial'">Olá, mundo novamente!</p>


Observe que o trecho...

    <!-- Declarando uma única fonte -->

... não é mostrado na tela do navegador. Use os símbolos de <!-- e --> para inserir comentários. Comentários permitem a organização do código.


Quebras de linha

Podemos usar a tag <br> para inserir quebras de linha em nossa página.


Tags de títulos

São 6 ao todo:

    <h1>Título 1</h1>
     
    <h2>Título 2</h2>
     
    <h3>Título 3</h3>
     
    <h4>Título 4</h4>
     
    <h5>Título 5</h5>
     
    <h6>Título 6</h6>

# Declaração  <!DOCTYPE>

A declaração ```<!DOCTYPE>``` tem que ser a primeira coisa no seu documento HTML, antes da tag ```<html>```.
```<!DOCTYPE>``` não é uma tag HTML; é uma  instrução ao navegador sobre qual versão do HTML a página em questão foi escrita. Enquanto no HTML 5 existe só uma, em versões antigas havia várias como no exemplos abaixos:
+ HTML 5
```
<!DOCTYPE html> 
```
+ HTML 4.01 Strict

```
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
```

+ HTML 4.01 Transitional

```
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd"> 
```

+ HTML 4.01 Frameset

```
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Frameset//EN" "http://www.w3.org/TR/html4/frameset.dtd">
```

