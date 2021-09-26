#pragma once

#include <stdint.h>
#include <stdbool.h>

typedef struct
{
    uint8_t odr;
    uint8_t idr;
    uint8_t ddr;
    uint8_t cr1;
    uint8_t cr2;
} port_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t fix     :1;
            uint8_t ie      :1;
            uint8_t ahalt   :1;
            uint8_t halt    :1;
            uint8_t         :4;
        };
    } cr1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t prg     :1;
            uint8_t         :3;
            uint8_t fprg    :1;
            uint8_t erase   :1;
            uint8_t wprg    :1;
            uint8_t opt     :1;
        };
    } cr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t nprg    :1;
            uint8_t         :3;
            uint8_t nfprg   :1;
            uint8_t nerase  :1;
            uint8_t nwprg   :1;
            uint8_t nopt    :1;
        };
    } ncr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t wpb     :6;
            uint8_t         :2;
        };
    } fpr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t nwpb    :6;
            uint8_t         :2;
        };
    } nfpr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t wr_pg_dis :1;
            uint8_t pul     :1;
            uint8_t eop     :1;
            uint8_t dul     :1;
            uint8_t         :2;
            uint8_t hvoff   :1;
            uint8_t         :1;
        };
    } iapsr;
    uint8_t ;
    uint8_t ;
    uint8_t pukr;
    uint8_t ;
    uint8_t dukr;
} flash_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t pais    :2;
            uint8_t pbis    :2;
            uint8_t pcis    :2;
            uint8_t pdis    :2;
        };
    } cr1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t peis    :2;
            uint8_t tlis    :1;
            uint8_t         :5;
        };
    } cr2;
} exti_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t wwdgf   :1;
            uint8_t iwdgf   :1;
            uint8_t illopf  :1;
            uint8_t swimf   :1;
            uint8_t emcf    :1;
            uint8_t         :3;
        };
    } sr;
} rst_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t hsien   :1;
            uint8_t hsirdy  :1;
            uint8_t fhw     :1;
            uint8_t lsien   :1;
            uint8_t lsirdy  :1;
            uint8_t regah   :1;
            uint8_t         :2;
        };
    } ickr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t hseen   :1;
            uint8_t hserdy  :1;
            uint8_t         :6;
        };
    } eckr;
    uint8_t ;
    uint8_t cmsr;
    uint8_t swr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t swbsy   :1;
            uint8_t swen    :1;
            uint8_t swien   :1;
            uint8_t swif    :1;
            uint8_t         :4;
        };
    } swcr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t cpudiv  :3;
            uint8_t hsidiv  :2;
            uint8_t         :3;
        };
    } ckdivr;
    uint8_t pckenr1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t cssen   :1;
            uint8_t aux     :1;
            uint8_t cssdie  :1;
            uint8_t cssd    :1;
            uint8_t         :4;
        };
    } cssr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ccoen   :1;
            uint8_t ccosel  :4;
            uint8_t ccordy  :1;
            uint8_t ccobsy  :1;
            uint8_t         :1;
        };
    } ccor;
    uint8_t pckenr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t hsirtim :4;
        };
    } hsitrimr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t swimclk :1;
        };
    } swimccr;
} clk_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t t       :7;
            uint8_t wdga    :1;
        };
    } cr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t w       :7;
            uint8_t         :1;
        };
    } wr;
} wwdg_reg_t;

