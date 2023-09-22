#include "bflb_core.h"
#include "board.h"
#include "reverb.h"

mydsp *dsp = (mydsp *)BFLB_PSRAM_BASE;

float buf_in[256];
float buf_out[256];

void dsp_init(size_t buf_size)
{
    initmydsp(&dsp, 48000);
    // buildUserInterfacemydsp(&dsp, &ui_glue);
    // buf[0] = (float *)malloc(buf_size * sizeof(float));
}


int main(void)
{
    board_init();

    printf("dsp_init\r\n");
    dsp_init(BUF_SIZE);

    while (1) {
        printf("main loop");
        computemydsp(dsp, 256, buf_in, buf_out);
        bflb_mtimer_delay_ms(1000);
    }
}