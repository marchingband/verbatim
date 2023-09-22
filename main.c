#include "bflb_core.h"
#include "board.h"
#include "reverb.h"

#define BUF_SIZE 256

typedef struct {
	struct UIGlue *uiInterface;
	void (*openVerticalBox)(struct UIGlue *uiInterface, char* key);
	void (*openHorizontalBox)(struct UIGlue *uiInterface, char* key);
	void (*closeBox)(struct UIGlue *uiInterface);
	void (*declare)(struct UIGlue *uiInterface, float *p, const char* key, const char* val);

	void (*addVerticalSlider)(struct UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step);
	void (*addHorizontalSlider)(struct UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step);
	void (*addNumEntry)(struct UIGlue *uiInterface, const char *name, float *p, float init, float min, float max, float step);

	void (*addVerticalBargraph)(struct UIGlue *uiInterface, const char *name, float *p, float f1, float f2);
	void (*addButton)(struct UIGlue *uiInterface, const char *name, float *p);
} UIGlue;

typedef void (* metaDeclareFun) (void* ui_interface, const char* key, const char* value);

typedef struct {
	void* metaInterface;
    metaDeclareFun declare;
} MetaGlue;


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