typedef struct
{
    uint8_t kr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t pr      :3;
            uint8_t         :5;
        };
    } pr;
    uint8_t rlr;
} iwdg_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t msr     :1;
            uint8_t         :3;
            uint8_t awuen   :1;
            uint8_t awuf    :1;
            uint8_t         :2;
        };
    } csr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t apr     :6;
            uint8_t         :2;
        };
    } apr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t awutb   :4;
            uint8_t         :4;
        };
    } tbr;
} awu_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t msr     :1;
            uint8_t         :3;
            uint8_t awuen   :1;
            uint8_t awuf    :1;
            uint8_t         :2;
        };
    } csr;
} beep_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t cpha    :1;
            uint8_t cpol    :1;
            uint8_t mstr    :1;
            uint8_t br      :3;
            uint8_t spe     :1;
            uint8_t lsbfirst:1;
        };
    } cr1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ssi     :1;
            uint8_t ssm     :1;
            uint8_t rxonly  :1;
            uint8_t         :1;
            uint8_t crcnext :1;
            uint8_t crcen   :1;
            uint8_t bdoe    :1;
            uint8_t bdm     :1;
        };
    } cr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t         :4;
            uint8_t wkie    :1;
            uint8_t errie   :1;
            uint8_t rxie    :1;
            uint8_t txie    :1;
        };
    } icr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t rxne    :1;
            uint8_t txe     :1;
            uint8_t         :1;
            uint8_t wkup    :1;
            uint8_t crcerr  :1;
            uint8_t modf    :1;
            uint8_t ovr     :1;
            uint8_t bsy     :1;
        };
    } sr;
    uint8_t dr;
    uint8_t crcpr;
    uint8_t rxcrcr;
    uint8_t txcrcr;
} spi_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t pe      :1;
            uint8_t         :5;
            uint8_t engc    :1;
            uint8_t nostretch:1;
        };
    } cr1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t start   :1;
            uint8_t stop    :1;
            uint8_t ack     :1;
            uint8_t pos     :1;
            uint8_t         :3;
            uint8_t swrst   :1;
        };
    } cr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t freq    :6;
            uint8_t         :2;
        };
    } freqr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t add0    :1;
            uint8_t add     :7;
        };
    } oarl;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t         :1;
            uint8_t add     :2;
            uint8_t         :3;
            uint8_t addconf :1;
            uint8_t addmode :1;
        };
    } oarh;
    uint8_t ;
    uint8_t dr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t sb      :1;
            uint8_t addr    :1;
            uint8_t btf     :1;
            uint8_t add10   :1;
            uint8_t stopf   :1;
            uint8_t         :1;
            uint8_t rxne    :1;
            uint8_t txe     :1;
        };
    } sr1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t berr    :1;
            uint8_t arlo    :1;
            uint8_t af      :1;
            uint8_t ovr     :1;
            uint8_t         :1;
            uint8_t wufh    :1;
            uint8_t         :2;
        };
    } sr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t msl     :1;
            uint8_t busy    :1;
            uint8_t tra     :1;
            uint8_t         :1;
            uint8_t gencall :1;
            uint8_t         :2;
            uint8_t dualf   :1;
        };
    } sr3;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t iterren :1;
            uint8_t itevten :1;
            uint8_t itbufen :1;
            uint8_t         :5;
        };
    } itr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ccr     :8;
        };
    } ccrl;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ccr     :4;
            uint8_t         :2;
            uint8_t duty    :1;
            uint8_t r_s     :1;
        };
    } ccrh;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t trise   :6;
            uint8_t         :2;
        };
    } triser;
    uint8_t pecr;
} i2c_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t pe      :1;
            uint8_t fe      :1;
            uint8_t nf      :1;
            uint8_t or_lhe  :1;
            uint8_t idle    :1;
            uint8_t rxne    :1;
            uint8_t tc      :1;
            uint8_t txe     :1;
        };
    } sr;
    uint8_t dr;
    uint8_t brr1;
    uint8_t brr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t pien    :1;
            uint8_t ps      :1;
            uint8_t pcen    :1;
            uint8_t wake    :1;
            uint8_t m       :1;
            uint8_t uartd   :1;
            uint8_t t8      :1;
            uint8_t r8      :1;
        };
    } cr1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t sbk     :1;
            uint8_t rwu     :1;
            uint8_t ren     :1;
            uint8_t ten     :1;
            uint8_t ilien   :1;
            uint8_t rien    :1;
            uint8_t tcien   :1;
            uint8_t tien    :1;
        };
    } cr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t lbcl    :1;
            uint8_t cpha    :1;
            uint8_t cpol    :1;
            uint8_t clken   :1;
            uint8_t stop    :2;
            uint8_t linen   :1;
            uint8_t         :1;
        };
    } cr3;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t add     :4;
            uint8_t lbdf    :1;
            uint8_t lbdl    :1;
            uint8_t lbdien  :1;
            uint8_t         :1;
        };
    } cr4;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t         :1;
            uint8_t iren    :1;
            uint8_t irlp    :1;
            uint8_t hdsel   :1;
            uint8_t nack    :1;
            uint8_t scen    :1;
            uint8_t         :2;
        };
    } cr5;
    uint8_t gtr;
    uint8_t pscr;
} uart1_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t cen     :1;
            uint8_t udis    :1;
            uint8_t urs     :1;
            uint8_t opm     :1;
            uint8_t dir     :1;
            uint8_t cms     :2;
            uint8_t arpe    :1;
        };
    } cr1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ccpc    :1;
            uint8_t         :1;
            uint8_t coms    :1;
            uint8_t         :1;
            uint8_t mms     :3;
            uint8_t         :1;
        };
    } cr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t sms     :3;
            uint8_t         :1;
            uint8_t ts      :3;
            uint8_t msm     :1;
        };
    } smcr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t etf     :4;
            uint8_t etps    :2;
            uint8_t ece     :1;
            uint8_t etp     :1;
        };
    } etr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t uie     :1;
            uint8_t cc1ie   :1;
            uint8_t cc2ie   :1;
            uint8_t cc3ie   :1;
            uint8_t cc4ie   :1;
            uint8_t comie   :1;
            uint8_t tie     :1;
            uint8_t bie     :1;
        };
    } ier;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t uif     :1;
            uint8_t cc1if   :1;
            uint8_t cc2if   :1;
            uint8_t cc3if   :1;
            uint8_t cc4if   :1;
            uint8_t comif   :1;
            uint8_t tif     :1;
            uint8_t bif     :1;
        };
    } sr1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t         :1;
            uint8_t cc1of   :1;
            uint8_t cc2of   :1;
            uint8_t cc3of   :1;
            uint8_t cc4of   :1;
            uint8_t         :3;
        };
    } sr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ug      :1;
            uint8_t cc1g    :1;
            uint8_t cc2g    :1;
            uint8_t cc3g    :1;
            uint8_t cc4g    :1;
            uint8_t comg    :1;
            uint8_t tg      :1;
            uint8_t bg      :1;
        };
    } egr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ccs     :2;
            uint8_t ocfe    :1;
            uint8_t ocpe    :1;
            uint8_t ocm     :3;
            uint8_t occe    :1;
        } output;
        struct
        {
            uint8_t ccs     :2;
            uint8_t icpsc   :2;
            uint8_t icf     :4;
        } input;
    } ccmr[4];
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t cc1e    :1;
            uint8_t cc1p    :1;
            uint8_t cc1ne   :1;
            uint8_t cc1np   :1;
            uint8_t cc2e    :1;
            uint8_t cc2p    :1;
            uint8_t cc2ne   :1;
            uint8_t cc2np   :1;
        };
    } ccer1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t cc3e    :1;
            uint8_t cc3p    :1;
            uint8_t cc3ne   :1;
            uint8_t cc3np   :1;
            uint8_t cc4e    :1;
            uint8_t cc4p    :1;
            uint8_t         :2;
        };
    } ccer2;
    uint8_t cntrh;
    uint8_t cntrl;
    uint8_t pscrh;
    uint8_t pscrl;
    uint8_t arrh;
    uint8_t arrl;
    uint8_t rcr;
    union
    {
        struct
        {
            uint8_t ccr1h;
            uint8_t ccr1l;
            uint8_t ccr2h;
            uint8_t ccr2l;
            uint8_t ccr3h;
            uint8_t ccr3l;
            uint8_t ccr4h;
            uint8_t ccr4l;
        };
        struct
        {
            uint8_t h;
            uint8_t l;
        } ccr[4];
    };
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t lock    :2;
            uint8_t ossi    :1;
            uint8_t ossr    :1;
            uint8_t bke     :1;
            uint8_t bkp     :1;
            uint8_t aoe     :1;
            uint8_t moe     :1;
        };
    } bkr;
    uint8_t dtr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ois1    :1;
            uint8_t ois1n   :1;
            uint8_t ois2    :1;
            uint8_t ois2n   :1;
            uint8_t ois3    :1;
            uint8_t ois3n   :1;
            uint8_t ois4    :1;
            uint8_t         :1;
        };
    } oisr;
} tim1_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t cen     :1;
            uint8_t udis    :1;
            uint8_t urs     :1;
            uint8_t opm     :1;
            uint8_t         :3;
            uint8_t arpe    :1;
        };
    } cr1;
    uint8_t ;
    uint8_t ;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t uie     :1;
            uint8_t cc1ie   :1;
            uint8_t cc2ie   :1;
            uint8_t cc3ie   :1;
            uint8_t         :2;
            uint8_t tie     :1;
            uint8_t         :1;
        };
    } ier;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t uif     :1;
            uint8_t cc1if   :1;
            uint8_t cc2if   :1;
            uint8_t cc3if   :1;
            uint8_t         :2;
            uint8_t tif     :1;
            uint8_t         :1;
        };
    } sr1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t         :1;
            uint8_t cc1of   :1;
            uint8_t cc2of   :1;
            uint8_t cc3of   :1;
            uint8_t         :4;
        };
    } sr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ug      :1;
            uint8_t cc1g    :1;
            uint8_t cc2g    :1;
            uint8_t cc3g    :1;
            uint8_t         :2;
            uint8_t tg      :1;
            uint8_t         :1;
        };
    } egr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ccs     :2;
            uint8_t         :1;
            uint8_t ocpe    :1;
            uint8_t ocm     :3;
            uint8_t         :1;
        } output;
        struct
        {
            uint8_t ccs     :2;
            uint8_t icpsc   :2;
            uint8_t icf     :4;
        } input;
    } ccmr[3];
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t cc1e    :1;
            uint8_t cc1p    :1;
            uint8_t         :2;
            uint8_t cc2e    :1;
            uint8_t cc2p    :1;
            uint8_t         :2;
        };
    } ccer1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t cc3e    :1;
            uint8_t cc3p    :1;
            uint8_t         :6;
        };
    } ccer2;
    uint8_t cntrh;
    uint8_t cntrl;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t psc     :4;
            uint8_t         :4;
        };
    } pscr;
    uint8_t arrh;
    uint8_t arrl;
    uint8_t ccr1h;
    uint8_t ccr1l;
    uint8_t ccr2h;
    uint8_t ccr2l;
    uint8_t ccr3h;
    uint8_t ccr3l;
} tim2_reg_t;

