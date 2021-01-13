#ifndef KBUS_UART_DRIVER_H
#define KBUS_UART_DRIVER_H

typedef struct {
    uint8_t body[253];
    uint8_t body_len;
    uint8_t src;
    uint8_t dst;
}kbus_message_t; 

/**
 * @brief Initializes UART driver && queue handling functions
 * 
 * @param[in] rx_queue  Queue emitting recieved k-bus messages to service handling logic/device emulation
 * @param[in] tx_queue  Queue receiving k-bus messages from service handling logic/device emulation
 */
void init_kbus_uart_driver(QueueHandle_t rx_queue, QueueHandle_t tx_queue);
#endif //KBUS_UART_DRIVER_H
