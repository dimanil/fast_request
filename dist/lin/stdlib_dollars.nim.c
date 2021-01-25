/* Generated by Nim Compiler v1.4.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyTuple__UV3llMMYFckfui8YMBuUZA tyTuple__UV3llMMYFckfui8YMBuUZA;
typedef struct tySequence__AjV3cEUgs0Y9c7dCt9aItdIA tySequence__AjV3cEUgs0Y9c7dCt9aItdIA;
typedef struct tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ;
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyTuple__UV3llMMYFckfui8YMBuUZA {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
typedef NU8 tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg;
struct tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ {
tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg k;
union{
struct {NimStringDesc* fText;
} _k_1;
struct {NimStringDesc* fTag;
tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* s;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* fAttr;
} _k_2;
};
NI fClientData;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__AjV3cEUgs0Y9c7dCt9aItdIA {
  TGenericSeq Sup;
  tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__dJtt8Xj30kt9bCQK1n8AO9cw)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__45fPtFhY4FavRaYwDhRfuA)(NimStringDesc** s, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__wlAov2mnCG3enTfRJv6GXA)(tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix);
N_LIB_PRIVATE N_NIMCALL(void, addQuoted__YHOgcRSdUuxfn1ho43k9a5g)(NimStringDesc** s, tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* x);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_2, "@[", 2);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_3, ", ", 2);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_4, "]", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_5, "(", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_6, "url", 3);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_7, ": ", 2);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_8, "filename", 8);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_9, ")", 1);
STRING_LITERAL(TM__n49a9aYp5BrbXv9a6OCpJYm0g_10, "nil", 3);

/* section: NIM_merge_PROCS */
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__dJtt8Xj30kt9bCQK1n8AO9cw)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		NimStringDesc** value;
		NI i;
		NI L;
		NI T2_;
		value = (NimStringDesc**)0;
		i = ((NI) 0);
		T2_ = (x ? x->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				value = (&x->data[i]);
				{
					if (!firstElement) goto LA7_;
					firstElement = NIM_FALSE;
				}
				goto LA5_;
				LA7_: ;
				{
					result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
				}
				LA5_: ;
				addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), (*value));
				i += ((NI) 1);
			} LA4: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___xqL1qTIQGkhdyM4F59c1P9aw)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__dJtt8Xj30kt9bCQK1n8AO9cw(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_2), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_4));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___CEak156rSWAi9aGRVjSuevQ)(tyTuple__UV3llMMYFckfui8YMBuUZA x) {
	NimStringDesc* result;
	NI count;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_5));
	count = ((NI) 0);
	{
		if (!(((NI) 0) < count)) goto LA3_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA3_: ;
	result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_6));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_7));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), x.Field0);
	{
		if (!(((NI) 0) < count)) goto LA7_;
		result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3));
	}
	LA7_: ;
	result = resizeString(result, 8);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_8));
	result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_7));
	count += ((NI) 1);
	addQuoted__45fPtFhY4FavRaYwDhRfuA((&result), x.Field1);
	result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_9));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, collectionToString__wlAov2mnCG3enTfRJv6GXA)(tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* x, NimStringDesc* prefix, NimStringDesc* separator, NimStringDesc* suffix) {
	NimStringDesc* result;
	NIM_BOOL firstElement;
	result = (NimStringDesc*)0;
	result = copyString(prefix);
	firstElement = NIM_TRUE;
	{
		tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ** value;
		NI i;
		NI L;
		NI T2_;
		value = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ**)0;
		i = ((NI) 0);
		T2_ = (x ? x->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i < L)) goto LA4;
				value = &x->data[i];
				{
					if (!firstElement) goto LA7_;
					firstElement = NIM_FALSE;
				}
				goto LA5_;
				LA7_: ;
				{
					result = resizeString(result, (separator ? separator->Sup.len : 0) + 0);
appendString(result, separator);
				}
				LA5_: ;
				{
					if (!((*value) == 0)) goto LA12_;
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_10));
				}
				goto LA10_;
				LA12_: ;
				{
					addQuoted__YHOgcRSdUuxfn1ho43k9a5g((&result), (*value));
				}
				LA10_: ;
				i += ((NI) 1);
			} LA4: ;
		}
	}
	result = resizeString(result, (suffix ? suffix->Sup.len : 0) + 0);
appendString(result, suffix);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___lU9cz5J9cwgrgGYu9creQ7d4A)(tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* x) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = collectionToString__wlAov2mnCG3enTfRJv6GXA(x, ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_2), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_3), ((NimStringDesc*) &TM__n49a9aYp5BrbXv9a6OCpJYm0g_4));
	return result;
}
