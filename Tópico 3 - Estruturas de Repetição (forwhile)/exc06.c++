/*Aldo é um garoto muito esperto que adora promoções e sorteios. Como já participou de muitas promoções da forma "para participar, envie n rótulos de produtos ...", Aldo tem o costume de guardar o rótulo de todos os produtos que compra. Dessa forma, sempre que uma empresa faz uma promoção ele já tem um monte de rótulos para mandar.
A SBC (Super Balas e Caramelos) está fazendo uma nova promoção, e, como era de se esperar, Aldo quer participar. Para participar da promoção é preciso enviar um envelope contendo um rótulo de cada tipo de bala que a SBC produz. Por exemplo, se a SBC produz 3 tipos de balas, A, B, C, e uma pessoa tem 3 rótulos de A, 3 de B e 2 de C, ela pode enviar no máximo 2 envelopes, já que falta um rótulo de C para compor o terceiro envelope. Não há limite para o número de envelopes que uma pessoa pode enviar.
Balas são a segunda coisa de que Aldo mais gosta (a primeira como você sabe são promoções). Por causa disso a quantidade de rótulos de balas que ele tem é muito grande, e ele não está conseguindo determinar a quantidade máxima de envelopes que ele pode enviar.
Como você é o melhor amigo de Aldo ele pediu sua ajuda para fazer o cálculo, de modo que ele compre o número exato de envelopes. Você deve escrever um programa que, a partir da lista de rótulos de Aldo, calcula o número máximo de envelopes válidos que ele pode enviar.*/
#include <iostream>

using namespace std;

int main(void) {
    int n, menor = 0, aux = 0;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> aux;
        
        if(i == 0) { 
            menor = aux;
        }
        else if(aux < menor) {
            menor = aux;
        }
    }

    cout << menor;

    return 0;
}
