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

static int imydspSIG0Wave0[1302] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499,503,509,521,523,541,547,557,563,569,571,577,587,593,599,601,607,613,617,619,631,641,643,647,653,659,661,673,677,683,691,701,709,719,727,733,739,743,751,757,761,769,773,787,797,809,811,821,823,827,829,839,853,857,859,863,877,881,883,887,907,911,919,929,937,941,947,953,967,971,977,983,991,997,1009,1013,1019,1021,1031,1033,1039,1049,1051,1061,1063,1069,1087,1091,1093,1097,1103,1109,1117,1123,1129,1151,1153,1163,1171,1181,1187,1193,1201,1213,1217,1223,1229,1231,1237,1249,1259,1277,1279,1283,1289,1291,1297,1301,1303,1307,1319,1321,1327,1361,1367,1373,1381,1399,1409,1423,1427,1429,1433,1439,1447,1451,1453,1459,1471,1481,1483,1487,1489,1493,1499,1511,1523,1531,1543,1549,1553,1559,1567,1571,1579,1583,1597,1601,1607,1609,1613,1619,1621,1627,1637,1657,1663,1667,1669,1693,1697,1699,1709,1721,1723,1733,1741,1747,1753,1759,1777,1783,1787,1789,1801,1811,1823,1831,1847,1861,1867,1871,1873,1877,1879,1889,1901,1907,1913,1931,1933,1949,1951,1973,1979,1987,1993,1997,1999,2003,2011,2017,2027,2029,2039,2053,2063,2069,2081,2083,2087,2089,2099,2111,2113,2129,2131,2137,2141,2143,2153,2161,2179,2203,2207,2213,2221,2237,2239,2243,2251,2267,2269,2273,2281,2287,2293,2297,2309,2311,2333,2339,2341,2347,2351,2357,2371,2377,2381,2383,2389,2393,2399,2411,2417,2423,2437,2441,2447,2459,2467,2473,2477,2503,2521,2531,2539,2543,2549,2551,2557,2579,2591,2593,2609,2617,2621,2633,2647,2657,2659,2663,2671,2677,2683,2687,2689,2693,2699,2707,2711,2713,2719,2729,2731,2741,2749,2753,2767,2777,2789,2791,2797,2801,2803,2819,2833,2837,2843,2851,2857,2861,2879,2887,2897,2903,2909,2917,2927,2939,2953,2957,2963,2969,2971,2999,3001,3011,3019,3023,3037,3041,3049,3061,3067,3079,3083,3089,3109,3119,3121,3137,3163,3167,3169,3181,3187,3191,3203,3209,3217,3221,3229,3251,3253,3257,3259,3271,3299,3301,3307,3313,3319,3323,3329,3331,3343,3347,3359,3361,3371,3373,3389,3391,3407,3413,3433,3449,3457,3461,3463,3467,3469,3491,3499,3511,3517,3527,3529,3533,3539,3541,3547,3557,3559,3571,3581,3583,3593,3607,3613,3617,3623,3631,3637,3643,3659,3671,3673,3677,3691,3697,3701,3709,3719,3727,3733,3739,3761,3767,3769,3779,3793,3797,3803,3821,3823,3833,3847,3851,3853,3863,3877,3881,3889,3907,3911,3917,3919,3923,3929,3931,3943,3947,3967,3989,4001,4003,4007,4013,4019,4021,4027,4049,4051,4057,4073,4079,4091,4093,4099,4111,4127,4129,4133,4139,4153,4157,4159,4177,4201,4211,4217,4219,4229,4231,4241,4243,4253,4259,4261,4271,4273,4283,4289,4297,4327,4337,4339,4349,4357,4363,4373,4391,4397,4409,4421,4423,4441,4447,4451,4457,4463,4481,4483,4493,4507,4513,4517,4519,4523,4547,4549,4561,4567,4583,4591,4597,4603,4621,4637,4639,4643,4649,4651,4657,4663,4673,4679,4691,4703,4721,4723,4729,4733,4751,4759,4783,4787,4789,4793,4799,4801,4813,4817,4831,4861,4871,4877,4889,4903,4909,4919,4931,4933,4937,4943,4951,4957,4967,4969,4973,4987,4993,4999,5003,5009,5011,5021,5023,5039,5051,5059,5077,5081,5087,5099,5101,5107,5113,5119,5147,5153,5167,5171,5179,5189,5197,5209,5227,5231,5233,5237,5261,5273,5279,5281,5297,5303,5309,5323,5333,5347,5351,5381,5387,5393,5399,5407,5413,5417,5419,5431,5437,5441,5443,5449,5471,5477,5479,5483,5501,5503,5507,5519,5521,5527,5531,5557,5563,5569,5573,5581,5591,5623,5639,5641,5647,5651,5653,5657,5659,5669,5683,5689,5693,5701,5711,5717,5737,5741,5743,5749,5779,5783,5791,5801,5807,5813,5821,5827,5839,5843,5849,5851,5857,5861,5867,5869,5879,5881,5897,5903,5923,5927,5939,5953,5981,5987,6007,6011,6029,6037,6043,6047,6053,6067,6073,6079,6089,6091,6101,6113,6121,6131,6133,6143,6151,6163,6173,6197,6199,6203,6211,6217,6221,6229,6247,6257,6263,6269,6271,6277,6287,6299,6301,6311,6317,6323,6329,6337,6343,6353,6359,6361,6367,6373,6379,6389,6397,6421,6427,6449,6451,6469,6473,6481,6491,6521,6529,6547,6551,6553,6563,6569,6571,6577,6581,6599,6607,6619,6637,6653,6659,6661,6673,6679,6689,6691,6701,6703,6709,6719,6733,6737,6761,6763,6779,6781,6791,6793,6803,6823,6827,6829,6833,6841,6857,6863,6869,6871,6883,6899,6907,6911,6917,6947,6949,6959,6961,6967,6971,6977,6983,6991,6997,7001,7013,7019,7027,7039,7043,7057,7069,7079,7103,7109,7121,7127,7129,7151,7159,7177,7187,7193,7207,7211,7213,7219,7229,7237,7243,7247,7253,7283,7297,7307,7309,7321,7331,7333,7349,7351,7369,7393,7411,7417,7433,7451,7457,7459,7477,7481,7487,7489,7499,7507,7517,7523,7529,7537,7541,7547,7549,7559,7561,7573,7577,7583,7589,7591,7603,7607,7621,7639,7643,7649,7669,7673,7681,7687,7691,7699,7703,7717,7723,7727,7741,7753,7757,7759,7789,7793,7817,7823,7829,7841,7853,7867,7873,7877,7879,7883,7901,7907,7919,7927,7933,7937,7949,7951,7963,7993,8009,8011,8017,8039,8053,8059,8069,8081,8087,8089,8093,8101,8111,8117,8123,8147,8161,8167,8171,8179,8191,8209,8219,8221,8231,8233,8237,8243,8263,8269,8273,8287,8291,8293,8297,8311,8317,8329,8353,8363,8369,8377,8387,8389,8419,8423,8429,8431,8443,8447,8461,8467,8501,8513,8521,8527,8537,8539,8543,8563,8573,8581,8597,8599,8609,8623,8627,8629,8641,8647,8663,8669,8677,8681,8689,8693,8699,8707,8713,8719,8731,8737,8741,8747,8753,8761,8779,8783,8803,8807,8819,8821,8831,8837,8839,8849,8861,8863,8867,8887,8893,8923,8929,8933,8941,8951,8963,8969,8971,8999,9001,9007,9011,9013,9029,9041,9043,9049,9059,9067,9091,9103,9109,9127,9133,9137,9151,9157,9161,9173,9181,9187,9199,9203,9209,9221,9227,9239,9241,9257,9277,9281,9283,9293,9311,9319,9323,9337,9341,9343,9349,9371,9377,9391,9397,9403,9413,9419,9421,9431,9433,9437,9439,9461,9463,9467,9473,9479,9491,9497,9511,9521,9533,9539,9547,9551,9587,9601,9613,9619,9623,9629,9631,9643,9649,9661,9677,9679,9689,9697,9719,9721,9733,9739,9743,9749,9767,9769,9781,9787,9791,9803,9811,9817,9829,9833,9839,9851,9857,9859,9871,9883,9887,9901,9907,9923,9929,9931,9941,9949,9967,9973,10007,10009,10037,10039,10061,10067,10069,10079,10091,10093,10099,10103,10111,10133,10139,10141,10151,10159,10163,10169,10177,10181,10193,10211,10223,10243,10247,10253,10259,10267,10271,10273,10289,10301,10303,10313,10321,10331,10333,10337,10343,10357,10369,10391,10399,10427,10429,10433,10453,10457,10459,10463,10477,10487,10499,10501,10513,10529,10531,10559,10567,10589,10597,10601,10607,10613,10627,10631,10639,10651,10657,10663,10667};
typedef struct {
	int imydspSIG0Wave0_idx;
} mydspSIG0;

static mydspSIG0* newmydspSIG0() { return (mydspSIG0*)calloc(1, sizeof(mydspSIG0)); }
static void deletemydspSIG0(mydspSIG0* dsp) { free(dsp); }

int getNumInputsmydspSIG0(mydspSIG0* RESTRICT dsp) {
	return 0;
}
int getNumOutputsmydspSIG0(mydspSIG0* RESTRICT dsp) {
	return 1;
}

static void instanceInitmydspSIG0(mydspSIG0* dsp, int sample_rate) {
	dsp->imydspSIG0Wave0_idx = 0;
}

static void fillmydspSIG0(mydspSIG0* dsp, int count, int* table) {
	/* C99 loop */
	{
		int i1;
		for (i1 = 0; i1 < count; i1 = i1 + 1) {
			table[i1] = imydspSIG0Wave0[dsp->imydspSIG0Wave0_idx];
			dsp->imydspSIG0Wave0_idx = (1 + dsp->imydspSIG0Wave0_idx) % 1302;
		}
	}
}

static float mydsp_faustpower2_f(float value) {
	return value * value;
}
static int itbl0mydspSIG0[1302];

#ifndef FAUSTCLASS 
#define FAUSTCLASS mydsp
#endif

#ifdef __APPLE__ 
#define exp10f __exp10f
#define exp10 __exp10
#endif

typedef struct {
	FAUSTFLOAT fHslider0;
	FAUSTFLOAT fHslider1;
	FAUSTFLOAT fHslider2;
	int fSampleRate;
	float fConst1;
	FAUSTFLOAT fHslider3;
	int iVec0[2];
	float fRec15[2];
	float fRec16[2];
	FAUSTFLOAT fHslider4;
	FAUSTFLOAT fHslider5;
	FAUSTFLOAT fHslider6;
	float fConst2;
	FAUSTFLOAT fHslider7;
	int IOTA0;
	float fVec1[16384];
	float fRec53[2];
	float fVec2[2];
	float fRec52[2];
	float fRec50[2];
	float fVec3[16384];
	float fRec55[2];
	float fVec4[2];
	float fRec54[2];
	float fRec51[2];
	float fVec5[16384];
	float fRec56[2];
	float fVec6[2];
	float fRec49[2];
	float fRec47[2];
	float fVec7[16384];
	float fRec58[2];
	float fVec8[2];
	float fRec57[2];
	float fRec48[2];
	float fVec9[16384];
	float fRec59[2];
	float fVec10[2];
	float fRec46[2];
	float fRec44[2];
	float fVec11[16384];
	float fRec61[2];
	float fVec12[2];
	float fRec60[2];
	float fRec45[2];
	float fVec13[16384];
	float fRec62[2];
	float fVec14[2];
	float fRec43[2];
	float fRec41[2];
	float fVec15[16384];
	float fRec64[2];
	float fVec16[2];
	float fRec63[2];
	float fRec42[2];
	float fVec17[16384];
	float fRec65[2];
	float fVec18[2];
	float fRec40[2];
	float fRec38[2];
	float fVec19[16384];
	float fRec67[2];
	float fVec20[2];
	float fRec66[2];
	float fRec39[2];
	float fVec21[1024];
	float fVec22[16384];
	float fRec68[2];
	float fVec23[2];
	float fRec37[2];
	float fVec24[1024];
	float fVec25[16384];
	float fRec70[2];
	float fVec26[2];
	float fRec69[2];
	float fVec27[16384];
	float fRec71[2];
	float fVec28[2];
	float fRec36[2];
	float fRec34[2];
	float fVec29[16384];
	float fRec73[2];
	float fVec30[2];
	float fRec72[2];
	float fRec35[2];
	float fVec31[16384];
	float fRec74[2];
	float fVec32[2];
	float fRec33[2];
	float fRec31[2];
	float fVec33[16384];
	float fRec76[2];
	float fVec34[2];
	float fRec75[2];
	float fRec32[2];
	float fVec35[16384];
	float fRec77[2];
	float fVec36[2];
	float fRec30[2];
	float fRec28[2];
	float fVec37[16384];
	float fRec79[2];
	float fVec38[2];
	float fRec78[2];
	float fRec29[2];
	float fVec39[16384];
	float fRec80[2];
	float fVec40[2];
	float fRec27[2];
	float fRec25[2];
	float fVec41[16384];
	float fRec82[2];
	float fVec42[2];
	float fRec81[2];
	float fRec26[2];
	float fVec43[16384];
	float fRec83[2];
	float fVec44[2];
	float fRec24[2];
	float fRec22[2];
	float fVec45[16384];
	float fRec85[2];
	float fVec46[2];
	float fRec84[2];
	float fRec23[2];
	float fVec47[16384];
	float fVec48[16384];
	float fRec86[2];
	float fVec49[2];
	float fRec21[2];
	float fRec20[2];
	float fRec19[3];
	float fRec18[3];
	FAUSTFLOAT fHslider8;
	float fRec17[3];
	FAUSTFLOAT fHslider9;
	float fRec92[2];
	float fRec91[3];
	float fRec90[3];
	float fVec50[2];
	float fRec89[2];
	float fRec88[3];
	float fRec87[3];
	FAUSTFLOAT fHslider10;
	float fRec95[2];
	float fRec94[3];
	float fRec93[3];
	float fConst3;
	float fConst4;
	float fRec96[2];
	float fVec51[2];
	float fConst5;
	float fRec97[2];
	float fVec52[1024];
	float fRec14[2];
	float fVec53[16384];
	float fVec54[16384];
	float fRec104[2];
	float fVec55[2];
	float fRec103[2];
	float fRec102[2];
	float fRec101[3];
	float fRec100[3];
	float fRec99[3];
	float fRec110[2];
	float fRec109[3];
	float fRec108[3];
	float fVec56[2];
	float fRec107[2];
	float fRec106[3];
	float fRec105[3];
	float fRec113[2];
	float fRec112[3];
	float fRec111[3];
	float fVec57[1024];
	float fRec98[2];
	float fVec58[16384];
	float fVec59[2];
	float fRec13[2];
	float fRec11[2];
	float fVec60[16384];
	float fRec115[2];
	float fVec61[2];
	float fRec114[2];
	float fRec12[2];
	float fVec62[16384];
	float fVec63[2];
	float fRec10[2];
	float fRec8[2];
	float fVec64[16384];
	float fVec65[2];
	float fRec116[2];
	float fRec9[2];
	float fVec66[16384];
	float fVec67[2];
	float fRec7[2];
	float fRec5[2];
	float fVec68[16384];
	float fRec118[2];
	float fVec69[2];
	float fRec117[2];
	float fRec6[2];
	float fVec70[16384];
	float fRec119[2];
	float fVec71[2];
	float fRec4[2];
	float fRec2[2];
	float fVec72[16384];
	float fVec73[2];
	float fRec120[2];
	float fRec3[2];
	float fRec0[2];
	float fRec1[2];
} mydsp;

