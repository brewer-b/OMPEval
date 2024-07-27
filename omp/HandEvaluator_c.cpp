#include "../include/HandEvaluator_c.h"
#include "HandEvaluator.h"

namespace omp {
    // Create a global instance of HandEvaluator
    static HandEvaluator globalEvaluator;
}

// C wrapper function for evaluating a hand of 5 cards
uint16_t evaluate_hand_5(uint8_t card1, uint8_t card2, uint8_t card3, uint8_t card4, uint8_t card5) {
    omp::Hand h = omp::Hand::empty();
    h += omp::Hand(card1) + omp::Hand(card2) + omp::Hand(card3) + omp::Hand(card4) + omp::Hand(card5);
    return omp::globalEvaluator.evaluate(h);
}

// C wrapper function for evaluating a hand of 7 cards
uint16_t evaluate_hand_7(uint8_t card1, uint8_t card2, uint8_t card3, uint8_t card4, uint8_t card5, uint8_t card6, uint8_t card7) {
    omp::Hand h = omp::Hand::empty();
    h += omp::Hand(card1) + omp::Hand(card2) + omp::Hand(card3) + omp::Hand(card4) + omp::Hand(card5) + omp::Hand(card6) + omp::Hand(card7);
    return omp::globalEvaluator.evaluate(h);
}

uint16_t evaluate_hand_9(uint8_t* cards){
    uint16_t bestHandStrength = 0;
    for (size_t i = 0; i < 4; i++){
        for (size_t j = 0; j < i; j++){
            for (size_t k = 4; k < 9; k++){
                for (size_t l = 4; l < k; l++){
                    for (size_t m = 4; m < l; m++){
                        omp::Hand h = omp::Hand::empty();
                        h += omp::Hand(cards[i]) + omp::Hand(cards[j]) + omp::Hand(cards[k]) + omp::Hand(cards[l]) + omp::Hand(cards[m]);
                        uint16_t strength = omp::globalEvaluator.evaluate(h);
                        if (strength > bestHandStrength){
                            bestHandStrength = strength;
                        }
                    }   
                }   
            }           
        }
    }
    return bestHandStrength;
}