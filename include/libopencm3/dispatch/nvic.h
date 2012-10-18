#if defined(STM32F1)
#	include <libopencm3/stm32/f1/nvic.h>
#elif defined(STM32F2)
#	include <libopencm3/stm32/f2/nvic.h>
#elif defined(STM32F4)
#	include <libopencm3/stm32/f4/nvic.h>

#elif defined(EFM32TG)
#	include <libopencm3/efm32/efm32tg/nvic.h>

#elif defined(LPC43XX)
#	include <libopencm3/lpc43xx/nvic.h>

#else
#	warning"no chipset defined; user interrupts are disabled"

#define NVIC_IRQ_COUNT 0

#endif
