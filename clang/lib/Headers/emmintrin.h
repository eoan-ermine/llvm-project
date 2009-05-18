/*===---- xmmintrin.h - SSE intrinsics -------------------------------------===
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 *===-----------------------------------------------------------------------===
 */
 
#ifndef __EMMINTRIN_H
#define __EMMINTRIN_H

#ifndef __SSE2__
#error "SSE2 instruction set not enabled"
#else

#include <xmmintrin.h>

typedef double __m128d __attribute__((__vector_size__(16)));
typedef long long __m128i __attribute__((__vector_size__(16)));

typedef int __v4si __attribute__((__vector_size__(16)));
typedef short __v8hi __attribute__((__vector_size__(16)));
typedef char __v16qi __attribute__((__vector_size__(16)));

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_add_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_addsd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_add_pd(__m128d a, __m128d b)
{
  return a + b;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sub_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_subsd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sub_pd(__m128d a, __m128d b)
{
  return a - b;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_mul_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_mulsd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_mul_pd(__m128d a, __m128d b)
{
  return a * b;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_div_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_divsd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_div_pd(__m128d a, __m128d b)
{
  return a / b;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sqrt_sd(__m128d a, __m128d b)
{
  __m128d c = __builtin_ia32_sqrtsd(b);
  return (__m128d) { c[0], a[1] };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_sqrt_pd(__m128d a)
{
  return __builtin_ia32_sqrtpd(a);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_min_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_minsd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_min_pd(__m128d a, __m128d b)
{
  return __builtin_ia32_minpd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_max_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_maxsd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_max_pd(__m128d a, __m128d b)
{
  return __builtin_ia32_maxpd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_and_pd(__m128d a, __m128d b)
{
  return __builtin_ia32_andpd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_andnot_pd(__m128d a, __m128d b)
{
  return __builtin_ia32_andnpd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_or_pd(__m128d a, __m128d b)
{
  return __builtin_ia32_orpd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_xor_pd(__m128d a, __m128d b)
{
  return __builtin_ia32_xorpd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 0);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmple_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 2);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpge_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 2);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpord_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 7);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpunord_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 3);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpneq_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 4);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnlt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 5);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnle_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(a, b, 6);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpngt_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 5);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnge_pd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmppd(b, a, 6);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 0);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmple_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 2);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpge_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 2);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpord_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 7);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpunord_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 3);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpneq_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 4);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnlt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 5);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnle_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(a, b, 6);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpngt_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 5);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cmpnge_sd(__m128d a, __m128d b)
{
  return (__m128d)__builtin_ia32_cmpsd(b, a, 6);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comieq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdeq(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comilt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdlt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comile_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdle(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comigt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdgt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_comineq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_comisdneq(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomieq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdeq(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomilt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdlt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomile_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdle(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomigt_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdgt(a, b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_ucomineq_sd(__m128d a, __m128d b)
{
  return __builtin_ia32_ucomisdneq(a, b);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpd_ps(__m128d a)
{
  return __builtin_ia32_cvtpd2ps(a);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_pd(__m128 a)
{
  return __builtin_ia32_cvtps2pd(a);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtepi32_pd(__m128i a)
{
  return __builtin_ia32_cvtdq2pd((__v4si)a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtpd_epi32(__m128d a)
{
  return __builtin_ia32_cvtpd2dq(a);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_si32(__m128d a)
{
  return __builtin_ia32_cvtsd2si(a);
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_ss(__m128 a, __m128d b)
{
  return __builtin_ia32_cvtsd2ss(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi32_sd(__m128d a, int b)
{
  return __builtin_ia32_cvtsi2sd(a, b);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtss_sd(__m128d a, __m128 b)
{
  return __builtin_ia32_cvtss2sd(a, b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvttpd_epi32(__m128d a)
{
  return (__m128i)__builtin_ia32_cvttpd2dq(a);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_cvttsd_si32(__m128d a)
{
  return __builtin_ia32_cvttsd2si(a);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvtpd_pi32(__m128d a)
{
  return (__m64)__builtin_ia32_cvtpd2pi(a);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_cvttpd_pi32(__m128d a)
{
  return (__m64)__builtin_ia32_cvttpd2pi(a);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtpi32_pd(__m64 a)
{
  return __builtin_ia32_cvtpi2pd((__v2si)a);
}

static inline double __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_f64(__m128d a)
{
  return a[0];
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_load_pd(double const *dp)
{
  return *(__m128d*)dp;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_load1_pd(double const *dp)
{
  return (__m128d){ dp[0], dp[0] };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadr_pd(double const *dp)
{
  return (__m128d){ dp[1], dp[0] };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadu_pd(double const *dp)
{
  return __builtin_ia32_loadupd(dp);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_load_sd(double const *dp)
{
  return (__m128d){ *dp, 0.0 };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadh_pd(__m128d a, double const *dp)
{
  return __builtin_shufflevector(a, *(__m128d *)dp, 0, 2);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_loadl_pd(__m128d a, double const *dp)
{
  return __builtin_shufflevector(a, *(__m128d *)dp, 2, 1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_set_sd(double w)
{
  return (__m128d){ w, 0 };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_set1_pd(double w)
{
  return (__m128d){ w, w };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_set_pd(double w, double x)
{
  return (__m128d){ w, x };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_setr_pd(double w, double x)
{
  return (__m128d){ x, w };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_setzero_pd(void)
{
  return (__m128d){ 0, 0 };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_move_sd(__m128d a, __m128d b)
{
  return (__m128d){ b[0], a[1] };
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_store_sd(double *dp, __m128d a)
{
  dp[0] = a[0];
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_store1_pd(double *dp, __m128d a)
{
  dp[0] = a[0];
  dp[1] = a[0];
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_store_pd(double *dp, __m128d a)
{
  *(__m128d *)dp = a;
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storeu_pd(double *dp, __m128d a)
{
  __builtin_ia32_storeupd(dp, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storer_pd(double *dp, __m128d a)
{
  dp[0] = a[1];
  dp[1] = a[0];
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storeh_pd(double *dp, __m128d a)
{
  dp[0] = a[1];
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storel_pd(double *dp, __m128d a)
{
  dp[0] = a[0];
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi8(__m128i a, __m128i b)
{
  return (__m128i)((__v16qi)a + (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a + (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi32(__m128i a, __m128i b)
{
  return (__m128i)((__v4si)a + (__v4si)b);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_add_si64(__m64 a, __m64 b)
{
  return a + b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_add_epi64(__m128i a, __m128i b)
{
  return a + b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddsb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddsw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddusb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_adds_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_paddusw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_avg_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pavgb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_avg_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pavgw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_madd_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmaddwd128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_max_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmaxsw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_max_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmaxub128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_min_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pminsw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_min_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pminub128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mulhi_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmulhw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mulhi_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmulhuw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mullo_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pmullw128((__v8hi)a, (__v8hi)b);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_mul_su32(__m64 a, __m64 b)
{
  return __builtin_ia32_pmuludq((__v2si)a, (__v2si)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_mul_epu32(__m128i a, __m128i b)
{
  return __builtin_ia32_pmuludq128((__v4si)a, (__v4si)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sad_epu8(__m128i a, __m128i b)
{
  return __builtin_ia32_psadbw128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi8(__m128i a, __m128i b)
{
  return (__m128i)((__v16qi)a - (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi16(__m128i a, __m128i b)
{
  return (__m128i)((__v8hi)a - (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi32(__m128i a, __m128i b)
{
  return (__m128i)((__v4si)a - (__v4si)b);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_sub_si64(__m64 a, __m64 b)
{
  return a - b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sub_epi64(__m128i a, __m128i b)
{
  return a - b;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubsb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubsw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epu8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubusb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_subs_epu16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_psubusw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_and_si128(__m128i a, __m128i b)
{
  return __builtin_ia32_pand128(a, b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_andnot_si128(__m128i a, __m128i b)
{
  return __builtin_ia32_pandn128(a, b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_or_si128(__m128i a, __m128i b)
{
  return __builtin_ia32_por128(a, b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_xor_si128(__m128i a, __m128i b)
{
  return __builtin_ia32_pxor128(a, b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_slli_si128(__m128i a, int imm)
{
  return __builtin_ia32_pslldqi128(a, imm * 8);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_slli_epi16(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psllwi128((__v8hi)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sll_epi16(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psllw128((__v8hi)a, (__v8hi)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_slli_epi32(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_pslldi128((__v4si)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sll_epi32(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_pslld128((__v4si)a, (__v4si)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_slli_epi64(__m128i a, int count)
{
  return __builtin_ia32_psllqi128(a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sll_epi64(__m128i a, __m128i count)
{
  return __builtin_ia32_psllq128(a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srai_epi16(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psrawi128((__v8hi)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sra_epi16(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psraw128((__v8hi)a, (__v8hi)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srai_epi32(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psradi128((__v4si)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_sra_epi32(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psrad128((__v4si)a, (__v4si)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srli_si128(__m128i a, int imm)
{
  return __builtin_ia32_psrldqi128(a, imm * 8);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srli_epi16(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psrlwi128((__v8hi)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srl_epi16(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psrlw128((__v8hi)a, (__v8hi)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srli_epi32(__m128i a, int count)
{
  return (__m128i)__builtin_ia32_psrldi128((__v4si)a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srl_epi32(__m128i a, __m128i count)
{
  return (__m128i)__builtin_ia32_psrld128((__v4si)a, (__v4si)count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srli_epi64(__m128i a, int count)
{
  return __builtin_ia32_psrlqi128(a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_srl_epi64(__m128i a, __m128i count)
{
  return __builtin_ia32_psrlq128(a, count);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pcmpeqb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pcmpeqw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpeq_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pcmpeqd128((__v4si)a, (__v4si)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pcmpgtb128((__v16qi)a, (__v16qi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pcmpgtw128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmpgt_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pcmpgtd128((__v4si)a, (__v4si)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pcmpgtb128((__v16qi)b, (__v16qi)a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pcmpgtw128((__v8hi)b, (__v8hi)a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cmplt_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_pcmpgtd128((__v4si)b, (__v4si)a);
}

#ifdef __x86_64__
static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_sd(__m128d a, long long b)
{
  return __builtin_ia32_cvtsi642sd(a, b);
}

static inline long long __attribute__((__always_inline__, __nodebug__))
_mm_cvtsd_si64(__m128d a)
{
  return __builtin_ia32_cvtsd2si64(a);
}

static inline long long __attribute__((__always_inline__, __nodebug__))
_mm_cvttsd_si64(__m128d a)
{
  return __builtin_ia32_cvttsd2si64(a);
}
#endif

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_cvtepi32_ps(__m128i a)
{
  return __builtin_ia32_cvtdq2ps((__v4si)a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtps_epi32(__m128 a)
{
  return (__m128i)__builtin_ia32_cvtps2dq(a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvttps_epi32(__m128 a)
{
  return (__m128i)__builtin_ia32_cvttps2dq(a);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi32_si128(int a)
{
  return (__m128i)(__v4si){ a, 0, 0, 0 };
}

#ifdef __x86_64__
static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi64_si128(long long a)
{
  return (__m128i){ a, 0 };
}
#endif

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi128_si32(__m128i a)
{
  __v4si b = (__v4si)a;
  return b[0];
}

#ifdef __x86_64__
static inline long long __attribute__((__always_inline__, __nodebug__))
_mm_cvtsi128_si64(__m128i a)
{
  return a[0];
}
#endif

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_load_si128(__m128i const *p)
{
  return *p;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_loadu_si128(__m128i const *p)
{
  return (__m128i)__builtin_ia32_loaddqu((char const *)p);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_loadl_epi64(__m128i const *p)
{
  return (__m128i)__builtin_ia32_loadlv4si((__v2si *)p);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi64(__m64 q1, __m64 q0)
{
  return (__m128i){ (long long)q0, (long long)q1 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi32(int i3, int i2, int i1, int i0)
{
  return (__m128i)(__v4si){ i0, i1, i2, i3};
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi16(short w7, short w6, short w5, short w4, short w3, short w2, short w1, short w0)
{
  return (__m128i)(__v8hi){ w0, w1, w2, w3, w4, w5, w6, w7 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set_epi8(char b15, char b14, char b13, char b12, char b11, char b10, char b9, char b8, char b7, char b6, char b5, char b4, char b3, char b2, char b1, char b0)
{
  return (__m128i)(__v16qi){ b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi64(__m64 q)
{
  return (__m128i){ (long long)q, (long long)q };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi32(int i)
{
  return (__m128i)(__v4si){ i, i, i, i };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi16(short w)
{
  return (__m128i)(__v8hi){ w, w, w, w, w, w, w, w };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_set1_epi8(char b)
{
  return (__m128i)(__v16qi){ b, b, b, b, b, b, b, b, b, b, b, b, b, b, b, b };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi64(__m64 q0, __m64 q1)
{
  return (__m128i){ (long long)q0, (long long)q1 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi32(int i0, int i1, int i2, int i3)
{
  return (__m128i)(__v4si){ i0, i1, i2, i3};
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi16(short w0, short w1, short w2, short w3, short w4, short w5, short w6, short w7)
{
  return (__m128i)(__v8hi){ w0, w1, w2, w3, w4, w5, w6, w7 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setr_epi8(char b0, char b1, char b2, char b3, char b4, char b5, char b6, char b7, char b8, char b9, char b10, char b11, char b12, char b13, char b14, char b15)
{
  return (__m128i)(__v16qi){ b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_setzero_si128(void)
{
  return (__m128i){ 0LL, 0LL };
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_store_si128(__m128i *p, __m128i b)
{
  *p = b;
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storeu_si128(__m128i *p, __m128i b)
{
  __builtin_ia32_storedqu((char *)p, (__v16qi)b);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_maskmoveu_si128(__m128i d, __m128i n, char *p)
{
  __builtin_ia32_maskmovdqu((__v16qi)d, (__v16qi)n, p);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_storel_epi64(__m128i *p, __m128i a)
{
  __builtin_ia32_storelv4si((__v2si *)p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_stream_pd(double *p, __m128d a)
{
  __builtin_ia32_movntpd(p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_stream_si128(__m128i *p, __m128i a)
{
  __builtin_ia32_movntdq(p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_stream_si32(int *p, int a)
{
  __builtin_ia32_movnti(p, a);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_clflush(void const *p)
{
  __builtin_ia32_clflush(p);
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_lfence(void)
{
  __builtin_ia32_lfence();
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_mfence(void)
{
  __builtin_ia32_mfence();
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_packs_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_packsswb128((__v8hi)a, (__v8hi)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_packs_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_packssdw128((__v4si)a, (__v4si)b);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_packus_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_ia32_packuswb128((__v8hi)a, (__v8hi)b);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_extract_epi16(__m128i a, int imm)
{
  __v8hi b = (__v8hi)a;
  return b[imm];
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_insert_epi16(__m128i a, int b, int imm)
{
  return (__m128i)__builtin_ia32_vec_set_v8hi((__v8hi)a, b, imm);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_movemask_epi8(__m128i a)
{
  return __builtin_ia32_pmovmskb128((__v16qi)a);
}

#define _mm_shuffle_epi32(a, imm) ((__m128i)__builtin_ia32_pshufd((__v4si)(a), (imm)))
#define _mm_shufflehi_epi16(a, imm) ((__m128i)__builtin_ia32_pshufhw((__v8hi)(a), (imm)))
#define _mm_shufflelo_epi16(a, imm) ((__m128i)__builtin_ia32_pshuflw((__v8hi)(a), (imm)))

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v16qi)a, (__v16qi)b, 8, 16+8, 9, 16+9, 10, 16+10, 11, 16+11, 12, 16+12, 13, 16+13, 14, 16+14, 15, 16+15);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v8hi)a, (__v8hi)b, 4, 8+4, 5, 8+5, 6, 8+6, 7, 8+7);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v4si)a, (__v4si)b, 2, 4+2, 3, 4+3);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_epi64(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector(a, b, 1, 2+1);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi8(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v16qi)a, (__v16qi)b, 0, 16+0, 1, 16+1, 2, 16+2, 3, 16+3, 4, 16+4, 5, 16+5, 6, 16+6, 7, 16+7);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi16(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v8hi)a, (__v8hi)b, 0, 8+0, 1, 8+1, 2, 8+2, 3, 8+3);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi32(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector((__v4si)a, (__v4si)b, 0, 4+0, 1, 4+1);
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_epi64(__m128i a, __m128i b)
{
  return (__m128i)__builtin_shufflevector(a, b, 0, 2+0);
}

static inline __m64 __attribute__((__always_inline__, __nodebug__))
_mm_movepi64_pi64(__m128i a)
{
  return (__m64)a[0];
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_movpi64_pi64(__m64 a)
{
  return (__m128i){ (long long)a, 0 };
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_move_epi64(__m128i a)
{
  return (__m128i){ a[0], 0 };
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_unpackhi_pd(__m128d a, __m128d b)
{
  return __builtin_shufflevector(a, b, 1, 2+1);
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_unpacklo_pd(__m128d a, __m128d b)
{
  return __builtin_shufflevector(a, b, 0, 2+0);
}

static inline int __attribute__((__always_inline__, __nodebug__))
_mm_movemask_pd(__m128d a)
{
  return __builtin_ia32_movmskpd(a);
}

#define _mm_shuffle_pd(a, b, i) (__builtin_ia32_shufpd((a), (b), (i)))

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_castpd_ps(__m128d in)
{
  return (__m128)in;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_castpd_si128(__m128d in)
{
  return (__m128i)in;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_castps_pd(__m128 in)
{
  return (__m128d)in;
}

static inline __m128i __attribute__((__always_inline__, __nodebug__))
_mm_castps_si128(__m128 in)
{
  return (__m128i)in;
}

static inline __m128 __attribute__((__always_inline__, __nodebug__))
_mm_castsi128_ps(__m128i in)
{
  return (__m128)in;
}

static inline __m128d __attribute__((__always_inline__, __nodebug__))
_mm_castsi128_pd(__m128i in)
{
  return (__m128d)in;
}

static inline void __attribute__((__always_inline__, __nodebug__))
_mm_pause(void)
{
  __asm__ volatile ("pause");
}

#define _MM_SHUFFLE2(x, y) (((x) << 1) | (y))

#endif /* __SSE2__ */

#endif /* __EMMINTRIN_H */
