/* 
 * problema para complementar um funcao para somar elementos de um array
 */

int simpleArraySum(int ar_count, int* ar) {
    int n;
    int sum = 0;
    
    for (int i=0; i< ar_count; i++){
        sum = sum + ar[i];
    }
    
    return sum;
}