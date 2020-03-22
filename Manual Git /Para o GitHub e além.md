# No Github

 Após ter uma conta no [GitHub](www.github.com), criar um repositório é bem fácil

 ## configurando o SSH

 Uma configuração importante, é a criação de chaves RSA para usar o SSH no envio do projeto ao GitHub

 ### Verificando se já há chaves criadas

Abra o Terminal e digite _ls -al ~/.ssh_ para ver se existe algo
```
    $ ls -al ~/.ssh
    # Lists the files in your .ssh directory, if they exist
```
 Verifique se no diretório há as chaves SSH. Por padrão, as chaves públicas tem uns dos seguintes nomes:
        id_rsa.pub
        id_ecdsa.pub
        id_ed25519.pub

Caso não exista nenhuma, ou deseje usar chaves diferentes das listadas, é necessário gerar um novo par

Mas se a chave que você precisa já está lá, basta adiciona-la

### Criando novas chaves e as adicionando ao ssh-agent

Caso não haja nenhuma, é necessário gerar novas. Se não deseja digitar a senha toda vez que usar sua chave SSH, você pode salva-la no _SSH Agent_

Para gerar, no Terminal digite:

#### Obs: Lembrando que o email deve ser o mesmo da conta no GitHub


``` 
ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
```
Isso cria novas chaves usando o email como rótulo
```
    > Generating public/private rsa key pair.
```

Quando questionado onde salvar, somente pressione _Enter_ para usar o local padrão
```
> Enter a file in which to save the key (/home/you/.ssh/id_rsa): [Press enter]
```
Se necessário, insira uma senha, caso contrário, deixe em branco
```
    > Enter passphrase (empty for no passphrase): [Type a passphrase]
    > Enter same passphrase again: [Type passphrase again]
```

Agora, adicione ao Agente SSH

inicie o agente em segundo plano
```
    $ eval "$(ssh-agent -s)"
    > Agent pid 59566
```

Adicione sua chave, lembrando que caso você criou com um nome ou local diferente, é necessário fornece-lo!
```
    $ ssh-add ~/.ssh/id_rsa
```
Agora, basta adiciona-la a sua conta no GitHub
