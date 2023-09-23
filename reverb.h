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
	int iVec0[2];
	int fSampleRate;
	float fConst1;
	float fConst2;
	float fRec9[2];
	float fVec1[2];
	float fConst3;
	float fRec10[2];
	float fRec11[2];
	int IOTA0;
	float fVec2[8192];
	int iConst4;
	float fRec8[2];
	float fRec13[2];
	float fVec3[8192];
	int iConst5;
	float fRec12[2];
	float fRec15[2];
	float fVec4[8192];
	int iConst6;
	float fRec14[2];
	float fRec17[2];
	float fVec5[8192];
	int iConst7;
	float fRec16[2];
	float fRec19[2];
	float fVec6[8192];
	int iConst8;
	float fRec18[2];
	float fRec21[2];
	float fVec7[8192];
	int iConst9;
	float fRec20[2];
	float fRec23[2];
	float fVec8[8192];
	int iConst10;
	float fRec22[2];
	float fRec25[2];
	float fVec9[8192];
	int iConst11;
	float fRec24[2];
	float fVec10[2048];
	int iConst12;
	float fRec6[2];
	float fVec11[2048];
	int iConst13;
	float fRec4[2];
	float fVec12[2048];
	int iConst14;
	float fRec2[2];
	float fVec13[1024];
	int iConst15;
	float fRec0[2];
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
	m->declare(m->metaInterface, "delays.lib/name", "Faust Delay Library");
	m->declare(m->metaInterface, "delays.lib/version", "0.1");
	m->declare(m->metaInterface, "filename", "reverb.dsp");
	m->declare(m->metaInterface, "filters.lib/allpass_comb:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/allpass_comb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/allpass_comb:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/name", "Faust Filters Library");
	m->declare(m->metaInterface, "filters.lib/version", "0.3");
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
	m->declare(m->metaInterface, "reverbs.lib/mono_freeverb:author", "Romain Michon");
	m->declare(m->metaInterface, "reverbs.lib/name", "Faust Reverb Library");
	m->declare(m->metaInterface, "reverbs.lib/version", "0.2");
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
			dsp->fRec9[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fVec1[l2] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 2; l3 = l3 + 1) {
			dsp->fRec10[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fRec11[l4] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 8192; l5 = l5 + 1) {
			dsp->fVec2[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec8[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec13[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 8192; l8 = l8 + 1) {
			dsp->fVec3[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec12[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec15[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 8192; l11 = l11 + 1) {
			dsp->fVec4[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec14[l12] = 0.0f;
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
		for (l14 = 0; l14 < 8192; l14 = l14 + 1) {
			dsp->fVec5[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec16[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec19[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 8192; l17 = l17 + 1) {
			dsp->fVec6[l17] = 0.0f;
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
			dsp->fRec21[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 8192; l20 = l20 + 1) {
			dsp->fVec7[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec20[l21] = 0.0f;
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
			dsp->fVec8[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec22[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec25[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 8192; l26 = l26 + 1) {
			dsp->fVec9[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec24[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2048; l28 = l28 + 1) {
			dsp->fVec10[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec6[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2048; l30 = l30 + 1) {
			dsp->fVec11[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec4[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2048; l32 = l32 + 1) {
			dsp->fVec12[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec2[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 1024; l34 = l34 + 1) {
			dsp->fVec13[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec0[l35] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 0.0005f * fConst0;
	dsp->fConst2 = 5e+02f / fConst0;
	dsp->fConst3 = 0.5f / fConst0;
	dsp->iConst4 = (int)(0.036666665f * fConst0);
	dsp->iConst5 = (int)(0.035306122f * fConst0);
	dsp->iConst6 = (int)(0.033809524f * fConst0);
	dsp->iConst7 = (int)(0.026938776f * fConst0);
	dsp->iConst8 = (int)(0.025306122f * fConst0);
	dsp->iConst9 = (int)(0.0322449f * fConst0);
	dsp->iConst10 = (int)(0.028956916f * fConst0);
	dsp->iConst11 = (int)(0.030748298f * fConst0);
	dsp->iConst12 = min(1024, max(0, (int)(0.0126077095f * fConst0) + -1));
	dsp->iConst13 = min(1024, max(0, (int)(0.01f * fConst0) + -1));
	dsp->iConst14 = min(1024, max(0, (int)(0.0077324263f * fConst0) + -1));
	dsp->iConst15 = min(1024, max(0, (int)(0.0051020407f * fConst0) + -1));
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
	ui_interface->openVerticalBox(ui_interface->uiInterface, "reverb");
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			int iTemp0 = 1 - dsp->iVec0[1];
			float fTemp1 = ((iTemp0) ? 0.0f : dsp->fConst2 + dsp->fRec9[1]);
			dsp->fRec9[0] = fTemp1 - floorf(fTemp1);
			float fTemp2 = mydsp_faustpower2_f(2.0f * dsp->fRec9[0] + -1.0f);
			dsp->fVec1[0] = fTemp2;
			float fTemp3 = ((iTemp0) ? 0.0f : dsp->fConst3 + dsp->fRec10[1]);
			dsp->fRec10[0] = fTemp3 - floorf(fTemp3);
			float fTemp4 = dsp->fConst1 * (float)(dsp->iVec0[1]) * (fTemp2 - dsp->fVec1[1]) * (((2.0f * (float)(dsp->fRec10[0] <= 0.1f) + -1.0f) == 1.0f) ? 0.2f : 0.0f);
			dsp->fRec11[0] = 0.2f * dsp->fRec11[1] + 0.8f * dsp->fRec8[1];
			dsp->fVec2[dsp->IOTA0 & 8191] = fTemp4 + 0.92f * dsp->fRec11[0];
			dsp->fRec8[0] = dsp->fVec2[(dsp->IOTA0 - dsp->iConst4) & 8191];
			dsp->fRec13[0] = 0.2f * dsp->fRec13[1] + 0.8f * dsp->fRec12[1];
			dsp->fVec3[dsp->IOTA0 & 8191] = fTemp4 + 0.92f * dsp->fRec13[0];
			dsp->fRec12[0] = dsp->fVec3[(dsp->IOTA0 - dsp->iConst5) & 8191];
			dsp->fRec15[0] = 0.2f * dsp->fRec15[1] + 0.8f * dsp->fRec14[1];
			dsp->fVec4[dsp->IOTA0 & 8191] = fTemp4 + 0.92f * dsp->fRec15[0];
			dsp->fRec14[0] = dsp->fVec4[(dsp->IOTA0 - dsp->iConst6) & 8191];
			dsp->fRec17[0] = 0.2f * dsp->fRec17[1] + 0.8f * dsp->fRec16[1];
			dsp->fVec5[dsp->IOTA0 & 8191] = fTemp4 + 0.92f * dsp->fRec17[0];
			dsp->fRec16[0] = dsp->fVec5[(dsp->IOTA0 - dsp->iConst7) & 8191];
			dsp->fRec19[0] = 0.2f * dsp->fRec19[1] + 0.8f * dsp->fRec18[1];
			dsp->fVec6[dsp->IOTA0 & 8191] = 0.92f * dsp->fRec19[0] + fTemp4;
			dsp->fRec18[0] = dsp->fVec6[(dsp->IOTA0 - dsp->iConst8) & 8191];
			dsp->fRec21[0] = 0.2f * dsp->fRec21[1] + 0.8f * dsp->fRec20[1];
			dsp->fVec7[dsp->IOTA0 & 8191] = fTemp4 + 0.92f * dsp->fRec21[0];
			dsp->fRec20[0] = dsp->fVec7[(dsp->IOTA0 - dsp->iConst9) & 8191];
			dsp->fRec23[0] = 0.2f * dsp->fRec23[1] + 0.8f * dsp->fRec22[1];
			dsp->fVec8[dsp->IOTA0 & 8191] = fTemp4 + 0.92f * dsp->fRec23[0];
			dsp->fRec22[0] = dsp->fVec8[(dsp->IOTA0 - dsp->iConst10) & 8191];
			dsp->fRec25[0] = 0.2f * dsp->fRec25[1] + 0.8f * dsp->fRec24[1];
			dsp->fVec9[dsp->IOTA0 & 8191] = fTemp4 + 0.92f * dsp->fRec25[0];
			dsp->fRec24[0] = dsp->fVec9[(dsp->IOTA0 - dsp->iConst11) & 8191];
			float fTemp5 = 0.69f * dsp->fRec6[1] + dsp->fRec8[0] + dsp->fRec12[0] + dsp->fRec14[0] + dsp->fRec16[0] + dsp->fRec18[0] + dsp->fRec20[0] + dsp->fRec22[0] + dsp->fRec24[0];
			dsp->fVec10[dsp->IOTA0 & 2047] = fTemp5;
			dsp->fRec6[0] = dsp->fVec10[(dsp->IOTA0 - dsp->iConst12) & 2047];
			float fRec7 = 0.0f - 0.69f * fTemp5;
			float fTemp6 = dsp->fRec6[1] + fRec7 + 0.69f * dsp->fRec4[1];
			dsp->fVec11[dsp->IOTA0 & 2047] = fTemp6;
			dsp->fRec4[0] = dsp->fVec11[(dsp->IOTA0 - dsp->iConst13) & 2047];
			float fRec5 = 0.0f - 0.69f * fTemp6;
			float fTemp7 = dsp->fRec4[1] + fRec5 + 0.69f * dsp->fRec2[1];
			dsp->fVec12[dsp->IOTA0 & 2047] = fTemp7;
			dsp->fRec2[0] = dsp->fVec12[(dsp->IOTA0 - dsp->iConst14) & 2047];
			float fRec3 = 0.0f - 0.69f * fTemp7;
			float fTemp8 = dsp->fRec2[1] + fRec3 + 0.69f * dsp->fRec0[1];
			dsp->fVec13[dsp->IOTA0 & 1023] = fTemp8;
			dsp->fRec0[0] = dsp->fVec13[(dsp->IOTA0 - dsp->iConst15) & 1023];
			float fRec1 = 0.0f - 0.69f * fTemp8;
			output0[i0] = (FAUSTFLOAT)(fRec1 + dsp->fRec0[1]);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec0[1] = dsp->fRec0[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
