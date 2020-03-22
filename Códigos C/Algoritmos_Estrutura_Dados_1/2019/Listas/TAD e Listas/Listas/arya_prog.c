//Feito por André Luiz Teixeira Kohlrausch 


/*
 * A Lista de Arya (série “Game of Thrones”)
 * Lista de Arya: “Cersei. Walder Frey. Montanha. Meryn Trant.”
 * Para se manter motivada, Arya sempre lembra a lista de inimigos que ela mais odeia.
 * O principal objetivo de sua jornada é
 * acabar com todos na sua lista!
 */
#include"arya.h"

int main(){
    
   
    inimigo* lista;
    
    lista = cria_lista();
    
    menu(lista);
    
    libera_lista(lista);
    
    return 0;
}
