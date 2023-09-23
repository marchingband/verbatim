/* ------------------------------------------------------------
name: "reverb"
Code generated with Faust 2.59.9 (https://faust.grame.fr)
Compilation options: -lang c -ct 1 -es 1 -mcd 16 -single -ftz 0
------------------------------------------------------------ */

#ifndef  __mydsp_H__
#define  __mydsp_H__

#ifndef FAUSTFLOAT
#define FAUSTFLOAT float
#endif 


#ifdef __cplusplus
extern "C" {
#endif

#if defined(_WIN32)
#define RESTRICT __restrict
#else
#define RESTRICT __restrict__
#endif

#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <dsp.h>

static float mydsp_faustpower2_f(float value) {
	return value * value;
}

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

typedef struct {
	int fSampleRate;
	float fConst1;
	FAUSTFLOAT fVslider0;
	float fConst2;
	int iVec0[2];
	float fRec0[2];
	float fConst3;
	FAUSTFLOAT fVslider1;
	float fRec1[2];
	float fConst4;
	float fRec2[2];
	float fVec1[2];
	float fConst5;
	float fRec3[2];
	FAUSTFLOAT fVslider2;
	float fRec15[2];
	float fRec14[3];
	FAUSTFLOAT fVslider3;
	float fRec16[2];
	int IOTA0;
	float fVec2[256];
	float fRec12[2];
	float fVec3[128];
	float fRec10[2];
	FAUSTFLOAT fVslider4;
	float fRec17[2];
	float fVec4[512];
	float fRec8[2];
	float fVec5[512];
	float fRec6[2];
	FAUSTFLOAT fVslider5;
	float fRec18[2];
	FAUSTFLOAT fVslider6;
	float fRec22[2];
	FAUSTFLOAT fVslider7;
	float fRec25[2];
	float fVec6[1024];
	float fRec23[2];
	float fVec7[8192];
	float fRec21[2];
	FAUSTFLOAT fVslider8;
	float fRec26[2];
	float fVec8[4096];
	float fRec19[2];
	float fVec9[4096];
	float fRec4[2];
	float fVec10[1024];
	float fRec30[2];
	float fVec11[8192];
	float fRec29[2];
	float fVec12[2048];
	float fRec27[2];
	float fVec13[2048];
	float fRec5[2];
} mydsp;

mydsp* newmydsp() { 
	mydsp* dsp = (mydsp*)calloc(1, sizeof(mydsp));
	return dsp;
}

void deletemydsp(mydsp* dsp) { 
	free(dsp);
}

void metadatamydsp(MetaGlue* m) { 
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
	m->declare(m->metaInterface, "basics.lib/version", "0.10");
	m->declare(m->metaInterface, "compile_options", "-lang c -ct 1 -es 1 -mcd 16 -single -ftz 0");
	m->declare(m->metaInterface, "demos.lib/dattorro_rev_demo:author", "Jakob Zerbian");
	m->declare(m->metaInterface, "demos.lib/dattorro_rev_demo:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "demos.lib/name", "Faust Demos Library");
	m->declare(m->metaInterface, "demos.lib/version", "0.1");
	m->declare(m->metaInterface, "filename", "reverb.dsp");
	m->declare(m->metaInterface, "maths.lib/author", "GRAME");
	m->declare(m->metaInterface, "maths.lib/copyright", "GRAME");
	m->declare(m->metaInterface, "maths.lib/license", "LGPL with exception");
	m->declare(m->metaInterface, "maths.lib/name", "Faust Math Library");
	m->declare(m->metaInterface, "maths.lib/version", "2.6");
	m->declare(m->metaInterface, "name", "reverb");
	m->declare(m->metaInterface, "oscillators.lib/lf_sawpos:author", "Bart Brouns, revised by Stéphane Letz");
	m->declare(m->metaInterface, "oscillators.lib/lf_sawpos:licence", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/name", "Faust Oscillator Library");
	m->declare(m->metaInterface, "oscillators.lib/sawN:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "oscillators.lib/sawN:license", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/sawNp:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "oscillators.lib/sawNp:license", "STK-4.3");
	m->declare(m->metaInterface, "oscillators.lib/version", "0.4");
	m->declare(m->metaInterface, "platform.lib/name", "Generic Platform Library");
	m->declare(m->metaInterface, "platform.lib/version", "0.3");
	m->declare(m->metaInterface, "reverbs.lib/dattorro_rev:author", "Jakob Zerbian");
	m->declare(m->metaInterface, "reverbs.lib/dattorro_rev:licence", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "reverbs.lib/name", "Faust Reverb Library");
	m->declare(m->metaInterface, "reverbs.lib/version", "0.2");
	m->declare(m->metaInterface, "routes.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "routes.lib/version", "0.2");
	m->declare(m->metaInterface, "signals.lib/name", "Faust Signal Routing Library");
	m->declare(m->metaInterface, "signals.lib/version", "0.3");
}

int getSampleRatemydsp(mydsp* RESTRICT dsp) {
	return dsp->fSampleRate;
}

int getNumInputsmydsp(mydsp* RESTRICT dsp) {
	return 0;
}
int getNumOutputsmydsp(mydsp* RESTRICT dsp) {
	return 1;
}

void classInitmydsp(int sample_rate) {
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
	dsp->fVslider0 = (FAUSTFLOAT)(-6.0f);
	dsp->fVslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fVslider2 = (FAUSTFLOAT)(0.7f);
	dsp->fVslider3 = (FAUSTFLOAT)(0.625f);
	dsp->fVslider4 = (FAUSTFLOAT)(0.625f);
	dsp->fVslider5 = (FAUSTFLOAT)(0.7f);
	dsp->fVslider6 = (FAUSTFLOAT)(0.625f);
	dsp->fVslider7 = (FAUSTFLOAT)(0.625f);
	dsp->fVslider8 = (FAUSTFLOAT)(0.625f);
}

void instanceClearmydsp(mydsp* dsp) {
	/* C99 loop */
	{
		int l0;
		for (l0 = 0; l0 < 2; l0 = l0 + 1) {
			dsp->iVec0[l0] = 0;
		}
	}
	/* C99 loop */
	{
		int l1;
		for (l1 = 0; l1 < 2; l1 = l1 + 1) {
			dsp->fRec0[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fRec1[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fRec2[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fVec1[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fRec3[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec15[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 3; l7 = l7 + 1) {
			dsp->fRec14[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec16[l8] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 256; l9 = l9 + 1) {
			dsp->fVec2[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec12[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 128; l11 = l11 + 1) {
			dsp->fVec3[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec10[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec17[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 512; l14 = l14 + 1) {
			dsp->fVec4[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec8[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 512; l16 = l16 + 1) {
			dsp->fVec5[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec6[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 2; l18 = l18 + 1) {
			dsp->fRec18[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec22[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec25[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 1024; l21 = l21 + 1) {
			dsp->fVec6[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec23[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 8192; l23 = l23 + 1) {
			dsp->fVec7[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec21[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec26[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 4096; l26 = l26 + 1) {
			dsp->fVec8[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec19[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 4096; l28 = l28 + 1) {
			dsp->fVec9[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec4[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 1024; l30 = l30 + 1) {
			dsp->fVec10[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec30[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 8192; l32 = l32 + 1) {
			dsp->fVec11[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec29[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2048; l34 = l34 + 1) {
			dsp->fVec12[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec27[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2048; l36 = l36 + 1) {
			dsp->fVec13[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec5[l37] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 44.1f / fConst0;
	dsp->fConst2 = 1.0f - dsp->fConst1;
	dsp->fConst3 = 0.0005f * fConst0;
	dsp->fConst4 = 5e+02f / fConst0;
	dsp->fConst5 = 0.5f / fConst0;
}

void instanceInitmydsp(mydsp* dsp, int sample_rate) {
	instanceConstantsmydsp(dsp, sample_rate);
	instanceResetUserInterfacemydsp(dsp);
	instanceClearmydsp(dsp);
}

void initmydsp(mydsp* dsp, int sample_rate) {
	classInitmydsp(sample_rate);
	instanceInitmydsp(dsp, sample_rate);
}

void buildUserInterfacemydsp(mydsp* dsp, UIGlue* ui_interface) {
	ui_interface->declare(ui_interface->uiInterface, 0, "0", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Dattorro Reverb");
	ui_interface->declare(ui_interface->uiInterface, 0, "0", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Input");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider2, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider2, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider2, "tooltip", "lowpass-like filter, 0 = no signal, 1 = no filtering");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Prefilter", &dsp->fVslider2, (FAUSTFLOAT)0.7f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider3, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider3, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider3, "tooltip", "diffusion factor, influences reverb color and density");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Diffusion 1", &dsp->fVslider3, (FAUSTFLOAT)0.625f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider4, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider4, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider4, "tooltip", "diffusion factor, influences reverb color and density");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Diffusion 2", &dsp->fVslider4, (FAUSTFLOAT)0.625f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "1", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Feedback");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider7, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider7, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider7, "tooltip", "diffusion factor, influences reverb color and density");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Diffusion 1", &dsp->fVslider7, (FAUSTFLOAT)0.625f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider8, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider8, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider8, "tooltip", "diffusion factor, influences reverb color and density");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Diffusion 2", &dsp->fVslider8, (FAUSTFLOAT)0.625f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider5, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider5, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider5, "tooltip", "decay length, 1 = infinite");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Decay Rate", &dsp->fVslider5, (FAUSTFLOAT)0.7f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider6, "4", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider6, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider6, "tooltip", "dampening in feedback network");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Damping", &dsp->fVslider6, (FAUSTFLOAT)0.625f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Output");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "tooltip", "-1 = dry, 1 = wet");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Dry/Wet Mix", &dsp->fVslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)-1.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.01f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "tooltip", "Output Gain");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "unit", "dB");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Level", &dsp->fVslider0, (FAUSTFLOAT)-6.0f, (FAUSTFLOAT)-7e+01f, (FAUSTFLOAT)4e+01f, (FAUSTFLOAT)0.1f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = dsp->fConst1 * powf(1e+01f, 0.05f * (float)(dsp->fVslider0));
	float fSlow1 = dsp->fConst1 * (float)(dsp->fVslider1);
	float fSlow2 = dsp->fConst1 * (float)(dsp->fVslider2);
	float fSlow3 = dsp->fConst1 * (float)(dsp->fVslider3);
	float fSlow4 = dsp->fConst1 * (float)(dsp->fVslider4);
	float fSlow5 = dsp->fConst1 * (float)(dsp->fVslider5);
	float fSlow6 = dsp->fConst1 * (float)(dsp->fVslider6);
	float fSlow7 = dsp->fConst1 * (float)(dsp->fVslider7);
	float fSlow8 = dsp->fConst1 * (float)(dsp->fVslider8);
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec0[0] = fSlow0 + dsp->fConst2 * dsp->fRec0[1];
			dsp->fRec1[0] = fSlow1 + dsp->fConst2 * dsp->fRec1[1];
			float fTemp0 = dsp->fRec1[0] + 1.0f;
			float fTemp1 = (float)(dsp->iVec0[1]);
			int iTemp2 = 1 - dsp->iVec0[1];
			float fTemp3 = ((iTemp2) ? 0.0f : dsp->fConst4 + dsp->fRec2[1]);
			dsp->fRec2[0] = fTemp3 - floorf(fTemp3);
			float fTemp4 = mydsp_faustpower2_f(2.0f * dsp->fRec2[0] + -1.0f);
			dsp->fVec1[0] = fTemp4;
			float fTemp5 = fTemp4 - dsp->fVec1[1];
			float fTemp6 = ((iTemp2) ? 0.0f : dsp->fConst5 + dsp->fRec3[1]);
			dsp->fRec3[0] = fTemp6 - floorf(fTemp6);
			float fTemp7 = (((2.0f * (float)(dsp->fRec3[0] <= 0.1f) + -1.0f) == 1.0f) ? 0.5f : 0.0f);
			float fTemp8 = dsp->fConst3 * (1.0f - 0.5f * fTemp0) * fTemp1 * fTemp5 * fTemp7;
			dsp->fRec15[0] = fSlow2 + dsp->fConst2 * dsp->fRec15[1];
			dsp->fRec14[0] = (1.0f - dsp->fRec15[0]) * dsp->fRec14[2] + dsp->fConst3 * dsp->fRec15[0] * fTemp1 * fTemp5 * fTemp7;
			dsp->fRec16[0] = fSlow3 + dsp->fConst2 * dsp->fRec16[1];
			float fTemp9 = dsp->fRec14[0] - dsp->fRec16[0] * dsp->fRec12[1];
			dsp->fVec2[dsp->IOTA0 & 255] = fTemp9;
			dsp->fRec12[0] = dsp->fVec2[(dsp->IOTA0 - 142) & 255];
			float fRec13 = dsp->fRec16[0] * fTemp9;
			float fTemp10 = fRec13 + dsp->fRec12[1] - dsp->fRec16[0] * dsp->fRec10[1];
			dsp->fVec3[dsp->IOTA0 & 127] = fTemp10;
			dsp->fRec10[0] = dsp->fVec3[(dsp->IOTA0 - 107) & 127];
			float fRec11 = dsp->fRec16[0] * fTemp10;
			dsp->fRec17[0] = fSlow4 + dsp->fConst2 * dsp->fRec17[1];
			float fTemp11 = fRec11 + dsp->fRec10[1] - dsp->fRec17[0] * dsp->fRec8[1];
			dsp->fVec4[dsp->IOTA0 & 511] = fTemp11;
			dsp->fRec8[0] = dsp->fVec4[(dsp->IOTA0 - 379) & 511];
			float fRec9 = dsp->fRec17[0] * fTemp11;
			float fTemp12 = fRec9 + dsp->fRec8[1] - dsp->fRec17[0] * dsp->fRec6[1];
			dsp->fVec5[dsp->IOTA0 & 511] = fTemp12;
			dsp->fRec6[0] = dsp->fVec5[(dsp->IOTA0 - 277) & 511];
			float fRec7 = dsp->fRec17[0] * fTemp12;
			dsp->fRec18[0] = fSlow5 + dsp->fConst2 * dsp->fRec18[1];
			dsp->fRec22[0] = fSlow6 + dsp->fConst2 * dsp->fRec22[1];
			float fTemp13 = 1.0f - dsp->fRec22[0];
			dsp->fRec25[0] = fSlow7 + dsp->fConst2 * dsp->fRec25[1];
			float fTemp14 = dsp->fRec25[0] * dsp->fRec23[1] + dsp->fRec5[1];
			dsp->fVec6[dsp->IOTA0 & 1023] = fTemp14;
			dsp->fRec23[0] = dsp->fVec6[(dsp->IOTA0 - 908) & 1023];
			float fRec24 = 0.0f - dsp->fRec25[0] * fTemp14;
			dsp->fVec7[dsp->IOTA0 & 8191] = fRec24 + dsp->fRec23[1];
			dsp->fRec21[0] = dsp->fRec22[0] * dsp->fRec21[1] + fTemp13 * dsp->fVec7[(dsp->IOTA0 - 4217) & 8191];
			dsp->fRec26[0] = fSlow8 + dsp->fConst2 * dsp->fRec26[1];
			float fTemp15 = dsp->fRec21[0] * dsp->fRec18[0] - dsp->fRec26[0] * dsp->fRec19[1];
			dsp->fVec8[dsp->IOTA0 & 4095] = fTemp15;
			dsp->fRec19[0] = dsp->fVec8[(dsp->IOTA0 - 2656) & 4095];
			float fRec20 = dsp->fRec26[0] * fTemp15;
			dsp->fVec9[dsp->IOTA0 & 4095] = fRec20 + dsp->fRec19[1];
			dsp->fRec4[0] = dsp->fRec6[1] + fRec7 + dsp->fRec18[0] * dsp->fVec9[(dsp->IOTA0 - 2656) & 4095];
			float fTemp16 = dsp->fRec25[0] * dsp->fRec30[1] + dsp->fRec4[1];
			dsp->fVec10[dsp->IOTA0 & 1023] = fTemp16;
			dsp->fRec30[0] = dsp->fVec10[(dsp->IOTA0 - 672) & 1023];
			float fRec31 = 0.0f - dsp->fRec25[0] * fTemp16;
			dsp->fVec11[dsp->IOTA0 & 8191] = fRec31 + dsp->fRec30[1];
			dsp->fRec29[0] = dsp->fRec22[0] * dsp->fRec29[1] + fTemp13 * dsp->fVec11[(dsp->IOTA0 - 4453) & 8191];
			float fTemp17 = dsp->fRec18[0] * dsp->fRec29[0] - dsp->fRec26[0] * dsp->fRec27[1];
			dsp->fVec12[dsp->IOTA0 & 2047] = fTemp17;
			dsp->fRec27[0] = dsp->fVec12[(dsp->IOTA0 - 1800) & 2047];
			float fRec28 = dsp->fRec26[0] * fTemp17;
			dsp->fVec13[dsp->IOTA0 & 2047] = fRec28 + dsp->fRec27[1];
			dsp->fRec5[0] = fRec7 + dsp->fRec6[1] + dsp->fRec18[0] * dsp->fVec13[(dsp->IOTA0 - 1800) & 2047];
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] * (fTemp8 + 0.5f * fTemp0 * dsp->fRec4[0] + fTemp8 + 0.5f * fTemp0 * dsp->fRec5[0]));
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec14[2] = dsp->fRec14[1];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec5[1] = dsp->fRec5[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
