#ifndef GPIO_DRIVER_H
#define GPIO_DRIVER_H

typedef unsigned char      uint8_t;
/** @brief The type to use for a signed 8-bits value */
typedef signed char        int8_t;
/** @brief The type to use for an unsigned 16-bits value */
typedef unsigned short     uint16_t;
/** @brief The type to use for a signed 16-bits value */
typedef signed short       int16_t;
/** @brief The type to use for an unsigned 32-bits value */
typedef unsigned long      uint32_t;
/** @brief The type to use for a signed 32-bits value */
typedef signed long        int32_t;

#define APB2_BASEADDR       (uint32_t)0x40015800
#define GPIOA_BASEADDR      (APB2_BASEADDR + 0x2000)
#define GPIOB_BASEADDR      (APB2_BASEADDR + 0x1C00)
#define GPIOC_BASEADDR      (APB2_BASEADDR + 0x1800)
#define GPIOD_BASEADDR      (APB2_BASEADDR + 0x1400)
#define GPIOE_BASEADDR      (APB2_BASEADDR + 0x1000)
#define GPIOF_BASEADDR      (APB2_BASEADDR + 0x0C00)
#define GPIOA_BASEADDR      (APB2_BASEADDR + 0x0800)


typedef struct{
    volatile uint32_t  GPIOx_CR[2];
    volatile uint32_t  GPIOx_IDR;
    volatile uint32_t  GPIOx_ODR;
    volatile uint32_t  GPIOx_BSRR;
    volatile uint32_t  GPIOx_BRR;
    volatile uint32_t  GPIOx_LCKR;
}gpio_RegDef_t;

typedef struct{
    uint32_t PinNumber;
    gpio_RegDef_t* Port_Mode;
}gpio_handle_t;


class GPIO_module{

    protected:

        GPIO_module();
        ~GPIO_module();
        void GPIO_RCC_conf(gpio_RegDef_t* rcc);
        void GPIO_init(gpio_handle_t* gpio, uint32_t gpio_portNum);
        void GPIO_deinit(gpio_handle_t* gpio);




};






#endif /*GPIO_DRIVER_H*/