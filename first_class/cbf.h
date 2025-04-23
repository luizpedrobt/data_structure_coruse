
#ifndef CBF_H
#define CBF_H

#pragma once

typedef enum cbf_status_s
{
    CBF_OK = 0,
    CBF_FULL,
    CBF_EMPTY,
} cbf_status_t;

typedef struct cbf_s
{
    volatile uint16_t prod; /* Posição do produtor no buffer */
    volatile uint16_t cons; /* Posião do consumidor no buffer */
    uint16_t size; /* Tamanho total do buffer */
    uint8_t *buffer; /* Ponteiro para a aŕea dos daddos do buffer circular */
} cbf_t;

/**
 * @brief Retorna a quantidade de bytes disponíveis no buffer
 * @param [in] cb - ponteiro para a estrutura do buffer
 * @return quantidade de bytes disponíveis no buffer
 */
uint16_t cbf_bytes_available(cbf_t *cb);

/**
 * @brief limpa o buffer circular
 * @param [in] cb - ponteiro para a estrutura do buffer
 * @return status de buffer vazio
 */
cbf_status_t cbf_flush(cbf_t *cb);

/**
 * @brief Retorna a quantidade de bytes ocupados no buffer
 * @param [in] cb - ponteiro para a estrutura do buffer
 * @param [out] c - ponteiro para o destino do byte
 * @return status do buffer
 */
cbf_status_t cbf_get(cbf_t *cb, uint8_t *c);

/**
 * @brief Inicializa o buffer circular
 * @param [in] cb - ponteiro para a estrutura do buffer
 * @param [in] area - buffer previamente alocado que será usado para armazenamento do conteúdo do buffer circular
 * @param [in] size - tamanho da area alocada
 * @return status do buffer
 */
cbf_status_t cbf_init(cbf_t *cb, uint8_t *area ,uint16_t size);

/**
 * @brief Adiciona um byte ao buffer circular
 * @param [in] cb - ponteiro para a estrutura do buffer
 * @param [in] c - byte a ser adicionado ao buffer
 * @return status do buffer
 */
cbf_status_t cbf_put(cbf_t *cb, uint8_t c);

#endif /* CBF_H_ */