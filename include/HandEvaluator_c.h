#ifndef HAND_EVALUATOR_WRAPPER_H
#define HAND_EVALUATOR_WRAPPER_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

uint16_t evaluate_hand_5(uint8_t card1, uint8_t card2, uint8_t card3, uint8_t card4, uint8_t card5);

uint16_t evaluate_hand_7(uint8_t card1, uint8_t card2, uint8_t card3, uint8_t card4, uint8_t card5, uint8_t card6, uint8_t card7);

uint16_t evaluate_hand_9(uint8_t* cards);

#ifdef __cplusplus
}
#endif

#endif // HAND_EVALUATOR_WRAPPER_H