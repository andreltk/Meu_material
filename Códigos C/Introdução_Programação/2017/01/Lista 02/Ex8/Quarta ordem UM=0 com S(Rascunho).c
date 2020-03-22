// Quarta ordem UM=0 sem S
if (um == 0 && c == 0 && d == 0 && u > 1){
    
    printf("(quarta ordem) %d = %d unidades = %d\n",nl, u, u);
}
else if (um == 0 && c == 0 && d > 1 && u == 0){
    
    printf("(quarta ordem) %d = %d dezenas = %d\n",nl,d,d1);
}
else if (um == 0 && c == 0 && d > 1 && u > 1){
    
    printf("(quarta ordem) %d = %d dezenas + %d unidadess = %d + %d\n",nl, d, u, d1, u1);
}
else if (um == 0 && c > 1 && d == 0 && u == 0){
    
    printf("(quarta ordem) %d = %d centenas = %d\n",nl, c,c1);
}
else if (um == 0 && c > 1 && d == 0 && u > 1){
    
    printf("(quarta ordem) %d = %d centenas + %d unidades = %d + %d\n",nl, c, u, c1, u1);
}
else if (um == 0 && c > 1 && d > 1 && u == 0){
    
    printf("(quarta ordem) %d = %d centenas + %d dezenas = %d + %d\n",nl, c, d, c1, d1);
}
else if (um == 0 && c > 1 && d > 1 && u > 1){
    
    printf("(quarta ordem) %d = %d centenas + %d dezenas + %d unidades = %d + %d + %d\n",nl, c, d, u,c1, d1, u1);
}
