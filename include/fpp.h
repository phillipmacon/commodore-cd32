
extern void fp_init_native(void);
extern void fp_init_softfloat(void);

#if defined(CPU_i386) || defined(CPU_x86_64)
extern void init_fpucw_x87(void);
#endif

void to_single(fpdata *fpd, uae_u32 wrd1);
void to_double(fpdata *fpd, uae_u32 wrd1, uae_u32 wrd2);
void to_exten(fpdata *fpd, uae_u32 wrd1, uae_u32 wrd2, uae_u32 wrd3);

typedef void (*FPP_ABQS)(fpdata*, fpdata*, uae_u64*, uae_u8*);
typedef void (*FPP_AB)(fpdata*, fpdata*);
typedef void (*FPP_A)(fpdata*);

typedef bool (*FPP_IS)(fpdata*);
typedef void (*FPP_SET_MODE)(uae_u32);
typedef void (*FPP_GET_STATUS)(uae_u32*);
typedef void (*FPP_CLEAR_STATUS)(void);

typedef void (*FPP_FROM_NATIVE)(fptype, fpdata*);
typedef void (*FPP_TO_NATIVE)(fptype*, fpdata*);

typedef void (*FPP_FROM_INT)(fpdata*,uae_s32);
typedef uae_s64 (*FPP_TO_INT)(fpdata*, int);

typedef void (*FPP_TO_SINGLE)(fpdata*, uae_u32);
typedef uae_u32 (*FPP_FROM_SINGLE)(fpdata*);

typedef void (*FPP_TO_DOUBLE)(fpdata*, uae_u32, uae_u32);
typedef void (*FPP_FROM_DOUBLE)(fpdata*, uae_u32*, uae_u32*);

typedef void (*FPP_TO_EXTEN)(fpdata*, uae_u32, uae_u32, uae_u32);
typedef void (*FPP_FROM_EXTEN)(fpdata*, uae_u32*, uae_u32*, uae_u32*);

typedef const TCHAR* (*FPP_PRINT)(fpdata*);

extern FPP_PRINT fpp_print;

extern FPP_IS fpp_is_snan;
extern FPP_IS fpp_unset_snan;
extern FPP_IS fpp_is_nan;
extern FPP_IS fpp_is_infinity;
extern FPP_IS fpp_is_zero;
extern FPP_IS fpp_is_neg;
extern FPP_IS fpp_is_denormal;
extern FPP_IS fpp_is_unnormal;

extern FPP_GET_STATUS fpp_get_status;
extern FPP_CLEAR_STATUS fpp_clear_status;
extern FPP_SET_MODE fpp_set_mode;

extern FPP_FROM_NATIVE fpp_from_native;
extern FPP_TO_NATIVE fpp_to_native;

extern FPP_TO_INT fpp_to_int;
extern FPP_FROM_INT fpp_from_int;

extern FPP_TO_SINGLE fpp_to_single_xn;
extern FPP_TO_SINGLE fpp_to_single_x;
extern FPP_FROM_SINGLE fpp_from_single_x;

extern FPP_TO_DOUBLE fpp_to_double_xn;
extern FPP_TO_DOUBLE fpp_to_double_x;
extern FPP_FROM_DOUBLE fpp_from_double_x;

extern FPP_TO_EXTEN fpp_to_exten_x;
extern FPP_FROM_EXTEN fpp_from_exten_x;

extern FPP_A fpp_roundsgl;
extern FPP_A fpp_rounddbl;
extern FPP_A fpp_round32;
extern FPP_A fpp_round64;

extern FPP_AB fpp_int;
extern FPP_AB fpp_sinh;
extern FPP_AB fpp_intrz;
extern FPP_AB fpp_sqrt;
extern FPP_AB fpp_lognp1;
extern FPP_AB fpp_etoxm1;
extern FPP_AB fpp_tanh;
extern FPP_AB fpp_atan;
extern FPP_AB fpp_atanh;
extern FPP_AB fpp_sin;
extern FPP_AB fpp_asin;
extern FPP_AB fpp_tan;
extern FPP_AB fpp_etox;
extern FPP_AB fpp_twotox;
extern FPP_AB fpp_tentox;
extern FPP_AB fpp_logn;
extern FPP_AB fpp_log10;
extern FPP_AB fpp_log2;
extern FPP_AB fpp_abs;
extern FPP_AB fpp_cosh;
extern FPP_AB fpp_neg;
extern FPP_AB fpp_acos;
extern FPP_AB fpp_cos;
extern FPP_AB fpp_getexp;
extern FPP_AB fpp_getman;
extern FPP_AB fpp_div;
extern FPP_ABQS fpp_mod;
extern FPP_AB fpp_add;
extern FPP_AB fpp_mul;
extern FPP_ABQS fpp_rem;
extern FPP_AB fpp_scale;
extern FPP_AB fpp_sub;