mydsp* newmydsp() { 
	mydsp* dsp = (mydsp*)calloc(1, sizeof(mydsp));
	return dsp;
}

void deletemydsp(mydsp* dsp) { 
	free(dsp);
}

void metadatamydsp(MetaGlue* m) { 
	m->declare(m->metaInterface, "analyzers.lib/name", "Faust Analyzer Library");
	m->declare(m->metaInterface, "analyzers.lib/version", "0.2");
	m->declare(m->metaInterface, "basics.lib/name", "Faust Basic Element Library");
	m->declare(m->metaInterface, "basics.lib/tabulateNd", "Copyright (C) 2023 Bart Brouns <bart@magnetophon.nl>");
	m->declare(m->metaInterface, "basics.lib/version", "0.10");
	m->declare(m->metaInterface, "compile_options", "-lang c -ct 1 -es 1 -mcd 16 -single -ftz 0");
	m->declare(m->metaInterface, "delays.lib/fdelay1a:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "delays.lib/fdelay4:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "delays.lib/fdelayltv:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "delays.lib/name", "Faust Delay Library");
	m->declare(m->metaInterface, "delays.lib/version", "0.1");
	m->declare(m->metaInterface, "demos.lib/jprev_demo:author", "Till Bovermann");
	m->declare(m->metaInterface, "demos.lib/jprev_demo:license", "GPL2+");
	m->declare(m->metaInterface, "demos.lib/name", "Faust Demos Library");
	m->declare(m->metaInterface, "demos.lib/version", "0.1");
	m->declare(m->metaInterface, "filename", "reverb.dsp");
	m->declare(m->metaInterface, "filters.lib/filterbank:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/filterbank:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/filterbank:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/fir:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/fir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/fir:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/highpass:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/highpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/highpass_plus_lowpass:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/highpass_plus_lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/highpass_plus_lowpass:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/iir:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/iir:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/iir:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/lowpass0_highpass1:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/lowpass:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/lowpass:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/lowpass:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/name", "Faust Filters Library");
	m->declare(m->metaInterface, "filters.lib/nlf2:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/nlf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/nlf2:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/tf1:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf1:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf1:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/tf1s:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf1s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf1s:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/tf2:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf2:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf2:license", "MIT-style STK-4.3 license");
	m->declare(m->metaInterface, "filters.lib/tf2s:author", "Julius O. Smith III");
	m->declare(m->metaInterface, "filters.lib/tf2s:copyright", "Copyright (C) 2003-2019 by Julius O. Smith III <jos@ccrma.stanford.edu>");
	m->declare(m->metaInterface, "filters.lib/tf2s:license", "MIT-style STK-4.3 license");
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
	m->declare(m->metaInterface, "reverbs.lib/jpverb:author", "Julian Parker, bug fixes and minor interface changes by Till Bovermann");
	m->declare(m->metaInterface, "reverbs.lib/jpverb:license", "GPL2+");
	m->declare(m->metaInterface, "reverbs.lib/name", "Faust Reverb Library");
	m->declare(m->metaInterface, "reverbs.lib/version", "0.2");
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
	return 2;
}

void classInitmydsp(int sample_rate) {
	mydspSIG0* sig0 = newmydspSIG0();
	instanceInitmydspSIG0(sig0, sample_rate);
	fillmydspSIG0(sig0, 1302, itbl0mydspSIG0);
	deletemydspSIG0(sig0);
}

void instanceResetUserInterfacemydsp(mydsp* dsp) {
	dsp->fHslider0 = (FAUSTFLOAT)(0.707f);
	dsp->fHslider1 = (FAUSTFLOAT)(0.0f);
	dsp->fHslider2 = (FAUSTFLOAT)(0.1f);
	dsp->fHslider3 = (FAUSTFLOAT)(2.0f);
	dsp->fHslider4 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider5 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider6 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider7 = (FAUSTFLOAT)(2e+03f);
	dsp->fHslider8 = (FAUSTFLOAT)(5e+02f);
	dsp->fHslider9 = (FAUSTFLOAT)(1.0f);
	dsp->fHslider10 = (FAUSTFLOAT)(1.0f);
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
			dsp->fRec15[l1] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l2;
		for (l2 = 0; l2 < 2; l2 = l2 + 1) {
			dsp->fRec16[l2] = 0.0f;
		}
	}
	dsp->IOTA0 = 0;
	/* C99 loop */
	{
		int l3;
		for (l3 = 0; l3 < 16384; l3 = l3 + 1) {
			dsp->fVec1[l3] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l4;
		for (l4 = 0; l4 < 2; l4 = l4 + 1) {
			dsp->fRec53[l4] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l5;
		for (l5 = 0; l5 < 2; l5 = l5 + 1) {
			dsp->fVec2[l5] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l6;
		for (l6 = 0; l6 < 2; l6 = l6 + 1) {
			dsp->fRec52[l6] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l7;
		for (l7 = 0; l7 < 2; l7 = l7 + 1) {
			dsp->fRec50[l7] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l8;
		for (l8 = 0; l8 < 16384; l8 = l8 + 1) {
			dsp->fVec3[l8] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l9;
		for (l9 = 0; l9 < 2; l9 = l9 + 1) {
			dsp->fRec55[l9] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l10;
		for (l10 = 0; l10 < 2; l10 = l10 + 1) {
			dsp->fVec4[l10] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l11;
		for (l11 = 0; l11 < 2; l11 = l11 + 1) {
			dsp->fRec54[l11] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l12;
		for (l12 = 0; l12 < 2; l12 = l12 + 1) {
			dsp->fRec51[l12] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l13;
		for (l13 = 0; l13 < 16384; l13 = l13 + 1) {
			dsp->fVec5[l13] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l14;
		for (l14 = 0; l14 < 2; l14 = l14 + 1) {
			dsp->fRec56[l14] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l15;
		for (l15 = 0; l15 < 2; l15 = l15 + 1) {
			dsp->fVec6[l15] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l16;
		for (l16 = 0; l16 < 2; l16 = l16 + 1) {
			dsp->fRec49[l16] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l17;
		for (l17 = 0; l17 < 2; l17 = l17 + 1) {
			dsp->fRec47[l17] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l18;
		for (l18 = 0; l18 < 16384; l18 = l18 + 1) {
			dsp->fVec7[l18] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l19;
		for (l19 = 0; l19 < 2; l19 = l19 + 1) {
			dsp->fRec58[l19] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l20;
		for (l20 = 0; l20 < 2; l20 = l20 + 1) {
			dsp->fVec8[l20] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l21;
		for (l21 = 0; l21 < 2; l21 = l21 + 1) {
			dsp->fRec57[l21] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l22;
		for (l22 = 0; l22 < 2; l22 = l22 + 1) {
			dsp->fRec48[l22] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l23;
		for (l23 = 0; l23 < 16384; l23 = l23 + 1) {
			dsp->fVec9[l23] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l24;
		for (l24 = 0; l24 < 2; l24 = l24 + 1) {
			dsp->fRec59[l24] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l25;
		for (l25 = 0; l25 < 2; l25 = l25 + 1) {
			dsp->fVec10[l25] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l26;
		for (l26 = 0; l26 < 2; l26 = l26 + 1) {
			dsp->fRec46[l26] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l27;
		for (l27 = 0; l27 < 2; l27 = l27 + 1) {
			dsp->fRec44[l27] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l28;
		for (l28 = 0; l28 < 16384; l28 = l28 + 1) {
			dsp->fVec11[l28] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l29;
		for (l29 = 0; l29 < 2; l29 = l29 + 1) {
			dsp->fRec61[l29] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l30;
		for (l30 = 0; l30 < 2; l30 = l30 + 1) {
			dsp->fVec12[l30] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l31;
		for (l31 = 0; l31 < 2; l31 = l31 + 1) {
			dsp->fRec60[l31] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l32;
		for (l32 = 0; l32 < 2; l32 = l32 + 1) {
			dsp->fRec45[l32] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l33;
		for (l33 = 0; l33 < 16384; l33 = l33 + 1) {
			dsp->fVec13[l33] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l34;
		for (l34 = 0; l34 < 2; l34 = l34 + 1) {
			dsp->fRec62[l34] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l35;
		for (l35 = 0; l35 < 2; l35 = l35 + 1) {
			dsp->fVec14[l35] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l36;
		for (l36 = 0; l36 < 2; l36 = l36 + 1) {
			dsp->fRec43[l36] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l37;
		for (l37 = 0; l37 < 2; l37 = l37 + 1) {
			dsp->fRec41[l37] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l38;
		for (l38 = 0; l38 < 16384; l38 = l38 + 1) {
			dsp->fVec15[l38] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l39;
		for (l39 = 0; l39 < 2; l39 = l39 + 1) {
			dsp->fRec64[l39] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l40;
		for (l40 = 0; l40 < 2; l40 = l40 + 1) {
			dsp->fVec16[l40] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l41;
		for (l41 = 0; l41 < 2; l41 = l41 + 1) {
			dsp->fRec63[l41] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l42;
		for (l42 = 0; l42 < 2; l42 = l42 + 1) {
			dsp->fRec42[l42] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l43;
		for (l43 = 0; l43 < 16384; l43 = l43 + 1) {
			dsp->fVec17[l43] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l44;
		for (l44 = 0; l44 < 2; l44 = l44 + 1) {
			dsp->fRec65[l44] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l45;
		for (l45 = 0; l45 < 2; l45 = l45 + 1) {
			dsp->fVec18[l45] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l46;
		for (l46 = 0; l46 < 2; l46 = l46 + 1) {
			dsp->fRec40[l46] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l47;
		for (l47 = 0; l47 < 2; l47 = l47 + 1) {
			dsp->fRec38[l47] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l48;
		for (l48 = 0; l48 < 16384; l48 = l48 + 1) {
			dsp->fVec19[l48] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l49;
		for (l49 = 0; l49 < 2; l49 = l49 + 1) {
			dsp->fRec67[l49] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l50;
		for (l50 = 0; l50 < 2; l50 = l50 + 1) {
			dsp->fVec20[l50] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l51;
		for (l51 = 0; l51 < 2; l51 = l51 + 1) {
			dsp->fRec66[l51] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l52;
		for (l52 = 0; l52 < 2; l52 = l52 + 1) {
			dsp->fRec39[l52] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l53;
		for (l53 = 0; l53 < 1024; l53 = l53 + 1) {
			dsp->fVec21[l53] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l54;
		for (l54 = 0; l54 < 16384; l54 = l54 + 1) {
			dsp->fVec22[l54] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l55;
		for (l55 = 0; l55 < 2; l55 = l55 + 1) {
			dsp->fRec68[l55] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l56;
		for (l56 = 0; l56 < 2; l56 = l56 + 1) {
			dsp->fVec23[l56] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l57;
		for (l57 = 0; l57 < 2; l57 = l57 + 1) {
			dsp->fRec37[l57] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l58;
		for (l58 = 0; l58 < 1024; l58 = l58 + 1) {
			dsp->fVec24[l58] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l59;
		for (l59 = 0; l59 < 16384; l59 = l59 + 1) {
			dsp->fVec25[l59] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l60;
		for (l60 = 0; l60 < 2; l60 = l60 + 1) {
			dsp->fRec70[l60] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l61;
		for (l61 = 0; l61 < 2; l61 = l61 + 1) {
			dsp->fVec26[l61] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l62;
		for (l62 = 0; l62 < 2; l62 = l62 + 1) {
			dsp->fRec69[l62] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l63;
		for (l63 = 0; l63 < 16384; l63 = l63 + 1) {
			dsp->fVec27[l63] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l64;
		for (l64 = 0; l64 < 2; l64 = l64 + 1) {
			dsp->fRec71[l64] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l65;
		for (l65 = 0; l65 < 2; l65 = l65 + 1) {
			dsp->fVec28[l65] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l66;
		for (l66 = 0; l66 < 2; l66 = l66 + 1) {
			dsp->fRec36[l66] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l67;
		for (l67 = 0; l67 < 2; l67 = l67 + 1) {
			dsp->fRec34[l67] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l68;
		for (l68 = 0; l68 < 16384; l68 = l68 + 1) {
			dsp->fVec29[l68] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l69;
		for (l69 = 0; l69 < 2; l69 = l69 + 1) {
			dsp->fRec73[l69] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l70;
		for (l70 = 0; l70 < 2; l70 = l70 + 1) {
			dsp->fVec30[l70] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l71;
		for (l71 = 0; l71 < 2; l71 = l71 + 1) {
			dsp->fRec72[l71] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l72;
		for (l72 = 0; l72 < 2; l72 = l72 + 1) {
			dsp->fRec35[l72] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l73;
		for (l73 = 0; l73 < 16384; l73 = l73 + 1) {
			dsp->fVec31[l73] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l74;
		for (l74 = 0; l74 < 2; l74 = l74 + 1) {
			dsp->fRec74[l74] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l75;
		for (l75 = 0; l75 < 2; l75 = l75 + 1) {
			dsp->fVec32[l75] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l76;
		for (l76 = 0; l76 < 2; l76 = l76 + 1) {
			dsp->fRec33[l76] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l77;
		for (l77 = 0; l77 < 2; l77 = l77 + 1) {
			dsp->fRec31[l77] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l78;
		for (l78 = 0; l78 < 16384; l78 = l78 + 1) {
			dsp->fVec33[l78] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l79;
		for (l79 = 0; l79 < 2; l79 = l79 + 1) {
			dsp->fRec76[l79] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l80;
		for (l80 = 0; l80 < 2; l80 = l80 + 1) {
			dsp->fVec34[l80] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l81;
		for (l81 = 0; l81 < 2; l81 = l81 + 1) {
			dsp->fRec75[l81] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l82;
		for (l82 = 0; l82 < 2; l82 = l82 + 1) {
			dsp->fRec32[l82] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l83;
		for (l83 = 0; l83 < 16384; l83 = l83 + 1) {
			dsp->fVec35[l83] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l84;
		for (l84 = 0; l84 < 2; l84 = l84 + 1) {
			dsp->fRec77[l84] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l85;
		for (l85 = 0; l85 < 2; l85 = l85 + 1) {
			dsp->fVec36[l85] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l86;
		for (l86 = 0; l86 < 2; l86 = l86 + 1) {
			dsp->fRec30[l86] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l87;
		for (l87 = 0; l87 < 2; l87 = l87 + 1) {
			dsp->fRec28[l87] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l88;
		for (l88 = 0; l88 < 16384; l88 = l88 + 1) {
			dsp->fVec37[l88] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l89;
		for (l89 = 0; l89 < 2; l89 = l89 + 1) {
			dsp->fRec79[l89] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l90;
		for (l90 = 0; l90 < 2; l90 = l90 + 1) {
			dsp->fVec38[l90] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l91;
		for (l91 = 0; l91 < 2; l91 = l91 + 1) {
			dsp->fRec78[l91] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l92;
		for (l92 = 0; l92 < 2; l92 = l92 + 1) {
			dsp->fRec29[l92] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l93;
		for (l93 = 0; l93 < 16384; l93 = l93 + 1) {
			dsp->fVec39[l93] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l94;
		for (l94 = 0; l94 < 2; l94 = l94 + 1) {
			dsp->fRec80[l94] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l95;
		for (l95 = 0; l95 < 2; l95 = l95 + 1) {
			dsp->fVec40[l95] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l96;
		for (l96 = 0; l96 < 2; l96 = l96 + 1) {
			dsp->fRec27[l96] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l97;
		for (l97 = 0; l97 < 2; l97 = l97 + 1) {
			dsp->fRec25[l97] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l98;
		for (l98 = 0; l98 < 16384; l98 = l98 + 1) {
			dsp->fVec41[l98] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l99;
		for (l99 = 0; l99 < 2; l99 = l99 + 1) {
			dsp->fRec82[l99] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l100;
		for (l100 = 0; l100 < 2; l100 = l100 + 1) {
			dsp->fVec42[l100] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l101;
		for (l101 = 0; l101 < 2; l101 = l101 + 1) {
			dsp->fRec81[l101] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l102;
		for (l102 = 0; l102 < 2; l102 = l102 + 1) {
			dsp->fRec26[l102] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l103;
		for (l103 = 0; l103 < 16384; l103 = l103 + 1) {
			dsp->fVec43[l103] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l104;
		for (l104 = 0; l104 < 2; l104 = l104 + 1) {
			dsp->fRec83[l104] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l105;
		for (l105 = 0; l105 < 2; l105 = l105 + 1) {
			dsp->fVec44[l105] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l106;
		for (l106 = 0; l106 < 2; l106 = l106 + 1) {
			dsp->fRec24[l106] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l107;
		for (l107 = 0; l107 < 2; l107 = l107 + 1) {
			dsp->fRec22[l107] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l108;
		for (l108 = 0; l108 < 16384; l108 = l108 + 1) {
			dsp->fVec45[l108] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l109;
		for (l109 = 0; l109 < 2; l109 = l109 + 1) {
			dsp->fRec85[l109] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l110;
		for (l110 = 0; l110 < 2; l110 = l110 + 1) {
			dsp->fVec46[l110] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l111;
		for (l111 = 0; l111 < 2; l111 = l111 + 1) {
			dsp->fRec84[l111] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l112;
		for (l112 = 0; l112 < 2; l112 = l112 + 1) {
			dsp->fRec23[l112] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l113;
		for (l113 = 0; l113 < 16384; l113 = l113 + 1) {
			dsp->fVec47[l113] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l114;
		for (l114 = 0; l114 < 16384; l114 = l114 + 1) {
			dsp->fVec48[l114] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l115;
		for (l115 = 0; l115 < 2; l115 = l115 + 1) {
			dsp->fRec86[l115] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l116;
		for (l116 = 0; l116 < 2; l116 = l116 + 1) {
			dsp->fVec49[l116] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l117;
		for (l117 = 0; l117 < 2; l117 = l117 + 1) {
			dsp->fRec21[l117] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l118;
		for (l118 = 0; l118 < 2; l118 = l118 + 1) {
			dsp->fRec20[l118] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l119;
		for (l119 = 0; l119 < 3; l119 = l119 + 1) {
			dsp->fRec19[l119] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l120;
		for (l120 = 0; l120 < 3; l120 = l120 + 1) {
			dsp->fRec18[l120] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l121;
		for (l121 = 0; l121 < 3; l121 = l121 + 1) {
			dsp->fRec17[l121] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l122;
		for (l122 = 0; l122 < 2; l122 = l122 + 1) {
			dsp->fRec92[l122] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l123;
		for (l123 = 0; l123 < 3; l123 = l123 + 1) {
			dsp->fRec91[l123] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l124;
		for (l124 = 0; l124 < 3; l124 = l124 + 1) {
			dsp->fRec90[l124] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l125;
		for (l125 = 0; l125 < 2; l125 = l125 + 1) {
			dsp->fVec50[l125] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l126;
		for (l126 = 0; l126 < 2; l126 = l126 + 1) {
			dsp->fRec89[l126] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l127;
		for (l127 = 0; l127 < 3; l127 = l127 + 1) {
			dsp->fRec88[l127] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l128;
		for (l128 = 0; l128 < 3; l128 = l128 + 1) {
			dsp->fRec87[l128] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l129;
		for (l129 = 0; l129 < 2; l129 = l129 + 1) {
			dsp->fRec95[l129] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l130;
		for (l130 = 0; l130 < 3; l130 = l130 + 1) {
			dsp->fRec94[l130] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l131;
		for (l131 = 0; l131 < 3; l131 = l131 + 1) {
			dsp->fRec93[l131] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l132;
		for (l132 = 0; l132 < 2; l132 = l132 + 1) {
			dsp->fRec96[l132] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l133;
		for (l133 = 0; l133 < 2; l133 = l133 + 1) {
			dsp->fVec51[l133] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l134;
		for (l134 = 0; l134 < 2; l134 = l134 + 1) {
			dsp->fRec97[l134] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l135;
		for (l135 = 0; l135 < 1024; l135 = l135 + 1) {
			dsp->fVec52[l135] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l136;
		for (l136 = 0; l136 < 2; l136 = l136 + 1) {
			dsp->fRec14[l136] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l137;
		for (l137 = 0; l137 < 16384; l137 = l137 + 1) {
			dsp->fVec53[l137] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l138;
		for (l138 = 0; l138 < 16384; l138 = l138 + 1) {
			dsp->fVec54[l138] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l139;
		for (l139 = 0; l139 < 2; l139 = l139 + 1) {
			dsp->fRec104[l139] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l140;
		for (l140 = 0; l140 < 2; l140 = l140 + 1) {
			dsp->fVec55[l140] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l141;
		for (l141 = 0; l141 < 2; l141 = l141 + 1) {
			dsp->fRec103[l141] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l142;
		for (l142 = 0; l142 < 2; l142 = l142 + 1) {
			dsp->fRec102[l142] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l143;
		for (l143 = 0; l143 < 3; l143 = l143 + 1) {
			dsp->fRec101[l143] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l144;
		for (l144 = 0; l144 < 3; l144 = l144 + 1) {
			dsp->fRec100[l144] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l145;
		for (l145 = 0; l145 < 3; l145 = l145 + 1) {
			dsp->fRec99[l145] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l146;
		for (l146 = 0; l146 < 2; l146 = l146 + 1) {
			dsp->fRec110[l146] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l147;
		for (l147 = 0; l147 < 3; l147 = l147 + 1) {
			dsp->fRec109[l147] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l148;
		for (l148 = 0; l148 < 3; l148 = l148 + 1) {
			dsp->fRec108[l148] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l149;
		for (l149 = 0; l149 < 2; l149 = l149 + 1) {
			dsp->fVec56[l149] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l150;
		for (l150 = 0; l150 < 2; l150 = l150 + 1) {
			dsp->fRec107[l150] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l151;
		for (l151 = 0; l151 < 3; l151 = l151 + 1) {
			dsp->fRec106[l151] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l152;
		for (l152 = 0; l152 < 3; l152 = l152 + 1) {
			dsp->fRec105[l152] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l153;
		for (l153 = 0; l153 < 2; l153 = l153 + 1) {
			dsp->fRec113[l153] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l154;
		for (l154 = 0; l154 < 3; l154 = l154 + 1) {
			dsp->fRec112[l154] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l155;
		for (l155 = 0; l155 < 3; l155 = l155 + 1) {
			dsp->fRec111[l155] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l156;
		for (l156 = 0; l156 < 1024; l156 = l156 + 1) {
			dsp->fVec57[l156] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l157;
		for (l157 = 0; l157 < 2; l157 = l157 + 1) {
			dsp->fRec98[l157] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l158;
		for (l158 = 0; l158 < 16384; l158 = l158 + 1) {
			dsp->fVec58[l158] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l159;
		for (l159 = 0; l159 < 2; l159 = l159 + 1) {
			dsp->fVec59[l159] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l160;
		for (l160 = 0; l160 < 2; l160 = l160 + 1) {
			dsp->fRec13[l160] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l161;
		for (l161 = 0; l161 < 2; l161 = l161 + 1) {
			dsp->fRec11[l161] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l162;
		for (l162 = 0; l162 < 16384; l162 = l162 + 1) {
			dsp->fVec60[l162] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l163;
		for (l163 = 0; l163 < 2; l163 = l163 + 1) {
			dsp->fRec115[l163] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l164;
		for (l164 = 0; l164 < 2; l164 = l164 + 1) {
			dsp->fVec61[l164] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l165;
		for (l165 = 0; l165 < 2; l165 = l165 + 1) {
			dsp->fRec114[l165] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l166;
		for (l166 = 0; l166 < 2; l166 = l166 + 1) {
			dsp->fRec12[l166] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l167;
		for (l167 = 0; l167 < 16384; l167 = l167 + 1) {
			dsp->fVec62[l167] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l168;
		for (l168 = 0; l168 < 2; l168 = l168 + 1) {
			dsp->fVec63[l168] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l169;
		for (l169 = 0; l169 < 2; l169 = l169 + 1) {
			dsp->fRec10[l169] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l170;
		for (l170 = 0; l170 < 2; l170 = l170 + 1) {
			dsp->fRec8[l170] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l171;
		for (l171 = 0; l171 < 16384; l171 = l171 + 1) {
			dsp->fVec64[l171] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l172;
		for (l172 = 0; l172 < 2; l172 = l172 + 1) {
			dsp->fVec65[l172] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l173;
		for (l173 = 0; l173 < 2; l173 = l173 + 1) {
			dsp->fRec116[l173] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l174;
		for (l174 = 0; l174 < 2; l174 = l174 + 1) {
			dsp->fRec9[l174] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l175;
		for (l175 = 0; l175 < 16384; l175 = l175 + 1) {
			dsp->fVec66[l175] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l176;
		for (l176 = 0; l176 < 2; l176 = l176 + 1) {
			dsp->fVec67[l176] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l177;
		for (l177 = 0; l177 < 2; l177 = l177 + 1) {
			dsp->fRec7[l177] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l178;
		for (l178 = 0; l178 < 2; l178 = l178 + 1) {
			dsp->fRec5[l178] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l179;
		for (l179 = 0; l179 < 16384; l179 = l179 + 1) {
			dsp->fVec68[l179] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l180;
		for (l180 = 0; l180 < 2; l180 = l180 + 1) {
			dsp->fRec118[l180] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l181;
		for (l181 = 0; l181 < 2; l181 = l181 + 1) {
			dsp->fVec69[l181] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l182;
		for (l182 = 0; l182 < 2; l182 = l182 + 1) {
			dsp->fRec117[l182] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l183;
		for (l183 = 0; l183 < 2; l183 = l183 + 1) {
			dsp->fRec6[l183] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l184;
		for (l184 = 0; l184 < 16384; l184 = l184 + 1) {
			dsp->fVec70[l184] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l185;
		for (l185 = 0; l185 < 2; l185 = l185 + 1) {
			dsp->fRec119[l185] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l186;
		for (l186 = 0; l186 < 2; l186 = l186 + 1) {
			dsp->fVec71[l186] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l187;
		for (l187 = 0; l187 < 2; l187 = l187 + 1) {
			dsp->fRec4[l187] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l188;
		for (l188 = 0; l188 < 2; l188 = l188 + 1) {
			dsp->fRec2[l188] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l189;
		for (l189 = 0; l189 < 16384; l189 = l189 + 1) {
			dsp->fVec72[l189] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l190;
		for (l190 = 0; l190 < 2; l190 = l190 + 1) {
			dsp->fVec73[l190] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l191;
		for (l191 = 0; l191 < 2; l191 = l191 + 1) {
			dsp->fRec120[l191] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l192;
		for (l192 = 0; l192 < 2; l192 = l192 + 1) {
			dsp->fRec3[l192] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l193;
		for (l193 = 0; l193 < 2; l193 = l193 + 1) {
			dsp->fRec0[l193] = 0.0f;
		}
	}
	/* C99 loop */
	{
		int l194;
		for (l194 = 0; l194 < 2; l194 = l194 + 1) {
			dsp->fRec1[l194] = 0.0f;
		}
	}
}

void instanceConstantsmydsp(mydsp* dsp, int sample_rate) {
	dsp->fSampleRate = sample_rate;
	float fConst0 = fminf(1.92e+05f, fmaxf(1.0f, (float)(dsp->fSampleRate)));
	dsp->fConst1 = 6.2831855f / fConst0;
	dsp->fConst2 = 3.1415927f / fConst0;
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
	ui_interface->openVerticalBox(ui_interface->uiInterface, "JPrev");
	ui_interface->declare(ui_interface->uiInterface, 0, "0", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Mix");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider0, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "earlyDiff", &dsp->fHslider0, (FAUSTFLOAT)0.707f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.99f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider4, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "size", &dsp->fHslider4, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.5f, (FAUSTFLOAT)3.0f, (FAUSTFLOAT)0.01f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "3", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider5, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "t60", &dsp->fHslider5, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)6e+01f, (FAUSTFLOAT)0.1f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "4", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider1, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "damp", &dsp->fHslider1, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)0.999f, (FAUSTFLOAT)0.0001f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "1", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "EQ");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "07", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider10, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lowX", &dsp->fHslider10, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.01f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "08", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider9, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "midX", &dsp->fHslider9, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.01f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "09", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider6, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "highX", &dsp->fHslider6, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.01f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "10", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider8, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "lowBand", &dsp->fHslider8, (FAUSTFLOAT)5e+02f, (FAUSTFLOAT)1e+02f, (FAUSTFLOAT)6e+03f, (FAUSTFLOAT)0.1f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "11", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider7, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "highBand", &dsp->fHslider7, (FAUSTFLOAT)2e+03f, (FAUSTFLOAT)1e+03f, (FAUSTFLOAT)1e+04f, (FAUSTFLOAT)0.1f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->declare(ui_interface->uiInterface, 0, "2", "");
	ui_interface->openHorizontalBox(ui_interface->uiInterface, "Mod");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "1", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider2, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "mDepth", &dsp->fHslider2, (FAUSTFLOAT)0.1f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1.0f, (FAUSTFLOAT)0.001f);
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "2", "");
	ui_interface->declare(ui_interface->uiInterface, &dsp->fHslider3, "style", "knob");
	ui_interface->addHorizontalSlider(ui_interface->uiInterface, "mFreq", &dsp->fHslider3, (FAUSTFLOAT)2.0f, (FAUSTFLOAT)0.0f, (FAUSTFLOAT)1e+01f, (FAUSTFLOAT)0.01f);
	ui_interface->closeBox(ui_interface->uiInterface);
	ui_interface->closeBox(ui_interface->uiInterface);
}

void computemydsp(mydsp* dsp, int count, FAUSTFLOAT** RESTRICT inputs, FAUSTFLOAT** RESTRICT outputs) {
	FAUSTFLOAT* output0 = outputs[0];
	FAUSTFLOAT* output1 = outputs[1];
	float fSlow0 = (float)(dsp->fHslider0);
	float fSlow1 = cosf(fSlow0);
	float fSlow2 = (float)(dsp->fHslider1);
	float fSlow3 = 1.0f - fSlow2;
	float fSlow4 = 5e+01f * (float)(dsp->fHslider2);
	float fSlow5 = dsp->fConst1 * (float)(dsp->fHslider3);
	float fSlow6 = sinf(fSlow5);
	float fSlow7 = cosf(fSlow5);
	float fSlow8 = (float)(dsp->fHslider4);
	float fSlow9 = powf(1e+01f, 0.0f - 0.51f * ((1.25f * fSlow8 + -0.25f) / (float)(dsp->fHslider5)));
	float fSlow10 = (float)(dsp->fHslider6);
	float fSlow11 = tanf(dsp->fConst2 * (float)(dsp->fHslider7));
	float fSlow12 = 1.0f / fSlow11;
	float fSlow13 = (fSlow12 + 0.618034f) / fSlow11 + 1.0f;
	float fSlow14 = 1.0f / fSlow13;
	float fSlow15 = mydsp_faustpower2_f(fSlow11);
	float fSlow16 = 1.0f / fSlow15;
	float fSlow17 = 1.0f / ((fSlow12 + 1.618034f) / fSlow11 + 1.0f);
	float fSlow18 = fSlow12 + 1.0f;
	float fSlow19 = 0.0f - 1.0f / (fSlow11 * fSlow18);
	int iSlow20 = itbl0mydspSIG0[(int)(1e+01f * fSlow8)];
	float fSlow21 = 0.0001f * (float)(iSlow20);
	int iSlow22 = itbl0mydspSIG0[(int)(1.1e+02f * fSlow8)];
	float fSlow23 = 0.0001f * (float)(iSlow22);
	int iSlow24 = itbl0mydspSIG0[(int)(4e+01f * fSlow8)];
	float fSlow25 = 0.0001f * (float)(iSlow24);
	int iSlow26 = itbl0mydspSIG0[(int)(1.4e+02f * fSlow8)];
	float fSlow27 = 0.0001f * (float)(iSlow26);
	int iSlow28 = itbl0mydspSIG0[(int)(7e+01f * fSlow8)];
	float fSlow29 = 0.0001f * (float)(iSlow28);
	int iSlow30 = itbl0mydspSIG0[(int)(1.7e+02f * fSlow8)];
	float fSlow31 = 0.0001f * (float)(iSlow30);
	int iSlow32 = itbl0mydspSIG0[(int)(1e+02f * fSlow8)];
	float fSlow33 = 0.0001f * (float)(iSlow32);
	int iSlow34 = itbl0mydspSIG0[(int)(2e+02f * fSlow8)];
	float fSlow35 = 0.0001f * (float)(iSlow34);
	int iSlow36 = itbl0mydspSIG0[(int)(1.3e+02f * fSlow8)];
	float fSlow37 = 0.0001f * (float)(iSlow36);
	int iSlow38 = itbl0mydspSIG0[(int)(2.3e+02f * fSlow8)];
	float fSlow39 = 0.0001f * (float)(iSlow38);
	int iSlow40 = itbl0mydspSIG0[(int)(54.0f * fSlow8)];
	float fSlow41 = 0.005f * (float)(iSlow40);
	float fSlow42 = 0.0f - fSlow4;
	int iSlow43 = itbl0mydspSIG0[(int)(204.0f * fSlow8)];
	float fSlow44 = 0.005f * (float)(iSlow43);
	int iSlow45 = itbl0mydspSIG0[(int)(125.0f * fSlow8)];
	float fSlow46 = 0.0001f * (float)(iSlow45);
	int iSlow47 = itbl0mydspSIG0[(int)(25.0f * fSlow8)];
	float fSlow48 = 0.0001f * (float)(iSlow47);
	int iSlow49 = itbl0mydspSIG0[(int)(155.0f * fSlow8)];
	float fSlow50 = 0.0001f * (float)(iSlow49);
	int iSlow51 = itbl0mydspSIG0[(int)(55.0f * fSlow8)];
	float fSlow52 = 0.0001f * (float)(iSlow51);
	int iSlow53 = itbl0mydspSIG0[(int)(185.0f * fSlow8)];
	float fSlow54 = 0.0001f * (float)(iSlow53);
	int iSlow55 = itbl0mydspSIG0[(int)(85.0f * fSlow8)];
	float fSlow56 = 0.0001f * (float)(iSlow55);
	int iSlow57 = itbl0mydspSIG0[(int)(215.0f * fSlow8)];
	float fSlow58 = 0.0001f * (float)(iSlow57);
	int iSlow59 = itbl0mydspSIG0[(int)(115.0f * fSlow8)];
	float fSlow60 = 0.0001f * (float)(iSlow59);
	int iSlow61 = itbl0mydspSIG0[(int)(245.0f * fSlow8)];
	float fSlow62 = 0.0001f * (float)(iSlow61);
	int iSlow63 = itbl0mydspSIG0[(int)(145.0f * fSlow8)];
	float fSlow64 = 0.0001f * (float)(iSlow63);
	int iSlow65 = itbl0mydspSIG0[(int)(134.0f * fSlow8)];
	float fSlow66 = 0.005f * (float)(iSlow65);
	float fSlow67 = 1.0f / fSlow18;
	float fSlow68 = 1.0f - fSlow12;
	float fSlow69 = (fSlow12 + -1.618034f) / fSlow11 + 1.0f;
	float fSlow70 = 2.0f * (1.0f - fSlow16);
	float fSlow71 = 0.0f - 2.0f / fSlow15;
	float fSlow72 = (fSlow12 + -0.618034f) / fSlow11 + 1.0f;
	float fSlow73 = tanf(dsp->fConst2 * (float)(dsp->fHslider8));
	float fSlow74 = 1.0f / fSlow73;
	float fSlow75 = 1.0f / ((fSlow74 + 1.618034f) / fSlow73 + 1.0f);
	float fSlow76 = (fSlow74 + -1.618034f) / fSlow73 + 1.0f;
	float fSlow77 = mydsp_faustpower2_f(fSlow73);
	float fSlow78 = 1.0f / fSlow77;
	float fSlow79 = 2.0f * (1.0f - fSlow78);
	float fSlow80 = 1.0f / ((fSlow74 + 0.618034f) / fSlow73 + 1.0f);
	float fSlow81 = (float)(dsp->fHslider9);
	float fSlow82 = 1.0f / ((fSlow74 + 1.618034f) / fSlow73 + 1.0f);
	float fSlow83 = 0.0f - 2.0f / fSlow77;
	float fSlow84 = fSlow74 + 1.0f;
	float fSlow85 = 0.0f - 1.0f / (fSlow73 * fSlow84);
	float fSlow86 = 1.0f / fSlow84;
	float fSlow87 = 1.0f - fSlow74;
	float fSlow88 = 1.0f / (fSlow13 * fSlow73);
	float fSlow89 = (fSlow74 + -1.618034f) / fSlow73 + 1.0f;
	float fSlow90 = (fSlow74 + -0.618034f) / fSlow73 + 1.0f;
	float fSlow91 = (float)(dsp->fHslider10);
	float fSlow92 = sinf(fSlow0);
	int iSlow93 = itbl0mydspSIG0[(int)(34.0f * fSlow8)];
	float fSlow94 = 0.005f * (float)(iSlow93);
	int iSlow95 = itbl0mydspSIG0[(int)(2.4e+02f * fSlow8)];
	float fSlow96 = 0.0001f * (float)(iSlow95);
	int iSlow97 = itbl0mydspSIG0[(int)(1.9e+02f * fSlow8)];
	float fSlow98 = 0.0001f * (float)(iSlow97);
	int iSlow99 = itbl0mydspSIG0[(int)(175.0f * fSlow8)];
	float fSlow100 = 0.0001f * (float)(iSlow99);
	/* C99 loop */
	{
		int i0;
		for (i0 = 0; i0 < count; i0 = i0 + 1) {
			dsp->iVec0[0] = 1;
			dsp->fRec15[0] = fSlow6 * dsp->fRec16[1] + fSlow7 * dsp->fRec15[1];
			int iTemp0 = 1 - dsp->iVec0[1];
			dsp->fRec16[0] = (float)(iTemp0) + fSlow7 * dsp->fRec16[1] - fSlow6 * dsp->fRec15[1];
			float fTemp1 = fSlow4 * (dsp->fRec15[0] + 1.0f);
			float fTemp2 = fTemp1 + 3.500005f;
			float fTemp3 = floorf(fTemp2);
			float fTemp4 = fTemp1 + (4.0f - fTemp3);
			float fTemp5 = 0.0f - fTemp4;
			float fTemp6 = fTemp1 + (3.0f - fTemp3);
			float fTemp7 = 0.0f - 0.5f * fTemp6;
			float fTemp8 = fTemp1 + (2.0f - fTemp3);
			float fTemp9 = 0.0f - 0.33333334f * fTemp8;
			float fTemp10 = fTemp1 + (1.0f - fTemp3);
			float fTemp11 = 0.0f - 0.25f * fTemp10;
			float fTemp12 = 0.760314f * dsp->fRec0[1] - 0.64955574f * dsp->fRec50[1];
			float fTemp13 = 0.760314f * dsp->fRec1[1] - 0.64955574f * dsp->fRec51[1];
			dsp->fVec1[dsp->IOTA0 & 16383] = 0.70710677f * fTemp12 - 0.70710677f * fTemp13;
			dsp->fRec53[0] = 0.9999f * (dsp->fRec53[1] + (float)(iTemp0 * iSlow20)) + fSlow21;
			float fTemp14 = dsp->fRec53[0] + -1.49999f;
			float fTemp15 = dsp->fVec1[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp14)))) & 16383];
			dsp->fVec2[0] = fTemp15;
			float fTemp16 = floorf(fTemp14);
			dsp->fRec52[0] = dsp->fVec2[1] - (fTemp16 + (2.0f - dsp->fRec53[0])) * (dsp->fRec52[1] - fTemp15) / (dsp->fRec53[0] - fTemp16);
			dsp->fRec50[0] = dsp->fRec52[0];
			dsp->fVec3[dsp->IOTA0 & 16383] = 0.70710677f * fTemp12 + 0.70710677f * fTemp13;
			dsp->fRec55[0] = 0.9999f * (dsp->fRec55[1] + (float)(iTemp0 * iSlow22)) + fSlow23;
			float fTemp17 = dsp->fRec55[0] + -1.49999f;
			float fTemp18 = dsp->fVec3[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp17)))) & 16383];
			dsp->fVec4[0] = fTemp18;
			float fTemp19 = floorf(fTemp17);
			dsp->fRec54[0] = dsp->fVec4[1] - (fTemp19 + (2.0f - dsp->fRec55[0])) * (dsp->fRec54[1] - fTemp18) / (dsp->fRec55[0] - fTemp19);
			dsp->fRec51[0] = dsp->fRec54[0];
			float fTemp20 = 0.760314f * dsp->fRec50[1] + 0.64955574f * dsp->fRec0[1];
			float fTemp21 = 0.760314f * fTemp20 - 0.64955574f * dsp->fRec47[1];
			float fTemp22 = 0.760314f * dsp->fRec51[1] + 0.64955574f * dsp->fRec1[1];
			float fTemp23 = 0.760314f * fTemp22 - 0.64955574f * dsp->fRec48[1];
			dsp->fVec5[dsp->IOTA0 & 16383] = 0.70710677f * fTemp21 - 0.70710677f * fTemp23;
			dsp->fRec56[0] = 0.9999f * (dsp->fRec56[1] + (float)(iTemp0 * iSlow24)) + fSlow25;
			float fTemp24 = dsp->fRec56[0] + -1.49999f;
			float fTemp25 = dsp->fVec5[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp24)))) & 16383];
			dsp->fVec6[0] = fTemp25;
			float fTemp26 = floorf(fTemp24);
			dsp->fRec49[0] = dsp->fVec6[1] + (fTemp26 + (2.0f - dsp->fRec56[0])) * (fTemp25 - dsp->fRec49[1]) / (dsp->fRec56[0] - fTemp26);
			dsp->fRec47[0] = dsp->fRec49[0];
			dsp->fVec7[dsp->IOTA0 & 16383] = 0.70710677f * fTemp21 + 0.70710677f * fTemp23;
			dsp->fRec58[0] = 0.9999f * (dsp->fRec58[1] + (float)(iTemp0 * iSlow26)) + fSlow27;
			float fTemp27 = dsp->fRec58[0] + -1.49999f;
			float fTemp28 = dsp->fVec7[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp27)))) & 16383];
			dsp->fVec8[0] = fTemp28;
			float fTemp29 = floorf(fTemp27);
			dsp->fRec57[0] = dsp->fVec8[1] - (fTemp29 + (2.0f - dsp->fRec58[0])) * (dsp->fRec57[1] - fTemp28) / (dsp->fRec58[0] - fTemp29);
			dsp->fRec48[0] = dsp->fRec57[0];
			float fTemp30 = 0.760314f * dsp->fRec47[1] + 0.64955574f * fTemp20;
			float fTemp31 = 0.760314f * fTemp30 - 0.64955574f * dsp->fRec44[1];
			float fTemp32 = 0.760314f * dsp->fRec48[1] + 0.64955574f * fTemp22;
			float fTemp33 = 0.760314f * fTemp32 - 0.64955574f * dsp->fRec45[1];
			dsp->fVec9[dsp->IOTA0 & 16383] = 0.70710677f * fTemp31 - 0.70710677f * fTemp33;
			dsp->fRec59[0] = 0.9999f * (dsp->fRec59[1] + (float)(iTemp0 * iSlow28)) + fSlow29;
			float fTemp34 = dsp->fRec59[0] + -1.49999f;
			float fTemp35 = dsp->fVec9[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp34)))) & 16383];
			dsp->fVec10[0] = fTemp35;
			float fTemp36 = floorf(fTemp34);
			dsp->fRec46[0] = dsp->fVec10[1] + (fTemp36 + (2.0f - dsp->fRec59[0])) * (fTemp35 - dsp->fRec46[1]) / (dsp->fRec59[0] - fTemp36);
			dsp->fRec44[0] = dsp->fRec46[0];
			dsp->fVec11[dsp->IOTA0 & 16383] = 0.70710677f * fTemp31 + 0.70710677f * fTemp33;
			dsp->fRec61[0] = 0.9999f * (dsp->fRec61[1] + (float)(iTemp0 * iSlow30)) + fSlow31;
			float fTemp37 = dsp->fRec61[0] + -1.49999f;
			float fTemp38 = dsp->fVec11[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp37)))) & 16383];
			dsp->fVec12[0] = fTemp38;
			float fTemp39 = floorf(fTemp37);
			dsp->fRec60[0] = dsp->fVec12[1] + (fTemp39 + (2.0f - dsp->fRec61[0])) * (fTemp38 - dsp->fRec60[1]) / (dsp->fRec61[0] - fTemp39);
			dsp->fRec45[0] = dsp->fRec60[0];
			float fTemp40 = 0.760314f * dsp->fRec44[1] + 0.64955574f * fTemp30;
			float fTemp41 = 0.760314f * fTemp40 - 0.64955574f * dsp->fRec41[1];
			float fTemp42 = 0.760314f * dsp->fRec45[1] + 0.64955574f * fTemp32;
			float fTemp43 = 0.760314f * fTemp42 - 0.64955574f * dsp->fRec42[1];
			dsp->fVec13[dsp->IOTA0 & 16383] = 0.70710677f * fTemp41 - 0.70710677f * fTemp43;
			dsp->fRec62[0] = 0.9999f * (dsp->fRec62[1] + (float)(iTemp0 * iSlow32)) + fSlow33;
			float fTemp44 = dsp->fRec62[0] + -1.49999f;
			float fTemp45 = dsp->fVec13[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp44)))) & 16383];
			dsp->fVec14[0] = fTemp45;
			float fTemp46 = floorf(fTemp44);
			dsp->fRec43[0] = dsp->fVec14[1] + (fTemp46 + (2.0f - dsp->fRec62[0])) * (fTemp45 - dsp->fRec43[1]) / (dsp->fRec62[0] - fTemp46);
			dsp->fRec41[0] = dsp->fRec43[0];
			dsp->fVec15[dsp->IOTA0 & 16383] = 0.70710677f * fTemp41 + 0.70710677f * fTemp43;
			dsp->fRec64[0] = 0.9999f * (dsp->fRec64[1] + (float)(iTemp0 * iSlow34)) + fSlow35;
			float fTemp47 = dsp->fRec64[0] + -1.49999f;
			float fTemp48 = dsp->fVec15[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp47)))) & 16383];
			dsp->fVec16[0] = fTemp48;
			float fTemp49 = floorf(fTemp47);
			dsp->fRec63[0] = dsp->fVec16[1] - (fTemp49 + (2.0f - dsp->fRec64[0])) * (dsp->fRec63[1] - fTemp48) / (dsp->fRec64[0] - fTemp49);
			dsp->fRec42[0] = dsp->fRec63[0];
			float fTemp50 = 0.760314f * dsp->fRec41[1] + 0.64955574f * fTemp40;
			float fTemp51 = 0.760314f * fTemp50 - 0.64955574f * dsp->fRec38[1];
			float fTemp52 = 0.760314f * dsp->fRec42[1] + 0.64955574f * fTemp42;
			float fTemp53 = 0.760314f * fTemp52 - 0.64955574f * dsp->fRec39[1];
			dsp->fVec17[dsp->IOTA0 & 16383] = 0.70710677f * fTemp51 - 0.70710677f * fTemp53;
			dsp->fRec65[0] = 0.9999f * (dsp->fRec65[1] + (float)(iTemp0 * iSlow36)) + fSlow37;
			float fTemp54 = dsp->fRec65[0] + -1.49999f;
			float fTemp55 = dsp->fVec17[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp54)))) & 16383];
			dsp->fVec18[0] = fTemp55;
			float fTemp56 = floorf(fTemp54);
			dsp->fRec40[0] = dsp->fVec18[1] - (fTemp56 + (2.0f - dsp->fRec65[0])) * (dsp->fRec40[1] - fTemp55) / (dsp->fRec65[0] - fTemp56);
			dsp->fRec38[0] = dsp->fRec40[0];
			dsp->fVec19[dsp->IOTA0 & 16383] = 0.70710677f * fTemp51 + 0.70710677f * fTemp53;
			dsp->fRec67[0] = 0.9999f * (dsp->fRec67[1] + (float)(iTemp0 * iSlow38)) + fSlow39;
			float fTemp57 = dsp->fRec67[0] + -1.49999f;
			float fTemp58 = dsp->fVec19[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp57)))) & 16383];
			dsp->fVec20[0] = fTemp58;
			float fTemp59 = floorf(fTemp57);
			dsp->fRec66[0] = dsp->fVec20[1] - (fTemp59 + (2.0f - dsp->fRec67[0])) * (dsp->fRec66[1] - fTemp58) / (dsp->fRec67[0] - fTemp59);
			dsp->fRec39[0] = dsp->fRec66[0];
			float fTemp60 = 0.760314f * dsp->fRec38[1] + 0.64955574f * fTemp50;
			dsp->fVec21[dsp->IOTA0 & 1023] = fTemp60;
			float fTemp61 = fSlow4 * (dsp->fRec16[0] + 1.0f);
			float fTemp62 = fTemp61 + 3.500005f;
			int iTemp63 = (int)(fTemp62);
			int iTemp64 = min(512, max(0, iTemp63));
			float fTemp65 = floorf(fTemp62);
			float fTemp66 = fTemp61 + (4.0f - fTemp65);
			float fTemp67 = 0.0f - fTemp66;
			float fTemp68 = fTemp61 + (3.0f - fTemp65);
			float fTemp69 = 0.0f - 0.5f * fTemp68;
			float fTemp70 = fTemp61 + (2.0f - fTemp65);
			float fTemp71 = 0.0f - 0.33333334f * fTemp70;
			float fTemp72 = fTemp61 + (1.0f - fTemp65);
			float fTemp73 = 0.0f - 0.25f * fTemp72;
			float fTemp74 = fTemp61 + (5.0f - fTemp65);
			int iTemp75 = min(512, max(0, iTemp63 + 1));
			float fTemp76 = 0.0f - fTemp68;
			float fTemp77 = 0.0f - 0.5f * fTemp70;
			float fTemp78 = 0.0f - 0.33333334f * fTemp72;
			int iTemp79 = min(512, max(0, iTemp63 + 2));
			float fTemp80 = 0.0f - fTemp70;
			float fTemp81 = 0.0f - 0.5f * fTemp72;
			float fTemp82 = fTemp66 * fTemp68;
			int iTemp83 = min(512, max(0, iTemp63 + 3));
			float fTemp84 = 0.0f - fTemp72;
			float fTemp85 = fTemp82 * fTemp70;
			int iTemp86 = min(512, max(0, iTemp63 + 4));
			dsp->fVec22[dsp->IOTA0 & 16383] = dsp->fVec21[(dsp->IOTA0 - iTemp64) & 1023] * fTemp67 * fTemp69 * fTemp71 * fTemp73 + fTemp74 * (dsp->fVec21[(dsp->IOTA0 - iTemp75) & 1023] * fTemp76 * fTemp77 * fTemp78 + 0.5f * fTemp66 * dsp->fVec21[(dsp->IOTA0 - iTemp79) & 1023] * fTemp80 * fTemp81 + 0.16666667f * fTemp82 * dsp->fVec21[(dsp->IOTA0 - iTemp83) & 1023] * fTemp84 + 0.041666668f * fTemp85 * dsp->fVec21[(dsp->IOTA0 - iTemp86) & 1023]);
			dsp->fRec68[0] = 0.995f * (dsp->fRec68[1] + (float)(iTemp0 * iSlow40)) + fSlow41;
			float fTemp87 = dsp->fRec68[0] + -1.49999f;
			float fTemp88 = dsp->fVec22[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp87)))) & 16383];
			dsp->fVec23[0] = fTemp88;
			float fTemp89 = floorf(fTemp87);
			dsp->fRec37[0] = dsp->fVec23[1] + (fTemp89 + (2.0f - dsp->fRec68[0])) * (fTemp88 - dsp->fRec37[1]) / (dsp->fRec68[0] - fTemp89);
			float fTemp90 = 0.760314f * dsp->fRec37[0] - 0.64955574f * dsp->fRec34[1];
			float fTemp91 = 0.760314f * dsp->fRec39[1] + 0.64955574f * fTemp52;
			dsp->fVec24[dsp->IOTA0 & 1023] = fTemp91;
			float fTemp92 = fSlow42 * dsp->fRec16[0];
			float fTemp93 = fSlow4 + fTemp92 + 3.500005f;
			int iTemp94 = (int)(fTemp93);
			float fTemp95 = floorf(fTemp93);
			float fTemp96 = fSlow4 + fTemp92 + (4.0f - fTemp95);
			float fTemp97 = fSlow4 + fTemp92 + (3.0f - fTemp95);
			float fTemp98 = fSlow4 + fTemp92 + (2.0f - fTemp95);
			float fTemp99 = fSlow4 + fTemp92 + (1.0f - fTemp95);
			float fTemp100 = fTemp96 * fTemp97;
			dsp->fVec25[dsp->IOTA0 & 16383] = dsp->fVec24[(dsp->IOTA0 - min(512, max(0, iTemp94))) & 1023] * (0.0f - fTemp96) * (0.0f - 0.5f * fTemp97) * (0.0f - 0.33333334f * fTemp98) * (0.0f - 0.25f * fTemp99) + (fSlow4 + fTemp92 + (5.0f - fTemp95)) * (dsp->fVec24[(dsp->IOTA0 - min(512, max(0, iTemp94 + 1))) & 1023] * (0.0f - fTemp97) * (0.0f - 0.5f * fTemp98) * (0.0f - 0.33333334f * fTemp99) + 0.5f * fTemp96 * dsp->fVec24[(dsp->IOTA0 - min(512, max(0, iTemp94 + 2))) & 1023] * (0.0f - fTemp98) * (0.0f - 0.5f * fTemp99) + 0.16666667f * fTemp100 * dsp->fVec24[(dsp->IOTA0 - min(512, max(0, iTemp94 + 3))) & 1023] * (0.0f - fTemp99) + 0.041666668f * fTemp100 * fTemp98 * dsp->fVec24[(dsp->IOTA0 - min(512, max(0, iTemp94 + 4))) & 1023]);
			dsp->fRec70[0] = 0.995f * (dsp->fRec70[1] + (float)(iTemp0 * iSlow43)) + fSlow44;
			float fTemp101 = dsp->fRec70[0] + -1.49999f;
			float fTemp102 = dsp->fVec25[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp101)))) & 16383];
			dsp->fVec26[0] = fTemp102;
			float fTemp103 = floorf(fTemp101);
			dsp->fRec69[0] = dsp->fVec26[1] + (fTemp103 + (2.0f - dsp->fRec70[0])) * (fTemp102 - dsp->fRec69[1]) / (dsp->fRec70[0] - fTemp103);
			float fTemp104 = 0.760314f * dsp->fRec69[0] - 0.64955574f * dsp->fRec35[1];
			dsp->fVec27[dsp->IOTA0 & 16383] = 0.70710677f * fTemp90 - 0.70710677f * fTemp104;
			dsp->fRec71[0] = 0.9999f * (dsp->fRec71[1] + (float)(iTemp0 * iSlow45)) + fSlow46;
			float fTemp105 = dsp->fRec71[0] + -1.49999f;
			float fTemp106 = dsp->fVec27[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp105)))) & 16383];
			dsp->fVec28[0] = fTemp106;
			float fTemp107 = floorf(fTemp105);
			dsp->fRec36[0] = dsp->fVec28[1] + (fTemp107 + (2.0f - dsp->fRec71[0])) * (fTemp106 - dsp->fRec36[1]) / (dsp->fRec71[0] - fTemp107);
			dsp->fRec34[0] = dsp->fRec36[0];
			dsp->fVec29[dsp->IOTA0 & 16383] = 0.70710677f * fTemp90 + 0.70710677f * fTemp104;
			dsp->fRec73[0] = 0.9999f * (dsp->fRec73[1] + (float)(iTemp0 * iSlow47)) + fSlow48;
			float fTemp108 = dsp->fRec73[0] + -1.49999f;
			float fTemp109 = dsp->fVec29[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp108)))) & 16383];
			dsp->fVec30[0] = fTemp109;
			float fTemp110 = floorf(fTemp108);
			dsp->fRec72[0] = dsp->fVec30[1] - (fTemp110 + (2.0f - dsp->fRec73[0])) * (dsp->fRec72[1] - fTemp109) / (dsp->fRec73[0] - fTemp110);
			dsp->fRec35[0] = dsp->fRec72[0];
			float fTemp111 = 0.760314f * dsp->fRec34[1] + 0.64955574f * dsp->fRec37[0];
			float fTemp112 = 0.760314f * fTemp111 - 0.64955574f * dsp->fRec31[1];
			float fTemp113 = 0.760314f * dsp->fRec35[1] + 0.64955574f * dsp->fRec69[0];
			float fTemp114 = 0.760314f * fTemp113 - 0.64955574f * dsp->fRec32[1];
			dsp->fVec31[dsp->IOTA0 & 16383] = 0.70710677f * fTemp112 - 0.70710677f * fTemp114;
			dsp->fRec74[0] = 0.9999f * (dsp->fRec74[1] + (float)(iTemp0 * iSlow49)) + fSlow50;
			float fTemp115 = dsp->fRec74[0] + -1.49999f;
			float fTemp116 = dsp->fVec31[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp115)))) & 16383];
			dsp->fVec32[0] = fTemp116;
			float fTemp117 = floorf(fTemp115);
			dsp->fRec33[0] = dsp->fVec32[1] + (fTemp117 + (2.0f - dsp->fRec74[0])) * (fTemp116 - dsp->fRec33[1]) / (dsp->fRec74[0] - fTemp117);
			dsp->fRec31[0] = dsp->fRec33[0];
			dsp->fVec33[dsp->IOTA0 & 16383] = 0.70710677f * fTemp112 + 0.70710677f * fTemp114;
			dsp->fRec76[0] = 0.9999f * (dsp->fRec76[1] + (float)(iTemp0 * iSlow51)) + fSlow52;
			float fTemp118 = dsp->fRec76[0] + -1.49999f;
			int iTemp119 = min(8192, max(0, (int)(fTemp118)));
			float fTemp120 = dsp->fVec33[(dsp->IOTA0 - iTemp119) & 16383];
			dsp->fVec34[0] = fTemp120;
			float fTemp121 = floorf(fTemp118);
			float fTemp122 = fTemp121 + (2.0f - dsp->fRec76[0]);
			float fTemp123 = dsp->fRec76[0] - fTemp121;
			dsp->fRec75[0] = dsp->fVec34[1] + fTemp122 * (fTemp120 - dsp->fRec75[1]) / fTemp123;
			dsp->fRec32[0] = dsp->fRec75[0];
			float fTemp124 = 0.760314f * dsp->fRec31[1] + 0.64955574f * fTemp111;
			float fTemp125 = 0.760314f * fTemp124 - 0.64955574f * dsp->fRec28[1];
			float fTemp126 = 0.760314f * dsp->fRec32[1] + 0.64955574f * fTemp113;
			float fTemp127 = 0.760314f * fTemp126 - 0.64955574f * dsp->fRec29[1];
			dsp->fVec35[dsp->IOTA0 & 16383] = 0.70710677f * fTemp125 - 0.70710677f * fTemp127;
			dsp->fRec77[0] = 0.9999f * (dsp->fRec77[1] + (float)(iTemp0 * iSlow53)) + fSlow54;
			float fTemp128 = dsp->fRec77[0] + -1.49999f;
			float fTemp129 = dsp->fVec35[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp128)))) & 16383];
			dsp->fVec36[0] = fTemp129;
			float fTemp130 = floorf(fTemp128);
			dsp->fRec30[0] = dsp->fVec36[1] + (fTemp130 + (2.0f - dsp->fRec77[0])) * (fTemp129 - dsp->fRec30[1]) / (dsp->fRec77[0] - fTemp130);
			dsp->fRec28[0] = dsp->fRec30[0];
			dsp->fVec37[dsp->IOTA0 & 16383] = 0.70710677f * fTemp125 + 0.70710677f * fTemp127;
			dsp->fRec79[0] = 0.9999f * (dsp->fRec79[1] + (float)(iTemp0 * iSlow55)) + fSlow56;
			float fTemp131 = dsp->fRec79[0] + -1.49999f;
			int iTemp132 = min(8192, max(0, (int)(fTemp131)));
			float fTemp133 = dsp->fVec37[(dsp->IOTA0 - iTemp132) & 16383];
			dsp->fVec38[0] = fTemp133;
			float fTemp134 = floorf(fTemp131);
			float fTemp135 = fTemp134 + (2.0f - dsp->fRec79[0]);
			float fTemp136 = dsp->fRec79[0] - fTemp134;
			dsp->fRec78[0] = dsp->fVec38[1] - fTemp135 * (dsp->fRec78[1] - fTemp133) / fTemp136;
			dsp->fRec29[0] = dsp->fRec78[0];
			float fTemp137 = 0.760314f * dsp->fRec28[1] + 0.64955574f * fTemp124;
			float fTemp138 = 0.760314f * fTemp137 - 0.64955574f * dsp->fRec25[1];
			float fTemp139 = 0.760314f * dsp->fRec29[1] + 0.64955574f * fTemp126;
			float fTemp140 = 0.760314f * fTemp139 - 0.64955574f * dsp->fRec26[1];
			dsp->fVec39[dsp->IOTA0 & 16383] = 0.70710677f * fTemp138 - 0.70710677f * fTemp140;
			dsp->fRec80[0] = 0.9999f * (dsp->fRec80[1] + (float)(iTemp0 * iSlow57)) + fSlow58;
			float fTemp141 = dsp->fRec80[0] + -1.49999f;
			int iTemp142 = min(8192, max(0, (int)(fTemp141)));
			float fTemp143 = dsp->fVec39[(dsp->IOTA0 - iTemp142) & 16383];
			dsp->fVec40[0] = fTemp143;
			float fTemp144 = floorf(fTemp141);
			float fTemp145 = fTemp144 + (2.0f - dsp->fRec80[0]);
			float fTemp146 = dsp->fRec80[0] - fTemp144;
			dsp->fRec27[0] = dsp->fVec40[1] + fTemp145 * (fTemp143 - dsp->fRec27[1]) / fTemp146;
			dsp->fRec25[0] = dsp->fRec27[0];
			dsp->fVec41[dsp->IOTA0 & 16383] = 0.70710677f * fTemp138 + 0.70710677f * fTemp140;
			dsp->fRec82[0] = 0.9999f * (dsp->fRec82[1] + (float)(iTemp0 * iSlow59)) + fSlow60;
			float fTemp147 = dsp->fRec82[0] + -1.49999f;
			int iTemp148 = min(8192, max(0, (int)(fTemp147)));
			float fTemp149 = dsp->fVec41[(dsp->IOTA0 - iTemp148) & 16383];
			dsp->fVec42[0] = fTemp149;
			float fTemp150 = floorf(fTemp147);
			float fTemp151 = fTemp150 + (2.0f - dsp->fRec82[0]);
			float fTemp152 = dsp->fRec82[0] - fTemp150;
			dsp->fRec81[0] = dsp->fVec42[1] - fTemp151 * (dsp->fRec81[1] - fTemp149) / fTemp152;
			dsp->fRec26[0] = dsp->fRec81[0];
			float fTemp153 = 0.760314f * dsp->fRec25[1] + 0.64955574f * fTemp137;
			float fTemp154 = 0.760314f * fTemp153 - 0.64955574f * dsp->fRec22[1];
			float fTemp155 = 0.760314f * dsp->fRec26[1] + 0.64955574f * fTemp139;
			float fTemp156 = 0.760314f * fTemp155 - 0.64955574f * dsp->fRec23[1];
			dsp->fVec43[dsp->IOTA0 & 16383] = 0.70710677f * fTemp154 - 0.70710677f * fTemp156;
			dsp->fRec83[0] = 0.9999f * (dsp->fRec83[1] + (float)(iTemp0 * iSlow61)) + fSlow62;
			float fTemp157 = dsp->fRec83[0] + -1.49999f;
			float fTemp158 = dsp->fVec43[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp157)))) & 16383];
			dsp->fVec44[0] = fTemp158;
			float fTemp159 = floorf(fTemp157);
			dsp->fRec24[0] = dsp->fVec44[1] + (fTemp159 + (2.0f - dsp->fRec83[0])) * (fTemp158 - dsp->fRec24[1]) / (dsp->fRec83[0] - fTemp159);
			dsp->fRec22[0] = dsp->fRec24[0];
			dsp->fVec45[dsp->IOTA0 & 16383] = 0.70710677f * fTemp154 + 0.70710677f * fTemp156;
			dsp->fRec85[0] = 0.9999f * (dsp->fRec85[1] + (float)(iTemp0 * iSlow63)) + fSlow64;
			float fTemp160 = dsp->fRec85[0] + -1.49999f;
			int iTemp161 = min(8192, max(0, (int)(fTemp160)));
			float fTemp162 = dsp->fVec45[(dsp->IOTA0 - iTemp161) & 16383];
			dsp->fVec46[0] = fTemp162;
			float fTemp163 = floorf(fTemp160);
			float fTemp164 = fTemp163 + (2.0f - dsp->fRec85[0]);
			float fTemp165 = dsp->fRec85[0] - fTemp163;
			dsp->fRec84[0] = dsp->fVec46[1] - fTemp164 * (dsp->fRec84[1] - fTemp162) / fTemp165;
			dsp->fRec23[0] = dsp->fRec84[0];
			float fTemp166 = 0.760314f * dsp->fRec22[1] + 0.64955574f * fTemp153;
			dsp->fVec47[dsp->IOTA0 & 16383] = fTemp166;
			int iTemp167 = (int)(fTemp2);
			int iTemp168 = max(0, iTemp167);
			float fTemp169 = fTemp1 + (5.0f - fTemp3);
			int iTemp170 = max(0, iTemp167 + 1);
			float fTemp171 = 0.0f - fTemp6;
			float fTemp172 = 0.0f - 0.5f * fTemp8;
			float fTemp173 = 0.0f - 0.33333334f * fTemp10;
			int iTemp174 = max(0, iTemp167 + 2);
			float fTemp175 = 0.0f - fTemp8;
			float fTemp176 = 0.0f - 0.5f * fTemp10;
			float fTemp177 = fTemp4 * fTemp6;
			int iTemp178 = max(0, iTemp167 + 3);
			float fTemp179 = 0.0f - fTemp10;
			float fTemp180 = fTemp177 * fTemp8;
			int iTemp181 = max(0, iTemp167 + 4);
			dsp->fVec48[dsp->IOTA0 & 16383] = dsp->fVec47[(dsp->IOTA0 - min(8192, iTemp168)) & 16383] * fTemp5 * fTemp7 * fTemp9 * fTemp11 + fTemp169 * (dsp->fVec47[(dsp->IOTA0 - min(8192, iTemp170)) & 16383] * fTemp171 * fTemp172 * fTemp173 + 0.5f * fTemp4 * dsp->fVec47[(dsp->IOTA0 - min(8192, iTemp174)) & 16383] * fTemp175 * fTemp176 + 0.16666667f * fTemp177 * dsp->fVec47[(dsp->IOTA0 - min(8192, iTemp178)) & 16383] * fTemp179 + 0.041666668f * fTemp180 * dsp->fVec47[(dsp->IOTA0 - min(8192, iTemp181)) & 16383]);
			dsp->fRec86[0] = 0.995f * (dsp->fRec86[1] + (float)(iTemp0 * iSlow65)) + fSlow66;
			float fTemp182 = dsp->fRec86[0] + -1.49999f;
			float fTemp183 = dsp->fVec48[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp182)))) & 16383];
			dsp->fVec49[0] = fTemp183;
			float fTemp184 = floorf(fTemp182);
			dsp->fRec21[0] = dsp->fVec49[1] + (fTemp184 + (2.0f - dsp->fRec86[0])) * (fTemp183 - dsp->fRec21[1]) / (dsp->fRec86[0] - fTemp184);
			dsp->fRec20[0] = fSlow19 * dsp->fRec21[1] + fSlow67 * (fSlow12 * dsp->fRec21[0] - fSlow68 * dsp->fRec20[1]);
			dsp->fRec19[0] = dsp->fRec20[0] - fSlow17 * (fSlow69 * dsp->fRec19[2] + fSlow70 * dsp->fRec19[1]);
			dsp->fRec18[0] = fSlow17 * (fSlow16 * dsp->fRec19[0] + fSlow71 * dsp->fRec19[1] + fSlow16 * dsp->fRec19[2]) - fSlow14 * (fSlow72 * dsp->fRec18[2] + fSlow70 * dsp->fRec18[1]);
			float fTemp185 = fSlow79 * dsp->fRec17[1];
			dsp->fRec17[0] = fSlow14 * (fSlow16 * dsp->fRec18[0] + fSlow71 * dsp->fRec18[1] + fSlow16 * dsp->fRec18[2]) - fSlow75 * (fSlow76 * dsp->fRec17[2] + fTemp185);
			dsp->fRec92[0] = 0.0f - fSlow67 * (fSlow68 * dsp->fRec92[1] - (dsp->fRec21[0] + dsp->fRec21[1]));
			dsp->fRec91[0] = dsp->fRec92[0] - fSlow17 * (fSlow69 * dsp->fRec91[2] + fSlow70 * dsp->fRec91[1]);
			dsp->fRec90[0] = fSlow17 * (dsp->fRec91[2] + dsp->fRec91[0] + 2.0f * dsp->fRec91[1]) - fSlow14 * (fSlow72 * dsp->fRec90[2] + fSlow70 * dsp->fRec90[1]);
			float fTemp186 = dsp->fRec90[2] + dsp->fRec90[0] + 2.0f * dsp->fRec90[1];
			float fTemp187 = fSlow14 * fTemp186;
			dsp->fVec50[0] = fTemp187;
			dsp->fRec89[0] = fSlow85 * dsp->fVec50[1] - fSlow86 * (fSlow87 * dsp->fRec89[1] - fSlow88 * fTemp186);
			dsp->fRec88[0] = dsp->fRec89[0] - fSlow82 * (fSlow89 * dsp->fRec88[2] + fSlow79 * dsp->fRec88[1]);
			dsp->fRec87[0] = fSlow82 * (fSlow83 * dsp->fRec88[1] + fSlow78 * dsp->fRec88[0] + fSlow78 * dsp->fRec88[2]) - fSlow80 * (fSlow90 * dsp->fRec87[2] + fSlow79 * dsp->fRec87[1]);
			dsp->fRec95[0] = 0.0f - fSlow86 * (fSlow87 * dsp->fRec95[1] - (fTemp187 + dsp->fVec50[1]));
			dsp->fRec94[0] = dsp->fRec95[0] - fSlow82 * (fSlow89 * dsp->fRec94[2] + fSlow79 * dsp->fRec94[1]);
			dsp->fRec93[0] = fSlow82 * (dsp->fRec94[2] + dsp->fRec94[0] + 2.0f * dsp->fRec94[1]) - fSlow80 * (fSlow90 * dsp->fRec93[2] + fSlow79 * dsp->fRec93[1]);
			float fTemp188 = ((iTemp0) ? 0.0f : dsp->fConst4 + dsp->fRec96[1]);
			dsp->fRec96[0] = fTemp188 - floorf(fTemp188);
			float fTemp189 = mydsp_faustpower2_f(2.0f * dsp->fRec96[0] + -1.0f);
			dsp->fVec51[0] = fTemp189;
			float fTemp190 = ((iTemp0) ? 0.0f : dsp->fConst5 + dsp->fRec97[1]);
			dsp->fRec97[0] = fTemp190 - floorf(fTemp190);
			float fTemp191 = dsp->fConst3 * (float)(dsp->iVec0[1]) * (fTemp189 - dsp->fVec51[1]) * (((2.0f * (float)(dsp->fRec97[0] <= 0.1f) + -1.0f) == 1.0f) ? 0.5f : 0.0f);
			float fTemp192 = fSlow9 * (fSlow10 * (dsp->fRec17[2] + fSlow75 * (fTemp185 + fSlow76 * dsp->fRec17[0])) + fSlow80 * (fSlow81 * (fSlow78 * dsp->fRec87[0] + fSlow83 * dsp->fRec87[1] + fSlow78 * dsp->fRec87[2]) + fSlow91 * (dsp->fRec93[2] + dsp->fRec93[0] + 2.0f * dsp->fRec93[1]))) + fTemp191;
			dsp->fVec52[dsp->IOTA0 & 1023] = fTemp192;
			dsp->fRec14[0] = fSlow3 * (fTemp5 * fTemp7 * fTemp9 * fTemp11 * dsp->fVec52[(dsp->IOTA0 - min(512, iTemp168)) & 1023] + fTemp169 * (fTemp171 * fTemp172 * fTemp173 * dsp->fVec52[(dsp->IOTA0 - min(512, iTemp170)) & 1023] + 0.5f * fTemp4 * fTemp175 * fTemp176 * dsp->fVec52[(dsp->IOTA0 - min(512, iTemp174)) & 1023] + 0.16666667f * fTemp177 * fTemp179 * dsp->fVec52[(dsp->IOTA0 - min(512, iTemp178)) & 1023] + 0.041666668f * fTemp180 * dsp->fVec52[(dsp->IOTA0 - min(512, iTemp181)) & 1023])) + fSlow2 * dsp->fRec14[1];
			float fTemp193 = fSlow1 * dsp->fRec14[0] - fSlow92 * dsp->fRec11[1];
			float fTemp194 = 0.760314f * dsp->fRec23[1] + 0.64955574f * fTemp155;
			dsp->fVec53[dsp->IOTA0 & 16383] = fTemp194;
			float fTemp195 = fSlow42 * dsp->fRec15[0];
			float fTemp196 = fSlow4 + fTemp195 + 3.500005f;
			int iTemp197 = (int)(fTemp196);
			float fTemp198 = floorf(fTemp196);
			float fTemp199 = fSlow4 + fTemp195 + (4.0f - fTemp198);
			float fTemp200 = fSlow4 + fTemp195 + (3.0f - fTemp198);
			float fTemp201 = fSlow4 + fTemp195 + (2.0f - fTemp198);
			float fTemp202 = fSlow4 + fTemp195 + (1.0f - fTemp198);
			float fTemp203 = fTemp199 * fTemp200;
			dsp->fVec54[dsp->IOTA0 & 16383] = dsp->fVec53[(dsp->IOTA0 - min(8192, max(0, iTemp197))) & 16383] * (0.0f - fTemp199) * (0.0f - 0.5f * fTemp200) * (0.0f - 0.33333334f * fTemp201) * (0.0f - 0.25f * fTemp202) + (fSlow4 + fTemp195 + (5.0f - fTemp198)) * (dsp->fVec53[(dsp->IOTA0 - min(8192, max(0, iTemp197 + 1))) & 16383] * (0.0f - fTemp200) * (0.0f - 0.5f * fTemp201) * (0.0f - 0.33333334f * fTemp202) + 0.5f * fTemp199 * dsp->fVec53[(dsp->IOTA0 - min(8192, max(0, iTemp197 + 2))) & 16383] * (0.0f - fTemp201) * (0.0f - 0.5f * fTemp202) + 0.16666667f * fTemp203 * dsp->fVec53[(dsp->IOTA0 - min(8192, max(0, iTemp197 + 3))) & 16383] * (0.0f - fTemp202) + 0.041666668f * fTemp203 * fTemp201 * dsp->fVec53[(dsp->IOTA0 - min(8192, max(0, iTemp197 + 4))) & 16383]);
			dsp->fRec104[0] = 0.995f * (dsp->fRec104[1] + (float)(iTemp0 * iSlow93)) + fSlow94;
			float fTemp204 = dsp->fRec104[0] + -1.49999f;
			float fTemp205 = dsp->fVec54[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp204)))) & 16383];
			dsp->fVec55[0] = fTemp205;
			float fTemp206 = floorf(fTemp204);
			dsp->fRec103[0] = dsp->fVec55[1] - (fTemp206 + (2.0f - dsp->fRec104[0])) * (dsp->fRec103[1] - fTemp205) / (dsp->fRec104[0] - fTemp206);
			dsp->fRec102[0] = fSlow19 * dsp->fRec103[1] - fSlow67 * (fSlow68 * dsp->fRec102[1] - fSlow12 * dsp->fRec103[0]);
			dsp->fRec101[0] = dsp->fRec102[0] - fSlow17 * (fSlow69 * dsp->fRec101[2] + fSlow70 * dsp->fRec101[1]);
			dsp->fRec100[0] = fSlow17 * (fSlow16 * dsp->fRec101[0] + fSlow71 * dsp->fRec101[1] + fSlow16 * dsp->fRec101[2]) - fSlow14 * (fSlow72 * dsp->fRec100[2] + fSlow70 * dsp->fRec100[1]);
			float fTemp207 = fSlow79 * dsp->fRec99[1];
			dsp->fRec99[0] = fSlow14 * (fSlow16 * dsp->fRec100[0] + fSlow71 * dsp->fRec100[1] + fSlow16 * dsp->fRec100[2]) - fSlow75 * (fSlow76 * dsp->fRec99[2] + fTemp207);
			dsp->fRec110[0] = fSlow67 * (dsp->fRec103[0] + dsp->fRec103[1] - fSlow68 * dsp->fRec110[1]);
			dsp->fRec109[0] = dsp->fRec110[0] - fSlow17 * (fSlow69 * dsp->fRec109[2] + fSlow70 * dsp->fRec109[1]);
			dsp->fRec108[0] = fSlow17 * (dsp->fRec109[2] + dsp->fRec109[0] + 2.0f * dsp->fRec109[1]) - fSlow14 * (fSlow72 * dsp->fRec108[2] + fSlow70 * dsp->fRec108[1]);
			float fTemp208 = dsp->fRec108[2] + dsp->fRec108[0] + 2.0f * dsp->fRec108[1];
			float fTemp209 = fSlow14 * fTemp208;
			dsp->fVec56[0] = fTemp209;
			dsp->fRec107[0] = 0.0f - fSlow86 * (fSlow87 * dsp->fRec107[1] - (fTemp209 + dsp->fVec56[1]));
			dsp->fRec106[0] = dsp->fRec107[0] - fSlow82 * (fSlow89 * dsp->fRec106[2] + fSlow79 * dsp->fRec106[1]);
			dsp->fRec105[0] = fSlow82 * (dsp->fRec106[2] + dsp->fRec106[0] + 2.0f * dsp->fRec106[1]) - fSlow80 * (fSlow90 * dsp->fRec105[2] + fSlow79 * dsp->fRec105[1]);
			dsp->fRec113[0] = fSlow85 * dsp->fVec56[1] + fSlow86 * (fSlow88 * fTemp208 - fSlow87 * dsp->fRec113[1]);
			dsp->fRec112[0] = dsp->fRec113[0] - fSlow82 * (fSlow89 * dsp->fRec112[2] + fSlow79 * dsp->fRec112[1]);
			dsp->fRec111[0] = fSlow82 * (fSlow78 * dsp->fRec112[0] + fSlow83 * dsp->fRec112[1] + fSlow78 * dsp->fRec112[2]) - fSlow80 * (fSlow90 * dsp->fRec111[2] + fSlow79 * dsp->fRec111[1]);
			float fTemp210 = fTemp191 + fSlow9 * (fSlow10 * (dsp->fRec99[2] + fSlow75 * (fTemp207 + fSlow76 * dsp->fRec99[0])) + fSlow80 * (fSlow91 * (dsp->fRec105[2] + dsp->fRec105[0] + 2.0f * dsp->fRec105[1]) + fSlow81 * (fSlow78 * dsp->fRec111[0] + fSlow83 * dsp->fRec111[1] + fSlow78 * dsp->fRec111[2])));
			dsp->fVec57[dsp->IOTA0 & 1023] = fTemp210;
			dsp->fRec98[0] = fSlow3 * (fTemp67 * fTemp69 * fTemp71 * fTemp73 * dsp->fVec57[(dsp->IOTA0 - iTemp64) & 1023] + fTemp74 * (fTemp76 * fTemp77 * fTemp78 * dsp->fVec57[(dsp->IOTA0 - iTemp75) & 1023] + 0.5f * fTemp66 * fTemp80 * fTemp81 * dsp->fVec57[(dsp->IOTA0 - iTemp79) & 1023] + 0.16666667f * fTemp82 * fTemp84 * dsp->fVec57[(dsp->IOTA0 - iTemp83) & 1023] + 0.041666668f * fTemp85 * dsp->fVec57[(dsp->IOTA0 - iTemp86) & 1023])) + fSlow2 * dsp->fRec98[1];
			float fTemp211 = fSlow1 * dsp->fRec98[0] - fSlow92 * dsp->fRec12[1];
			dsp->fVec58[dsp->IOTA0 & 16383] = 0.70710677f * fTemp193 - 0.70710677f * fTemp211;
			float fTemp212 = dsp->fVec58[(dsp->IOTA0 - iTemp119) & 16383];
			dsp->fVec59[0] = fTemp212;
			dsp->fRec13[0] = dsp->fVec59[1] + fTemp122 * (fTemp212 - dsp->fRec13[1]) / fTemp123;
			dsp->fRec11[0] = dsp->fRec13[0];
			dsp->fVec60[dsp->IOTA0 & 16383] = 0.70710677f * fTemp193 + 0.70710677f * fTemp211;
			dsp->fRec115[0] = 0.9999f * (dsp->fRec115[1] + (float)(iTemp0 * iSlow95)) + fSlow96;
			float fTemp213 = dsp->fRec115[0] + -1.49999f;
			float fTemp214 = dsp->fVec60[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp213)))) & 16383];
			dsp->fVec61[0] = fTemp214;
			float fTemp215 = floorf(fTemp213);
			dsp->fRec114[0] = dsp->fVec61[1] - (fTemp215 + (2.0f - dsp->fRec115[0])) * (dsp->fRec114[1] - fTemp214) / (dsp->fRec115[0] - fTemp215);
			dsp->fRec12[0] = dsp->fRec114[0];
			float fTemp216 = fSlow1 * dsp->fRec11[1] + fSlow92 * dsp->fRec14[0];
			float fTemp217 = fSlow1 * fTemp216 - fSlow92 * dsp->fRec8[1];
			float fTemp218 = fSlow1 * dsp->fRec12[1] + fSlow92 * dsp->fRec98[0];
			float fTemp219 = fSlow1 * fTemp218 - fSlow92 * dsp->fRec9[1];
			dsp->fVec62[dsp->IOTA0 & 16383] = 0.70710677f * fTemp217 - 0.70710677f * fTemp219;
			float fTemp220 = dsp->fVec62[(dsp->IOTA0 - iTemp142) & 16383];
			dsp->fVec63[0] = fTemp220;
			dsp->fRec10[0] = dsp->fVec63[1] + fTemp145 * (fTemp220 - dsp->fRec10[1]) / fTemp146;
			dsp->fRec8[0] = dsp->fRec10[0];
			dsp->fVec64[dsp->IOTA0 & 16383] = 0.70710677f * fTemp217 + 0.70710677f * fTemp219;
			float fTemp221 = dsp->fVec64[(dsp->IOTA0 - iTemp132) & 16383];
			dsp->fVec65[0] = fTemp221;
			dsp->fRec116[0] = dsp->fVec65[1] - fTemp135 * (dsp->fRec116[1] - fTemp221) / fTemp136;
			dsp->fRec9[0] = dsp->fRec116[0];
			float fTemp222 = fSlow1 * dsp->fRec8[1] + fSlow92 * fTemp216;
			float fTemp223 = fSlow1 * fTemp222 - fSlow92 * dsp->fRec5[1];
			float fTemp224 = fSlow1 * dsp->fRec9[1] + fSlow92 * fTemp218;
			float fTemp225 = fSlow1 * fTemp224 - fSlow92 * dsp->fRec6[1];
			dsp->fVec66[dsp->IOTA0 & 16383] = 0.70710677f * fTemp223 - 0.70710677f * fTemp225;
			float fTemp226 = dsp->fVec66[(dsp->IOTA0 - iTemp148) & 16383];
			dsp->fVec67[0] = fTemp226;
			dsp->fRec7[0] = dsp->fVec67[1] + fTemp151 * (fTemp226 - dsp->fRec7[1]) / fTemp152;
			dsp->fRec5[0] = dsp->fRec7[0];
			dsp->fVec68[dsp->IOTA0 & 16383] = 0.70710677f * fTemp223 + 0.70710677f * fTemp225;
			dsp->fRec118[0] = 0.9999f * (dsp->fRec118[1] + (float)(iTemp0 * iSlow97)) + fSlow98;
			float fTemp227 = dsp->fRec118[0] + -1.49999f;
			float fTemp228 = dsp->fVec68[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp227)))) & 16383];
			dsp->fVec69[0] = fTemp228;
			float fTemp229 = floorf(fTemp227);
			dsp->fRec117[0] = dsp->fVec69[1] - (fTemp229 + (2.0f - dsp->fRec118[0])) * (dsp->fRec117[1] - fTemp228) / (dsp->fRec118[0] - fTemp229);
			dsp->fRec6[0] = dsp->fRec117[0];
			float fTemp230 = fSlow1 * dsp->fRec5[1] + fSlow92 * fTemp222;
			float fTemp231 = fSlow1 * fTemp230 - fSlow92 * dsp->fRec2[1];
			float fTemp232 = fSlow1 * dsp->fRec6[1] + fSlow92 * fTemp224;
			float fTemp233 = fSlow1 * fTemp232 - fSlow92 * dsp->fRec3[1];
			dsp->fVec70[dsp->IOTA0 & 16383] = 0.70710677f * fTemp231 - 0.70710677f * fTemp233;
			dsp->fRec119[0] = 0.9999f * (dsp->fRec119[1] + (float)(iTemp0 * iSlow99)) + fSlow100;
			float fTemp234 = dsp->fRec119[0] + -1.49999f;
			float fTemp235 = dsp->fVec70[(dsp->IOTA0 - min(8192, max(0, (int)(fTemp234)))) & 16383];
			dsp->fVec71[0] = fTemp235;
			float fTemp236 = floorf(fTemp234);
			dsp->fRec4[0] = dsp->fVec71[1] + (fTemp236 + (2.0f - dsp->fRec119[0])) * (fTemp235 - dsp->fRec4[1]) / (dsp->fRec119[0] - fTemp236);
			dsp->fRec2[0] = dsp->fRec4[0];
			dsp->fVec72[dsp->IOTA0 & 16383] = 0.70710677f * fTemp231 + 0.70710677f * fTemp233;
			float fTemp237 = dsp->fVec72[(dsp->IOTA0 - iTemp161) & 16383];
			dsp->fVec73[0] = fTemp237;
			dsp->fRec120[0] = dsp->fVec73[1] - fTemp164 * (dsp->fRec120[1] - fTemp237) / fTemp165;
			dsp->fRec3[0] = dsp->fRec120[0];
			dsp->fRec0[0] = fSlow1 * dsp->fRec2[1] + fSlow92 * fTemp230;
			dsp->fRec1[0] = fSlow1 * dsp->fRec3[1] + fSlow92 * fTemp232;
			output0[i0] = (FAUSTFLOAT)(dsp->fRec0[0]);
			output1[i0] = (FAUSTFLOAT)(dsp->fRec1[0]);
			dsp->iVec0[1] = dsp->iVec0[0];
			dsp->fRec15[1] = dsp->fRec15[0];
			dsp->fRec16[1] = dsp->fRec16[0];
			dsp->IOTA0 = dsp->IOTA0 + 1;
			dsp->fRec53[1] = dsp->fRec53[0];
			dsp->fVec2[1] = dsp->fVec2[0];
			dsp->fRec52[1] = dsp->fRec52[0];
			dsp->fRec50[1] = dsp->fRec50[0];
			dsp->fRec55[1] = dsp->fRec55[0];
			dsp->fVec4[1] = dsp->fVec4[0];
			dsp->fRec54[1] = dsp->fRec54[0];
			dsp->fRec51[1] = dsp->fRec51[0];
			dsp->fRec56[1] = dsp->fRec56[0];
			dsp->fVec6[1] = dsp->fVec6[0];
			dsp->fRec49[1] = dsp->fRec49[0];
			dsp->fRec47[1] = dsp->fRec47[0];
			dsp->fRec58[1] = dsp->fRec58[0];
			dsp->fVec8[1] = dsp->fVec8[0];
			dsp->fRec57[1] = dsp->fRec57[0];
			dsp->fRec48[1] = dsp->fRec48[0];
			dsp->fRec59[1] = dsp->fRec59[0];
			dsp->fVec10[1] = dsp->fVec10[0];
			dsp->fRec46[1] = dsp->fRec46[0];
			dsp->fRec44[1] = dsp->fRec44[0];
			dsp->fRec61[1] = dsp->fRec61[0];
			dsp->fVec12[1] = dsp->fVec12[0];
			dsp->fRec60[1] = dsp->fRec60[0];
			dsp->fRec45[1] = dsp->fRec45[0];
			dsp->fRec62[1] = dsp->fRec62[0];
			dsp->fVec14[1] = dsp->fVec14[0];
			dsp->fRec43[1] = dsp->fRec43[0];
			dsp->fRec41[1] = dsp->fRec41[0];
			dsp->fRec64[1] = dsp->fRec64[0];
			dsp->fVec16[1] = dsp->fVec16[0];
			dsp->fRec63[1] = dsp->fRec63[0];
			dsp->fRec42[1] = dsp->fRec42[0];
			dsp->fRec65[1] = dsp->fRec65[0];
			dsp->fVec18[1] = dsp->fVec18[0];
			dsp->fRec40[1] = dsp->fRec40[0];
			dsp->fRec38[1] = dsp->fRec38[0];
			dsp->fRec67[1] = dsp->fRec67[0];
			dsp->fVec20[1] = dsp->fVec20[0];
			dsp->fRec66[1] = dsp->fRec66[0];
			dsp->fRec39[1] = dsp->fRec39[0];
			dsp->fRec68[1] = dsp->fRec68[0];
			dsp->fVec23[1] = dsp->fVec23[0];
			dsp->fRec37[1] = dsp->fRec37[0];
			dsp->fRec70[1] = dsp->fRec70[0];
			dsp->fVec26[1] = dsp->fVec26[0];
			dsp->fRec69[1] = dsp->fRec69[0];
			dsp->fRec71[1] = dsp->fRec71[0];
			dsp->fVec28[1] = dsp->fVec28[0];
			dsp->fRec36[1] = dsp->fRec36[0];
			dsp->fRec34[1] = dsp->fRec34[0];
			dsp->fRec73[1] = dsp->fRec73[0];
			dsp->fVec30[1] = dsp->fVec30[0];
			dsp->fRec72[1] = dsp->fRec72[0];
			dsp->fRec35[1] = dsp->fRec35[0];
			dsp->fRec74[1] = dsp->fRec74[0];
			dsp->fVec32[1] = dsp->fVec32[0];
			dsp->fRec33[1] = dsp->fRec33[0];
			dsp->fRec31[1] = dsp->fRec31[0];
			dsp->fRec76[1] = dsp->fRec76[0];
			dsp->fVec34[1] = dsp->fVec34[0];
			dsp->fRec75[1] = dsp->fRec75[0];
			dsp->fRec32[1] = dsp->fRec32[0];
			dsp->fRec77[1] = dsp->fRec77[0];
			dsp->fVec36[1] = dsp->fVec36[0];
			dsp->fRec30[1] = dsp->fRec30[0];
			dsp->fRec28[1] = dsp->fRec28[0];
			dsp->fRec79[1] = dsp->fRec79[0];
			dsp->fVec38[1] = dsp->fVec38[0];
			dsp->fRec78[1] = dsp->fRec78[0];
			dsp->fRec29[1] = dsp->fRec29[0];
			dsp->fRec80[1] = dsp->fRec80[0];
			dsp->fVec40[1] = dsp->fVec40[0];
			dsp->fRec27[1] = dsp->fRec27[0];
			dsp->fRec25[1] = dsp->fRec25[0];
			dsp->fRec82[1] = dsp->fRec82[0];
			dsp->fVec42[1] = dsp->fVec42[0];
			dsp->fRec81[1] = dsp->fRec81[0];
			dsp->fRec26[1] = dsp->fRec26[0];
			dsp->fRec83[1] = dsp->fRec83[0];
			dsp->fVec44[1] = dsp->fVec44[0];
			dsp->fRec24[1] = dsp->fRec24[0];
			dsp->fRec22[1] = dsp->fRec22[0];
			dsp->fRec85[1] = dsp->fRec85[0];
			dsp->fVec46[1] = dsp->fVec46[0];
			dsp->fRec84[1] = dsp->fRec84[0];
			dsp->fRec23[1] = dsp->fRec23[0];
			dsp->fRec86[1] = dsp->fRec86[0];
			dsp->fVec49[1] = dsp->fVec49[0];
			dsp->fRec21[1] = dsp->fRec21[0];
			dsp->fRec20[1] = dsp->fRec20[0];
			dsp->fRec19[2] = dsp->fRec19[1];
			dsp->fRec19[1] = dsp->fRec19[0];
			dsp->fRec18[2] = dsp->fRec18[1];
			dsp->fRec18[1] = dsp->fRec18[0];
			dsp->fRec17[2] = dsp->fRec17[1];
			dsp->fRec17[1] = dsp->fRec17[0];
			dsp->fRec92[1] = dsp->fRec92[0];
			dsp->fRec91[2] = dsp->fRec91[1];
			dsp->fRec91[1] = dsp->fRec91[0];
			dsp->fRec90[2] = dsp->fRec90[1];
			dsp->fRec90[1] = dsp->fRec90[0];
			dsp->fVec50[1] = dsp->fVec50[0];
			dsp->fRec89[1] = dsp->fRec89[0];
			dsp->fRec88[2] = dsp->fRec88[1];
			dsp->fRec88[1] = dsp->fRec88[0];
			dsp->fRec87[2] = dsp->fRec87[1];
			dsp->fRec87[1] = dsp->fRec87[0];
			dsp->fRec95[1] = dsp->fRec95[0];
			dsp->fRec94[2] = dsp->fRec94[1];
			dsp->fRec94[1] = dsp->fRec94[0];
			dsp->fRec93[2] = dsp->fRec93[1];
			dsp->fRec93[1] = dsp->fRec93[0];
			dsp->fRec96[1] = dsp->fRec96[0];
			dsp->fVec51[1] = dsp->fVec51[0];
			dsp->fRec97[1] = dsp->fRec97[0];
			dsp->fRec14[1] = dsp->fRec14[0];
			dsp->fRec104[1] = dsp->fRec104[0];
			dsp->fVec55[1] = dsp->fVec55[0];
			dsp->fRec103[1] = dsp->fRec103[0];
			dsp->fRec102[1] = dsp->fRec102[0];
			dsp->fRec101[2] = dsp->fRec101[1];
			dsp->fRec101[1] = dsp->fRec101[0];
			dsp->fRec100[2] = dsp->fRec100[1];
			dsp->fRec100[1] = dsp->fRec100[0];
			dsp->fRec99[2] = dsp->fRec99[1];
			dsp->fRec99[1] = dsp->fRec99[0];
			dsp->fRec110[1] = dsp->fRec110[0];
			dsp->fRec109[2] = dsp->fRec109[1];
			dsp->fRec109[1] = dsp->fRec109[0];
			dsp->fRec108[2] = dsp->fRec108[1];
			dsp->fRec108[1] = dsp->fRec108[0];
			dsp->fVec56[1] = dsp->fVec56[0];
			dsp->fRec107[1] = dsp->fRec107[0];
			dsp->fRec106[2] = dsp->fRec106[1];
			dsp->fRec106[1] = dsp->fRec106[0];
			dsp->fRec105[2] = dsp->fRec105[1];
			dsp->fRec105[1] = dsp->fRec105[0];
			dsp->fRec113[1] = dsp->fRec113[0];
			dsp->fRec112[2] = dsp->fRec112[1];
			dsp->fRec112[1] = dsp->fRec112[0];
			dsp->fRec111[2] = dsp->fRec111[1];
			dsp->fRec111[1] = dsp->fRec111[0];
			dsp->fRec98[1] = dsp->fRec98[0];
			dsp->fVec59[1] = dsp->fVec59[0];
			dsp->fRec13[1] = dsp->fRec13[0];
			dsp->fRec11[1] = dsp->fRec11[0];
			dsp->fRec115[1] = dsp->fRec115[0];
			dsp->fVec61[1] = dsp->fVec61[0];
			dsp->fRec114[1] = dsp->fRec114[0];
			dsp->fRec12[1] = dsp->fRec12[0];
			dsp->fVec63[1] = dsp->fVec63[0];
			dsp->fRec10[1] = dsp->fRec10[0];
			dsp->fRec8[1] = dsp->fRec8[0];
			dsp->fVec65[1] = dsp->fVec65[0];
			dsp->fRec116[1] = dsp->fRec116[0];
			dsp->fRec9[1] = dsp->fRec9[0];
			dsp->fVec67[1] = dsp->fVec67[0];
			dsp->fRec7[1] = dsp->fRec7[0];
			dsp->fRec5[1] = dsp->fRec5[0];
			dsp->fRec118[1] = dsp->fRec118[0];
			dsp->fVec69[1] = dsp->fVec69[0];
			dsp->fRec117[1] = dsp->fRec117[0];
			dsp->fRec6[1] = dsp->fRec6[0];
			dsp->fRec119[1] = dsp->fRec119[0];
			dsp->fVec71[1] = dsp->fVec71[0];
			dsp->fRec4[1] = dsp->fRec4[0];
			dsp->fRec2[1] = dsp->fRec2[0];
			dsp->fVec73[1] = dsp->fVec73[0];
			dsp->fRec120[1] = dsp->fRec120[0];
			dsp->fRec3[1] = dsp->fRec3[0];
			dsp->fRec0[1] = dsp->fRec0[0];
			dsp->fRec1[1] = dsp->fRec1[0];
		}
	}
}

#ifdef __cplusplus
}
#endif

#endif
