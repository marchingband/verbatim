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
	int iVec0[2];
	float fConst2;
	float fRec10[2];
	float fVec1[2];
	float fConst3;
	float fRec11[2];
	float fConst5;
	FAUSTFLOAT fVslider0;
	float fConst6;
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT fVslider2;
	float fConst7;
	FAUSTFLOAT fVslider3;
	float fRec13[2];
	float fRec12[2];
	int IOTA0;
	float fVec2[16384];
	int iConst9;
	float fVec3[4096];
	int iConst10;
	float fRec8[2];
	float fConst12;
	float fRec17[2];
	float fRec16[2];
	float fVec4[16384];
	int iConst14;
	float fVec5[4096];
	int iConst15;
	float fRec14[2];
	float fConst17;
	float fRec21[2];
	float fRec20[2];
	float fVec6[16384];
	int iConst19;
	float fVec7[2048];
	int iConst20;
	float fRec18[2];
	float fConst22;
	float fRec25[2];
	float fRec24[2];
	float fVec8[32768];
	int iConst24;
	float fVec9[4096];
	int iConst25;
	float fRec22[2];
	float fConst27;
	float fRec29[2];
	float fRec28[2];
	float fVec10[32768];
	int iConst29;
	float fVec11[2048];
	int iConst30;
	float fRec26[2];
	float fConst32;
	float fRec33[2];
	float fRec32[2];
	float fVec12[16384];
	int iConst34;
	float fVec13[2048];
	int iConst35;
	float fRec30[2];
	float fConst37;
	float fRec37[2];
	float fRec36[2];
	float fVec14[16384];
	int iConst39;
	float fVec15[4096];
	int iConst40;
	float fRec34[2];
	float fConst42;
	float fRec41[2];
	float fRec40[2];
	float fVec16[32768];
	int iConst44;
	float fVec17[4096];
	int iConst45;
	float fRec38[2];
	float fRec0[3];
	float fRec1[3];
	float fRec2[3];
	float fRec3[3];
	float fRec4[3];
	float fRec5[3];
	float fRec6[3];
	float fRec7[3];
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
	m->declare(m->metaInterface, "demos.lib/name", "Faust Demos Library");
	m->declare(m->metaInterface, "demos.lib/version", "0.1");
	m->declare(m->metaInterface, "demos.lib/zita_rev_fdn_demo:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "demos.lib/zita_rev_fdn_demo:licence", "MIT");
	m->declare(m->metaInterface, "filename", "reverb.dsp");
	m->declare(m->metaInterface, "filters.lib/allpass_comb:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/allpass_comb:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/allpass_comb:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/lowpass:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/lowpass:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/name", "Faust Filters Library");
	m->declare(m->metaInterface, "filters.lib/tf1:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf1:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/tf1s:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf1s:license", "MIT-style STK-4.3 license");
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
	m->declare(m->metaInterface, "reverbs.lib/name", "Faust Reverb Library");
	m->declare(m->metaInterface, "reverbs.lib/version", "0.2");
	m->declare(m->metaInterface, "routes.lib/hadamard:author", "Remy Muller, revised by Romain Michon");
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
	dsp->fVslider0 = (FAUSTFLOAT)(2.0f);
	dsp->fVslider1 = (FAUSTFLOAT)(6e+03f);
	dsp->fVslider2 = (FAUSTFLOAT)(3.0f);
	dsp->fVslider3 = (FAUSTFLOAT)(2e+02f);
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
			dsp->fRec10[l1] = 0.0f;
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
			dsp->fRec11[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fRec13[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fRec12[l5] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 16384; l6 = l6 + 1) {
			dsp->fVec2[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 4096; l7 = l7 + 1) {
			dsp->fVec3[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 2; l8 = l8 + 1) {
			dsp->fRec8[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec17[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fRec16[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 16384; l11 = l11 + 1) {
			dsp->fVec4[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 4096; l12 = l12 + 1) {
			dsp->fVec5[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 2; l13 = l13 + 1) {
			dsp->fRec14[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec21[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fRec20[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 16384; l16 = l16 + 1) {
			dsp->fVec6[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2048; l17 = l17 + 1) {
			dsp->fVec7[l17] = 0.0f;
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
			dsp->fRec25[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fRec24[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 32768; l21 = l21 + 1) {
			dsp->fVec8[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 4096; l22 = l22 + 1) {
			dsp->fVec9[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 2; l23 = l23 + 1) {
			dsp->fRec22[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec29[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fRec28[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 32768; l26 = l26 + 1) {
			dsp->fVec10[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2048; l27 = l27 + 1) {
			dsp->fVec11[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 2; l28 = l28 + 1) {
			dsp->fRec26[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec33[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fRec32[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 16384; l31 = l31 + 1) {
			dsp->fVec12[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2048; l32 = l32 + 1) {
			dsp->fVec13[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 2; l33 = l33 + 1) {
			dsp->fRec30[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec37[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fRec36[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 16384; l36 = l36 + 1) {
			dsp->fVec14[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 4096; l37 = l37 + 1) {
			dsp->fVec15[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 2; l38 = l38 + 1) {
			dsp->fRec34[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec41[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fRec40[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 32768; l41 = l41 + 1) {
			dsp->fVec16[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 4096; l42 = l42 + 1) {
			dsp->fVec17[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 2; l43 = l43 + 1) {
			dsp->fRec38[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 3; l44 = l44 + 1) {
			dsp->fRec0[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 3; l45 = l45 + 1) {
			dsp->fRec1[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 3; l46 = l46 + 1) {
			dsp->fRec2[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 3; l47 = l47 + 1) {
			dsp->fRec3[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 3; l48 = l48 + 1) {
			dsp->fRec4[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 3; l49 = l49 + 1) {
			dsp->fRec5[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 3; l50 = l50 + 1) {
			dsp->fRec6[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 3; l51 = l51 + 1) {
			dsp->fRec7[l51] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 0.0005f * fConst0;
	dsp->fConst2 = 5e+02f / fConst0;
	dsp->fConst3 = 0.5f / fConst0;
	float fConst4 = floorf(0.174713f * fConst0 + 0.5f);
	dsp->fConst5 = (0.0f - 6.9077554f * fConst4) / fConst0;
	dsp->fConst6 = 6.2831855f / fConst0;
	dsp->fConst7 = 3.1415927f / fConst0;
	float fConst8 = floorf(0.022904f * fConst0 + 0.5f);
	dsp->iConst9 = (int)(fminf(8192.0f, fmaxf(0.0f, fConst4 - fConst8)));
	dsp->iConst10 = (int)(fminf(2048.0f, fmaxf(0.0f, fConst8 + -1.0f)));
	float fConst11 = floorf(0.127837f * fConst0 + 0.5f);
	dsp->fConst12 = (0.0f - 6.9077554f * fConst11) / fConst0;
	float fConst13 = floorf(0.031604f * fConst0 + 0.5f);
	dsp->iConst14 = (int)(fminf(8192.0f, fmaxf(0.0f, fConst11 - fConst13)));
	dsp->iConst15 = (int)(fminf(2048.0f, fmaxf(0.0f, fConst13 + -1.0f)));
	float fConst16 = floorf(0.153129f * fConst0 + 0.5f);
	dsp->fConst17 = (0.0f - 6.9077554f * fConst16) / fConst0;
	float fConst18 = floorf(0.020346f * fConst0 + 0.5f);
	dsp->iConst19 = (int)(fminf(8192.0f, fmaxf(0.0f, fConst16 - fConst18)));
	dsp->iConst20 = (int)(fminf(1024.0f, fmaxf(0.0f, fConst18 + -1.0f)));
	float fConst21 = floorf(0.256891f * fConst0 + 0.5f);
	dsp->fConst22 = (0.0f - 6.9077554f * fConst21) / fConst0;
	float fConst23 = floorf(0.027333f * fConst0 + 0.5f);
	dsp->iConst24 = (int)(fminf(16384.0f, fmaxf(0.0f, fConst21 - fConst23)));
	dsp->iConst25 = (int)(fminf(2048.0f, fmaxf(0.0f, fConst23 + -1.0f)));
	float fConst26 = floorf(0.219991f * fConst0 + 0.5f);
	dsp->fConst27 = (0.0f - 6.9077554f * fConst26) / fConst0;
	float fConst28 = floorf(0.019123f * fConst0 + 0.5f);
	dsp->iConst29 = (int)(fminf(16384.0f, fmaxf(0.0f, fConst26 - fConst28)));
	dsp->iConst30 = (int)(fminf(1024.0f, fmaxf(0.0f, fConst28 + -1.0f)));
	float fConst31 = floorf(0.125f * fConst0 + 0.5f);
	dsp->fConst32 = (0.0f - 6.9077554f * fConst31) / fConst0;
	float fConst33 = floorf(0.013458f * fConst0 + 0.5f);
	dsp->iConst34 = (int)(fminf(8192.0f, fmaxf(0.0f, fConst31 - fConst33)));
	dsp->iConst35 = (int)(fminf(1024.0f, fmaxf(0.0f, fConst33 + -1.0f)));
	float fConst36 = floorf(0.192303f * fConst0 + 0.5f);
	dsp->fConst37 = (0.0f - 6.9077554f * fConst36) / fConst0;
	float fConst38 = floorf(0.029291f * fConst0 + 0.5f);
	dsp->iConst39 = (int)(fminf(8192.0f, fmaxf(0.0f, fConst36 - fConst38)));
	dsp->iConst40 = (int)(fminf(2048.0f, fmaxf(0.0f, fConst38 + -1.0f)));
	float fConst41 = floorf(0.210389f * fConst0 + 0.5f);
	dsp->fConst42 = (0.0f - 6.9077554f * fConst41) / fConst0;
	float fConst43 = floorf(0.024421f * fConst0 + 0.5f);
	dsp->iConst44 = (int)(fminf(16384.0f, fmaxf(0.0f, fConst41 - fConst43)));
	dsp->iConst45 = (int)(fminf(2048.0f, fmaxf(0.0f, fConst43 + -1.0f)));
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
	ui_interface->declare(ui_interface->uiInterface, 0, "tooltip", "~ Zita_Rev's internal         8x8 Feedback Delay Network (FDN) & Schroeder allpass-comb reverberator.     See         Faust's reverbs.lib for documentation and references");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Zita_Rev Internal FDN Reverb");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider2, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider2, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider2, "tooltip", "T60 = time (in seconds) to decay 60dB in low-frequency band");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider2, "unit", "s");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Low RT60", &dsp->fVslider2, (FAUSTFLOAT)3.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)8.0f, (FAUSTFLOAT)0.1f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider3, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider3, "scale", "log");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider3, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider3, "tooltip", "Crossover frequency (Hz) separating low and middle frequencies");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider3, "unit", "Hz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "LF X", &dsp->fVslider3, (FAUSTFLOAT)2e+02f, (FAUSTFLOAT)5e+01f, (FAUSTFLOAT)1e+03f, (FAUSTFLOAT)1.0f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "scale", "log");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "tooltip", "T60 = time (in seconds) to decay 60dB in middle band");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider0, "unit", "s");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "Mid RT60", &dsp->fVslider0, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)8.0f, (FAUSTFLOAT)0.1f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "4", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "scale", "log");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "style", "knob");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "tooltip", "Frequency (Hz) at which the high-frequency T60 is half the middle-band's T60");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fVslider1, "unit", "Hz");
	ui_interface->addVerticalSlider(ui_interface->uiInterface, "HF Damping", &dsp->fVslider1, (FAUSTFLOAT)6e+03f, (FAUSTFLOAT)1.5e+03f, (FAUSTFLOAT)2.352e+04f, (FAUSTFLOAT)1.0f);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	float fSlow0 = (float)(dsp->fVslider0);
	float fSlow1 = expf(dsp->fConst5 / fSlow0);
	float fSlow2 = cosf(dsp->fConst6 * (float)(dsp->fVslider1));
	float fSlow3 = mydsp_faustpower2_f(fSlow1);
	float fSlow4 = 1.0f - fSlow2 * fSlow3;
	float fSlow5 = 1.0f - fSlow3;
	float fSlow6 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow4) / mydsp_faustpower2_f(fSlow5) + -1.0f));
	float fSlow7 = fSlow4 / fSlow5;
	float fSlow8 = fSlow1 * (fSlow6 + (1.0f - fSlow7));
	float fSlow9 = (float)(dsp->fVslider2);
	float fSlow10 = expf(dsp->fConst5 / fSlow9) / fSlow1 + -1.0f;
	float fSlow11 = 1.0f / tanf(dsp->fConst7 * (float)(dsp->fVslider3));
	float fSlow12 = 1.0f / (fSlow11 + 1.0f);
	float fSlow13 = 1.0f - fSlow11;
	float fSlow14 = fSlow7 - fSlow6;
	float fSlow15 = expf(dsp->fConst12 / fSlow0);
	float fSlow16 = mydsp_faustpower2_f(fSlow15);
	float fSlow17 = 1.0f - fSlow2 * fSlow16;
	float fSlow18 = 1.0f - fSlow16;
	float fSlow19 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow17) / mydsp_faustpower2_f(fSlow18) + -1.0f));
	float fSlow20 = fSlow17 / fSlow18;
	float fSlow21 = fSlow15 * (fSlow19 + (1.0f - fSlow20));
	float fSlow22 = expf(dsp->fConst12 / fSlow9) / fSlow15 + -1.0f;
	float fSlow23 = fSlow20 - fSlow19;
	float fSlow24 = expf(dsp->fConst17 / fSlow0);
	float fSlow25 = mydsp_faustpower2_f(fSlow24);
	float fSlow26 = 1.0f - fSlow25 * fSlow2;
	float fSlow27 = 1.0f - fSlow25;
	float fSlow28 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow26) / mydsp_faustpower2_f(fSlow27) + -1.0f));
	float fSlow29 = fSlow26 / fSlow27;
	float fSlow30 = fSlow24 * (fSlow28 + (1.0f - fSlow29));
	float fSlow31 = expf(dsp->fConst17 / fSlow9) / fSlow24 + -1.0f;
	float fSlow32 = fSlow29 - fSlow28;
	float fSlow33 = expf(dsp->fConst22 / fSlow0);
	float fSlow34 = mydsp_faustpower2_f(fSlow33);
	float fSlow35 = 1.0f - fSlow2 * fSlow34;
	float fSlow36 = 1.0f - fSlow34;
	float fSlow37 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow35) / mydsp_faustpower2_f(fSlow36) + -1.0f));
	float fSlow38 = fSlow35 / fSlow36;
	float fSlow39 = fSlow33 * (fSlow37 + (1.0f - fSlow38));
	float fSlow40 = expf(dsp->fConst22 / fSlow9) / fSlow33 + -1.0f;
	float fSlow41 = fSlow38 - fSlow37;
	float fSlow42 = expf(dsp->fConst27 / fSlow0);
	float fSlow43 = mydsp_faustpower2_f(fSlow42);
	float fSlow44 = 1.0f - fSlow2 * fSlow43;
	float fSlow45 = 1.0f - fSlow43;
	float fSlow46 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow44) / mydsp_faustpower2_f(fSlow45) + -1.0f));
	float fSlow47 = fSlow44 / fSlow45;
	float fSlow48 = fSlow42 * (fSlow46 + (1.0f - fSlow47));
	float fSlow49 = expf(dsp->fConst27 / fSlow9) / fSlow42 + -1.0f;
	float fSlow50 = fSlow47 - fSlow46;
	float fSlow51 = expf(dsp->fConst32 / fSlow0);
	float fSlow52 = mydsp_faustpower2_f(fSlow51);
	float fSlow53 = 1.0f - fSlow2 * fSlow52;
	float fSlow54 = 1.0f - fSlow52;
	float fSlow55 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow53) / mydsp_faustpower2_f(fSlow54) + -1.0f));
	float fSlow56 = fSlow53 / fSlow54;
	float fSlow57 = fSlow51 * (fSlow55 + (1.0f - fSlow56));
	float fSlow58 = expf(dsp->fConst32 / fSlow9) / fSlow51 + -1.0f;
	float fSlow59 = fSlow56 - fSlow55;
	float fSlow60 = expf(dsp->fConst37 / fSlow0);
	float fSlow61 = mydsp_faustpower2_f(fSlow60);
	float fSlow62 = 1.0f - fSlow2 * fSlow61;
	float fSlow63 = 1.0f - fSlow61;
	float fSlow64 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow62) / mydsp_faustpower2_f(fSlow63) + -1.0f));
	float fSlow65 = fSlow62 / fSlow63;
	float fSlow66 = fSlow60 * (fSlow64 + (1.0f - fSlow65));
	float fSlow67 = expf(dsp->fConst37 / fSlow9) / fSlow60 + -1.0f;
	float fSlow68 = fSlow65 - fSlow64;
	float fSlow69 = expf(dsp->fConst42 / fSlow0);
	float fSlow70 = mydsp_faustpower2_f(fSlow69);
	float fSlow71 = 1.0f - fSlow2 * fSlow70;
	float fSlow72 = 1.0f - fSlow70;
	float fSlow73 = sqrtf(fmaxf(0.0f, mydsp_faustpower2_f(fSlow71) / mydsp_faustpower2_f(fSlow72) + -1.0f));
	float fSlow74 = fSlow71 / fSlow72;
	float fSlow75 = fSlow69 * (fSlow73 + (1.0f - fSlow74));
	float fSlow76 = expf(dsp->fConst42 / fSlow9) / fSlow69 + -1.0f;
	float fSlow77 = fSlow74 - fSlow73;
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			int iTemp0 = 1 - dsp->iVec0[1];
			float fTemp1 = ((iTemp0) ? 0.0f : dsp->fConst2 + dsp->fRec10[1]);
			dsp->fRec10[0] = fTemp1 - floorf(fTemp1);
			float fTemp2 = mydsp_faustpower2_f(2.0f * dsp->fRec10[0] + -1.0f);
			dsp->fVec1[0] = fTemp2;
			float fTemp3 = ((iTemp0) ? 0.0f : dsp->fConst3 + dsp->fRec11[1]);
			dsp->fRec11[0] = fTemp3 - floorf(fTemp3);
			float fTemp4 = dsp->fConst1 * (float)(dsp->iVec0[1]) * (fTemp2 - dsp->fVec1[1]) * (((2.0f * (float)(dsp->fRec11[0] <= 0.1f) + -1.0f) == 1.0f) ? 0.5f : 0.0f);
			dsp->fRec13[0] = 0.0f - fSlow12 * (fSlow13 * dsp->fRec13[1] - (dsp->fRec4[1] + dsp->fRec4[2]));
			dsp->fRec12[0] = fSlow8 * (dsp->fRec4[1] + fSlow10 * dsp->fRec13[0]) + fSlow14 * dsp->fRec12[1];
			dsp->fVec2[dsp->IOTA0 & 16383] = 0.35355338f * dsp->fRec12[0] + 1e-20f;
			float fTemp5 = fTemp4 + dsp->fVec2[(dsp->IOTA0 - dsp->iConst9) & 16383] - 0.6f * dsp->fRec8[1];
			dsp->fVec3[dsp->IOTA0 & 4095] = fTemp5;
			dsp->fRec8[0] = dsp->fVec3[(dsp->IOTA0 - dsp->iConst10) & 4095];
			float fRec9 = 0.6f * fTemp5;
			dsp->fRec17[0] = 0.0f - fSlow12 * (fSlow13 * dsp->fRec17[1] - (dsp->fRec2[1] + dsp->fRec2[2]));
			dsp->fRec16[0] = fSlow21 * (dsp->fRec2[1] + fSlow22 * dsp->fRec17[0]) + fSlow23 * dsp->fRec16[1];
			dsp->fVec4[dsp->IOTA0 & 16383] = 0.35355338f * dsp->fRec16[0] + 1e-20f;
			float fTemp6 = fTemp4 + dsp->fVec4[(dsp->IOTA0 - dsp->iConst14) & 16383] - 0.6f * dsp->fRec14[1];
			dsp->fVec5[dsp->IOTA0 & 4095] = fTemp6;
			dsp->fRec14[0] = dsp->fVec5[(dsp->IOTA0 - dsp->iConst15) & 4095];
			float fRec15 = 0.6f * fTemp6;
			dsp->fRec21[0] = 0.0f - fSlow12 * (fSlow13 * dsp->fRec21[1] - (dsp->fRec0[1] + dsp->fRec0[2]));
			dsp->fRec20[0] = fSlow30 * (dsp->fRec0[1] + fSlow31 * dsp->fRec21[0]) + fSlow32 * dsp->fRec20[1];
			dsp->fVec6[dsp->IOTA0 & 16383] = 0.35355338f * dsp->fRec20[0] + 1e-20f;
			float fTemp7 = dsp->fVec6[(dsp->IOTA0 - dsp->iConst19) & 16383] + fTemp4 - 0.6f * dsp->fRec18[1];
			dsp->fVec7[dsp->IOTA0 & 2047] = fTemp7;
			dsp->fRec18[0] = dsp->fVec7[(dsp->IOTA0 - dsp->iConst20) & 2047];
			float fRec19 = 0.6f * fTemp7;
			dsp->fRec25[0] = 0.0f - fSlow12 * (fSlow13 * dsp->fRec25[1] - (dsp->fRec3[1] + dsp->fRec3[2]));
			dsp->fRec24[0] = fSlow39 * (dsp->fRec3[1] + fSlow40 * dsp->fRec25[0]) + fSlow41 * dsp->fRec24[1];
			dsp->fVec8[dsp->IOTA0 & 32767] = 0.35355338f * dsp->fRec24[0] + 1e-20f;
			float fTemp8 = fTemp4 + 0.6f * dsp->fRec22[1] + dsp->fVec8[(dsp->IOTA0 - dsp->iConst24) & 32767];
			dsp->fVec9[dsp->IOTA0 & 4095] = fTemp8;
			dsp->fRec22[0] = dsp->fVec9[(dsp->IOTA0 - dsp->iConst25) & 4095];
			float fRec23 = 0.0f - 0.6f * fTemp8;
			dsp->fRec29[0] = 0.0f - fSlow12 * (fSlow13 * dsp->fRec29[1] - (dsp->fRec7[1] + dsp->fRec7[2]));
			dsp->fRec28[0] = fSlow48 * (dsp->fRec7[1] + fSlow49 * dsp->fRec29[0]) + fSlow50 * dsp->fRec28[1];
			dsp->fVec10[dsp->IOTA0 & 32767] = 0.35355338f * dsp->fRec28[0] + 1e-20f;
			float fTemp9 = fTemp4 + 0.6f * dsp->fRec26[1] + dsp->fVec10[(dsp->IOTA0 - dsp->iConst29) & 32767];
			dsp->fVec11[dsp->IOTA0 & 2047] = fTemp9;
			dsp->fRec26[0] = dsp->fVec11[(dsp->IOTA0 - dsp->iConst30) & 2047];
			float fRec27 = 0.0f - 0.6f * fTemp9;
			dsp->fRec33[0] = 0.0f - fSlow12 * (fSlow13 * dsp->fRec33[1] - (dsp->fRec6[1] + dsp->fRec6[2]));
			dsp->fRec32[0] = fSlow57 * (dsp->fRec6[1] + fSlow58 * dsp->fRec33[0]) + fSlow59 * dsp->fRec32[1];
			dsp->fVec12[dsp->IOTA0 & 16383] = 0.35355338f * dsp->fRec32[0] + 1e-20f;
			float fTemp10 = fTemp4 + dsp->fVec12[(dsp->IOTA0 - dsp->iConst34) & 16383] - 0.6f * dsp->fRec30[1];
			dsp->fVec13[dsp->IOTA0 & 2047] = fTemp10;
			dsp->fRec30[0] = dsp->fVec13[(dsp->IOTA0 - dsp->iConst35) & 2047];
			float fRec31 = 0.6f * fTemp10;
			dsp->fRec37[0] = 0.0f - fSlow12 * (fSlow13 * dsp->fRec37[1] - (dsp->fRec5[1] + dsp->fRec5[2]));
			dsp->fRec36[0] = fSlow66 * (dsp->fRec5[1] + fSlow67 * dsp->fRec37[0]) + fSlow68 * dsp->fRec36[1];
			dsp->fVec14[dsp->IOTA0 & 16383] = 0.35355338f * dsp->fRec36[0] + 1e-20f;
			float fTemp11 = fTemp4 + 0.6f * dsp->fRec34[1] + dsp->fVec14[(dsp->IOTA0 - dsp->iConst39) & 16383];
			dsp->fVec15[dsp->IOTA0 & 4095] = fTemp11;
			dsp->fRec34[0] = dsp->fVec15[(dsp->IOTA0 - dsp->iConst40) & 4095];
			float fRec35 = 0.0f - 0.6f * fTemp11;
			dsp->fRec41[0] = 0.0f - fSlow12 * (fSlow13 * dsp->fRec41[1] - (dsp->fRec1[1] + dsp->fRec1[2]));
			dsp->fRec40[0] = fSlow75 * (dsp->fRec1[1] + fSlow76 * dsp->fRec41[0]) + fSlow77 * dsp->fRec40[1];
			dsp->fVec16[dsp->IOTA0 & 32767] = 0.35355338f * dsp->fRec40[0] + 1e-20f;
			float fTemp12 = fTemp4 + 0.6f * dsp->fRec38[1] + dsp->fVec16[(dsp->IOTA0 - dsp->iConst44) & 32767];
			dsp->fVec17[dsp->IOTA0 & 4095] = fTemp12;
			dsp->fRec38[0] = dsp->fVec17[(dsp->IOTA0 - dsp->iConst45) & 4095];
			float fRec39 = 0.0f - 0.6f * fTemp12;
			float fTemp13 = fRec39 + fRec27;
			float fTemp14 = fRec23 + fRec35 + fTemp13;
			dsp->fRec0[0] = dsp->fRec8[1] + dsp->fRec14[1] + dsp->fRec18[1] + dsp->fRec22[1] + dsp->fRec26[1] + dsp->fRec30[1] + dsp->fRec34[1] + dsp->fRec38[1] + fRec9 + fRec19 + fRec31 + fRec15 + fTemp14;
			dsp->fRec1[0] = dsp->fRec8[1] + dsp->fRec14[1] + dsp->fRec18[1] + dsp->fRec30[1] + fRec9 + fRec19 + fRec15 + fRec31 - (dsp->fRec22[1] + dsp->fRec26[1] + dsp->fRec34[1] + dsp->fRec38[1] + fTemp14);
			float fTemp15 = fRec39 + fRec35;
			float fTemp16 = fRec23 + fRec27;
			dsp->fRec2[0] = dsp->fRec8[1] + dsp->fRec18[1] + dsp->fRec34[1] + dsp->fRec38[1] + fRec9 + fRec19 + fTemp15 - (dsp->fRec14[1] + dsp->fRec22[1] + dsp->fRec26[1] + dsp->fRec30[1] + fRec31 + fRec15 + fTemp16);
			dsp->fRec3[0] = dsp->fRec8[1] + dsp->fRec18[1] + dsp->fRec22[1] + dsp->fRec26[1] + fRec9 + fRec19 + fTemp16 - (dsp->fRec14[1] + dsp->fRec30[1] + dsp->fRec34[1] + dsp->fRec38[1] + fRec31 + fRec15 + fTemp15);
			float fTemp17 = fRec39 + fRec23;
			float fTemp18 = fRec35 + fRec27;
			dsp->fRec4[0] = dsp->fRec14[1] + dsp->fRec18[1] + dsp->fRec22[1] + dsp->fRec38[1] + fRec19 + fRec15 + fTemp17 - (dsp->fRec8[1] + dsp->fRec26[1] + dsp->fRec30[1] + dsp->fRec34[1] + fRec9 + fRec31 + fTemp18);
			dsp->fRec5[0] = dsp->fRec14[1] + dsp->fRec18[1] + dsp->fRec26[1] + dsp->fRec34[1] + fRec19 + fRec15 + fTemp18 - (dsp->fRec8[1] + dsp->fRec22[1] + dsp->fRec30[1] + dsp->fRec38[1] + fRec9 + fRec31 + fTemp17);
			float fTemp19 = fRec35 + fRec23;
			dsp->fRec6[0] = dsp->fRec18[1] + dsp->fRec26[1] + dsp->fRec30[1] + dsp->fRec38[1] + fRec19 + fRec31 + fTemp13 - (dsp->fRec8[1] + dsp->fRec14[1] + dsp->fRec22[1] + dsp->fRec34[1] + fRec9 + fRec15 + fTemp19);
			dsp->fRec7[0] = dsp->fRec18[1] + dsp->fRec22[1] + dsp->fRec30[1] + dsp->fRec34[1] + fRec19 + fRec31 + fTemp19 - (dsp->fRec8[1] + dsp->fRec14[1] + dsp->fRec26[1] + dsp->fRec38[1] + fRec9 + fRec15 + fTemp13);
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0] + dsp->fRec1[0] + dsp->fRec2[0] + dsp->fRec3[0] + dsp->fRec4[0] + dsp->fRec5[0] + dsp->fRec6[0] + dsp->fRec7[0]);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fVec1[1] = dsp->fVec1[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec0[2] = dsp->fRec0[1];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[2] = dsp->fRec1[1];
			dsp->fRec1[1] = dsp->fRec1[0];
			dsp->fRec2[2] = dsp->fRec2[1];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fRec3[2] = dsp->fRec3[1];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec4[2] = dsp->fRec4[1];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec5[2] = dsp->fRec5[1];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec6[2] = dsp->fRec6[1];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec7[2] = dsp->fRec7[1];
			dsp->fRec7[1] = dsp->fRec7[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