typedef struct
{
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t cen     :1;
            uint8_t udis    :1;
            uint8_t urs     :1;
            uint8_t opm     :1;
            uint8_t         :3;
            uint8_t arpe    :1;
        };
    } cr1;
    uint8_t ;
    uint8_t ;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t uie     :1;
            uint8_t         :5;
            uint8_t tie     :1;
            uint8_t         :1;
        };
    } ier;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t uif     :1;
            uint8_t         :7;
        };
    } sr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ug      :1;
            uint8_t         :7;
        };
    } egr;
    uint8_t cntr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t psc     :3;
            uint8_t         :5;
        };
    } pscr;
    uint8_t arr;
} tim4_reg_t;

typedef struct
{
    union
    {
        uint8_t dbh;
        uint8_t dbl;
    } dbr[10];
    uint8_t __reserved[12];
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t ch      :4;
            uint8_t awdie   :1;
            uint8_t eocie   :1;
            uint8_t awd     :1;
            uint8_t eoc     :1;
        };
    } csr;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t adon    :1;
            uint8_t cont    :1;
            uint8_t         :2;
            uint8_t spsel   :3;
            uint8_t         :1;
        };
    } cr1;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t         :1;
            uint8_t scan    :1;
            uint8_t         :1;
            uint8_t align   :1;
            uint8_t extsel  :2;
            uint8_t exttrig :1;
            uint8_t         :1;
        };
    } cr2;
    union
    {
        uint8_t u8;
        struct
        {
            uint8_t         :6;
            uint8_t ovr     :1;
            uint8_t dbuf    :1;
        };
    } cr3;
    uint8_t drh;
    uint8_t drl;
    uint8_t tdrh;
    uint8_t tdrl;
    uint8_t htrh;
    uint8_t htrl;
    uint8_t ltrh;
    uint8_t ltrl;
    uint8_t awsrh;
    uint8_t awsrl;
    uint8_t awcrh;
    uint8_t awcrl;
} adc1_reg_t;

