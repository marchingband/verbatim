#include "bflb_core.h"
#include "board.h"
#include "reverb.h"

#define BUF_SIZE 256

mydsp *dsp = (mydsp *)BFLB_PSRAM_BASE;

float buf_in[BUF_SIZE];
float buf_out[BUF_SIZE];
float *buf_p_in[1];
float *buf_p_out[1];

void dsp_init(size_t buf_size)
{
    initmydsp(dsp, 48000);
    // buildUserInterfacemydsp(&dsp, &ui_glue);
    // buf[0] = (float *)malloc(buf_size * sizeof(float));
}


int main(void)
{
    board_init();

    buf_p_in[0] = buf_in;
    buf_p_out[0] = buf_out;

    printf("dsp_init\r\n");
    dsp_init(BUF_SIZE);

    while (1) {
        printf("main loop");
        computemydsp(dsp, BUF_SIZE, buf_p_in, buf_p_out);
        bflb_mtimer_delay_ms(1000);
    }
}