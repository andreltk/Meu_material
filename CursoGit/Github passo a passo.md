 # Mini manual GitHub

**Esse manual tem como objetivo orientar a criação de um repositório no GitHub desde a criação de uma pasta para projeto, até o carregamento do mesmo para o GitHub**

###### Observação: Será usado o Ambiente Linux (Fedora 31) nos exemplos

 Para iniciar, será tomado 3 formas distintas:
+ Começando do zero e subindo para o GitHub
+ Criando um repositório vazio no Github, e sincronizando com um local
+ Baixando um repositório já existente e sincronizar com um local


## Configurando...

Para início, temos que o Git já esteja instalado, após isso, é necessário algumas configurações

### O git

A primeira coisa que você deve fazer ao instalar Git é configurar seu nome de usuário e endereço de e-mail. Isto é importante porque cada commit usa esta informação, e ela é carimbada de forma imutável nos commits que você começa a criar:

```
$ git config --global user.name "Fulano de Tal" 

$ git config --global user.email fulanodetal@exemplo.br
```

#### Seu Editor

Agora que a sua identidade está configurada, você pode escolher o editor de texto padrão que será chamado quando Git precisar que você entre uma mensagem. Se não for configurado, o Git usará o editor padrão, que normalmente é o Vim. Se você quiser usar um editor de texto diferente, como o Emacs, você pode fazer o seguinte:
```
$ git config --global core.editor emacs
```
Se você quiser testar as suas configurações, você pode usar o comando git config --list para listar todas as configurações que o Git conseguir encontrar naquele momento. Pode ser que algumas palavras chave apareçam mais de uma vez, porque Git lê as mesmas chaves de arquivos diferentes (/etc/gitconfig e ~/.gitconfig, por exemplo). Neste caso, Git usa o último valor para cada chave única que ele vê.

Você pode também testar o que Git tem em uma chave específica digitando git config <key>:

```
$ git config user.name Fulano de Tal
```




# 1 - Do zero a nuvem
## Inicializando um Repositório em um Diretório Existente


Após criar a pasta do projeto, é necessário abrir um terminal e digitar:

```
$ git init
```


Isso cria um novo subdiretório chamado _.git_ que contém todos os arquivos necessários de seu repositório – um esqueleto de repositório Git. Neste ponto, nada em seu projeto é monitorado ainda.

Se você quer começar a controlar o versionamento dos arquivos existentes (ao contrário de um diretório vazio), você provavelmente deve começar a monitorar esses arquivos e fazer um _commit_ inicial.

 Você pode fazer isso com alguns comandos _git add_ que especificam os arquivos que você quer monitorar, seguido de um git commit:
```
$ git add *
```
Isso adiciona todos os aquivos no diretório
Caso deseje inserir manualmente:
```
$ git add Nome_do_Arquivo
```
Por fim, é necessário o _commit_, lembrando que a opção ```-m``` permite adicionar um comentário ao _commit_:
```
$ git commit -m "Versão Inicial do Projeto"
```

Neste ponto você já tem um repositório Git com arquivos monitorados e um commit inicial.

# 2 - Da nuvem para o trabalho
## Clonando um Repositório Existente

Caso você queira obter a cópia de um repositório Git existente, o comando é ```git clone```.

Você clona um repositório com ```git clone [url]```. Por exemplo, caso você queria clonar a biblioteca Git Linkable chamada libgit2, você pode fazer da seguinte forma:

$ git clone https://github.com/libgit2/libgit2

Isso cria um diretório chamado libgit2, inicializa um diretório .git dentro dele, recebe todos os dados deste repositório e deixa disponível para trabalho a cópia da última versão. Se você entrar no novo diretório libgit2, você verá os arquivos do projeto nele, pronto para serem editados ou utilizados. Caso você queira clonar o repositório em um diretório diferente de libgit2, é possível especificar esse diretório utilizando a opção abaixo:

$ git clone https://github.com/libgit2/libgit2 mylibgit

Este comando faz exatamente a mesma coisa que o anterior, mas o diretório de destino será chamado mylibgit.

# Enviando as mudanças ao repositório

Após as devidas alterações, é interessante salvar e enviar o que foi modificado no seu projeto. Lembre-se que cada arquivo no seu diretório pode estar em dois estados: _tracked_ onde os arquivos estão presentes no ultímo _snapshot_ e podem ser modificadas, restauradas ou preparadas (_staged_), ou então _untracked_ quando não estão nem em nenhum _snapshot_ anterior ou 