typedef struct
{
    union
    {
        struct
        {
            uint8_t spr1;
            uint8_t spr2;
            uint8_t spr3;
            uint8_t spr4;
            uint8_t spr5;
            uint8_t spr6;
            uint8_t spr7;
            uint8_t spr8;
        };
        struct
        {
            uint8_t vect00spr   :2;
            uint8_t vect01spr   :2;
            uint8_t vect02spr   :2;
            uint8_t vect03spr   :2;
            uint8_t vect04spr   :2;
            uint8_t vect05spr   :2;
            uint8_t vect06spr   :2;
            uint8_t vect07spr   :2;
            uint8_t vect08spr   :2;
            uint8_t vect09spr   :2;
            uint8_t vect10spr   :2;
            uint8_t vect11spr   :2;
            uint8_t vect12spr   :2;
            uint8_t vect13spr   :2;
            uint8_t vect14spr   :2;
            uint8_t vect15spr   :2;
            uint8_t vect16spr   :2;
            uint8_t vect17spr   :2;
            uint8_t vect18spr   :2;
            uint8_t vect19spr   :2;
            uint8_t vect20spr   :2;
            uint8_t vect21spr   :2;
            uint8_t vect22spr   :2;
            uint8_t vect23spr   :2;
            uint8_t vect24spr   :2;
            uint8_t vect25spr   :2;
            uint8_t vect26spr   :2;
            uint8_t vect27spr   :2;
            uint8_t vect28spr   :2;
            uint8_t vect29spr   :2;
            uint8_t             :4;
        };
    };
} itc_reg_t;

