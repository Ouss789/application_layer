#include<GPIO_driver.h>

void GPIO_module::GPIO_RCC_conf(gpio_RegDef_t* rcc){

}

void GPIO_module::GPIO_init(gpio_handle_t* gpio, uint32_t gpio_portNum){
    switch (gpio_portNum)
    {
    case GPIOA_BASEADDR:
        gpio->Port_Mode->GPIOx_CR[0]&=~(0x3 << gpio->PinNumber);
        break;
    
    default:
        break;
    }
}