#ifndef ARRAY_H
#define ARRAY_H

typedef struct
{
    uint32_t *data; // 
    uint32_t n;
    uint32_t size_reserved;
}array;

/**
 * @brief creates a array with a defined length
 * @param [in] length desired size of vector in units
 * @returns pointer to vector data type
 */
array *array_create_array(uint32_t length);

/**
 * @brief fills the array with 0
 * @param [in] vec pointer to array struct
 */
void array_erase_array(array *vec);

/**
 * @brief adds an element on the desired array
 * @param [in] v pointer to array struct
 * @param [in] x element to add at the end of the vector
 */
void array_add_element(array *v, uint32_t x);

/**
 * @brief erase an element on the desired position
 * @param [in] v pointer to array struct
 * @param [in] i position of the element
 */
void array_erase_element(array *v, uint32_t i);

/**
 * @brief search for an specifc element on the array
 * @param [in] v pointer to array struct
 * @param [in] i position on the element
 * @returns position of the first element found, -1 if there's no element with this value
 */
int32_t array_search_for(array *v, uint32_t x);

/**
 * @brief access an specif position of the array
 * @param [in] v pointer to array struct
 * @param [in] i position on the element
 * @returns value of the element in the position i
 */
uint32_t array_access(array *v, uint32_t i);

/**
 * @brief returns the length of the array
 * @param [in] v pointer to array struct
 * @returns the length of the array in units
 */
uint32_t array_length(array *v);

#endif