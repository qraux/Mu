/*Dragonball VZ Register Definitions*/

/*SIM - System Integration Module*/
#define SCR       0x000/*System Control Register*/
#define PCR       0x003/*Peripheral Control Register*/
#define IDR       0x004/*Silicon ID Register*/
#define IODCR     0x008/*I/O Drive Control Register*/

/*CS - Chip Select*/
#define CSGBA     0x100/*Chip Select Group A Base Register*/
#define CSGBB     0x102/*Chip Select Group B Base Register*/
#define CSGBC     0x104/*Chip Select Group C Base Register*/
#define CSGBD     0x106/*Chip Select Group D Base Register*/
#define CSUGBA    0x108/*Chip Select Upper Group Address Register*/
#define CSCTRL1   0x10A/*Chip Select Control Register 1*/
#define CSCTRL2   0x10C/*Chip Select Control Register 2*/
#define CSCTRL3   0x150/*Chip Select Control Register 3*/
#define CSA       0x110/*Group A Chip Select Register*/
#define CSB       0x112/*Group B Chip Select Register*/
#define CSC       0x114/*Group C Chip Select Register*/
#define CSD       0x116/*Group D Chip Select Register*/
#define EMUCS     0x118/*Emulation Chip Select Register*/

/*PLL - Phase Locked Loop*/
#define PLLCR     0x200/*PLL Control Register*/
#define PLLFSR    0x202/*PLL Frequency Select Register*/
#define PCTLR     0x207/*Power Control Register*/

/*INTR - Interrupt controller*/
#define IVR       0x300/*Interrupt Vector Register*/
#define ICR       0x302/*Interrupt Control Register*/
#define IMR       0x304/*Interrupt Mask Register*/
/*Reserved        0x308  Interrupt Wakeup Enable Register On Original Dragonball*/
#define ISR       0x30C/*Interrupt Status Register*/
#define IPR       0x310/*Interrupt Pending Register*/
#define ILCR      0x314/*Interrupt Level Control Register*/

/*PIO - Parallel IO*/
#define PADIR     0x400/*Port A Direction Register*/
#define PADATA    0x401/*Port A Data Register*/
#define PAPUEN    0x402/*Port A Pull-Up Enable Register*/

#define PBDIR     0x408/*Port B Direction Register*/
#define PBDATA    0x409/*Port B Data Register*/
#define PBPUEN    0x40A/*Port B Pull-Up Enable Register*/
#define PBSEL     0x40B/*Port B Select Register*/

#define PCDIR     0x410/*Port C Direction Register*/
#define PCDATA    0x411/*Port C Data Register*/
#define PCPDEN    0x412/*Port C Pull-Down Enable Register*/
#define PCSEL     0x413/*Port C Select Register*/

#define PDDIR     0x418/*Port D Direction Register*/
#define PDDATA    0x419/*Port D Data Register*/
#define PDPUEN    0x41A/*Port D Pull-Up Enable Register*/
#define PDSEL     0x41B/*Port D Select Register*/
#define PDPOL     0x41C/*Port D Polarity Register*/
#define PDIRQEN   0x41D/*Port D IRQ Enable Register*/
#define PDKBEN    0x41E/*Port D Keyboard Enable Register*/
#define PDIRQEG   0x41F/*Port D IRQ Edge Register*/

#define PEDIR     0x420/*Port E Direction Register*/
#define PEDATA    0x421/*Port E Data Register*/
#define PEPUEN    0x422/*Port E Pull-Up Enable Register*/
#define PESEL     0x423/*Port E Select Register*/

#define PFDIR     0x428/*Port F Direction Register*/
#define PFDATA    0x429/*Port F Data Register*/
#define PFPUEN    0x42A/*Port F Pull-Up/Down Enable Register*/
#define PFSEL     0x42B/*Port F Select Register*/

#define PGDIR     0x430/*Port G Direction Register*/
#define PGDATA    0x431/*Port G Data Register*/
#define PGPUEN    0x432/*Port G Pull-Up Enable Register*/
#define PGSEL     0x433/*Port G Select Register*/

#define PJDIR     0x438/*Port J Direction Register*/
#define PJDATA    0x439/*Port J Data Register*/
#define PJPUEN    0x43A/*Port J Pull-Up Enable Register*/
#define PJSEL     0x43B/*Port J Select Register*/

#define PKDIR     0x440/*Port K Direction Register*/
#define PKDATA    0x441/*Port K Data Register*/
#define PKPUEN    0x442/*Port K Pull-Up Enable Register*/
#define PKSEL     0x443/*Port K Select Register*/

#define PMDIR     0x448/*Port M Direction Register*/
#define PMDATA    0x449/*Port M Data Register*/
#define PMPUEN    0x44A/*Port M Pull-Up Enable Register*/
#define PMSEL     0x44B/*Port M Select Register*/

/*PWM - Pulse Width Modulator*/
#define PWMC1     0x500/*PWM Unit 1 Control Register*/
#define PWMS1     0x502/*PWM Unit 1 Sample Register*/
#define PWMP1     0x504/*PWM Unit 1 Period Register*/
#define PWMCNT1   0x505/*PWM Unit 1 Counter Register*/
#define PWMC2     0x510/*PWM Unit 2 Control Register*/
#define PWMP2     0x512/*PWM Unit 2 Period Register*/
#define PWMW2     0x514/*PWM Unit 2 Width Register*/
#define PWMCNT2   0x516/*PWM Unit 2 Counter Register*/

