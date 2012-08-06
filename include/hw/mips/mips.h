#ifndef HW_MIPS_H
#define HW_MIPS_H
/* Definitions for mips board emulation.  */

#include "exec/memory.h"

/* gt64xxx.c */
PCIBus *gt64120_register(qemu_irq *pic);

/* bonito.c */
PCIBus *bonito_init(qemu_irq *pic);

/* rc4030.c */
typedef struct rc4030DMAState *rc4030_dma;
void rc4030_dma_memory_rw(void *opaque, hwaddr addr, uint8_t *buf, int len, int is_write);
void rc4030_dma_read(void *dma, uint8_t *buf, int len);
void rc4030_dma_write(void *dma, uint8_t *buf, int len);

void *rc4030_init(qemu_irq timer, qemu_irq jazz_bus,
                  qemu_irq **irqs, rc4030_dma **dmas,
                  MemoryRegion *sysmem);

#endif
