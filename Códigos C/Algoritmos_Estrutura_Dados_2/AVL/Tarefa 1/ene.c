int filho_unico(ArvAVL *raiz){
    
    static int quantidade = 0;
    int filho_d, filho_e;
    if(raiz == NULL)
        return 0;
    if(*raiz != NULL){
        
        filho_d = 0;
        filho_e = 0;
        
        if(((*raiz)->esq) == NULL){
            filho_e = 1   
        }
        
        if(((*raiz)->dir) == NULL){
            filho_d = 1;
        }
        
        if((filho_d + filho_e) == 1){
            quantidade++;
        };
        
        filho_unico(&((*raiz)->esq));
        filho_unico(&((*raiz)->dir));
        
        return quantidade;
    }
}