#define PORT_A  (*(port_reg_t*)     (0x5000))
#define PORT_B  (*(port_reg_t*)     (0x5005))
#define PORT_C  (*(port_reg_t*)     (0x500A))
#define PORT_D  (*(port_reg_t*)     (0x500F))
#define PORT_E  (*(port_reg_t*)     (0x5014))
#define PORT_F  (*(port_reg_t*)     (0x5019))
#define FLASH   (*(flash_reg_t*)    (0x505A))
#define EXTI    (*(exti_reg_t*)     (0x50A0))
#define RST     (*(rst_reg_t*)      (0x50B3))
#define CLK     (*(clk_reg_t*)      (0x50C0))
#define WWDG    (*(wwdg_reg_t*)     (0x50D1))
#define IWDG    (*(iwdg_reg_t*)     (0x50E0))
#define AWU     (*(awu_reg_t*)      (0x50F0))
#define BEEP    (*(beep_reg_t*)     (0x50F3))
#define SPI     (*(spi_reg_t*)      (0x5200))
#define I2C     (*(i2c_reg_t*)      (0x5210))
#define UART1   (*(uart1_reg_t*)    (0x5230))
#define TIM1    (*(tim1_reg_t*)     (0x5250))
#define TIM2    (*(tim2_reg_t*)     (0x5300))
#define TIM4    (*(tim4_reg_t*)     (0x5340))
#define ADC1    (*(adc1_reg_t*)     (0x53E0))
#define ITC     (*(itc_reg_t*)      (0x7F70))


