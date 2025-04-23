
#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

/**
 * @brief returns the position of the element in the vector
 * @param [in] v pointer to the array
 * @param [in] left position of left threshold 
 * @param [in] right position of the right threshold
 * @param [in] x element that you want to search
 * @return position of the element x in the array, -1 if not found
 */
int32_t binary_search_f(uint32_t *v, uint32_t left, uint32_t right, uint32_t x);

#endif