/*Timer*/
#define TCTL1     0x600/*Timer Unit 1 Control Register*/
#define TPRER1    0x602/*Timer Unit 1 Prescaler Register*/
#define TCMP1     0x604/*Timer Unit 1 Compare Register*/
#define TCN1      0x608/*Timer Unit 1 Counter*/
#define TSTAT1    0x60A/*Timer Unit 1 Status Register*/
#define TCTL2     0x610/*Timer Unit 2 Control Register*/
#define TPRER2    0x612/*Timer Unit 2 Prescaler Register*/
#define TCMP2     0x614/*Timer Unit 2 Compare Register*/
#define TCN2      0x618/*Timer Unit 2 Counter*/
#define TSTAT2    0x61A/*Timer Unit 2 Status Register*/

/*WD - Watchdog*/
#define WATCHDOG  0xB0A/*Watchdog Timer Register*/

/*SPI - Serial Peripheral Interface*/
#define SPIRXD    0x700/*SPI 1 Receive Data Register*/
#define SPITXD    0x702/*SPI 1 Transmit Data Register*/
#define SPICONT1  0x704/*SPI 1 Control/Status Register*/
#define SPIINTCS  0x706/*SPI 1 Interrupt Control/Status Register*/
#define SPITEST   0x708/*SPI 1 Test Register*/
#define SPISPC    0x70A/*SPI 1 Sample Period Control Register*/
#define SPIDATA2  0x800/*SPI 2 Data Register*/
#define SPICONT2  0x802/*SPI 2 Control/Status Register*/

/*UART - Universal Asynchronous Receiver/Transmitter*/
#define USTCNT1   0x900/*UART Unit 1 Status/Control Register*/
#define UBAUD1    0x902/*UART Unit 1 Baud Control Register*/
#define URX1      0x904/*UART Unit 1 RX Register*/
#define UTX1      0x906/*UART Unit 1 TX Register*/
#define UMISC1    0x908/*UART Unit 1 Misc Register*/
#define NIPR1     0x90A/*UART Unit 1 Non-Integer Prescaler Register*/

#define USTCNT2   0x910/*UART Unit 2 Status/Control Register*/
#define UBAUD2    0x912/*UART Unit 2 Baud Control Register*/
#define URX2      0x914/*UART Unit 2 RX Register*/
#define UTX2      0x916/*UART Unit 2 TX Register*/
#define UMISC2    0x918/*UART Unit 2 Misc Register*/
#define NIPR2     0x91A/*UART Unit 2 Non-Integer Prescaler Register*/
#define HMARK     0x91C/*UART Unit 2 FIFO Half Mark Register*/

/*LCDC - LCD Controller*/
#define LSSA      0xA00/*Screen Starting Address Register*/
#define LVPW      0xA05/*Virtual Page Width Register*/
#define LXMAX     0xA08/*Screen Width Register*/
#define LYMAX     0xA0A/*Screen Height Register*/
#define LCXP      0xA18/*Cursor X Position*/
#define LCYP      0xA1A/*Cursor Y Position*/
#define LCWCH     0xA1C/*Cursor Width & Height Register*/
#define LBLKC     0xA1F/*Blink Control Register*/
#define LPICF     0xA20/*Panel Interface Config Register*/
#define LPOLCF    0xA21/*LCD Polarity Configuration Register*/
#define LACDRC    0xA23/*LACD Rate Control Register*/
#define LPXCD     0xA25/*Pixel Clock Divider Register*/
#define LCKCON    0xA27/*Clocking Control Register*/
#define LRRA      0xA28/*LCD Refresh Rate Adjustment Register*/
/*Reserved        0xA2B  Octet Terminal Count Register On Original Dragonball*/
#define LPOSR     0xA2D/*LCD Panning Offset Register*/
#define LFRCM     0xA31/*Frame Rate Control Modulation Register*/
#define LGPMR     0xA33/*Gray Palette Mapping Register*/
#define PWMR      0xA36/*PWM Contrast Control Register*/
#define DMACR     0xA39/*DMA Control Register*/

/*RTC - Real Time Clock*/
#define RTCTIME   0xB00/*RTC Time Of Day Register*/
#define RTCALRM   0xB04/*RTC Alarm Register*/
#define RTCCTL    0xB0C/*RTC Control Register*/
#define RTCISR    0xB0E/*RTC Interrupt Status Register*/
#define RTCIENR   0xB10/*RTC Interrupt Enable Register*/
#define STPWCH    0xB12/*Stopwatch Minutes Register*/
#define DAYR      0xB1A/*RTC Day Count Register*/
#define DAYALRM   0xB1C/*RTC Day Alarm Register*/

/*RAM - (S)DRAM Control*/
#define DRAMMC    0xC00/*DRAM Memory Configuration Register*/
#define DRAMC     0xC02/*DRAM Control Register*/
#define SDCTRL    0xC04/*SDRAM Control Register*/