#define IRQ_ENABLE              __asm__("RIM")
#define IRQ_DISABLE             __asm__("SIM")


#define UART_CK_PORT            (PORT_D)
#define UART_CK_PIN             (4)

#define UART_TX_PORT            (PORT_D)
#define UART_TX_PIN             (5)

#define UART_RX_PORT            (PORT_D)
#define UART_RX_PIN             (6)


#define SPI_NSS_ALT_PORT        (PORT_A)
#define SPI_NSS_ALT_PIN         (3)

#define SPI_SCK_PORT            (PORT_C)
#define SPI_SCK_PIN             (5)

#define SPI_MOSI_PORT           (PORT_C)
#define SPI_MOSI_PIN            (6)

#define SPI_MISO_PORT           (PORT_C)
#define SPI_MISO_PIN            (7)


#define I2C_SDA_PORT            (PORT_B)
#define I2C_SDA_PIN             (5)

#define I2C_SCL_PORT            (PORT_B)
#define I2C_SCL_PIN             (4)


#define TIM1_BKIN_ALT_PORT      (PORT_B)
#define TIM1_BKIN_ALT_PIN       (5)

#define TIM1_CH1_ALT_PORT       (PORT_C)
#define TIM1_CH1_ALT_PIN        (6)

#define TIM1_CH2_ALT_PORT       (PORT_C)
#define TIM1_CH2_ALT_PIN        (7)

#define TIM1_CH3_PORT           (PORT_C)
#define TIM1_CH3_PIN            (3)

#define TIM1_CH4_PORT           (PORT_C)
#define TIM1_CH4_PIN            (4)

#define TIM1_CH1_N_ALT_PORT     (PORT_C)
#define TIM1_CH1_N_ALT_PIN      (3)

#define TIM1_CH2_N_ALT_PORT     (PORT_C)
#define TIM1_CH2_N_ALT_PIN      (4)


#define TIM2_CH1_PORT           (PORT_D)
#define TIM2_CH1_PIN            (4)

#define TIM2_CH1_ALT_PORT       (PORT_C)
#define TIM2_CH1_ALT_PIN        (5)

#define TIM2_CH2_PORT           (PORT_D)
#define TIM2_CH2_PIN            (3)

#define TIM2_CH3_ALT_PORT       (PORT_D)
#define TIM2_CH3_ALT_PIN        (2)


#define ADC_ETR_PORT            (PORT_D)
#define ADC_ETR_PIN             (3)

#define ADC_ETR_ALT_PORT        (PORT_B)
#define ADC_ETR_ALT_PIN         (4)

#define AIN2_PORT               (PORT_C)
#define AIN2_PIN                (4)

#define AIN3_PORT               (PORT_D)
#define AIN3_PIN                (2)

#define AIN4_PORT               (PORT_D)
#define AIN4_PIN                (3)

#define AIN5_PORT               (PORT_D)
#define AIN5_PIN                (5)

#define AIN6_PORT               (PORT_D)
#define AIN6_PIN                (6)


#define BEEP_PORT               (PORT_D)
#define BEEP_PIN                (4)

#define TLI_ALT_PORT            (PORT_C)
#define TLI_ALT_PIN             (3)

#define CLK_CCO_PORT            (PORT_C)
#define CLK_CCO_PIN             (4)


#define BIT(x)                  (1 << (x))

#define BIT_SET(x, b)           ((x) |= BIT(b))
#define BIT_CLR(x, b)           ((x) &= (~BIT(b)))
#define BIT_TOGGLE(x, b)        ((x) ^= BIT(b))
#define BIT_GET(x, b)           (((x) >> (b)) & 1)
