

/*
 * This header file provides a simple API translation layer
 * between Arm/Aarch64 NEON to their corresponding SSE intrinsics versions.
 * 
 * neon2rvv is freely redistributable under the MIT License.
 * 
 * MIT License
 * 
 * Copyright (c) 2023 Yang Hau
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef NEON2RVV_H
#define NEON2RVV_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined(__GNUC__) || defined(__clang__)
#pragma push_macro("FORCE_INLINE")
#pragma push_macro("ALIGN_STRUCT")
#define FORCE_INLINE static inline __attribute__((always_inline))
#define ALIGN_STRUCT(x) __attribute__((aligned(x)))
#define _neon2rvv_likely(x) __builtin_expect(!!(x), 1)
#define _neon2rvv_unlikely(x) __builtin_expect(!!(x), 0)
#endif

#if defined(__aarch64__) || defined(_M_ARM64)
// ARM64 enabled system
#define NEON2RVV_ARM64
#endif

#include <stdint.h>
#include <stdlib.h>

/* vadd  */
int8x8_t vadd_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vadd_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vadd_s32(int32x2_t __a, int32x2_t __b);

float32x2_t vadd_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vadd_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vadd_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vadd_u32(uint32x2_t __a, uint32x2_t __b);

int64x1_t vadd_s64(int64x1_t __a, int64x1_t __b);

uint64x1_t vadd_u64(uint64x1_t __a, uint64x1_t __b);

int8x16_t vaddq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vaddq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vaddq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vaddq_s64(int64x2_t __a, int64x2_t __b);

float32x4_t vaddq_f32(float32x4_t __a, float32x4_t __b);

uint8x16_t vaddq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vaddq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vaddq_u32(uint32x4_t __a, uint32x4_t __b);

uint64x2_t vaddq_u64(uint64x2_t __a, uint64x2_t __b);

int16x8_t vaddl_s8(int8x8_t __a, int8x8_t __b);

int32x4_t vaddl_s16(int16x4_t __a, int16x4_t __b);

int64x2_t vaddl_s32(int32x2_t __a, int32x2_t __b);

uint16x8_t vaddl_u8(uint8x8_t __a, uint8x8_t __b);

uint32x4_t vaddl_u16(uint16x4_t __a, uint16x4_t __b);

uint64x2_t vaddl_u32(uint32x2_t __a, uint32x2_t __b);

int16x8_t vaddw_s8(int16x8_t __a, int8x8_t __b);

int32x4_t vaddw_s16(int32x4_t __a, int16x4_t __b);

int64x2_t vaddw_s32(int64x2_t __a, int32x2_t __b);

uint16x8_t vaddw_u8(uint16x8_t __a, uint8x8_t __b);

uint32x4_t vaddw_u16(uint32x4_t __a, uint16x4_t __b);

uint64x2_t vaddw_u32(uint64x2_t __a, uint32x2_t __b);

int8x8_t vhadd_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vhadd_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vhadd_s32(int32x2_t __a, int32x2_t __b);

uint8x8_t vhadd_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vhadd_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vhadd_u32(uint32x2_t __a, uint32x2_t __b);

int8x16_t vhaddq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vhaddq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vhaddq_s32(int32x4_t __a, int32x4_t __b);

uint8x16_t vhaddq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vhaddq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vhaddq_u32(uint32x4_t __a, uint32x4_t __b);

int8x8_t vrhadd_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vrhadd_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vrhadd_s32(int32x2_t __a, int32x2_t __b);

uint8x8_t vrhadd_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vrhadd_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vrhadd_u32(uint32x2_t __a, uint32x2_t __b);

int8x16_t vrhaddq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vrhaddq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vrhaddq_s32(int32x4_t __a, int32x4_t __b);

uint8x16_t vrhaddq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vrhaddq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vrhaddq_u32(uint32x4_t __a, uint32x4_t __b);

int8x8_t vqadd_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vqadd_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vqadd_s32(int32x2_t __a, int32x2_t __b);

int64x1_t vqadd_s64(int64x1_t __a, int64x1_t __b);

uint8x8_t vqadd_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vqadd_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vqadd_u32(uint32x2_t __a, uint32x2_t __b);

uint64x1_t vqadd_u64(uint64x1_t __a, uint64x1_t __b);

int8x16_t vqaddq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vqaddq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vqaddq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vqaddq_s64(int64x2_t __a, int64x2_t __b);

uint8x16_t vqaddq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vqaddq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vqaddq_u32(uint32x4_t __a, uint32x4_t __b);

uint64x2_t vqaddq_u64(uint64x2_t __a, uint64x2_t __b);

int8x8_t vaddhn_s16(int16x8_t __a, int16x8_t __b);

int16x4_t vaddhn_s32(int32x4_t __a, int32x4_t __b);

int32x2_t vaddhn_s64(int64x2_t __a, int64x2_t __b);

uint8x8_t vaddhn_u16(uint16x8_t __a, uint16x8_t __b);

uint16x4_t vaddhn_u32(uint32x4_t __a, uint32x4_t __b);

uint32x2_t vaddhn_u64(uint64x2_t __a, uint64x2_t __b);

int8x8_t vraddhn_s16(int16x8_t __a, int16x8_t __b);

int16x4_t vraddhn_s32(int32x4_t __a, int32x4_t __b);

int32x2_t vraddhn_s64(int64x2_t __a, int64x2_t __b);

uint8x8_t vraddhn_u16(uint16x8_t __a, uint16x8_t __b);

uint16x4_t vraddhn_u32(uint32x4_t __a, uint32x4_t __b);

uint32x2_t vraddhn_u64(uint64x2_t __a, uint64x2_t __b);

int8x8_t vmul_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vmul_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vmul_s32(int32x2_t __a, int32x2_t __b);

float32x2_t vmul_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vmul_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vmul_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vmul_u32(uint32x2_t __a, uint32x2_t __b);

int8x16_t vmulq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vmulq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vmulq_s32(int32x4_t __a, int32x4_t __b);

float32x4_t vmulq_f32(float32x4_t __a, float32x4_t __b);

uint8x16_t vmulq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vmulq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vmulq_u32(uint32x4_t __a, uint32x4_t __b);

poly8x8_t vmul_p8(poly8x8_t __a, poly8x8_t __b);

poly8x16_t vmulq_p8(poly8x16_t __a, poly8x16_t __b);

int16x4_t vqdmulh_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vqdmulh_s32(int32x2_t __a, int32x2_t __b);

int16x8_t vqdmulhq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vqdmulhq_s32(int32x4_t __a, int32x4_t __b);

int16x4_t vqrdmulh_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vqrdmulh_s32(int32x2_t __a, int32x2_t __b);

int16x8_t vqrdmulhq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vqrdmulhq_s32(int32x4_t __a, int32x4_t __b);

int16x4_t vqrdmlah_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c);

int32x2_t vqrdmlah_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c);

int16x8_t vqrdmlahq_s16(int16x8_t __a, int16x8_t __b, int16x8_t __c);

int32x4_t vqrdmlahq_s32(int32x4_t __a, int32x4_t __b, int32x4_t __c);

int16x4_t vqrdmlsh_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c);

int32x2_t vqrdmlsh_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c);

int16x8_t vqrdmlshq_s16(int16x8_t __a, int16x8_t __b, int16x8_t __c);

int32x4_t vqrdmlshq_s32(int32x4_t __a, int32x4_t __b, int32x4_t __c);

int16x8_t vmull_s8(int8x8_t __a, int8x8_t __b);

int32x4_t vmull_s16(int16x4_t __a, int16x4_t __b);

int64x2_t vmull_s32(int32x2_t __a, int32x2_t __b);

uint16x8_t vmull_u8(uint8x8_t __a, uint8x8_t __b);

uint32x4_t vmull_u16(uint16x4_t __a, uint16x4_t __b);

uint64x2_t vmull_u32(uint32x2_t __a, uint32x2_t __b);

poly16x8_t vmull_p8(poly8x8_t __a, poly8x8_t __b);

int32x4_t vqdmull_s16(int16x4_t __a, int16x4_t __b);

int64x2_t vqdmull_s32(int32x2_t __a, int32x2_t __b);

int8x8_t vmla_s8(int8x8_t __a, int8x8_t __b, int8x8_t __c);

int16x4_t vmla_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c);

int32x2_t vmla_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c);

float32x2_t vmla_f32(float32x2_t __a, float32x2_t __b, float32x2_t __c);

uint8x8_t vmla_u8(uint8x8_t __a, uint8x8_t __b, uint8x8_t __c);

uint16x4_t vmla_u16(uint16x4_t __a, uint16x4_t __b, uint16x4_t __c);

uint32x2_t vmla_u32(uint32x2_t __a, uint32x2_t __b, uint32x2_t __c);

int8x16_t vmlaq_s8(int8x16_t __a, int8x16_t __b, int8x16_t __c);

int16x8_t vmlaq_s16(int16x8_t __a, int16x8_t __b, int16x8_t __c);

int32x4_t vmlaq_s32(int32x4_t __a, int32x4_t __b, int32x4_t __c);

float32x4_t vmlaq_f32(float32x4_t __a, float32x4_t __b, float32x4_t __c);

uint8x16_t vmlaq_u8(uint8x16_t __a, uint8x16_t __b, uint8x16_t __c);

uint16x8_t vmlaq_u16(uint16x8_t __a, uint16x8_t __b, uint16x8_t __c);

uint32x4_t vmlaq_u32(uint32x4_t __a, uint32x4_t __b, uint32x4_t __c);

int16x8_t vmlal_s8(int16x8_t __a, int8x8_t __b, int8x8_t __c);

int32x4_t vmlal_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c);

int64x2_t vmlal_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c);

uint16x8_t vmlal_u8(uint16x8_t __a, uint8x8_t __b, uint8x8_t __c);

uint32x4_t vmlal_u16(uint32x4_t __a, uint16x4_t __b, uint16x4_t __c);

uint64x2_t vmlal_u32(uint64x2_t __a, uint32x2_t __b, uint32x2_t __c);

int32x4_t vqdmlal_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c);

int64x2_t vqdmlal_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c);

int8x8_t vmls_s8(int8x8_t __a, int8x8_t __b, int8x8_t __c);

int16x4_t vmls_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c);

int32x2_t vmls_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c);

float32x2_t vmls_f32(float32x2_t __a, float32x2_t __b, float32x2_t __c);

uint8x8_t vmls_u8(uint8x8_t __a, uint8x8_t __b, uint8x8_t __c);

uint16x4_t vmls_u16(uint16x4_t __a, uint16x4_t __b, uint16x4_t __c);

uint32x2_t vmls_u32(uint32x2_t __a, uint32x2_t __b, uint32x2_t __c);

int8x16_t vmlsq_s8(int8x16_t __a, int8x16_t __b, int8x16_t __c);

int16x8_t vmlsq_s16(int16x8_t __a, int16x8_t __b, int16x8_t __c);

int32x4_t vmlsq_s32(int32x4_t __a, int32x4_t __b, int32x4_t __c);

float32x4_t vmlsq_f32(float32x4_t __a, float32x4_t __b, float32x4_t __c);

uint8x16_t vmlsq_u8(uint8x16_t __a, uint8x16_t __b, uint8x16_t __c);

uint16x8_t vmlsq_u16(uint16x8_t __a, uint16x8_t __b, uint16x8_t __c);

uint32x4_t vmlsq_u32(uint32x4_t __a, uint32x4_t __b, uint32x4_t __c);

int16x8_t vmlsl_s8(int16x8_t __a, int8x8_t __b, int8x8_t __c);

int32x4_t vmlsl_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c);

int64x2_t vmlsl_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c);

uint16x8_t vmlsl_u8(uint16x8_t __a, uint8x8_t __b, uint8x8_t __c);

uint32x4_t vmlsl_u16(uint32x4_t __a, uint16x4_t __b, uint16x4_t __c);

uint64x2_t vmlsl_u32(uint64x2_t __a, uint32x2_t __b, uint32x2_t __c);

int32x4_t vqdmlsl_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c);

int64x2_t vqdmlsl_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c);

float32x2_t vfma_f32(float32x2_t __a, float32x2_t __b, float32x2_t __c);

float32x4_t vfmaq_f32(float32x4_t __a, float32x4_t __b, float32x4_t __c);

float32x2_t vfms_f32(float32x2_t __a, float32x2_t __b, float32x2_t __c);

float32x4_t vfmsq_f32(float32x4_t __a, float32x4_t __b, float32x4_t __c);

float32x2_t vrndn_f32(float32x2_t __a);

float32x4_t vrndnq_f32(float32x4_t __a);

float32x2_t vrnda_f32(float32x2_t __a);

float32x4_t vrndaq_f32(float32x4_t __a);

float32x2_t vrndp_f32(float32x2_t __a);

float32x4_t vrndpq_f32(float32x4_t __a);

float32x2_t vrndm_f32(float32x2_t __a);

float32x4_t vrndmq_f32(float32x4_t __a);

float32x2_t vrndx_f32(float32x2_t __a);

float32x4_t vrndxq_f32(float32x4_t __a);

float32x2_t vrnd_f32(float32x2_t __a);

float32x4_t vrndq_f32(float32x4_t __a);

int8x8_t vsub_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vsub_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vsub_s32(int32x2_t __a, int32x2_t __b);

float32x2_t vsub_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vsub_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vsub_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vsub_u32(uint32x2_t __a, uint32x2_t __b);

int64x1_t vsub_s64(int64x1_t __a, int64x1_t __b);

uint64x1_t vsub_u64(uint64x1_t __a, uint64x1_t __b);

int8x16_t vsubq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vsubq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vsubq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vsubq_s64(int64x2_t __a, int64x2_t __b);

float32x4_t vsubq_f32(float32x4_t __a, float32x4_t __b);

uint8x16_t vsubq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vsubq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vsubq_u32(uint32x4_t __a, uint32x4_t __b);

uint64x2_t vsubq_u64(uint64x2_t __a, uint64x2_t __b);

int16x8_t vsubl_s8(int8x8_t __a, int8x8_t __b);

int32x4_t vsubl_s16(int16x4_t __a, int16x4_t __b);

int64x2_t vsubl_s32(int32x2_t __a, int32x2_t __b);

uint16x8_t vsubl_u8(uint8x8_t __a, uint8x8_t __b);

uint32x4_t vsubl_u16(uint16x4_t __a, uint16x4_t __b);

uint64x2_t vsubl_u32(uint32x2_t __a, uint32x2_t __b);

int16x8_t vsubw_s8(int16x8_t __a, int8x8_t __b);

int32x4_t vsubw_s16(int32x4_t __a, int16x4_t __b);

int64x2_t vsubw_s32(int64x2_t __a, int32x2_t __b);

uint16x8_t vsubw_u8(uint16x8_t __a, uint8x8_t __b);

uint32x4_t vsubw_u16(uint32x4_t __a, uint16x4_t __b);

uint64x2_t vsubw_u32(uint64x2_t __a, uint32x2_t __b);

int8x8_t vhsub_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vhsub_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vhsub_s32(int32x2_t __a, int32x2_t __b);

uint8x8_t vhsub_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vhsub_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vhsub_u32(uint32x2_t __a, uint32x2_t __b);

int8x16_t vhsubq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vhsubq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vhsubq_s32(int32x4_t __a, int32x4_t __b);

uint8x16_t vhsubq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vhsubq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vhsubq_u32(uint32x4_t __a, uint32x4_t __b);

int8x8_t vqsub_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vqsub_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vqsub_s32(int32x2_t __a, int32x2_t __b);

int64x1_t vqsub_s64(int64x1_t __a, int64x1_t __b);

uint8x8_t vqsub_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vqsub_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vqsub_u32(uint32x2_t __a, uint32x2_t __b);

uint64x1_t vqsub_u64(uint64x1_t __a, uint64x1_t __b);

int8x16_t vqsubq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vqsubq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vqsubq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vqsubq_s64(int64x2_t __a, int64x2_t __b);

uint8x16_t vqsubq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vqsubq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vqsubq_u32(uint32x4_t __a, uint32x4_t __b);

uint64x2_t vqsubq_u64(uint64x2_t __a, uint64x2_t __b);

int8x8_t vsubhn_s16(int16x8_t __a, int16x8_t __b);

int16x4_t vsubhn_s32(int32x4_t __a, int32x4_t __b);

int32x2_t vsubhn_s64(int64x2_t __a, int64x2_t __b);

uint8x8_t vsubhn_u16(uint16x8_t __a, uint16x8_t __b);

uint16x4_t vsubhn_u32(uint32x4_t __a, uint32x4_t __b);

uint32x2_t vsubhn_u64(uint64x2_t __a, uint64x2_t __b);

int8x8_t vrsubhn_s16(int16x8_t __a, int16x8_t __b);

int16x4_t vrsubhn_s32(int32x4_t __a, int32x4_t __b);

int32x2_t vrsubhn_s64(int64x2_t __a, int64x2_t __b);

uint8x8_t vrsubhn_u16(uint16x8_t __a, uint16x8_t __b);

uint16x4_t vrsubhn_u32(uint32x4_t __a, uint32x4_t __b);

uint32x2_t vrsubhn_u64(uint64x2_t __a, uint64x2_t __b);

uint8x8_t vceq_s8(int8x8_t __a, int8x8_t __b);

uint16x4_t vceq_s16(int16x4_t __a, int16x4_t __b);

uint32x2_t vceq_s32(int32x2_t __a, int32x2_t __b);

uint32x2_t vceq_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vceq_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vceq_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vceq_u32(uint32x2_t __a, uint32x2_t __b);

uint8x8_t vceq_p8(poly8x8_t __a, poly8x8_t __b);

uint8x16_t vceqq_s8(int8x16_t __a, int8x16_t __b);

uint16x8_t vceqq_s16(int16x8_t __a, int16x8_t __b);

uint32x4_t vceqq_s32(int32x4_t __a, int32x4_t __b);

uint32x4_t vceqq_f32(float32x4_t __a, float32x4_t __b);

uint8x16_t vceqq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vceqq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vceqq_u32(uint32x4_t __a, uint32x4_t __b);

uint8x16_t vceqq_p8(poly8x16_t __a, poly8x16_t __b);

uint8x8_t vcge_s8(int8x8_t __a, int8x8_t __b);

uint16x4_t vcge_s16(int16x4_t __a, int16x4_t __b);

uint32x2_t vcge_s32(int32x2_t __a, int32x2_t __b);

uint32x2_t vcge_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vcge_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vcge_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vcge_u32(uint32x2_t __a, uint32x2_t __b);

uint8x16_t vcgeq_s8(int8x16_t __a, int8x16_t __b);

uint16x8_t vcgeq_s16(int16x8_t __a, int16x8_t __b);

uint32x4_t vcgeq_s32(int32x4_t __a, int32x4_t __b);

uint32x4_t vcgeq_f32(float32x4_t __a, float32x4_t __b);

uint8x16_t vcgeq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vcgeq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vcgeq_u32(uint32x4_t __a, uint32x4_t __b);

uint8x8_t vcle_s8(int8x8_t __a, int8x8_t __b);

uint16x4_t vcle_s16(int16x4_t __a, int16x4_t __b);

uint32x2_t vcle_s32(int32x2_t __a, int32x2_t __b);

uint32x2_t vcle_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vcle_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vcle_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vcle_u32(uint32x2_t __a, uint32x2_t __b);

uint8x16_t vcleq_s8(int8x16_t __a, int8x16_t __b);

uint16x8_t vcleq_s16(int16x8_t __a, int16x8_t __b);

uint32x4_t vcleq_s32(int32x4_t __a, int32x4_t __b);

uint32x4_t vcleq_f32(float32x4_t __a, float32x4_t __b);

uint8x16_t vcleq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vcleq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vcleq_u32(uint32x4_t __a, uint32x4_t __b);

uint8x8_t vcgt_s8(int8x8_t __a, int8x8_t __b);

uint16x4_t vcgt_s16(int16x4_t __a, int16x4_t __b);

uint32x2_t vcgt_s32(int32x2_t __a, int32x2_t __b);

uint32x2_t vcgt_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vcgt_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vcgt_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vcgt_u32(uint32x2_t __a, uint32x2_t __b);

uint8x16_t vcgtq_s8(int8x16_t __a, int8x16_t __b);

uint16x8_t vcgtq_s16(int16x8_t __a, int16x8_t __b);

uint32x4_t vcgtq_s32(int32x4_t __a, int32x4_t __b);

uint32x4_t vcgtq_f32(float32x4_t __a, float32x4_t __b);

uint8x16_t vcgtq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vcgtq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vcgtq_u32(uint32x4_t __a, uint32x4_t __b);

uint8x8_t vclt_s8(int8x8_t __a, int8x8_t __b);

uint16x4_t vclt_s16(int16x4_t __a, int16x4_t __b);

uint32x2_t vclt_s32(int32x2_t __a, int32x2_t __b);

uint32x2_t vclt_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vclt_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vclt_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vclt_u32(uint32x2_t __a, uint32x2_t __b);

uint8x16_t vcltq_s8(int8x16_t __a, int8x16_t __b);

uint16x8_t vcltq_s16(int16x8_t __a, int16x8_t __b);

uint32x4_t vcltq_s32(int32x4_t __a, int32x4_t __b);

uint32x4_t vcltq_f32(float32x4_t __a, float32x4_t __b);

uint8x16_t vcltq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vcltq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vcltq_u32(uint32x4_t __a, uint32x4_t __b);

int8x8_t vabs_s8(int8x8_t __a);

int16x4_t vabs_s16(int16x4_t __a);

int32x2_t vabs_s32(int32x2_t __a);

float32x2_t vabs_f32(float32x2_t __a);

int8x16_t vabsq_s8(int8x16_t __a);

int16x8_t vabsq_s16(int16x8_t __a);

int32x4_t vabsq_s32(int32x4_t __a);

float32x4_t vabsq_f32(float32x4_t __a);

int8x8_t vqabs_s8(int8x8_t __a);

int16x4_t vqabs_s16(int16x4_t __a);

int32x2_t vqabs_s32(int32x2_t __a);

int8x16_t vqabsq_s8(int8x16_t __a);

int16x8_t vqabsq_s16(int16x8_t __a);

int32x4_t vqabsq_s32(int32x4_t __a);
uint32x2_t vcage_f32(float32x2_t __a, float32x2_t __b);

uint32x4_t vcageq_f32(float32x4_t __a, float32x4_t __b);

uint32x2_t vcale_f32(float32x2_t __a, float32x2_t __b);

uint32x4_t vcaleq_f32(float32x4_t __a, float32x4_t __b);

uint32x2_t vcagt_f32(float32x2_t __a, float32x2_t __b);

uint32x4_t vcagtq_f32(float32x4_t __a, float32x4_t __b);

uint32x2_t vcalt_f32(float32x2_t __a, float32x2_t __b);

uint32x4_t vcaltq_f32(float32x4_t __a, float32x4_t __b);

uint8x8_t vtst_s8(int8x8_t __a, int8x8_t __b);

uint16x4_t vtst_s16(int16x4_t __a, int16x4_t __b);

uint32x2_t vtst_s32(int32x2_t __a, int32x2_t __b);

uint8x8_t vtst_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vtst_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vtst_u32(uint32x2_t __a, uint32x2_t __b);

uint8x8_t vtst_p8(poly8x8_t __a, poly8x8_t __b);

uint16x4_t vtst_p16(poly16x4_t __a, poly16x4_t __b);

uint8x16_t vtstq_s8(int8x16_t __a, int8x16_t __b);

uint16x8_t vtstq_s16(int16x8_t __a, int16x8_t __b);

uint32x4_t vtstq_s32(int32x4_t __a, int32x4_t __b);

uint8x16_t vtstq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vtstq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vtstq_u32(uint32x4_t __a, uint32x4_t __b);

uint8x16_t vtstq_p8(poly8x16_t __a, poly8x16_t __b);

uint16x8_t vtstq_p16(poly16x8_t __a, poly16x8_t __b);

int8x8_t vabd_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vabd_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vabd_s32(int32x2_t __a, int32x2_t __b);

float32x2_t vabd_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vabd_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vabd_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vabd_u32(uint32x2_t __a, uint32x2_t __b);

int8x16_t vabdq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vabdq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vabdq_s32(int32x4_t __a, int32x4_t __b);

float32x4_t vabdq_f32(float32x4_t __a, float32x4_t __b);

uint8x16_t vabdq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vabdq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vabdq_u32(uint32x4_t __a, uint32x4_t __b);

int16x8_t vabdl_s8(int8x8_t __a, int8x8_t __b);

int32x4_t vabdl_s16(int16x4_t __a, int16x4_t __b);

int64x2_t vabdl_s32(int32x2_t __a, int32x2_t __b);

uint16x8_t vabdl_u8(uint8x8_t __a, uint8x8_t __b);

uint32x4_t vabdl_u16(uint16x4_t __a, uint16x4_t __b);

uint64x2_t vabdl_u32(uint32x2_t __a, uint32x2_t __b);

int8x8_t vaba_s8(int8x8_t __a, int8x8_t __b, int8x8_t __c);

int16x4_t vaba_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c);

int32x2_t vaba_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c);

uint8x8_t vaba_u8(uint8x8_t __a, uint8x8_t __b, uint8x8_t __c);

uint16x4_t vaba_u16(uint16x4_t __a, uint16x4_t __b, uint16x4_t __c);

uint32x2_t vaba_u32(uint32x2_t __a, uint32x2_t __b, uint32x2_t __c);

int8x16_t vabaq_s8(int8x16_t __a, int8x16_t __b, int8x16_t __c);

int16x8_t vabaq_s16(int16x8_t __a, int16x8_t __b, int16x8_t __c);

int32x4_t vabaq_s32(int32x4_t __a, int32x4_t __b, int32x4_t __c);

uint8x16_t vabaq_u8(uint8x16_t __a, uint8x16_t __b, uint8x16_t __c);

uint16x8_t vabaq_u16(uint16x8_t __a, uint16x8_t __b, uint16x8_t __c);

uint32x4_t vabaq_u32(uint32x4_t __a, uint32x4_t __b, uint32x4_t __c);

int16x8_t vabal_s8(int16x8_t __a, int8x8_t __b, int8x8_t __c);

int32x4_t vabal_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c);

int64x2_t vabal_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c);

uint16x8_t vabal_u8(uint16x8_t __a, uint8x8_t __b, uint8x8_t __c);

uint32x4_t vabal_u16(uint32x4_t __a, uint16x4_t __b, uint16x4_t __c);

uint64x2_t vabal_u32(uint64x2_t __a, uint32x2_t __b, uint32x2_t __c);

int8x8_t vmax_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vmax_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vmax_s32(int32x2_t __a, int32x2_t __b);

float32x2_t vmax_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vmax_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vmax_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vmax_u32(uint32x2_t __a, uint32x2_t __b);

int8x16_t vmaxq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vmaxq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vmaxq_s32(int32x4_t __a, int32x4_t __b);

float32x4_t vmaxq_f32(float32x4_t __a, float32x4_t __b);

float32x2_t vmaxnm_f32(float32x2_t a, float32x2_t b);

float32x4_t vmaxnmq_f32(float32x4_t a, float32x4_t b);

float32x2_t vminnm_f32(float32x2_t a, float32x2_t b);

float32x4_t vminnmq_f32(float32x4_t a, float32x4_t b);

uint8x16_t vmaxq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vmaxq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vmaxq_u32(uint32x4_t __a, uint32x4_t __b);

int8x8_t vmin_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vmin_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vmin_s32(int32x2_t __a, int32x2_t __b);

float32x2_t vmin_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vmin_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vmin_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vmin_u32(uint32x2_t __a, uint32x2_t __b);

int8x16_t vminq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vminq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vminq_s32(int32x4_t __a, int32x4_t __b);

float32x4_t vminq_f32(float32x4_t __a, float32x4_t __b);

uint8x16_t vminq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vminq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vminq_u32(uint32x4_t __a, uint32x4_t __b);

int8x8_t vpadd_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vpadd_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vpadd_s32(int32x2_t __a, int32x2_t __b);

float32x2_t vpadd_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vpadd_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vpadd_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vpadd_u32(uint32x2_t __a, uint32x2_t __b);

int16x4_t vpaddl_s8(int8x8_t __a);

int32x2_t vpaddl_s16(int16x4_t __a);

int64x1_t vpaddl_s32(int32x2_t __a);

uint16x4_t vpaddl_u8(uint8x8_t __a);

uint32x2_t vpaddl_u16(uint16x4_t __a);

uint64x1_t vpaddl_u32(uint32x2_t __a);

int16x8_t vpaddlq_s8(int8x16_t __a);

int32x4_t vpaddlq_s16(int16x8_t __a);

int64x2_t vpaddlq_s32(int32x4_t __a);

uint16x8_t vpaddlq_u8(uint8x16_t __a);

uint32x4_t vpaddlq_u16(uint16x8_t __a);

uint64x2_t vpaddlq_u32(uint32x4_t __a);

int16x4_t vpadal_s8(int16x4_t __a, int8x8_t __b);

int32x2_t vpadal_s16(int32x2_t __a, int16x4_t __b);

int64x1_t vpadal_s32(int64x1_t __a, int32x2_t __b);

uint16x4_t vpadal_u8(uint16x4_t __a, uint8x8_t __b);

uint32x2_t vpadal_u16(uint32x2_t __a, uint16x4_t __b);

uint64x1_t vpadal_u32(uint64x1_t __a, uint32x2_t __b);

int16x8_t vpadalq_s8(int16x8_t __a, int8x16_t __b);

int32x4_t vpadalq_s16(int32x4_t __a, int16x8_t __b);

int64x2_t vpadalq_s32(int64x2_t __a, int32x4_t __b);

uint16x8_t vpadalq_u8(uint16x8_t __a, uint8x16_t __b);

uint32x4_t vpadalq_u16(uint32x4_t __a, uint16x8_t __b);

uint64x2_t vpadalq_u32(uint64x2_t __a, uint32x4_t __b);

int8x8_t vpmax_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vpmax_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vpmax_s32(int32x2_t __a, int32x2_t __b);

float32x2_t vpmax_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vpmax_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vpmax_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vpmax_u32(uint32x2_t __a, uint32x2_t __b);

int8x8_t vpmin_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vpmin_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vpmin_s32(int32x2_t __a, int32x2_t __b);

float32x2_t vpmin_f32(float32x2_t __a, float32x2_t __b);

uint8x8_t vpmin_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vpmin_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vpmin_u32(uint32x2_t __a, uint32x2_t __b);

float32x2_t vrecps_f32(float32x2_t __a, float32x2_t __b);

float32x4_t vrecpsq_f32(float32x4_t __a, float32x4_t __b);

float32x2_t vrsqrts_f32(float32x2_t __a, float32x2_t __b);

float32x4_t vrsqrtsq_f32(float32x4_t __a, float32x4_t __b);

int8x8_t vshl_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vshl_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vshl_s32(int32x2_t __a, int32x2_t __b);

int64x1_t vshl_s64(int64x1_t __a, int64x1_t __b);

uint8x8_t vshl_u8(uint8x8_t __a, int8x8_t __b);

uint16x4_t vshl_u16(uint16x4_t __a, int16x4_t __b);

uint32x2_t vshl_u32(uint32x2_t __a, int32x2_t __b);

uint64x1_t vshl_u64(uint64x1_t __a, int64x1_t __b);

int8x16_t vshlq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vshlq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vshlq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vshlq_s64(int64x2_t __a, int64x2_t __b);

uint8x16_t vshlq_u8(uint8x16_t __a, int8x16_t __b);

uint16x8_t vshlq_u16(uint16x8_t __a, int16x8_t __b);

uint32x4_t vshlq_u32(uint32x4_t __a, int32x4_t __b);

uint64x2_t vshlq_u64(uint64x2_t __a, int64x2_t __b);

int8x8_t vrshl_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vrshl_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vrshl_s32(int32x2_t __a, int32x2_t __b);

int64x1_t vrshl_s64(int64x1_t __a, int64x1_t __b);

uint8x8_t vrshl_u8(uint8x8_t __a, int8x8_t __b);

uint16x4_t vrshl_u16(uint16x4_t __a, int16x4_t __b);

uint32x2_t vrshl_u32(uint32x2_t __a, int32x2_t __b);

uint64x1_t vrshl_u64(uint64x1_t __a, int64x1_t __b);

int8x16_t vrshlq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vrshlq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vrshlq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vrshlq_s64(int64x2_t __a, int64x2_t __b);

uint8x16_t vrshlq_u8(uint8x16_t __a, int8x16_t __b);

uint16x8_t vrshlq_u16(uint16x8_t __a, int16x8_t __b);

uint32x4_t vrshlq_u32(uint32x4_t __a, int32x4_t __b);

uint64x2_t vrshlq_u64(uint64x2_t __a, int64x2_t __b);

int8x8_t vqshl_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vqshl_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vqshl_s32(int32x2_t __a, int32x2_t __b);

int64x1_t vqshl_s64(int64x1_t __a, int64x1_t __b);

uint8x8_t vqshl_u8(uint8x8_t __a, int8x8_t __b);

uint16x4_t vqshl_u16(uint16x4_t __a, int16x4_t __b);

uint32x2_t vqshl_u32(uint32x2_t __a, int32x2_t __b);

uint64x1_t vqshl_u64(uint64x1_t __a, int64x1_t __b);

int8x16_t vqshlq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vqshlq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vqshlq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vqshlq_s64(int64x2_t __a, int64x2_t __b);

uint8x16_t vqshlq_u8(uint8x16_t __a, int8x16_t __b);

uint16x8_t vqshlq_u16(uint16x8_t __a, int16x8_t __b);

uint32x4_t vqshlq_u32(uint32x4_t __a, int32x4_t __b);

uint64x2_t vqshlq_u64(uint64x2_t __a, int64x2_t __b);

int8x8_t vqrshl_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vqrshl_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vqrshl_s32(int32x2_t __a, int32x2_t __b);

int64x1_t vqrshl_s64(int64x1_t __a, int64x1_t __b);

uint8x8_t vqrshl_u8(uint8x8_t __a, int8x8_t __b);

uint16x4_t vqrshl_u16(uint16x4_t __a, int16x4_t __b);

uint32x2_t vqrshl_u32(uint32x2_t __a, int32x2_t __b);

uint64x1_t vqrshl_u64(uint64x1_t __a, int64x1_t __b);

int8x16_t vqrshlq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vqrshlq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vqrshlq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vqrshlq_s64(int64x2_t __a, int64x2_t __b);

uint8x16_t vqrshlq_u8(uint8x16_t __a, int8x16_t __b);

uint16x8_t vqrshlq_u16(uint16x8_t __a, int16x8_t __b);

uint32x4_t vqrshlq_u32(uint32x4_t __a, int32x4_t __b);

uint64x2_t vqrshlq_u64(uint64x2_t __a, int64x2_t __b);

int8x8_t vshr_n_s8(int8x8_t __a, const int __b);

int16x4_t vshr_n_s16(int16x4_t __a, const int __b);

int32x2_t vshr_n_s32(int32x2_t __a, const int __b);

int64x1_t vshr_n_s64(int64x1_t __a, const int __b);

uint8x8_t vshr_n_u8(uint8x8_t __a, const int __b);

uint16x4_t vshr_n_u16(uint16x4_t __a, const int __b);

uint32x2_t vshr_n_u32(uint32x2_t __a, const int __b);

uint64x1_t vshr_n_u64(uint64x1_t __a, const int __b);

int8x16_t vshrq_n_s8(int8x16_t __a, const int __b);

int16x8_t vshrq_n_s16(int16x8_t __a, const int __b);

int32x4_t vshrq_n_s32(int32x4_t __a, const int __b);

int64x2_t vshrq_n_s64(int64x2_t __a, const int __b);

uint8x16_t vshrq_n_u8(uint8x16_t __a, const int __b);

uint16x8_t vshrq_n_u16(uint16x8_t __a, const int __b);

uint32x4_t vshrq_n_u32(uint32x4_t __a, const int __b);

uint64x2_t vshrq_n_u64(uint64x2_t __a, const int __b);

int8x8_t vrshr_n_s8(int8x8_t __a, const int __b);

int16x4_t vrshr_n_s16(int16x4_t __a, const int __b);

int32x2_t vrshr_n_s32(int32x2_t __a, const int __b);

int64x1_t vrshr_n_s64(int64x1_t __a, const int __b);

uint8x8_t vrshr_n_u8(uint8x8_t __a, const int __b);

uint16x4_t vrshr_n_u16(uint16x4_t __a, const int __b);

uint32x2_t vrshr_n_u32(uint32x2_t __a, const int __b);

uint64x1_t vrshr_n_u64(uint64x1_t __a, const int __b);

int8x16_t vrshrq_n_s8(int8x16_t __a, const int __b);

int16x8_t vrshrq_n_s16(int16x8_t __a, const int __b);

int32x4_t vrshrq_n_s32(int32x4_t __a, const int __b);

int64x2_t vrshrq_n_s64(int64x2_t __a, const int __b);

uint8x16_t vrshrq_n_u8(uint8x16_t __a, const int __b);

uint16x8_t vrshrq_n_u16(uint16x8_t __a, const int __b);

uint32x4_t vrshrq_n_u32(uint32x4_t __a, const int __b);

uint64x2_t vrshrq_n_u64(uint64x2_t __a, const int __b);

int8x8_t vshrn_n_s16(int16x8_t __a, const int __b);

int16x4_t vshrn_n_s32(int32x4_t __a, const int __b);

int32x2_t vshrn_n_s64(int64x2_t __a, const int __b);

uint8x8_t vshrn_n_u16(uint16x8_t __a, const int __b);

uint16x4_t vshrn_n_u32(uint32x4_t __a, const int __b);

uint32x2_t vshrn_n_u64(uint64x2_t __a, const int __b);

int8x8_t vrshrn_n_s16(int16x8_t __a, const int __b);

int16x4_t vrshrn_n_s32(int32x4_t __a, const int __b);

int32x2_t vrshrn_n_s64(int64x2_t __a, const int __b);

uint8x8_t vrshrn_n_u16(uint16x8_t __a, const int __b);

uint16x4_t vrshrn_n_u32(uint32x4_t __a, const int __b);

uint32x2_t vrshrn_n_u64(uint64x2_t __a, const int __b);

int8x8_t vqshrn_n_s16(int16x8_t __a, const int __b);

int16x4_t vqshrn_n_s32(int32x4_t __a, const int __b);

int32x2_t vqshrn_n_s64(int64x2_t __a, const int __b);

uint8x8_t vqshrn_n_u16(uint16x8_t __a, const int __b);

uint16x4_t vqshrn_n_u32(uint32x4_t __a, const int __b);

uint32x2_t vqshrn_n_u64(uint64x2_t __a, const int __b);

int8x8_t vqrshrn_n_s16(int16x8_t __a, const int __b);

int16x4_t vqrshrn_n_s32(int32x4_t __a, const int __b);

int32x2_t vqrshrn_n_s64(int64x2_t __a, const int __b);

uint8x8_t vqrshrn_n_u16(uint16x8_t __a, const int __b);

uint16x4_t vqrshrn_n_u32(uint32x4_t __a, const int __b);

uint32x2_t vqrshrn_n_u64(uint64x2_t __a, const int __b);

uint8x8_t vqshrun_n_s16(int16x8_t __a, const int __b);

uint16x4_t vqshrun_n_s32(int32x4_t __a, const int __b);

uint32x2_t vqshrun_n_s64(int64x2_t __a, const int __b);

uint8x8_t vqrshrun_n_s16(int16x8_t __a, const int __b);

uint16x4_t vqrshrun_n_s32(int32x4_t __a, const int __b);

uint32x2_t vqrshrun_n_s64(int64x2_t __a, const int __b);

int8x8_t vshl_n_s8(int8x8_t __a, const int __b);

int16x4_t vshl_n_s16(int16x4_t __a, const int __b);

int32x2_t vshl_n_s32(int32x2_t __a, const int __b);

int64x1_t vshl_n_s64(int64x1_t __a, const int __b);

uint8x8_t vshl_n_u8(uint8x8_t __a, const int __b);

uint16x4_t vshl_n_u16(uint16x4_t __a, const int __b);

uint32x2_t vshl_n_u32(uint32x2_t __a, const int __b);

uint64x1_t vshl_n_u64(uint64x1_t __a, const int __b);

int8x16_t vshlq_n_s8(int8x16_t __a, const int __b);

int16x8_t vshlq_n_s16(int16x8_t __a, const int __b);

int32x4_t vshlq_n_s32(int32x4_t __a, const int __b);

int64x2_t vshlq_n_s64(int64x2_t __a, const int __b);

uint8x16_t vshlq_n_u8(uint8x16_t __a, const int __b);

uint16x8_t vshlq_n_u16(uint16x8_t __a, const int __b);

uint32x4_t vshlq_n_u32(uint32x4_t __a, const int __b);

uint64x2_t vshlq_n_u64(uint64x2_t __a, const int __b);

int8x8_t vqshl_n_s8(int8x8_t __a, const int __b);

int16x4_t vqshl_n_s16(int16x4_t __a, const int __b);

int32x2_t vqshl_n_s32(int32x2_t __a, const int __b);

int64x1_t vqshl_n_s64(int64x1_t __a, const int __b);

uint8x8_t vqshl_n_u8(uint8x8_t __a, const int __b);

uint16x4_t vqshl_n_u16(uint16x4_t __a, const int __b);

uint32x2_t vqshl_n_u32(uint32x2_t __a, const int __b);

uint64x1_t vqshl_n_u64(uint64x1_t __a, const int __b);

int8x16_t vqshlq_n_s8(int8x16_t __a, const int __b);

int16x8_t vqshlq_n_s16(int16x8_t __a, const int __b);

int32x4_t vqshlq_n_s32(int32x4_t __a, const int __b);

int64x2_t vqshlq_n_s64(int64x2_t __a, const int __b);

uint8x16_t vqshlq_n_u8(uint8x16_t __a, const int __b);

uint16x8_t vqshlq_n_u16(uint16x8_t __a, const int __b);

uint32x4_t vqshlq_n_u32(uint32x4_t __a, const int __b);

uint64x2_t vqshlq_n_u64(uint64x2_t __a, const int __b);

uint8x8_t vqshlu_n_s8(int8x8_t __a, const int __b);

uint16x4_t vqshlu_n_s16(int16x4_t __a, const int __b);

uint32x2_t vqshlu_n_s32(int32x2_t __a, const int __b);

uint64x1_t vqshlu_n_s64(int64x1_t __a, const int __b);

uint8x16_t vqshluq_n_s8(int8x16_t __a, const int __b);

uint16x8_t vqshluq_n_s16(int16x8_t __a, const int __b);

uint32x4_t vqshluq_n_s32(int32x4_t __a, const int __b);

uint64x2_t vqshluq_n_s64(int64x2_t __a, const int __b);

int16x8_t vshll_n_s8(int8x8_t __a, const int __b);

int32x4_t vshll_n_s16(int16x4_t __a, const int __b);

int64x2_t vshll_n_s32(int32x2_t __a, const int __b);

uint16x8_t vshll_n_u8(uint8x8_t __a, const int __b);

uint32x4_t vshll_n_u16(uint16x4_t __a, const int __b);

uint64x2_t vshll_n_u32(uint32x2_t __a, const int __b);

int8x8_t vsra_n_s8(int8x8_t __a, int8x8_t __b, const int __c);

int16x4_t vsra_n_s16(int16x4_t __a, int16x4_t __b, const int __c);

int32x2_t vsra_n_s32(int32x2_t __a, int32x2_t __b, const int __c);

int64x1_t vsra_n_s64(int64x1_t __a, int64x1_t __b, const int __c);

uint8x8_t vsra_n_u8(uint8x8_t __a, uint8x8_t __b, const int __c);

uint16x4_t vsra_n_u16(uint16x4_t __a, uint16x4_t __b, const int __c);

uint32x2_t vsra_n_u32(uint32x2_t __a, uint32x2_t __b, const int __c);

uint64x1_t vsra_n_u64(uint64x1_t __a, uint64x1_t __b, const int __c);

int8x16_t vsraq_n_s8(int8x16_t __a, int8x16_t __b, const int __c);

int16x8_t vsraq_n_s16(int16x8_t __a, int16x8_t __b, const int __c);

int32x4_t vsraq_n_s32(int32x4_t __a, int32x4_t __b, const int __c);

int64x2_t vsraq_n_s64(int64x2_t __a, int64x2_t __b, const int __c);

uint8x16_t vsraq_n_u8(uint8x16_t __a, uint8x16_t __b, const int __c);

uint16x8_t vsraq_n_u16(uint16x8_t __a, uint16x8_t __b, const int __c);

uint32x4_t vsraq_n_u32(uint32x4_t __a, uint32x4_t __b, const int __c);

uint64x2_t vsraq_n_u64(uint64x2_t __a, uint64x2_t __b, const int __c);

int8x8_t vrsra_n_s8(int8x8_t __a, int8x8_t __b, const int __c);

int16x4_t vrsra_n_s16(int16x4_t __a, int16x4_t __b, const int __c);

int32x2_t vrsra_n_s32(int32x2_t __a, int32x2_t __b, const int __c);

int64x1_t vrsra_n_s64(int64x1_t __a, int64x1_t __b, const int __c);

uint8x8_t vrsra_n_u8(uint8x8_t __a, uint8x8_t __b, const int __c);

uint16x4_t vrsra_n_u16(uint16x4_t __a, uint16x4_t __b, const int __c);

uint32x2_t vrsra_n_u32(uint32x2_t __a, uint32x2_t __b, const int __c);

uint64x1_t vrsra_n_u64(uint64x1_t __a, uint64x1_t __b, const int __c);

int8x16_t vrsraq_n_s8(int8x16_t __a, int8x16_t __b, const int __c);

int16x8_t vrsraq_n_s16(int16x8_t __a, int16x8_t __b, const int __c);

int32x4_t vrsraq_n_s32(int32x4_t __a, int32x4_t __b, const int __c);

int64x2_t vrsraq_n_s64(int64x2_t __a, int64x2_t __b, const int __c);

uint8x16_t vrsraq_n_u8(uint8x16_t __a, uint8x16_t __b, const int __c);

uint16x8_t vrsraq_n_u16(uint16x8_t __a, uint16x8_t __b, const int __c);

uint32x4_t vrsraq_n_u32(uint32x4_t __a, uint32x4_t __b, const int __c);

uint64x2_t vrsraq_n_u64(uint64x2_t __a, uint64x2_t __b, const int __c);

poly64x1_t vsri_n_p64(poly64x1_t __a, poly64x1_t __b, const int __c);

int8x8_t vsri_n_s8(int8x8_t __a, int8x8_t __b, const int __c);

int16x4_t vsri_n_s16(int16x4_t __a, int16x4_t __b, const int __c);

int32x2_t vsri_n_s32(int32x2_t __a, int32x2_t __b, const int __c);

int64x1_t vsri_n_s64(int64x1_t __a, int64x1_t __b, const int __c);

uint8x8_t vsri_n_u8(uint8x8_t __a, uint8x8_t __b, const int __c);

uint16x4_t vsri_n_u16(uint16x4_t __a, uint16x4_t __b, const int __c);

uint32x2_t vsri_n_u32(uint32x2_t __a, uint32x2_t __b, const int __c);

uint64x1_t vsri_n_u64(uint64x1_t __a, uint64x1_t __b, const int __c);

poly8x8_t vsri_n_p8(poly8x8_t __a, poly8x8_t __b, const int __c);

poly16x4_t vsri_n_p16(poly16x4_t __a, poly16x4_t __b, const int __c);

poly64x2_t vsriq_n_p64(poly64x2_t __a, poly64x2_t __b, const int __c);

int8x16_t vsriq_n_s8(int8x16_t __a, int8x16_t __b, const int __c);

int16x8_t vsriq_n_s16(int16x8_t __a, int16x8_t __b, const int __c);

int32x4_t vsriq_n_s32(int32x4_t __a, int32x4_t __b, const int __c);

int64x2_t vsriq_n_s64(int64x2_t __a, int64x2_t __b, const int __c);

uint8x16_t vsriq_n_u8(uint8x16_t __a, uint8x16_t __b, const int __c);

uint16x8_t vsriq_n_u16(uint16x8_t __a, uint16x8_t __b, const int __c);

uint32x4_t vsriq_n_u32(uint32x4_t __a, uint32x4_t __b, const int __c);

uint64x2_t vsriq_n_u64(uint64x2_t __a, uint64x2_t __b, const int __c);

poly8x16_t vsriq_n_p8(poly8x16_t __a, poly8x16_t __b, const int __c);

poly16x8_t vsriq_n_p16(poly16x8_t __a, poly16x8_t __b, const int __c);

poly64x1_t vsli_n_p64(poly64x1_t __a, poly64x1_t __b, const int __c);

int8x8_t vsli_n_s8(int8x8_t __a, int8x8_t __b, const int __c);

int16x4_t vsli_n_s16(int16x4_t __a, int16x4_t __b, const int __c);

int32x2_t vsli_n_s32(int32x2_t __a, int32x2_t __b, const int __c);

int64x1_t vsli_n_s64(int64x1_t __a, int64x1_t __b, const int __c);

uint8x8_t vsli_n_u8(uint8x8_t __a, uint8x8_t __b, const int __c);

uint16x4_t vsli_n_u16(uint16x4_t __a, uint16x4_t __b, const int __c);

uint32x2_t vsli_n_u32(uint32x2_t __a, uint32x2_t __b, const int __c);

uint64x1_t vsli_n_u64(uint64x1_t __a, uint64x1_t __b, const int __c);

poly8x8_t vsli_n_p8(poly8x8_t __a, poly8x8_t __b, const int __c);

poly16x4_t vsli_n_p16(poly16x4_t __a, poly16x4_t __b, const int __c);

poly64x2_t vsliq_n_p64(poly64x2_t __a, poly64x2_t __b, const int __c);

int8x16_t vsliq_n_s8(int8x16_t __a, int8x16_t __b, const int __c);

int16x8_t vsliq_n_s16(int16x8_t __a, int16x8_t __b, const int __c);

int32x4_t vsliq_n_s32(int32x4_t __a, int32x4_t __b, const int __c);

int64x2_t vsliq_n_s64(int64x2_t __a, int64x2_t __b, const int __c);

uint8x16_t vsliq_n_u8(uint8x16_t __a, uint8x16_t __b, const int __c);

uint16x8_t vsliq_n_u16(uint16x8_t __a, uint16x8_t __b, const int __c);

uint32x4_t vsliq_n_u32(uint32x4_t __a, uint32x4_t __b, const int __c);

uint64x2_t vsliq_n_u64(uint64x2_t __a, uint64x2_t __b, const int __c);

poly8x16_t vsliq_n_p8(poly8x16_t __a, poly8x16_t __b, const int __c);

poly16x8_t vsliq_n_p16(poly16x8_t __a, poly16x8_t __b, const int __c);

int8x8_t vneg_s8(int8x8_t __a);

int16x4_t vneg_s16(int16x4_t __a);

int32x2_t vneg_s32(int32x2_t __a);

float32x2_t vneg_f32(float32x2_t __a);

int8x16_t vnegq_s8(int8x16_t __a);

int16x8_t vnegq_s16(int16x8_t __a);

int32x4_t vnegq_s32(int32x4_t __a);

float32x4_t vnegq_f32(float32x4_t __a);

int8x8_t vqneg_s8(int8x8_t __a);

int16x4_t vqneg_s16(int16x4_t __a);

int32x2_t vqneg_s32(int32x2_t __a);

int8x16_t vqnegq_s8(int8x16_t __a);

int16x8_t vqnegq_s16(int16x8_t __a);

int32x4_t vqnegq_s32(int32x4_t __a);

int8x8_t vmvn_s8(int8x8_t __a);

int16x4_t vmvn_s16(int16x4_t __a);

int32x2_t vmvn_s32(int32x2_t __a);

uint8x8_t vmvn_u8(uint8x8_t __a);

uint16x4_t vmvn_u16(uint16x4_t __a);

uint32x2_t vmvn_u32(uint32x2_t __a);

poly8x8_t vmvn_p8(poly8x8_t __a);

int8x16_t vmvnq_s8(int8x16_t __a);

int16x8_t vmvnq_s16(int16x8_t __a);

int32x4_t vmvnq_s32(int32x4_t __a);

uint8x16_t vmvnq_u8(uint8x16_t __a);

uint16x8_t vmvnq_u16(uint16x8_t __a);

uint32x4_t vmvnq_u32(uint32x4_t __a);

poly8x16_t vmvnq_p8(poly8x16_t __a);

int8x8_t vcls_s8(int8x8_t __a);

int16x4_t vcls_s16(int16x4_t __a);

int32x2_t vcls_s32(int32x2_t __a);

int8x16_t vclsq_s8(int8x16_t __a);

int16x8_t vclsq_s16(int16x8_t __a);

int32x4_t vclsq_s32(int32x4_t __a);

int8x8_t vclz_s8(int8x8_t __a);

int16x4_t vclz_s16(int16x4_t __a);

int32x2_t vclz_s32(int32x2_t __a);

uint8x8_t vclz_u8(uint8x8_t __a);

uint16x4_t vclz_u16(uint16x4_t __a);

uint32x2_t vclz_u32(uint32x2_t __a);

int8x16_t vclzq_s8(int8x16_t __a);

int16x8_t vclzq_s16(int16x8_t __a);

int32x4_t vclzq_s32(int32x4_t __a);

uint8x16_t vclzq_u8(uint8x16_t __a);

uint16x8_t vclzq_u16(uint16x8_t __a);

uint32x4_t vclzq_u32(uint32x4_t __a);

int8x8_t vcnt_s8(int8x8_t __a);

uint8x8_t vcnt_u8(uint8x8_t __a);

poly8x8_t vcnt_p8(poly8x8_t __a);

int8x16_t vcntq_s8(int8x16_t __a);

uint8x16_t vcntq_u8(uint8x16_t __a);

poly8x16_t vcntq_p8(poly8x16_t __a);

float32x2_t vrecpe_f32(float32x2_t __a);

uint32x2_t vrecpe_u32(uint32x2_t __a);

float32x4_t vrecpeq_f32(float32x4_t __a);

uint32x4_t vrecpeq_u32(uint32x4_t __a);

float32x2_t vrsqrte_f32(float32x2_t __a);

uint32x2_t vrsqrte_u32(uint32x2_t __a);

float32x4_t vrsqrteq_f32(float32x4_t __a);

uint32x4_t vrsqrteq_u32(uint32x4_t __a);

int8_t vget_lane_s8(int8x8_t __a, const int __b);

int16_t vget_lane_s16(int16x4_t __a, const int __b);

int32_t vget_lane_s32(int32x2_t __a, const int __b);

/* Functions cannot accept or return __FP16 types.  Even if the function
   were marked always-inline so there were no call sites, the declaration
   would nonetheless raise an error.  Hence, we must use a macro instead.  */

__extension__();

float32_t vget_lane_f32(float32x2_t __a, const int __b);

uint8_t vget_lane_u8(uint8x8_t __a, const int __b);

uint16_t vget_lane_u16(uint16x4_t __a, const int __b);

uint32_t vget_lane_u32(uint32x2_t __a, const int __b);

poly8_t vget_lane_p8(poly8x8_t __a, const int __b);

poly16_t vget_lane_p16(poly16x4_t __a, const int __b);

int64_t vget_lane_s64(int64x1_t __a, const int __b);

poly64_t vget_lane_p64(poly64x1_t __a, const int __b);

uint64_t vget_lane_u64(uint64x1_t __a, const int __b);

int8_t vgetq_lane_s8(int8x16_t __a, const int __b);

int16_t vgetq_lane_s16(int16x8_t __a, const int __b);

int32_t vgetq_lane_s32(int32x4_t __a, const int __b);

__extension__();

float32_t vgetq_lane_f32(float32x4_t __a, const int __b);

uint8_t vgetq_lane_u8(uint8x16_t __a, const int __b);

uint16_t vgetq_lane_u16(uint16x8_t __a, const int __b);

uint32_t vgetq_lane_u32(uint32x4_t __a, const int __b);

poly8_t vgetq_lane_p8(poly8x16_t __a, const int __b);

poly16_t vgetq_lane_p16(poly16x8_t __a, const int __b);

int64_t vgetq_lane_s64(int64x2_t __a, const int __b);

poly64_t vgetq_lane_p64(poly64x2_t __a, const int __b);

uint64_t vgetq_lane_u64(uint64x2_t __a, const int __b);

int8x8_t vset_lane_s8(int8_t __a, int8x8_t __b, const int __c);

int16x4_t vset_lane_s16(int16_t __a, int16x4_t __b, const int __c);

int32x2_t vset_lane_s32(int32_t __a, int32x2_t __b, const int __c);

__extension__();

float32x2_t vset_lane_f32(float32_t __a, float32x2_t __b, const int __c);

uint8x8_t vset_lane_u8(uint8_t __a, uint8x8_t __b, const int __c);

uint16x4_t vset_lane_u16(uint16_t __a, uint16x4_t __b, const int __c);

uint32x2_t vset_lane_u32(uint32_t __a, uint32x2_t __b, const int __c);

poly8x8_t vset_lane_p8(poly8_t __a, poly8x8_t __b, const int __c);

poly16x4_t vset_lane_p16(poly16_t __a, poly16x4_t __b, const int __c);

int64x1_t vset_lane_s64(int64_t __a, int64x1_t __b, const int __c);

uint64x1_t vset_lane_u64(uint64_t __a, uint64x1_t __b, const int __c);

poly64x1_t vset_lane_p64(poly64_t __a, poly64x1_t __b, const int __c);

int8x16_t vsetq_lane_s8(int8_t __a, int8x16_t __b, const int __c);

int16x8_t vsetq_lane_s16(int16_t __a, int16x8_t __b, const int __c);

int32x4_t vsetq_lane_s32(int32_t __a, int32x4_t __b, const int __c);

__extension__();

float32x4_t vsetq_lane_f32(float32_t __a, float32x4_t __b, const int __c);

uint8x16_t vsetq_lane_u8(uint8_t __a, uint8x16_t __b, const int __c);

uint16x8_t vsetq_lane_u16(uint16_t __a, uint16x8_t __b, const int __c);

uint32x4_t vsetq_lane_u32(uint32_t __a, uint32x4_t __b, const int __c);

poly8x16_t vsetq_lane_p8(poly8_t __a, poly8x16_t __b, const int __c);

poly16x8_t vsetq_lane_p16(poly16_t __a, poly16x8_t __b, const int __c);

int64x2_t vsetq_lane_s64(int64_t __a, int64x2_t __b, const int __c);

uint64x2_t vsetq_lane_u64(uint64_t __a, uint64x2_t __b, const int __c);

poly64x2_t vsetq_lane_p64(poly64_t __a, poly64x2_t __b, const int __c);

poly64x1_t vcreate_p64(uint64_t __a);

int8x8_t vcreate_s8(uint64_t __a);

int16x4_t vcreate_s16(uint64_t __a);

int32x2_t vcreate_s32(uint64_t __a);

int64x1_t vcreate_s64(uint64_t __a);

float16x4_t vcreate_f16(uint64_t __a);

float32x2_t vcreate_f32(uint64_t __a);

uint8x8_t vcreate_u8(uint64_t __a);

uint16x4_t vcreate_u16(uint64_t __a);

uint32x2_t vcreate_u32(uint64_t __a);

uint64x1_t vcreate_u64(uint64_t __a);

poly8x8_t vcreate_p8(uint64_t __a);

poly16x4_t vcreate_p16(uint64_t __a);

int8x8_t vdup_n_s8(int8_t __a);

int16x4_t vdup_n_s16(int16_t __a);

int32x2_t vdup_n_s32(int32_t __a);

float32x2_t vdup_n_f32(float32_t __a);

uint8x8_t vdup_n_u8(uint8_t __a);

uint16x4_t vdup_n_u16(uint16_t __a);

uint32x2_t vdup_n_u32(uint32_t __a);

poly8x8_t vdup_n_p8(poly8_t __a);

poly16x4_t vdup_n_p16(poly16_t __a);

poly64x1_t vdup_n_p64(poly64_t __a);

int64x1_t vdup_n_s64(int64_t __a);

uint64x1_t vdup_n_u64(uint64_t __a);

poly64x2_t vdupq_n_p64(poly64_t __a);

int8x16_t vdupq_n_s8(int8_t __a);

int16x8_t vdupq_n_s16(int16_t __a);

int32x4_t vdupq_n_s32(int32_t __a);

float32x4_t vdupq_n_f32(float32_t __a);

uint8x16_t vdupq_n_u8(uint8_t __a);

uint16x8_t vdupq_n_u16(uint16_t __a);

uint32x4_t vdupq_n_u32(uint32_t __a);

poly8x16_t vdupq_n_p8(poly8_t __a);

poly16x8_t vdupq_n_p16(poly16_t __a);

int64x2_t vdupq_n_s64(int64_t __a);

uint64x2_t vdupq_n_u64(uint64_t __a);

int8x8_t vmov_n_s8(int8_t __a);

int16x4_t vmov_n_s16(int16_t __a);

int32x2_t vmov_n_s32(int32_t __a);

float32x2_t vmov_n_f32(float32_t __a);

uint8x8_t vmov_n_u8(uint8_t __a);

uint16x4_t vmov_n_u16(uint16_t __a);

uint32x2_t vmov_n_u32(uint32_t __a);

poly8x8_t vmov_n_p8(poly8_t __a);

poly16x4_t vmov_n_p16(poly16_t __a);

int64x1_t vmov_n_s64(int64_t __a);

uint64x1_t vmov_n_u64(uint64_t __a);

int8x16_t vmovq_n_s8(int8_t __a);

int16x8_t vmovq_n_s16(int16_t __a);

int32x4_t vmovq_n_s32(int32_t __a);

float32x4_t vmovq_n_f32(float32_t __a);

uint8x16_t vmovq_n_u8(uint8_t __a);

uint16x8_t vmovq_n_u16(uint16_t __a);

uint32x4_t vmovq_n_u32(uint32_t __a);

poly8x16_t vmovq_n_p8(poly8_t __a);

poly16x8_t vmovq_n_p16(poly16_t __a);

int64x2_t vmovq_n_s64(int64_t __a);

uint64x2_t vmovq_n_u64(uint64_t __a);

int8x8_t vdup_lane_s8(int8x8_t __a, const int __b);

int16x4_t vdup_lane_s16(int16x4_t __a, const int __b);

int32x2_t vdup_lane_s32(int32x2_t __a, const int __b);

float32x2_t vdup_lane_f32(float32x2_t __a, const int __b);

uint8x8_t vdup_lane_u8(uint8x8_t __a, const int __b);

uint16x4_t vdup_lane_u16(uint16x4_t __a, const int __b);

uint32x2_t vdup_lane_u32(uint32x2_t __a, const int __b);

poly8x8_t vdup_lane_p8(poly8x8_t __a, const int __b);

poly16x4_t vdup_lane_p16(poly16x4_t __a, const int __b);

poly64x1_t vdup_lane_p64(poly64x1_t __a, const int __b);

int64x1_t vdup_lane_s64(int64x1_t __a, const int __b);

uint64x1_t vdup_lane_u64(uint64x1_t __a, const int __b);

int8x16_t vdupq_lane_s8(int8x8_t __a, const int __b);

int16x8_t vdupq_lane_s16(int16x4_t __a, const int __b);

int32x4_t vdupq_lane_s32(int32x2_t __a, const int __b);

float32x4_t vdupq_lane_f32(float32x2_t __a, const int __b);

uint8x16_t vdupq_lane_u8(uint8x8_t __a, const int __b);

uint16x8_t vdupq_lane_u16(uint16x4_t __a, const int __b);

uint32x4_t vdupq_lane_u32(uint32x2_t __a, const int __b);

poly8x16_t vdupq_lane_p8(poly8x8_t __a, const int __b);

poly16x8_t vdupq_lane_p16(poly16x4_t __a, const int __b);

poly64x2_t vdupq_lane_p64(poly64x1_t __a, const int __b);

int64x2_t vdupq_lane_s64(int64x1_t __a, const int __b);

uint64x2_t vdupq_lane_u64(uint64x1_t __a, const int __b);

poly64x2_t vcombine_p64(poly64x1_t __a, poly64x1_t __b);

int8x16_t vcombine_s8(int8x8_t __a, int8x8_t __b);

int16x8_t vcombine_s16(int16x4_t __a, int16x4_t __b);

int32x4_t vcombine_s32(int32x2_t __a, int32x2_t __b);

int64x2_t vcombine_s64(int64x1_t __a, int64x1_t __b);

float16x8_t vcombine_f16(float16x4_t __a, float16x4_t __b);

float32x4_t vcombine_f32(float32x2_t __a, float32x2_t __b);

uint8x16_t vcombine_u8(uint8x8_t __a, uint8x8_t __b);

uint16x8_t vcombine_u16(uint16x4_t __a, uint16x4_t __b);

uint32x4_t vcombine_u32(uint32x2_t __a, uint32x2_t __b);

uint64x2_t vcombine_u64(uint64x1_t __a, uint64x1_t __b);

poly8x16_t vcombine_p8(poly8x8_t __a, poly8x8_t __b);

poly16x8_t vcombine_p16(poly16x4_t __a, poly16x4_t __b);

poly64x1_t vget_high_p64(poly64x2_t __a);

int8x8_t vget_high_s8(int8x16_t __a);

int16x4_t vget_high_s16(int16x8_t __a);

int32x2_t vget_high_s32(int32x4_t __a);

int64x1_t vget_high_s64(int64x2_t __a);

float16x4_t vget_high_f16(float16x8_t __a);

float32x2_t vget_high_f32(float32x4_t __a);

uint8x8_t vget_high_u8(uint8x16_t __a);

uint16x4_t vget_high_u16(uint16x8_t __a);

uint32x2_t vget_high_u32(uint32x4_t __a);

uint64x1_t vget_high_u64(uint64x2_t __a);

poly8x8_t vget_high_p8(poly8x16_t __a);

poly16x4_t vget_high_p16(poly16x8_t __a);

int8x8_t vget_low_s8(int8x16_t __a);

int16x4_t vget_low_s16(int16x8_t __a);

int32x2_t vget_low_s32(int32x4_t __a);

float16x4_t vget_low_f16(float16x8_t __a);

float32x2_t vget_low_f32(float32x4_t __a);

uint8x8_t vget_low_u8(uint8x16_t __a);

uint16x4_t vget_low_u16(uint16x8_t __a);

uint32x2_t vget_low_u32(uint32x4_t __a);

poly8x8_t vget_low_p8(poly8x16_t __a);

poly16x4_t vget_low_p16(poly16x8_t __a);

poly64x1_t vget_low_p64(poly64x2_t __a);

int64x1_t vget_low_s64(int64x2_t __a);

uint64x1_t vget_low_u64(uint64x2_t __a);

int32x2_t vcvt_s32_f32(float32x2_t __a);

float32x2_t vcvt_f32_s32(int32x2_t __a);

float32x2_t vcvt_f32_u32(uint32x2_t __a);

uint32x2_t vcvt_u32_f32(float32x2_t __a);

int32x4_t vcvtq_s32_f32(float32x4_t __a);

float32x4_t vcvtq_f32_s32(int32x4_t __a);

float32x4_t vcvtq_f32_u32(uint32x4_t __a);

uint32x4_t vcvtq_u32_f32(float32x4_t __a);

float16x4_t vcvt_f16_f32(float32x4_t __a);

float32x4_t vcvt_f32_f16(float16x4_t __a);

int32x2_t vcvt_n_s32_f32(float32x2_t __a, const int __b);

float32x2_t vcvt_n_f32_s32(int32x2_t __a, const int __b);

float32x2_t vcvt_n_f32_u32(uint32x2_t __a, const int __b);

uint32x2_t vcvt_n_u32_f32(float32x2_t __a, const int __b);

int32x4_t vcvtq_n_s32_f32(float32x4_t __a, const int __b);

float32x4_t vcvtq_n_f32_s32(int32x4_t __a, const int __b);

float32x4_t vcvtq_n_f32_u32(uint32x4_t __a, const int __b);

uint32x4_t vcvtq_n_u32_f32(float32x4_t __a, const int __b);

int8x8_t vmovn_s16(int16x8_t __a);

int16x4_t vmovn_s32(int32x4_t __a);

int32x2_t vmovn_s64(int64x2_t __a);

uint8x8_t vmovn_u16(uint16x8_t __a);

uint16x4_t vmovn_u32(uint32x4_t __a);

uint32x2_t vmovn_u64(uint64x2_t __a);

int8x8_t vqmovn_s16(int16x8_t __a);

int16x4_t vqmovn_s32(int32x4_t __a);

int32x2_t vqmovn_s64(int64x2_t __a);

uint8x8_t vqmovn_u16(uint16x8_t __a);

uint16x4_t vqmovn_u32(uint32x4_t __a);

uint32x2_t vqmovn_u64(uint64x2_t __a);

uint8x8_t vqmovun_s16(int16x8_t __a);

uint16x4_t vqmovun_s32(int32x4_t __a);

uint32x2_t vqmovun_s64(int64x2_t __a);

int16x8_t vmovl_s8(int8x8_t __a);

int32x4_t vmovl_s16(int16x4_t __a);

int64x2_t vmovl_s32(int32x2_t __a);

uint16x8_t vmovl_u8(uint8x8_t __a);

uint32x4_t vmovl_u16(uint16x4_t __a);

uint64x2_t vmovl_u32(uint32x2_t __a);

int8x8_t vtbl1_s8(int8x8_t __a, int8x8_t __b);

uint8x8_t vtbl1_u8(uint8x8_t __a, uint8x8_t __b);

poly8x8_t vtbl1_p8(poly8x8_t __a, uint8x8_t __b);

int8x8_t vtbl2_s8(int8x8x2_t __a, int8x8_t __b);

uint8x8_t vtbl2_u8(uint8x8x2_t __a, uint8x8_t __b);

poly8x8_t vtbl2_p8(poly8x8x2_t __a, uint8x8_t __b);

int8x8_t vtbl3_s8(int8x8x3_t __a, int8x8_t __b);

uint8x8_t vtbl3_u8(uint8x8x3_t __a, uint8x8_t __b);

poly8x8_t vtbl3_p8(poly8x8x3_t __a, uint8x8_t __b);

int8x8_t vtbl4_s8(int8x8x4_t __a, int8x8_t __b);

uint8x8_t vtbl4_u8(uint8x8x4_t __a, uint8x8_t __b);

poly8x8_t vtbl4_p8(poly8x8x4_t __a, uint8x8_t __b);

int8x8_t vtbx1_s8(int8x8_t __a, int8x8_t __b, int8x8_t __c);

uint8x8_t vtbx1_u8(uint8x8_t __a, uint8x8_t __b, uint8x8_t __c);

poly8x8_t vtbx1_p8(poly8x8_t __a, poly8x8_t __b, uint8x8_t __c);

int8x8_t vtbx2_s8(int8x8_t __a, int8x8x2_t __b, int8x8_t __c);

uint8x8_t vtbx2_u8(uint8x8_t __a, uint8x8x2_t __b, uint8x8_t __c);

poly8x8_t vtbx2_p8(poly8x8_t __a, poly8x8x2_t __b, uint8x8_t __c);

int8x8_t vtbx3_s8(int8x8_t __a, int8x8x3_t __b, int8x8_t __c);

uint8x8_t vtbx3_u8(uint8x8_t __a, uint8x8x3_t __b, uint8x8_t __c);

poly8x8_t vtbx3_p8(poly8x8_t __a, poly8x8x3_t __b, uint8x8_t __c);

int8x8_t vtbx4_s8(int8x8_t __a, int8x8x4_t __b, int8x8_t __c);

uint8x8_t vtbx4_u8(uint8x8_t __a, uint8x8x4_t __b, uint8x8_t __c);

poly8x8_t vtbx4_p8(poly8x8_t __a, poly8x8x4_t __b, uint8x8_t __c);

int16x4_t vmul_lane_s16(int16x4_t __a, int16x4_t __b, const int __c);

int32x2_t vmul_lane_s32(int32x2_t __a, int32x2_t __b, const int __c);

float32x2_t vmul_lane_f32(float32x2_t __a, float32x2_t __b, const int __c);

uint16x4_t vmul_lane_u16(uint16x4_t __a, uint16x4_t __b, const int __c);

uint32x2_t vmul_lane_u32(uint32x2_t __a, uint32x2_t __b, const int __c);

int16x8_t vmulq_lane_s16(int16x8_t __a, int16x4_t __b, const int __c);

int32x4_t vmulq_lane_s32(int32x4_t __a, int32x2_t __b, const int __c);

float32x4_t vmulq_lane_f32(float32x4_t __a, float32x2_t __b, const int __c);

uint16x8_t vmulq_lane_u16(uint16x8_t __a, uint16x4_t __b, const int __c);

uint32x4_t vmulq_lane_u32(uint32x4_t __a, uint32x2_t __b, const int __c);

int16x4_t vmla_lane_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c,
                        const int __d);

int32x2_t vmla_lane_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c,
                        const int __d);

float32x2_t vmla_lane_f32(float32x2_t __a, float32x2_t __b, float32x2_t __c,
                          const int __d);

uint16x4_t vmla_lane_u16(uint16x4_t __a, uint16x4_t __b, uint16x4_t __c,
                         const int __d);

uint32x2_t vmla_lane_u32(uint32x2_t __a, uint32x2_t __b, uint32x2_t __c,
                         const int __d);

int16x8_t vmlaq_lane_s16(int16x8_t __a, int16x8_t __b, int16x4_t __c,
                         const int __d);

int32x4_t vmlaq_lane_s32(int32x4_t __a, int32x4_t __b, int32x2_t __c,
                         const int __d);

float32x4_t vmlaq_lane_f32(float32x4_t __a, float32x4_t __b, float32x2_t __c,
                           const int __d);

uint16x8_t vmlaq_lane_u16(uint16x8_t __a, uint16x8_t __b, uint16x4_t __c,
                          const int __d);

uint32x4_t vmlaq_lane_u32(uint32x4_t __a, uint32x4_t __b, uint32x2_t __c,
                          const int __d);

int32x4_t vmlal_lane_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c,
                         const int __d);

int64x2_t vmlal_lane_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c,
                         const int __d);

uint32x4_t vmlal_lane_u16(uint32x4_t __a, uint16x4_t __b, uint16x4_t __c,
                          const int __d);

uint64x2_t vmlal_lane_u32(uint64x2_t __a, uint32x2_t __b, uint32x2_t __c,
                          const int __d);

int32x4_t vqdmlal_lane_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c,
                           const int __d);

int64x2_t vqdmlal_lane_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c,
                           const int __d);

int16x4_t vmls_lane_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c,
                        const int __d);

int32x2_t vmls_lane_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c,
                        const int __d);

float32x2_t vmls_lane_f32(float32x2_t __a, float32x2_t __b, float32x2_t __c,
                          const int __d);

uint16x4_t vmls_lane_u16(uint16x4_t __a, uint16x4_t __b, uint16x4_t __c,
                         const int __d);

uint32x2_t vmls_lane_u32(uint32x2_t __a, uint32x2_t __b, uint32x2_t __c,
                         const int __d);

int16x8_t vmlsq_lane_s16(int16x8_t __a, int16x8_t __b, int16x4_t __c,
                         const int __d);

int32x4_t vmlsq_lane_s32(int32x4_t __a, int32x4_t __b, int32x2_t __c,
                         const int __d);

float32x4_t vmlsq_lane_f32(float32x4_t __a, float32x4_t __b, float32x2_t __c,
                           const int __d);

uint16x8_t vmlsq_lane_u16(uint16x8_t __a, uint16x8_t __b, uint16x4_t __c,
                          const int __d);

uint32x4_t vmlsq_lane_u32(uint32x4_t __a, uint32x4_t __b, uint32x2_t __c,
                          const int __d);

int32x4_t vmlsl_lane_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c,
                         const int __d);

int64x2_t vmlsl_lane_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c,
                         const int __d);

uint32x4_t vmlsl_lane_u16(uint32x4_t __a, uint16x4_t __b, uint16x4_t __c,
                          const int __d);

uint64x2_t vmlsl_lane_u32(uint64x2_t __a, uint32x2_t __b, uint32x2_t __c,
                          const int __d);

int32x4_t vqdmlsl_lane_s16(int32x4_t __a, int16x4_t __b, int16x4_t __c,
                           const int __d);

int64x2_t vqdmlsl_lane_s32(int64x2_t __a, int32x2_t __b, int32x2_t __c,
                           const int __d);

int32x4_t vmull_lane_s16(int16x4_t __a, int16x4_t __b, const int __c);

int64x2_t vmull_lane_s32(int32x2_t __a, int32x2_t __b, const int __c);

uint32x4_t vmull_lane_u16(uint16x4_t __a, uint16x4_t __b, const int __c);

uint64x2_t vmull_lane_u32(uint32x2_t __a, uint32x2_t __b, const int __c);

int32x4_t vqdmull_lane_s16(int16x4_t __a, int16x4_t __b, const int __c);

int64x2_t vqdmull_lane_s32(int32x2_t __a, int32x2_t __b, const int __c);

int16x8_t vqdmulhq_lane_s16(int16x8_t __a, int16x4_t __b, const int __c);

int32x4_t vqdmulhq_lane_s32(int32x4_t __a, int32x2_t __b, const int __c);

int16x4_t vqdmulh_lane_s16(int16x4_t __a, int16x4_t __b, const int __c);

int32x2_t vqdmulh_lane_s32(int32x2_t __a, int32x2_t __b, const int __c);

int16x8_t vqrdmulhq_lane_s16(int16x8_t __a, int16x4_t __b, const int __c);

int32x4_t vqrdmulhq_lane_s32(int32x4_t __a, int32x2_t __b, const int __c);

int16x4_t vqrdmulh_lane_s16(int16x4_t __a, int16x4_t __b, const int __c);

int32x2_t vqrdmulh_lane_s32(int32x2_t __a, int32x2_t __b, const int __c);

int16x8_t vqrdmlahq_lane_s16(int16x8_t __a, int16x8_t __b, int16x4_t __c,
                             const int __d);

int32x4_t vqrdmlahq_lane_s32(int32x4_t __a, int32x4_t __b, int32x2_t __c,
                             const int __d);

int16x4_t vqrdmlah_lane_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c,
                            const int __d);

int32x2_t vqrdmlah_lane_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c,
                            const int __d);

int16x8_t vqrdmlshq_lane_s16(int16x8_t __a, int16x8_t __b, int16x4_t __c,
                             const int __d);

int32x4_t vqrdmlshq_lane_s32(int32x4_t __a, int32x4_t __b, int32x2_t __c,
                             const int __d);

int16x4_t vqrdmlsh_lane_s16(int16x4_t __a, int16x4_t __b, int16x4_t __c,
                            const int __d);

int32x2_t vqrdmlsh_lane_s32(int32x2_t __a, int32x2_t __b, int32x2_t __c,
                            const int __d);

int16x4_t vmul_n_s16(int16x4_t __a, int16_t __b);

int32x2_t vmul_n_s32(int32x2_t __a, int32_t __b);

float32x2_t vmul_n_f32(float32x2_t __a, float32_t __b);

uint16x4_t vmul_n_u16(uint16x4_t __a, uint16_t __b);

uint32x2_t vmul_n_u32(uint32x2_t __a, uint32_t __b);

int16x8_t vmulq_n_s16(int16x8_t __a, int16_t __b);

int32x4_t vmulq_n_s32(int32x4_t __a, int32_t __b);

float32x4_t vmulq_n_f32(float32x4_t __a, float32_t __b);

uint16x8_t vmulq_n_u16(uint16x8_t __a, uint16_t __b);

uint32x4_t vmulq_n_u32(uint32x4_t __a, uint32_t __b);

int32x4_t vmull_n_s16(int16x4_t __a, int16_t __b);

int64x2_t vmull_n_s32(int32x2_t __a, int32_t __b);

uint32x4_t vmull_n_u16(uint16x4_t __a, uint16_t __b);

uint64x2_t vmull_n_u32(uint32x2_t __a, uint32_t __b);

int32x4_t vqdmull_n_s16(int16x4_t __a, int16_t __b);

int64x2_t vqdmull_n_s32(int32x2_t __a, int32_t __b);

int16x8_t vqdmulhq_n_s16(int16x8_t __a, int16_t __b);

int32x4_t vqdmulhq_n_s32(int32x4_t __a, int32_t __b);

int16x4_t vqdmulh_n_s16(int16x4_t __a, int16_t __b);

int32x2_t vqdmulh_n_s32(int32x2_t __a, int32_t __b);

int16x8_t vqrdmulhq_n_s16(int16x8_t __a, int16_t __b);

int32x4_t vqrdmulhq_n_s32(int32x4_t __a, int32_t __b);

int16x4_t vqrdmulh_n_s16(int16x4_t __a, int16_t __b);

int32x2_t vqrdmulh_n_s32(int32x2_t __a, int32_t __b);

int16x4_t vmla_n_s16(int16x4_t __a, int16x4_t __b, int16_t __c);

int32x2_t vmla_n_s32(int32x2_t __a, int32x2_t __b, int32_t __c);

float32x2_t vmla_n_f32(float32x2_t __a, float32x2_t __b, float32_t __c);

uint16x4_t vmla_n_u16(uint16x4_t __a, uint16x4_t __b, uint16_t __c);

uint32x2_t vmla_n_u32(uint32x2_t __a, uint32x2_t __b, uint32_t __c);

int16x8_t vmlaq_n_s16(int16x8_t __a, int16x8_t __b, int16_t __c);

int32x4_t vmlaq_n_s32(int32x4_t __a, int32x4_t __b, int32_t __c);

float32x4_t vmlaq_n_f32(float32x4_t __a, float32x4_t __b, float32_t __c);

uint16x8_t vmlaq_n_u16(uint16x8_t __a, uint16x8_t __b, uint16_t __c);

uint32x4_t vmlaq_n_u32(uint32x4_t __a, uint32x4_t __b, uint32_t __c);

int32x4_t vmlal_n_s16(int32x4_t __a, int16x4_t __b, int16_t __c);

int64x2_t vmlal_n_s32(int64x2_t __a, int32x2_t __b, int32_t __c);

uint32x4_t vmlal_n_u16(uint32x4_t __a, uint16x4_t __b, uint16_t __c);

uint64x2_t vmlal_n_u32(uint64x2_t __a, uint32x2_t __b, uint32_t __c);

int32x4_t vqdmlal_n_s16(int32x4_t __a, int16x4_t __b, int16_t __c);

int64x2_t vqdmlal_n_s32(int64x2_t __a, int32x2_t __b, int32_t __c);

int16x4_t vmls_n_s16(int16x4_t __a, int16x4_t __b, int16_t __c);

int32x2_t vmls_n_s32(int32x2_t __a, int32x2_t __b, int32_t __c);

float32x2_t vmls_n_f32(float32x2_t __a, float32x2_t __b, float32_t __c);

uint16x4_t vmls_n_u16(uint16x4_t __a, uint16x4_t __b, uint16_t __c);

uint32x2_t vmls_n_u32(uint32x2_t __a, uint32x2_t __b, uint32_t __c);

int16x8_t vmlsq_n_s16(int16x8_t __a, int16x8_t __b, int16_t __c);

int32x4_t vmlsq_n_s32(int32x4_t __a, int32x4_t __b, int32_t __c);

float32x4_t vmlsq_n_f32(float32x4_t __a, float32x4_t __b, float32_t __c);

uint16x8_t vmlsq_n_u16(uint16x8_t __a, uint16x8_t __b, uint16_t __c);

uint32x4_t vmlsq_n_u32(uint32x4_t __a, uint32x4_t __b, uint32_t __c);

int32x4_t vmlsl_n_s16(int32x4_t __a, int16x4_t __b, int16_t __c);

int64x2_t vmlsl_n_s32(int64x2_t __a, int32x2_t __b, int32_t __c);

uint32x4_t vmlsl_n_u16(uint32x4_t __a, uint16x4_t __b, uint16_t __c);

uint64x2_t vmlsl_n_u32(uint64x2_t __a, uint32x2_t __b, uint32_t __c);

int32x4_t vqdmlsl_n_s16(int32x4_t __a, int16x4_t __b, int16_t __c);

int64x2_t vqdmlsl_n_s32(int64x2_t __a, int32x2_t __b, int32_t __c);

poly64x1_t vext_p64(poly64x1_t __a, poly64x1_t __b, const int __c);

int8x8_t vext_s8(int8x8_t __a, int8x8_t __b, const int __c);

int16x4_t vext_s16(int16x4_t __a, int16x4_t __b, const int __c);

int32x2_t vext_s32(int32x2_t __a, int32x2_t __b, const int __c);

int64x1_t vext_s64(int64x1_t __a, int64x1_t __b, const int __c);

float32x2_t vext_f32(float32x2_t __a, float32x2_t __b, const int __c);

uint8x8_t vext_u8(uint8x8_t __a, uint8x8_t __b, const int __c);

uint16x4_t vext_u16(uint16x4_t __a, uint16x4_t __b, const int __c);

uint32x2_t vext_u32(uint32x2_t __a, uint32x2_t __b, const int __c);

uint64x1_t vext_u64(uint64x1_t __a, uint64x1_t __b, const int __c);

poly8x8_t vext_p8(poly8x8_t __a, poly8x8_t __b, const int __c);

poly16x4_t vext_p16(poly16x4_t __a, poly16x4_t __b, const int __c);

poly64x2_t vextq_p64(poly64x2_t __a, poly64x2_t __b, const int __c);

int8x16_t vextq_s8(int8x16_t __a, int8x16_t __b, const int __c);

int16x8_t vextq_s16(int16x8_t __a, int16x8_t __b, const int __c);

int32x4_t vextq_s32(int32x4_t __a, int32x4_t __b, const int __c);

int64x2_t vextq_s64(int64x2_t __a, int64x2_t __b, const int __c);

float32x4_t vextq_f32(float32x4_t __a, float32x4_t __b, const int __c);

uint8x16_t vextq_u8(uint8x16_t __a, uint8x16_t __b, const int __c);

uint16x8_t vextq_u16(uint16x8_t __a, uint16x8_t __b, const int __c);

uint32x4_t vextq_u32(uint32x4_t __a, uint32x4_t __b, const int __c);

uint64x2_t vextq_u64(uint64x2_t __a, uint64x2_t __b, const int __c);

poly8x16_t vextq_p8(poly8x16_t __a, poly8x16_t __b, const int __c);

poly16x8_t vextq_p16(poly16x8_t __a, poly16x8_t __b, const int __c);

int8x8_t vrev64_s8(int8x8_t __a);

int16x4_t vrev64_s16(int16x4_t __a);

int32x2_t vrev64_s32(int32x2_t __a);

float32x2_t vrev64_f32(float32x2_t __a);

uint8x8_t vrev64_u8(uint8x8_t __a);

uint16x4_t vrev64_u16(uint16x4_t __a);

uint32x2_t vrev64_u32(uint32x2_t __a);

poly8x8_t vrev64_p8(poly8x8_t __a);

poly16x4_t vrev64_p16(poly16x4_t __a);

int8x16_t vrev64q_s8(int8x16_t __a);

int16x8_t vrev64q_s16(int16x8_t __a);

int32x4_t vrev64q_s32(int32x4_t __a);

float32x4_t vrev64q_f32(float32x4_t __a);

uint8x16_t vrev64q_u8(uint8x16_t __a);

uint16x8_t vrev64q_u16(uint16x8_t __a);

uint32x4_t vrev64q_u32(uint32x4_t __a);

poly8x16_t vrev64q_p8(poly8x16_t __a);

poly16x8_t vrev64q_p16(poly16x8_t __a);

int8x8_t vrev32_s8(int8x8_t __a);

int16x4_t vrev32_s16(int16x4_t __a);

uint8x8_t vrev32_u8(uint8x8_t __a);

uint16x4_t vrev32_u16(uint16x4_t __a);

poly8x8_t vrev32_p8(poly8x8_t __a);

poly16x4_t vrev32_p16(poly16x4_t __a);

int8x16_t vrev32q_s8(int8x16_t __a);

int16x8_t vrev32q_s16(int16x8_t __a);

uint8x16_t vrev32q_u8(uint8x16_t __a);

uint16x8_t vrev32q_u16(uint16x8_t __a);

poly8x16_t vrev32q_p8(poly8x16_t __a);

poly16x8_t vrev32q_p16(poly16x8_t __a);

int8x8_t vrev16_s8(int8x8_t __a);

uint8x8_t vrev16_u8(uint8x8_t __a);

poly8x8_t vrev16_p8(poly8x8_t __a);

int8x16_t vrev16q_s8(int8x16_t __a);

uint8x16_t vrev16q_u8(uint8x16_t __a);

poly8x16_t vrev16q_p8(poly8x16_t __a);

poly64x1_t vbsl_p64(uint64x1_t __a, poly64x1_t __b, poly64x1_t __c);

int8x8_t vbsl_s8(uint8x8_t __a, int8x8_t __b, int8x8_t __c);

int16x4_t vbsl_s16(uint16x4_t __a, int16x4_t __b, int16x4_t __c);

int32x2_t vbsl_s32(uint32x2_t __a, int32x2_t __b, int32x2_t __c);

int64x1_t vbsl_s64(uint64x1_t __a, int64x1_t __b, int64x1_t __c);

float32x2_t vbsl_f32(uint32x2_t __a, float32x2_t __b, float32x2_t __c);

uint8x8_t vbsl_u8(uint8x8_t __a, uint8x8_t __b, uint8x8_t __c);

uint16x4_t vbsl_u16(uint16x4_t __a, uint16x4_t __b, uint16x4_t __c);

uint32x2_t vbsl_u32(uint32x2_t __a, uint32x2_t __b, uint32x2_t __c);

uint64x1_t vbsl_u64(uint64x1_t __a, uint64x1_t __b, uint64x1_t __c);

poly8x8_t vbsl_p8(uint8x8_t __a, poly8x8_t __b, poly8x8_t __c);

poly16x4_t vbsl_p16(uint16x4_t __a, poly16x4_t __b, poly16x4_t __c);

poly64x2_t vbslq_p64(uint64x2_t __a, poly64x2_t __b, poly64x2_t __c);

int8x16_t vbslq_s8(uint8x16_t __a, int8x16_t __b, int8x16_t __c);

int16x8_t vbslq_s16(uint16x8_t __a, int16x8_t __b, int16x8_t __c);

int32x4_t vbslq_s32(uint32x4_t __a, int32x4_t __b, int32x4_t __c);

int64x2_t vbslq_s64(uint64x2_t __a, int64x2_t __b, int64x2_t __c);

float32x4_t vbslq_f32(uint32x4_t __a, float32x4_t __b, float32x4_t __c);

uint8x16_t vbslq_u8(uint8x16_t __a, uint8x16_t __b, uint8x16_t __c);

uint16x8_t vbslq_u16(uint16x8_t __a, uint16x8_t __b, uint16x8_t __c);

uint32x4_t vbslq_u32(uint32x4_t __a, uint32x4_t __b, uint32x4_t __c);

uint64x2_t vbslq_u64(uint64x2_t __a, uint64x2_t __b, uint64x2_t __c);

poly8x16_t vbslq_p8(uint8x16_t __a, poly8x16_t __b, poly8x16_t __c);

poly16x8_t vbslq_p16(uint16x8_t __a, poly16x8_t __b, poly16x8_t __c);

int8x8x2_t vtrn_s8(int8x8_t __a, int8x8_t __b);

int16x4x2_t vtrn_s16(int16x4_t __a, int16x4_t __b);

uint8x8x2_t vtrn_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4x2_t vtrn_u16(uint16x4_t __a, uint16x4_t __b);

poly8x8x2_t vtrn_p8(poly8x8_t __a, poly8x8_t __b);

poly16x4x2_t vtrn_p16(poly16x4_t __a, poly16x4_t __b);

int32x2x2_t vtrn_s32(int32x2_t __a, int32x2_t __b);

float32x2x2_t vtrn_f32(float32x2_t __a, float32x2_t __b);

uint32x2x2_t vtrn_u32(uint32x2_t __a, uint32x2_t __b);

int8x16x2_t vtrnq_s8(int8x16_t __a, int8x16_t __b);

int16x8x2_t vtrnq_s16(int16x8_t __a, int16x8_t __b);

int32x4x2_t vtrnq_s32(int32x4_t __a, int32x4_t __b);

float32x4x2_t vtrnq_f32(float32x4_t __a, float32x4_t __b);

uint8x16x2_t vtrnq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8x2_t vtrnq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4x2_t vtrnq_u32(uint32x4_t __a, uint32x4_t __b);

poly8x16x2_t vtrnq_p8(poly8x16_t __a, poly8x16_t __b);

poly16x8x2_t vtrnq_p16(poly16x8_t __a, poly16x8_t __b);

int8x8x2_t vzip_s8(int8x8_t __a, int8x8_t __b);

int16x4x2_t vzip_s16(int16x4_t __a, int16x4_t __b);

uint8x8x2_t vzip_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4x2_t vzip_u16(uint16x4_t __a, uint16x4_t __b);

poly8x8x2_t vzip_p8(poly8x8_t __a, poly8x8_t __b);

poly16x4x2_t vzip_p16(poly16x4_t __a, poly16x4_t __b);

int32x2x2_t vzip_s32(int32x2_t __a, int32x2_t __b);

float32x2x2_t vzip_f32(float32x2_t __a, float32x2_t __b);

uint32x2x2_t vzip_u32(uint32x2_t __a, uint32x2_t __b);

int8x16x2_t vzipq_s8(int8x16_t __a, int8x16_t __b);

int16x8x2_t vzipq_s16(int16x8_t __a, int16x8_t __b);

int32x4x2_t vzipq_s32(int32x4_t __a, int32x4_t __b);

float32x4x2_t vzipq_f32(float32x4_t __a, float32x4_t __b);

uint8x16x2_t vzipq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8x2_t vzipq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4x2_t vzipq_u32(uint32x4_t __a, uint32x4_t __b);

poly8x16x2_t vzipq_p8(poly8x16_t __a, poly8x16_t __b);

poly16x8x2_t vzipq_p16(poly16x8_t __a, poly16x8_t __b);

int8x8x2_t vuzp_s8(int8x8_t __a, int8x8_t __b);

int16x4x2_t vuzp_s16(int16x4_t __a, int16x4_t __b);

int32x2x2_t vuzp_s32(int32x2_t __a, int32x2_t __b);

float32x2x2_t vuzp_f32(float32x2_t __a, float32x2_t __b);

uint8x8x2_t vuzp_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4x2_t vuzp_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2x2_t vuzp_u32(uint32x2_t __a, uint32x2_t __b);

poly8x8x2_t vuzp_p8(poly8x8_t __a, poly8x8_t __b);

poly16x4x2_t vuzp_p16(poly16x4_t __a, poly16x4_t __b);

int8x16x2_t vuzpq_s8(int8x16_t __a, int8x16_t __b);

int16x8x2_t vuzpq_s16(int16x8_t __a, int16x8_t __b);

int32x4x2_t vuzpq_s32(int32x4_t __a, int32x4_t __b);

float32x4x2_t vuzpq_f32(float32x4_t __a, float32x4_t __b);

uint8x16x2_t vuzpq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8x2_t vuzpq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4x2_t vuzpq_u32(uint32x4_t __a, uint32x4_t __b);

poly8x16x2_t vuzpq_p8(poly8x16_t __a, poly8x16_t __b);

poly16x8x2_t vuzpq_p16(poly16x8_t __a, poly16x8_t __b);

poly64x1_t vld1_p64(const poly64_t *__a);

int8x8_t vld1_s8(const int8_t *__a);

int16x4_t vld1_s16(const int16_t *__a);

int32x2_t vld1_s32(const int32_t *__a);

int64x1_t vld1_s64(const int64_t *__a);

float16x4_t vld1_f16(const float16_t *__a);

float32x2_t vld1_f32(const float32_t *__a);

uint8x8_t vld1_u8(const uint8_t *__a);

uint16x4_t vld1_u16(const uint16_t *__a);

uint32x2_t vld1_u32(const uint32_t *__a);

uint64x1_t vld1_u64(const uint64_t *__a);

poly8x8_t vld1_p8(const poly8_t *__a);

poly16x4_t vld1_p16(const poly16_t *__a);

poly64x2_t vld1q_p64(const poly64_t *__a);

int8x16_t vld1q_s8(const int8_t *__a);

int16x8_t vld1q_s16(const int16_t *__a);

int32x4_t vld1q_s32(const int32_t *__a);

int64x2_t vld1q_s64(const int64_t *__a);

float16x8_t vld1q_f16(const float16_t *__a);

float32x4_t vld1q_f32(const float32_t *__a);

uint8x16_t vld1q_u8(const uint8_t *__a);

uint16x8_t vld1q_u16(const uint16_t *__a);

uint32x4_t vld1q_u32(const uint32_t *__a);

uint64x2_t vld1q_u64(const uint64_t *__a);

poly8x16_t vld1q_p8(const poly8_t *__a);

poly16x8_t vld1q_p16(const poly16_t *__a);

int8x8_t vld1_lane_s8(const int8_t *__a, int8x8_t __b, const int __c);

int16x4_t vld1_lane_s16(const int16_t *__a, int16x4_t __b, const int __c);

int32x2_t vld1_lane_s32(const int32_t *__a, int32x2_t __b, const int __c);

float16x4_t vld1_lane_f16(const float16_t *__a, float16x4_t __b, const int __c);

float32x2_t vld1_lane_f32(const float32_t *__a, float32x2_t __b, const int __c);

uint8x8_t vld1_lane_u8(const uint8_t *__a, uint8x8_t __b, const int __c);

uint16x4_t vld1_lane_u16(const uint16_t *__a, uint16x4_t __b, const int __c);

uint32x2_t vld1_lane_u32(const uint32_t *__a, uint32x2_t __b, const int __c);

poly8x8_t vld1_lane_p8(const poly8_t *__a, poly8x8_t __b, const int __c);

poly16x4_t vld1_lane_p16(const poly16_t *__a, poly16x4_t __b, const int __c);

poly64x1_t vld1_lane_p64(const poly64_t *__a, poly64x1_t __b, const int __c);

int64x1_t vld1_lane_s64(const int64_t *__a, int64x1_t __b, const int __c);

uint64x1_t vld1_lane_u64(const uint64_t *__a, uint64x1_t __b, const int __c);

int8x16_t vld1q_lane_s8(const int8_t *__a, int8x16_t __b, const int __c);

int16x8_t vld1q_lane_s16(const int16_t *__a, int16x8_t __b, const int __c);

int32x4_t vld1q_lane_s32(const int32_t *__a, int32x4_t __b, const int __c);

float16x8_t vld1q_lane_f16(const float16_t *__a, float16x8_t __b,
                           const int __c);

float32x4_t vld1q_lane_f32(const float32_t *__a, float32x4_t __b,
                           const int __c);

uint8x16_t vld1q_lane_u8(const uint8_t *__a, uint8x16_t __b, const int __c);

uint16x8_t vld1q_lane_u16(const uint16_t *__a, uint16x8_t __b, const int __c);

uint32x4_t vld1q_lane_u32(const uint32_t *__a, uint32x4_t __b, const int __c);

poly8x16_t vld1q_lane_p8(const poly8_t *__a, poly8x16_t __b, const int __c);

poly16x8_t vld1q_lane_p16(const poly16_t *__a, poly16x8_t __b, const int __c);

poly64x2_t vld1q_lane_p64(const poly64_t *__a, poly64x2_t __b, const int __c);

int64x2_t vld1q_lane_s64(const int64_t *__a, int64x2_t __b, const int __c);

uint64x2_t vld1q_lane_u64(const uint64_t *__a, uint64x2_t __b, const int __c);

int8x8_t vld1_dup_s8(const int8_t *__a);

int16x4_t vld1_dup_s16(const int16_t *__a);

int32x2_t vld1_dup_s32(const int32_t *__a);

float16x4_t vld1_dup_f16(const float16_t *__a);

float32x2_t vld1_dup_f32(const float32_t *__a);

uint8x8_t vld1_dup_u8(const uint8_t *__a);

uint16x4_t vld1_dup_u16(const uint16_t *__a);

uint32x2_t vld1_dup_u32(const uint32_t *__a);

poly8x8_t vld1_dup_p8(const poly8_t *__a);

poly16x4_t vld1_dup_p16(const poly16_t *__a);

poly64x1_t vld1_dup_p64(const poly64_t *__a);

int64x1_t vld1_dup_s64(const int64_t *__a);

uint64x1_t vld1_dup_u64(const uint64_t *__a);

int8x16_t vld1q_dup_s8(const int8_t *__a);

int16x8_t vld1q_dup_s16(const int16_t *__a);

int32x4_t vld1q_dup_s32(const int32_t *__a);

float16x8_t vld1q_dup_f16(const float16_t *__a);

float32x4_t vld1q_dup_f32(const float32_t *__a);

uint8x16_t vld1q_dup_u8(const uint8_t *__a);

uint16x8_t vld1q_dup_u16(const uint16_t *__a);

uint32x4_t vld1q_dup_u32(const uint32_t *__a);

poly8x16_t vld1q_dup_p8(const poly8_t *__a);

poly16x8_t vld1q_dup_p16(const poly16_t *__a);

poly64x2_t vld1q_dup_p64(const poly64_t *__a);

int64x2_t vld1q_dup_s64(const int64_t *__a);

uint64x2_t vld1q_dup_u64(const uint64_t *__a);

void vst1_p64(poly64_t *__a, poly64x1_t __b);

void vst1_s8(int8_t *__a, int8x8_t __b);

void vst1_s16(int16_t *__a, int16x4_t __b);

void vst1_s32(int32_t *__a, int32x2_t __b);

void vst1_s64(int64_t *__a, int64x1_t __b);

void vst1_f16(float16_t *__a, float16x4_t __b);

void vst1_f32(float32_t *__a, float32x2_t __b);

void vst1_u8(uint8_t *__a, uint8x8_t __b);

void vst1_u16(uint16_t *__a, uint16x4_t __b);

void vst1_u32(uint32_t *__a, uint32x2_t __b);

void vst1_u64(uint64_t *__a, uint64x1_t __b);

void vst1_p8(poly8_t *__a, poly8x8_t __b);

void vst1_p16(poly16_t *__a, poly16x4_t __b);

void vst1q_p64(poly64_t *__a, poly64x2_t __b);

void vst1q_s8(int8_t *__a, int8x16_t __b);

void vst1q_s16(int16_t *__a, int16x8_t __b);

void vst1q_s32(int32_t *__a, int32x4_t __b);

void vst1q_s64(int64_t *__a, int64x2_t __b);

void vst1q_f16(float16_t *__a, float16x8_t __b);

void vst1q_f32(float32_t *__a, float32x4_t __b);

void vst1q_u8(uint8_t *__a, uint8x16_t __b);

void vst1q_u16(uint16_t *__a, uint16x8_t __b);

void vst1q_u32(uint32_t *__a, uint32x4_t __b);

void vst1q_u64(uint64_t *__a, uint64x2_t __b);

void vst1q_p8(poly8_t *__a, poly8x16_t __b);

void vst1q_p16(poly16_t *__a, poly16x8_t __b);

void vst1_lane_s8(int8_t *__a, int8x8_t __b, const int __c);

void vst1_lane_s16(int16_t *__a, int16x4_t __b, const int __c);

void vst1_lane_s32(int32_t *__a, int32x2_t __b, const int __c);

void vst1_lane_f16(float16_t *__a, float16x4_t __b, const int __c);

void vst1_lane_f32(float32_t *__a, float32x2_t __b, const int __c);

void vst1_lane_u8(uint8_t *__a, uint8x8_t __b, const int __c);

void vst1_lane_u16(uint16_t *__a, uint16x4_t __b, const int __c);

void vst1_lane_u32(uint32_t *__a, uint32x2_t __b, const int __c);

void vst1_lane_p8(poly8_t *__a, poly8x8_t __b, const int __c);

void vst1_lane_p16(poly16_t *__a, poly16x4_t __b, const int __c);

void vst1_lane_p64(poly64_t *__a, poly64x1_t __b, const int __c);

void vst1_lane_s64(int64_t *__a, int64x1_t __b, const int __c);

void vst1_lane_u64(uint64_t *__a, uint64x1_t __b, const int __c);

void vst1q_lane_s8(int8_t *__a, int8x16_t __b, const int __c);

void vst1q_lane_s16(int16_t *__a, int16x8_t __b, const int __c);

void vst1q_lane_s32(int32_t *__a, int32x4_t __b, const int __c);

void vst1q_lane_f16(float16_t *__a, float16x8_t __b, const int __c);

void vst1q_lane_f32(float32_t *__a, float32x4_t __b, const int __c);

void vst1q_lane_u8(uint8_t *__a, uint8x16_t __b, const int __c);

void vst1q_lane_u16(uint16_t *__a, uint16x8_t __b, const int __c);

void vst1q_lane_u32(uint32_t *__a, uint32x4_t __b, const int __c);

void vst1q_lane_p8(poly8_t *__a, poly8x16_t __b, const int __c);

void vst1q_lane_p16(poly16_t *__a, poly16x8_t __b, const int __c);

void vst1q_lane_p64(poly64_t *__a, poly64x2_t __b, const int __c);

void vst1q_lane_s64(int64_t *__a, int64x2_t __b, const int __c);

void vst1q_lane_u64(uint64_t *__a, uint64x2_t __b, const int __c);

int8x8x2_t vld2_s8(const int8_t *__a);

int16x4x2_t vld2_s16(const int16_t *__a);

int32x2x2_t vld2_s32(const int32_t *__a);

float16x4x2_t vld2_f16(const float16_t *__a);

float32x2x2_t vld2_f32(const float32_t *__a);

uint8x8x2_t vld2_u8(const uint8_t *__a);

uint16x4x2_t vld2_u16(const uint16_t *__a);

uint32x2x2_t vld2_u32(const uint32_t *__a);

poly8x8x2_t vld2_p8(const poly8_t *__a);

poly16x4x2_t vld2_p16(const poly16_t *__a);

poly64x1x2_t vld2_p64(const poly64_t *__a);

int64x1x2_t vld2_s64(const int64_t *__a);

uint64x1x2_t vld2_u64(const uint64_t *__a);

int8x16x2_t vld2q_s8(const int8_t *__a);

int16x8x2_t vld2q_s16(const int16_t *__a);

int32x4x2_t vld2q_s32(const int32_t *__a);

float16x8x2_t vld2q_f16(const float16_t *__a);

float32x4x2_t vld2q_f32(const float32_t *__a);

uint8x16x2_t vld2q_u8(const uint8_t *__a);

uint16x8x2_t vld2q_u16(const uint16_t *__a);

uint32x4x2_t vld2q_u32(const uint32_t *__a);

poly8x16x2_t vld2q_p8(const poly8_t *__a);

poly16x8x2_t vld2q_p16(const poly16_t *__a);

int8x8x2_t vld2_lane_s8(const int8_t *__a, int8x8x2_t __b, const int __c);

int16x4x2_t vld2_lane_s16(const int16_t *__a, int16x4x2_t __b, const int __c);

int32x2x2_t vld2_lane_s32(const int32_t *__a, int32x2x2_t __b, const int __c);

float16x4x2_t vld2_lane_f16(const float16_t *__a, float16x4x2_t __b,
                            const int __c);

float32x2x2_t vld2_lane_f32(const float32_t *__a, float32x2x2_t __b,
                            const int __c);

uint8x8x2_t vld2_lane_u8(const uint8_t *__a, uint8x8x2_t __b, const int __c);

uint16x4x2_t vld2_lane_u16(const uint16_t *__a, uint16x4x2_t __b,
                           const int __c);

uint32x2x2_t vld2_lane_u32(const uint32_t *__a, uint32x2x2_t __b,
                           const int __c);

poly8x8x2_t vld2_lane_p8(const poly8_t *__a, poly8x8x2_t __b, const int __c);

poly16x4x2_t vld2_lane_p16(const poly16_t *__a, poly16x4x2_t __b,
                           const int __c);

int16x8x2_t vld2q_lane_s16(const int16_t *__a, int16x8x2_t __b, const int __c);

int32x4x2_t vld2q_lane_s32(const int32_t *__a, int32x4x2_t __b, const int __c);

float16x8x2_t vld2q_lane_f16(const float16_t *__a, float16x8x2_t __b,
                             const int __c);

float32x4x2_t vld2q_lane_f32(const float32_t *__a, float32x4x2_t __b,
                             const int __c);

uint16x8x2_t vld2q_lane_u16(const uint16_t *__a, uint16x8x2_t __b,
                            const int __c);

uint32x4x2_t vld2q_lane_u32(const uint32_t *__a, uint32x4x2_t __b,
                            const int __c);

poly16x8x2_t vld2q_lane_p16(const poly16_t *__a, poly16x8x2_t __b,
                            const int __c);

int8x8x2_t vld2_dup_s8(const int8_t *__a);

int16x4x2_t vld2_dup_s16(const int16_t *__a);

int32x2x2_t vld2_dup_s32(const int32_t *__a);

float16x4x2_t vld2_dup_f16(const float16_t *__a);

float32x2x2_t vld2_dup_f32(const float32_t *__a);

uint8x8x2_t vld2_dup_u8(const uint8_t *__a);

uint16x4x2_t vld2_dup_u16(const uint16_t *__a);

uint32x2x2_t vld2_dup_u32(const uint32_t *__a);

poly8x8x2_t vld2_dup_p8(const poly8_t *__a);

poly16x4x2_t vld2_dup_p16(const poly16_t *__a);

poly64x1x2_t vld2_dup_p64(const poly64_t *__a);

int64x1x2_t vld2_dup_s64(const int64_t *__a);

uint64x1x2_t vld2_dup_u64(const uint64_t *__a);

void vst2_s8(int8_t *__a, int8x8x2_t __b);

void vst2_s16(int16_t *__a, int16x4x2_t __b);

void vst2_s32(int32_t *__a, int32x2x2_t __b);

void vst2_f16(float16_t *__a, float16x4x2_t __b);

void vst2_f32(float32_t *__a, float32x2x2_t __b);

void vst2_u8(uint8_t *__a, uint8x8x2_t __b);

void vst2_u16(uint16_t *__a, uint16x4x2_t __b);

void vst2_u32(uint32_t *__a, uint32x2x2_t __b);

void vst2_p8(poly8_t *__a, poly8x8x2_t __b);

void vst2_p16(poly16_t *__a, poly16x4x2_t __b);

void vst2_p64(poly64_t *__a, poly64x1x2_t __b);

void vst2_s64(int64_t *__a, int64x1x2_t __b);

void vst2_u64(uint64_t *__a, uint64x1x2_t __b);

void vst2q_s8(int8_t *__a, int8x16x2_t __b);

void vst2q_s16(int16_t *__a, int16x8x2_t __b);

void vst2q_s32(int32_t *__a, int32x4x2_t __b);

void vst2q_f16(float16_t *__a, float16x8x2_t __b);

void vst2q_f32(float32_t *__a, float32x4x2_t __b);

void vst2q_u8(uint8_t *__a, uint8x16x2_t __b);

void vst2q_u16(uint16_t *__a, uint16x8x2_t __b);

void vst2q_u32(uint32_t *__a, uint32x4x2_t __b);

void vst2q_p8(poly8_t *__a, poly8x16x2_t __b);

void vst2q_p16(poly16_t *__a, poly16x8x2_t __b);

void vst2_lane_s8(int8_t *__a, int8x8x2_t __b, const int __c);

void vst2_lane_s16(int16_t *__a, int16x4x2_t __b, const int __c);

void vst2_lane_s32(int32_t *__a, int32x2x2_t __b, const int __c);

void vst2_lane_f16(float16_t *__a, float16x4x2_t __b, const int __c);

void vst2_lane_f32(float32_t *__a, float32x2x2_t __b, const int __c);

void vst2_lane_u8(uint8_t *__a, uint8x8x2_t __b, const int __c);

void vst2_lane_u16(uint16_t *__a, uint16x4x2_t __b, const int __c);

void vst2_lane_u32(uint32_t *__a, uint32x2x2_t __b, const int __c);

void vst2_lane_p8(poly8_t *__a, poly8x8x2_t __b, const int __c);

void vst2_lane_p16(poly16_t *__a, poly16x4x2_t __b, const int __c);

void vst2q_lane_s16(int16_t *__a, int16x8x2_t __b, const int __c);

void vst2q_lane_s32(int32_t *__a, int32x4x2_t __b, const int __c);

void vst2q_lane_f16(float16_t *__a, float16x8x2_t __b, const int __c);

void vst2q_lane_f32(float32_t *__a, float32x4x2_t __b, const int __c);

void vst2q_lane_u16(uint16_t *__a, uint16x8x2_t __b, const int __c);

void vst2q_lane_u32(uint32_t *__a, uint32x4x2_t __b, const int __c);

void vst2q_lane_p16(poly16_t *__a, poly16x8x2_t __b, const int __c);

int8x8x3_t vld3_s8(const int8_t *__a);

int16x4x3_t vld3_s16(const int16_t *__a);

int32x2x3_t vld3_s32(const int32_t *__a);

float16x4x3_t vld3_f16(const float16_t *__a);

float32x2x3_t vld3_f32(const float32_t *__a);

uint8x8x3_t vld3_u8(const uint8_t *__a);

uint16x4x3_t vld3_u16(const uint16_t *__a);

uint32x2x3_t vld3_u32(const uint32_t *__a);

poly8x8x3_t vld3_p8(const poly8_t *__a);

poly16x4x3_t vld3_p16(const poly16_t *__a);

poly64x1x3_t vld3_p64(const poly64_t *__a);

int64x1x3_t vld3_s64(const int64_t *__a);

uint64x1x3_t vld3_u64(const uint64_t *__a);

int8x16x3_t vld3q_s8(const int8_t *__a);

int16x8x3_t vld3q_s16(const int16_t *__a);

int32x4x3_t vld3q_s32(const int32_t *__a);

float16x8x3_t vld3q_f16(const float16_t *__a);

float32x4x3_t vld3q_f32(const float32_t *__a);

uint8x16x3_t vld3q_u8(const uint8_t *__a);

uint16x8x3_t vld3q_u16(const uint16_t *__a);

uint32x4x3_t vld3q_u32(const uint32_t *__a);

poly8x16x3_t vld3q_p8(const poly8_t *__a);

poly16x8x3_t vld3q_p16(const poly16_t *__a);

int8x8x3_t vld3_lane_s8(const int8_t *__a, int8x8x3_t __b, const int __c);

int16x4x3_t vld3_lane_s16(const int16_t *__a, int16x4x3_t __b, const int __c);

int32x2x3_t vld3_lane_s32(const int32_t *__a, int32x2x3_t __b, const int __c);

float16x4x3_t vld3_lane_f16(const float16_t *__a, float16x4x3_t __b,
                            const int __c);

float32x2x3_t vld3_lane_f32(const float32_t *__a, float32x2x3_t __b,
                            const int __c);

uint8x8x3_t vld3_lane_u8(const uint8_t *__a, uint8x8x3_t __b, const int __c);

uint16x4x3_t vld3_lane_u16(const uint16_t *__a, uint16x4x3_t __b,
                           const int __c);

uint32x2x3_t vld3_lane_u32(const uint32_t *__a, uint32x2x3_t __b,
                           const int __c);

poly8x8x3_t vld3_lane_p8(const poly8_t *__a, poly8x8x3_t __b, const int __c);

poly16x4x3_t vld3_lane_p16(const poly16_t *__a, poly16x4x3_t __b,
                           const int __c);

int16x8x3_t vld3q_lane_s16(const int16_t *__a, int16x8x3_t __b, const int __c);

int32x4x3_t vld3q_lane_s32(const int32_t *__a, int32x4x3_t __b, const int __c);

float16x8x3_t vld3q_lane_f16(const float16_t *__a, float16x8x3_t __b,
                             const int __c);

float32x4x3_t vld3q_lane_f32(const float32_t *__a, float32x4x3_t __b,
                             const int __c);

uint16x8x3_t vld3q_lane_u16(const uint16_t *__a, uint16x8x3_t __b,
                            const int __c);

uint32x4x3_t vld3q_lane_u32(const uint32_t *__a, uint32x4x3_t __b,
                            const int __c);

poly16x8x3_t vld3q_lane_p16(const poly16_t *__a, poly16x8x3_t __b,
                            const int __c);

int8x8x3_t vld3_dup_s8(const int8_t *__a);

int16x4x3_t vld3_dup_s16(const int16_t *__a);

int32x2x3_t vld3_dup_s32(const int32_t *__a);

float16x4x3_t vld3_dup_f16(const float16_t *__a);

float32x2x3_t vld3_dup_f32(const float32_t *__a);

uint8x8x3_t vld3_dup_u8(const uint8_t *__a);

uint16x4x3_t vld3_dup_u16(const uint16_t *__a);

uint32x2x3_t vld3_dup_u32(const uint32_t *__a);

poly8x8x3_t vld3_dup_p8(const poly8_t *__a);

poly16x4x3_t vld3_dup_p16(const poly16_t *__a);

poly64x1x3_t vld3_dup_p64(const poly64_t *__a);

int64x1x3_t vld3_dup_s64(const int64_t *__a);

uint64x1x3_t vld3_dup_u64(const uint64_t *__a);

void vst3_s8(int8_t *__a, int8x8x3_t __b);

void vst3_s16(int16_t *__a, int16x4x3_t __b);

void vst3_s32(int32_t *__a, int32x2x3_t __b);

void vst3_f16(float16_t *__a, float16x4x3_t __b);

void vst3_f32(float32_t *__a, float32x2x3_t __b);

void vst3_u8(uint8_t *__a, uint8x8x3_t __b);

void vst3_u16(uint16_t *__a, uint16x4x3_t __b);

void vst3_u32(uint32_t *__a, uint32x2x3_t __b);

void vst3_p8(poly8_t *__a, poly8x8x3_t __b);

void vst3_p16(poly16_t *__a, poly16x4x3_t __b);

void vst3_p64(poly64_t *__a, poly64x1x3_t __b);

void vst3_s64(int64_t *__a, int64x1x3_t __b);

void vst3_u64(uint64_t *__a, uint64x1x3_t __b);

void vst3q_s8(int8_t *__a, int8x16x3_t __b);

void vst3q_s16(int16_t *__a, int16x8x3_t __b);

void vst3q_s32(int32_t *__a, int32x4x3_t __b);

void vst3q_f16(float16_t *__a, float16x8x3_t __b);

void vst3q_f32(float32_t *__a, float32x4x3_t __b);

void vst3q_u8(uint8_t *__a, uint8x16x3_t __b);

void vst3q_u16(uint16_t *__a, uint16x8x3_t __b);

void vst3q_u32(uint32_t *__a, uint32x4x3_t __b);

void vst3q_p8(poly8_t *__a, poly8x16x3_t __b);

void vst3q_p16(poly16_t *__a, poly16x8x3_t __b);

void vst3_lane_s8(int8_t *__a, int8x8x3_t __b, const int __c);

void vst3_lane_s16(int16_t *__a, int16x4x3_t __b, const int __c);

void vst3_lane_s32(int32_t *__a, int32x2x3_t __b, const int __c);

void vst3_lane_f16(float16_t *__a, float16x4x3_t __b, const int __c);

void vst3_lane_f32(float32_t *__a, float32x2x3_t __b, const int __c);

void vst3_lane_u8(uint8_t *__a, uint8x8x3_t __b, const int __c);

void vst3_lane_u16(uint16_t *__a, uint16x4x3_t __b, const int __c);

void vst3_lane_u32(uint32_t *__a, uint32x2x3_t __b, const int __c);

void vst3_lane_p8(poly8_t *__a, poly8x8x3_t __b, const int __c);

void vst3_lane_p16(poly16_t *__a, poly16x4x3_t __b, const int __c);

void vst3q_lane_s16(int16_t *__a, int16x8x3_t __b, const int __c);

void vst3q_lane_s32(int32_t *__a, int32x4x3_t __b, const int __c);

void vst3q_lane_f16(float16_t *__a, float16x8x3_t __b, const int __c);

void vst3q_lane_f32(float32_t *__a, float32x4x3_t __b, const int __c);

void vst3q_lane_u16(uint16_t *__a, uint16x8x3_t __b, const int __c);

void vst3q_lane_u32(uint32_t *__a, uint32x4x3_t __b, const int __c);

void vst3q_lane_p16(poly16_t *__a, poly16x8x3_t __b, const int __c);

int8x8x4_t vld4_s8(const int8_t *__a);

int16x4x4_t vld4_s16(const int16_t *__a);

int32x2x4_t vld4_s32(const int32_t *__a);

float16x4x4_t vld4_f16(const float16_t *__a);

float32x2x4_t vld4_f32(const float32_t *__a);

uint8x8x4_t vld4_u8(const uint8_t *__a);

uint16x4x4_t vld4_u16(const uint16_t *__a);

uint32x2x4_t vld4_u32(const uint32_t *__a);

poly8x8x4_t vld4_p8(const poly8_t *__a);

poly16x4x4_t vld4_p16(const poly16_t *__a);

poly64x1x4_t vld4_p64(const poly64_t *__a);

int64x1x4_t vld4_s64(const int64_t *__a);

uint64x1x4_t vld4_u64(const uint64_t *__a);

int8x16x4_t vld4q_s8(const int8_t *__a);

int16x8x4_t vld4q_s16(const int16_t *__a);

int32x4x4_t vld4q_s32(const int32_t *__a);

float16x8x4_t vld4q_f16(const float16_t *__a);

float32x4x4_t vld4q_f32(const float32_t *__a);

uint8x16x4_t vld4q_u8(const uint8_t *__a);

uint16x8x4_t vld4q_u16(const uint16_t *__a);

uint32x4x4_t vld4q_u32(const uint32_t *__a);

poly8x16x4_t vld4q_p8(const poly8_t *__a);

poly16x8x4_t vld4q_p16(const poly16_t *__a);

int8x8x4_t vld4_lane_s8(const int8_t *__a, int8x8x4_t __b, const int __c);

int16x4x4_t vld4_lane_s16(const int16_t *__a, int16x4x4_t __b, const int __c);

int32x2x4_t vld4_lane_s32(const int32_t *__a, int32x2x4_t __b, const int __c);

float16x4x4_t vld4_lane_f16(const float16_t *__a, float16x4x4_t __b,
                            const int __c);

float32x2x4_t vld4_lane_f32(const float32_t *__a, float32x2x4_t __b,
                            const int __c);

uint8x8x4_t vld4_lane_u8(const uint8_t *__a, uint8x8x4_t __b, const int __c);

uint16x4x4_t vld4_lane_u16(const uint16_t *__a, uint16x4x4_t __b,
                           const int __c);

uint32x2x4_t vld4_lane_u32(const uint32_t *__a, uint32x2x4_t __b,
                           const int __c);

poly8x8x4_t vld4_lane_p8(const poly8_t *__a, poly8x8x4_t __b, const int __c);

poly16x4x4_t vld4_lane_p16(const poly16_t *__a, poly16x4x4_t __b,
                           const int __c);

int16x8x4_t vld4q_lane_s16(const int16_t *__a, int16x8x4_t __b, const int __c);

int32x4x4_t vld4q_lane_s32(const int32_t *__a, int32x4x4_t __b, const int __c);

float16x8x4_t vld4q_lane_f16(const float16_t *__a, float16x8x4_t __b,
                             const int __c);

float32x4x4_t vld4q_lane_f32(const float32_t *__a, float32x4x4_t __b,
                             const int __c);

uint16x8x4_t vld4q_lane_u16(const uint16_t *__a, uint16x8x4_t __b,
                            const int __c);

uint32x4x4_t vld4q_lane_u32(const uint32_t *__a, uint32x4x4_t __b,
                            const int __c);

poly16x8x4_t vld4q_lane_p16(const poly16_t *__a, poly16x8x4_t __b,
                            const int __c);

int8x8x4_t vld4_dup_s8(const int8_t *__a);

int16x4x4_t vld4_dup_s16(const int16_t *__a);

int32x2x4_t vld4_dup_s32(const int32_t *__a);

float16x4x4_t vld4_dup_f16(const float16_t *__a);

float32x2x4_t vld4_dup_f32(const float32_t *__a);

uint8x8x4_t vld4_dup_u8(const uint8_t *__a);

uint16x4x4_t vld4_dup_u16(const uint16_t *__a);

uint32x2x4_t vld4_dup_u32(const uint32_t *__a);

poly8x8x4_t vld4_dup_p8(const poly8_t *__a);

poly16x4x4_t vld4_dup_p16(const poly16_t *__a);

poly64x1x4_t vld4_dup_p64(const poly64_t *__a);

int64x1x4_t vld4_dup_s64(const int64_t *__a);

uint64x1x4_t vld4_dup_u64(const uint64_t *__a);

void vst4_s8(int8_t *__a, int8x8x4_t __b);

void vst4_s16(int16_t *__a, int16x4x4_t __b);

void vst4_s32(int32_t *__a, int32x2x4_t __b);

void vst4_f16(float16_t *__a, float16x4x4_t __b);

void vst4_f32(float32_t *__a, float32x2x4_t __b);

void vst4_u8(uint8_t *__a, uint8x8x4_t __b);

void vst4_u16(uint16_t *__a, uint16x4x4_t __b);

void vst4_u32(uint32_t *__a, uint32x2x4_t __b);

void vst4_p8(poly8_t *__a, poly8x8x4_t __b);

void vst4_p16(poly16_t *__a, poly16x4x4_t __b);

void vst4_p64(poly64_t *__a, poly64x1x4_t __b);

void vst4_s64(int64_t *__a, int64x1x4_t __b);

void vst4_u64(uint64_t *__a, uint64x1x4_t __b);

void vst4q_s8(int8_t *__a, int8x16x4_t __b);

void vst4q_s16(int16_t *__a, int16x8x4_t __b);

void vst4q_s32(int32_t *__a, int32x4x4_t __b);

void vst4q_f16(float16_t *__a, float16x8x4_t __b);

void vst4q_f32(float32_t *__a, float32x4x4_t __b);

void vst4q_u8(uint8_t *__a, uint8x16x4_t __b);

void vst4q_u16(uint16_t *__a, uint16x8x4_t __b);

void vst4q_u32(uint32_t *__a, uint32x4x4_t __b);

void vst4q_p8(poly8_t *__a, poly8x16x4_t __b);

void vst4q_p16(poly16_t *__a, poly16x8x4_t __b);

void vst4_lane_s8(int8_t *__a, int8x8x4_t __b, const int __c);

void vst4_lane_s16(int16_t *__a, int16x4x4_t __b, const int __c);

void vst4_lane_s32(int32_t *__a, int32x2x4_t __b, const int __c);

void vst4_lane_f16(float16_t *__a, float16x4x4_t __b, const int __c);

void vst4_lane_f32(float32_t *__a, float32x2x4_t __b, const int __c);

void vst4_lane_u8(uint8_t *__a, uint8x8x4_t __b, const int __c);

void vst4_lane_u16(uint16_t *__a, uint16x4x4_t __b, const int __c);

void vst4_lane_u32(uint32_t *__a, uint32x2x4_t __b, const int __c);

void vst4_lane_p8(poly8_t *__a, poly8x8x4_t __b, const int __c);

void vst4_lane_p16(poly16_t *__a, poly16x4x4_t __b, const int __c);

void vst4q_lane_s16(int16_t *__a, int16x8x4_t __b, const int __c);

void vst4q_lane_s32(int32_t *__a, int32x4x4_t __b, const int __c);

void vst4q_lane_f16(float16_t *__a, float16x8x4_t __b, const int __c);

void vst4q_lane_f32(float32_t *__a, float32x4x4_t __b, const int __c);

void vst4q_lane_u16(uint16_t *__a, uint16x8x4_t __b, const int __c);

void vst4q_lane_u32(uint32_t *__a, uint32x4x4_t __b, const int __c);

void vst4q_lane_p16(poly16_t *__a, poly16x8x4_t __b, const int __c);

int8x8_t vand_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vand_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vand_s32(int32x2_t __a, int32x2_t __b);

uint8x8_t vand_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vand_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vand_u32(uint32x2_t __a, uint32x2_t __b);

int64x1_t vand_s64(int64x1_t __a, int64x1_t __b);

uint64x1_t vand_u64(uint64x1_t __a, uint64x1_t __b);

int8x16_t vandq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vandq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vandq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vandq_s64(int64x2_t __a, int64x2_t __b);

uint8x16_t vandq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vandq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vandq_u32(uint32x4_t __a, uint32x4_t __b);

uint64x2_t vandq_u64(uint64x2_t __a, uint64x2_t __b);

int8x8_t vorr_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vorr_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vorr_s32(int32x2_t __a, int32x2_t __b);

uint8x8_t vorr_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vorr_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vorr_u32(uint32x2_t __a, uint32x2_t __b);

int64x1_t vorr_s64(int64x1_t __a, int64x1_t __b);

uint64x1_t vorr_u64(uint64x1_t __a, uint64x1_t __b);

int8x16_t vorrq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vorrq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vorrq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vorrq_s64(int64x2_t __a, int64x2_t __b);

uint8x16_t vorrq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vorrq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vorrq_u32(uint32x4_t __a, uint32x4_t __b);

uint64x2_t vorrq_u64(uint64x2_t __a, uint64x2_t __b);

int8x8_t veor_s8(int8x8_t __a, int8x8_t __b);

int16x4_t veor_s16(int16x4_t __a, int16x4_t __b);

int32x2_t veor_s32(int32x2_t __a, int32x2_t __b);

uint8x8_t veor_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t veor_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t veor_u32(uint32x2_t __a, uint32x2_t __b);

int64x1_t veor_s64(int64x1_t __a, int64x1_t __b);

uint64x1_t veor_u64(uint64x1_t __a, uint64x1_t __b);

int8x16_t veorq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t veorq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t veorq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t veorq_s64(int64x2_t __a, int64x2_t __b);

uint8x16_t veorq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t veorq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t veorq_u32(uint32x4_t __a, uint32x4_t __b);

uint64x2_t veorq_u64(uint64x2_t __a, uint64x2_t __b);

int8x8_t vbic_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vbic_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vbic_s32(int32x2_t __a, int32x2_t __b);

uint8x8_t vbic_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vbic_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vbic_u32(uint32x2_t __a, uint32x2_t __b);

int64x1_t vbic_s64(int64x1_t __a, int64x1_t __b);

uint64x1_t vbic_u64(uint64x1_t __a, uint64x1_t __b);

int8x16_t vbicq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vbicq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vbicq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vbicq_s64(int64x2_t __a, int64x2_t __b);

uint8x16_t vbicq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vbicq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vbicq_u32(uint32x4_t __a, uint32x4_t __b);

uint64x2_t vbicq_u64(uint64x2_t __a, uint64x2_t __b);

int8x8_t vorn_s8(int8x8_t __a, int8x8_t __b);

int16x4_t vorn_s16(int16x4_t __a, int16x4_t __b);

int32x2_t vorn_s32(int32x2_t __a, int32x2_t __b);

uint8x8_t vorn_u8(uint8x8_t __a, uint8x8_t __b);

uint16x4_t vorn_u16(uint16x4_t __a, uint16x4_t __b);

uint32x2_t vorn_u32(uint32x2_t __a, uint32x2_t __b);

int64x1_t vorn_s64(int64x1_t __a, int64x1_t __b);

uint64x1_t vorn_u64(uint64x1_t __a, uint64x1_t __b);

int8x16_t vornq_s8(int8x16_t __a, int8x16_t __b);

int16x8_t vornq_s16(int16x8_t __a, int16x8_t __b);

int32x4_t vornq_s32(int32x4_t __a, int32x4_t __b);

int64x2_t vornq_s64(int64x2_t __a, int64x2_t __b);

uint8x16_t vornq_u8(uint8x16_t __a, uint8x16_t __b);

uint16x8_t vornq_u16(uint16x8_t __a, uint16x8_t __b);

uint32x4_t vornq_u32(uint32x4_t __a, uint32x4_t __b);

uint64x2_t vornq_u64(uint64x2_t __a, uint64x2_t __b);

poly8x8_t vreinterpret_p8_p16(poly16x4_t __a);

poly8x8_t vreinterpret_p8_f16(float16x4_t __a);

poly8x8_t vreinterpret_p8_f32(float32x2_t __a);

poly8x8_t vreinterpret_p8_p64(poly64x1_t __a);

poly8x8_t vreinterpret_p8_s64(int64x1_t __a);

poly8x8_t vreinterpret_p8_u64(uint64x1_t __a);

poly8x8_t vreinterpret_p8_s8(int8x8_t __a);

poly8x8_t vreinterpret_p8_s16(int16x4_t __a);

poly8x8_t vreinterpret_p8_s32(int32x2_t __a);

poly8x8_t vreinterpret_p8_u8(uint8x8_t __a);

poly8x8_t vreinterpret_p8_u16(uint16x4_t __a);

poly8x8_t vreinterpret_p8_u32(uint32x2_t __a);

poly16x4_t vreinterpret_p16_p8(poly8x8_t __a);

poly16x4_t vreinterpret_p16_f16(float16x4_t __a);

poly16x4_t vreinterpret_p16_f32(float32x2_t __a);

poly16x4_t vreinterpret_p16_p64(poly64x1_t __a);

poly16x4_t vreinterpret_p16_s64(int64x1_t __a);

poly16x4_t vreinterpret_p16_u64(uint64x1_t __a);

poly16x4_t vreinterpret_p16_s8(int8x8_t __a);

poly16x4_t vreinterpret_p16_s16(int16x4_t __a);

poly16x4_t vreinterpret_p16_s32(int32x2_t __a);

poly16x4_t vreinterpret_p16_u8(uint8x8_t __a);

poly16x4_t vreinterpret_p16_u16(uint16x4_t __a);

poly16x4_t vreinterpret_p16_u32(uint32x2_t __a);

float16x4_t vreinterpret_f16_bf16(bfloat16x4_t __a);

float16x4_t vreinterpret_f16_p8(poly8x8_t __a);

float16x4_t vreinterpret_f16_p16(poly16x4_t __a);

float16x4_t vreinterpret_f16_f32(float32x2_t __a);

float16x4_t vreinterpret_f16_p64(poly64x1_t __a);

float16x4_t vreinterpret_f16_s64(int64x1_t __a);

float16x4_t vreinterpret_f16_u64(uint64x1_t __a);

float16x4_t vreinterpret_f16_s8(int8x8_t __a);

float16x4_t vreinterpret_f16_s16(int16x4_t __a);

float16x4_t vreinterpret_f16_s32(int32x2_t __a);

float16x4_t vreinterpret_f16_u8(uint8x8_t __a);

float16x4_t vreinterpret_f16_u16(uint16x4_t __a);

float16x4_t vreinterpret_f16_u32(uint32x2_t __a);

float32x2_t vreinterpret_f32_p8(poly8x8_t __a);

float32x2_t vreinterpret_f32_p16(poly16x4_t __a);

float32x2_t vreinterpret_f32_f16(float16x4_t __a);

float32x2_t vreinterpret_f32_p64(poly64x1_t __a);

float32x2_t vreinterpret_f32_s64(int64x1_t __a);

float32x2_t vreinterpret_f32_u64(uint64x1_t __a);

float32x2_t vreinterpret_f32_s8(int8x8_t __a);

float32x2_t vreinterpret_f32_s16(int16x4_t __a);

float32x2_t vreinterpret_f32_s32(int32x2_t __a);

float32x2_t vreinterpret_f32_u8(uint8x8_t __a);

float32x2_t vreinterpret_f32_u16(uint16x4_t __a);

float32x2_t vreinterpret_f32_u32(uint32x2_t __a);

poly64x1_t vreinterpret_p64_p8(poly8x8_t __a);

poly64x1_t vreinterpret_p64_p16(poly16x4_t __a);

poly64x1_t vreinterpret_p64_f16(float16x4_t __a);

poly64x1_t vreinterpret_p64_f32(float32x2_t __a);

poly64x1_t vreinterpret_p64_s64(int64x1_t __a);

poly64x1_t vreinterpret_p64_u64(uint64x1_t __a);

poly64x1_t vreinterpret_p64_s8(int8x8_t __a);

poly64x1_t vreinterpret_p64_s16(int16x4_t __a);

poly64x1_t vreinterpret_p64_s32(int32x2_t __a);

poly64x1_t vreinterpret_p64_u8(uint8x8_t __a);

poly64x1_t vreinterpret_p64_u16(uint16x4_t __a);

poly64x1_t vreinterpret_p64_u32(uint32x2_t __a);

int64x1_t vreinterpret_s64_p8(poly8x8_t __a);

int64x1_t vreinterpret_s64_p16(poly16x4_t __a);

int64x1_t vreinterpret_s64_f16(float16x4_t __a);

int64x1_t vreinterpret_s64_f32(float32x2_t __a);

int64x1_t vreinterpret_s64_p64(poly64x1_t __a);

int64x1_t vreinterpret_s64_u64(uint64x1_t __a);

int64x1_t vreinterpret_s64_s8(int8x8_t __a);

int64x1_t vreinterpret_s64_s16(int16x4_t __a);

int64x1_t vreinterpret_s64_s32(int32x2_t __a);

int64x1_t vreinterpret_s64_u8(uint8x8_t __a);

int64x1_t vreinterpret_s64_u16(uint16x4_t __a);

int64x1_t vreinterpret_s64_u32(uint32x2_t __a);

uint64x1_t vreinterpret_u64_p8(poly8x8_t __a);

uint64x1_t vreinterpret_u64_p16(poly16x4_t __a);

uint64x1_t vreinterpret_u64_f16(float16x4_t __a);

uint64x1_t vreinterpret_u64_f32(float32x2_t __a);

uint64x1_t vreinterpret_u64_p64(poly64x1_t __a);

uint64x1_t vreinterpret_u64_s64(int64x1_t __a);

uint64x1_t vreinterpret_u64_s8(int8x8_t __a);

uint64x1_t vreinterpret_u64_s16(int16x4_t __a);

uint64x1_t vreinterpret_u64_s32(int32x2_t __a);

uint64x1_t vreinterpret_u64_u8(uint8x8_t __a);

uint64x1_t vreinterpret_u64_u16(uint16x4_t __a);

uint64x1_t vreinterpret_u64_u32(uint32x2_t __a);

int8x8_t vreinterpret_s8_p8(poly8x8_t __a);

int8x8_t vreinterpret_s8_p16(poly16x4_t __a);

int8x8_t vreinterpret_s8_f16(float16x4_t __a);

int8x8_t vreinterpret_s8_f32(float32x2_t __a);

int8x8_t vreinterpret_s8_p64(poly64x1_t __a);

int8x8_t vreinterpret_s8_s64(int64x1_t __a);

int8x8_t vreinterpret_s8_u64(uint64x1_t __a);

int8x8_t vreinterpret_s8_s16(int16x4_t __a);

int8x8_t vreinterpret_s8_s32(int32x2_t __a);

int8x8_t vreinterpret_s8_u8(uint8x8_t __a);

int8x8_t vreinterpret_s8_u16(uint16x4_t __a);

int8x8_t vreinterpret_s8_u32(uint32x2_t __a);

int16x4_t vreinterpret_s16_p8(poly8x8_t __a);

int16x4_t vreinterpret_s16_p16(poly16x4_t __a);

int16x4_t vreinterpret_s16_f16(float16x4_t __a);

int16x4_t vreinterpret_s16_f32(float32x2_t __a);

int16x4_t vreinterpret_s16_p64(poly64x1_t __a);

int16x4_t vreinterpret_s16_s64(int64x1_t __a);

int16x4_t vreinterpret_s16_u64(uint64x1_t __a);

int16x4_t vreinterpret_s16_s8(int8x8_t __a);

int16x4_t vreinterpret_s16_s32(int32x2_t __a);

int16x4_t vreinterpret_s16_u8(uint8x8_t __a);

int16x4_t vreinterpret_s16_u16(uint16x4_t __a);

int16x4_t vreinterpret_s16_u32(uint32x2_t __a);

int32x2_t vreinterpret_s32_p8(poly8x8_t __a);

int32x2_t vreinterpret_s32_p16(poly16x4_t __a);

int32x2_t vreinterpret_s32_f16(float16x4_t __a);

int32x2_t vreinterpret_s32_f32(float32x2_t __a);

int32x2_t vreinterpret_s32_p64(poly64x1_t __a);

int32x2_t vreinterpret_s32_s64(int64x1_t __a);

int32x2_t vreinterpret_s32_u64(uint64x1_t __a);

int32x2_t vreinterpret_s32_s8(int8x8_t __a);

int32x2_t vreinterpret_s32_s16(int16x4_t __a);

int32x2_t vreinterpret_s32_u8(uint8x8_t __a);

int32x2_t vreinterpret_s32_u16(uint16x4_t __a);

int32x2_t vreinterpret_s32_u32(uint32x2_t __a);

uint8x8_t vreinterpret_u8_p8(poly8x8_t __a);

uint8x8_t vreinterpret_u8_p16(poly16x4_t __a);

uint8x8_t vreinterpret_u8_f16(float16x4_t __a);

uint8x8_t vreinterpret_u8_f32(float32x2_t __a);

uint8x8_t vreinterpret_u8_p64(poly64x1_t __a);

uint8x8_t vreinterpret_u8_s64(int64x1_t __a);

uint8x8_t vreinterpret_u8_u64(uint64x1_t __a);

uint8x8_t vreinterpret_u8_s8(int8x8_t __a);

uint8x8_t vreinterpret_u8_s16(int16x4_t __a);

uint8x8_t vreinterpret_u8_s32(int32x2_t __a);

uint8x8_t vreinterpret_u8_u16(uint16x4_t __a);

uint8x8_t vreinterpret_u8_u32(uint32x2_t __a);

uint16x4_t vreinterpret_u16_p8(poly8x8_t __a);

uint16x4_t vreinterpret_u16_p16(poly16x4_t __a);

uint16x4_t vreinterpret_u16_f16(float16x4_t __a);

uint16x4_t vreinterpret_u16_f32(float32x2_t __a);

uint16x4_t vreinterpret_u16_p64(poly64x1_t __a);

uint16x4_t vreinterpret_u16_s64(int64x1_t __a);

uint16x4_t vreinterpret_u16_u64(uint64x1_t __a);

uint16x4_t vreinterpret_u16_s8(int8x8_t __a);

uint16x4_t vreinterpret_u16_s16(int16x4_t __a);

uint16x4_t vreinterpret_u16_s32(int32x2_t __a);

uint16x4_t vreinterpret_u16_u8(uint8x8_t __a);

uint16x4_t vreinterpret_u16_u32(uint32x2_t __a);

uint32x2_t vreinterpret_u32_p8(poly8x8_t __a);

uint32x2_t vreinterpret_u32_p16(poly16x4_t __a);

uint32x2_t vreinterpret_u32_f16(float16x4_t __a);

uint32x2_t vreinterpret_u32_f32(float32x2_t __a);

uint32x2_t vreinterpret_u32_p64(poly64x1_t __a);

uint32x2_t vreinterpret_u32_s64(int64x1_t __a);

uint32x2_t vreinterpret_u32_u64(uint64x1_t __a);

uint32x2_t vreinterpret_u32_s8(int8x8_t __a);

uint32x2_t vreinterpret_u32_s16(int16x4_t __a);

uint32x2_t vreinterpret_u32_s32(int32x2_t __a);

uint32x2_t vreinterpret_u32_u8(uint8x8_t __a);

uint32x2_t vreinterpret_u32_u16(uint16x4_t __a);

poly8x16_t vreinterpretq_p8_p16(poly16x8_t __a);

poly8x16_t vreinterpretq_p8_f16(float16x8_t __a);

poly8x16_t vreinterpretq_p8_f32(float32x4_t __a);

poly8x16_t vreinterpretq_p8_p64(poly64x2_t __a);

poly8x16_t vreinterpretq_p8_p128(poly128_t __a);

poly8x16_t vreinterpretq_p8_s64(int64x2_t __a);

poly8x16_t vreinterpretq_p8_u64(uint64x2_t __a);

poly8x16_t vreinterpretq_p8_s8(int8x16_t __a);

poly8x16_t vreinterpretq_p8_s16(int16x8_t __a);

poly8x16_t vreinterpretq_p8_s32(int32x4_t __a);

poly8x16_t vreinterpretq_p8_u8(uint8x16_t __a);

poly8x16_t vreinterpretq_p8_u16(uint16x8_t __a);

poly8x16_t vreinterpretq_p8_u32(uint32x4_t __a);

poly16x8_t vreinterpretq_p16_p8(poly8x16_t __a);

poly16x8_t vreinterpretq_p16_f16(float16x8_t __a);

poly16x8_t vreinterpretq_p16_f32(float32x4_t __a);

poly16x8_t vreinterpretq_p16_p64(poly64x2_t __a);

poly16x8_t vreinterpretq_p16_p128(poly128_t __a);

poly16x8_t vreinterpretq_p16_s64(int64x2_t __a);

poly16x8_t vreinterpretq_p16_u64(uint64x2_t __a);

poly16x8_t vreinterpretq_p16_s8(int8x16_t __a);

poly16x8_t vreinterpretq_p16_s16(int16x8_t __a);

poly16x8_t vreinterpretq_p16_s32(int32x4_t __a);

poly16x8_t vreinterpretq_p16_u8(uint8x16_t __a);

poly16x8_t vreinterpretq_p16_u16(uint16x8_t __a);

poly16x8_t vreinterpretq_p16_u32(uint32x4_t __a);

float16x8_t vreinterpretq_f16_p8(poly8x16_t __a);

float16x8_t vreinterpretq_f16_p16(poly16x8_t __a);

float16x8_t vreinterpretq_f16_bf16(bfloat16x8_t __a);

float16x8_t vreinterpretq_f16_f32(float32x4_t __a);

float16x8_t vreinterpretq_f16_p64(poly64x2_t __a);

float16x8_t vreinterpretq_f16_p128(poly128_t __a);

float16x8_t vreinterpretq_f16_s64(int64x2_t __a);

float16x8_t vreinterpretq_f16_u64(uint64x2_t __a);

float16x8_t vreinterpretq_f16_s8(int8x16_t __a);

float16x8_t vreinterpretq_f16_s16(int16x8_t __a);

float16x8_t vreinterpretq_f16_s32(int32x4_t __a);

float16x8_t vreinterpretq_f16_u8(uint8x16_t __a);

float16x8_t vreinterpretq_f16_u16(uint16x8_t __a);

float16x8_t vreinterpretq_f16_u32(uint32x4_t __a);

float32x4_t vreinterpretq_f32_p8(poly8x16_t __a);

float32x4_t vreinterpretq_f32_p16(poly16x8_t __a);

float32x4_t vreinterpretq_f32_f16(float16x8_t __a);

float32x4_t vreinterpretq_f32_p64(poly64x2_t __a);

float32x4_t vreinterpretq_f32_p128(poly128_t __a);

float32x4_t vreinterpretq_f32_s64(int64x2_t __a);

float32x4_t vreinterpretq_f32_u64(uint64x2_t __a);

float32x4_t vreinterpretq_f32_s8(int8x16_t __a);

float32x4_t vreinterpretq_f32_s16(int16x8_t __a);

float32x4_t vreinterpretq_f32_s32(int32x4_t __a);

float32x4_t vreinterpretq_f32_u8(uint8x16_t __a);

float32x4_t vreinterpretq_f32_u16(uint16x8_t __a);

float32x4_t vreinterpretq_f32_u32(uint32x4_t __a);

poly64x2_t vreinterpretq_p64_p8(poly8x16_t __a);

poly64x2_t vreinterpretq_p64_p16(poly16x8_t __a);

poly64x2_t vreinterpretq_p64_f16(float16x8_t __a);

poly64x2_t vreinterpretq_p64_f32(float32x4_t __a);

poly64x2_t vreinterpretq_p64_p128(poly128_t __a);

poly64x2_t vreinterpretq_p64_s64(int64x2_t __a);

poly64x2_t vreinterpretq_p64_u64(uint64x2_t __a);

poly64x2_t vreinterpretq_p64_s8(int8x16_t __a);

poly64x2_t vreinterpretq_p64_s16(int16x8_t __a);

poly64x2_t vreinterpretq_p64_s32(int32x4_t __a);

poly64x2_t vreinterpretq_p64_u8(uint8x16_t __a);

poly64x2_t vreinterpretq_p64_u16(uint16x8_t __a);

poly64x2_t vreinterpretq_p64_u32(uint32x4_t __a);

poly128_t vreinterpretq_p128_p8(poly8x16_t __a);

poly128_t vreinterpretq_p128_p16(poly16x8_t __a);

poly128_t vreinterpretq_p128_f16(float16x8_t __a);

poly128_t vreinterpretq_p128_f32(float32x4_t __a);

poly128_t vreinterpretq_p128_p64(poly64x2_t __a);

poly128_t vreinterpretq_p128_s64(int64x2_t __a);

poly128_t vreinterpretq_p128_u64(uint64x2_t __a);

poly128_t vreinterpretq_p128_s8(int8x16_t __a);

poly128_t vreinterpretq_p128_s16(int16x8_t __a);

poly128_t vreinterpretq_p128_s32(int32x4_t __a);

poly128_t vreinterpretq_p128_u8(uint8x16_t __a);

poly128_t vreinterpretq_p128_u16(uint16x8_t __a);

poly128_t vreinterpretq_p128_u32(uint32x4_t __a);

int64x2_t vreinterpretq_s64_p8(poly8x16_t __a);

int64x2_t vreinterpretq_s64_p16(poly16x8_t __a);

int64x2_t vreinterpretq_s64_f16(float16x8_t __a);

int64x2_t vreinterpretq_s64_f32(float32x4_t __a);

int64x2_t vreinterpretq_s64_p64(poly64x2_t __a);

int64x2_t vreinterpretq_s64_p128(poly128_t __a);

int64x2_t vreinterpretq_s64_u64(uint64x2_t __a);

int64x2_t vreinterpretq_s64_s8(int8x16_t __a);

int64x2_t vreinterpretq_s64_s16(int16x8_t __a);

int64x2_t vreinterpretq_s64_s32(int32x4_t __a);

int64x2_t vreinterpretq_s64_u8(uint8x16_t __a);

int64x2_t vreinterpretq_s64_u16(uint16x8_t __a);

int64x2_t vreinterpretq_s64_u32(uint32x4_t __a);

uint64x2_t vreinterpretq_u64_p8(poly8x16_t __a);

uint64x2_t vreinterpretq_u64_p16(poly16x8_t __a);

uint64x2_t vreinterpretq_u64_f16(float16x8_t __a);

uint64x2_t vreinterpretq_u64_f32(float32x4_t __a);

uint64x2_t vreinterpretq_u64_p64(poly64x2_t __a);

uint64x2_t vreinterpretq_u64_p128(poly128_t __a);

uint64x2_t vreinterpretq_u64_s64(int64x2_t __a);

uint64x2_t vreinterpretq_u64_s8(int8x16_t __a);

uint64x2_t vreinterpretq_u64_s16(int16x8_t __a);

uint64x2_t vreinterpretq_u64_s32(int32x4_t __a);

uint64x2_t vreinterpretq_u64_u8(uint8x16_t __a);

uint64x2_t vreinterpretq_u64_u16(uint16x8_t __a);

uint64x2_t vreinterpretq_u64_u32(uint32x4_t __a);

int8x16_t vreinterpretq_s8_p8(poly8x16_t __a);

int8x16_t vreinterpretq_s8_p16(poly16x8_t __a);

int8x16_t vreinterpretq_s8_f16(float16x8_t __a);

int8x16_t vreinterpretq_s8_f32(float32x4_t __a);

int8x16_t vreinterpretq_s8_p64(poly64x2_t __a);

int8x16_t vreinterpretq_s8_p128(poly128_t __a);

int8x16_t vreinterpretq_s8_s64(int64x2_t __a);

int8x16_t vreinterpretq_s8_u64(uint64x2_t __a);

int8x16_t vreinterpretq_s8_s16(int16x8_t __a);

int8x16_t vreinterpretq_s8_s32(int32x4_t __a);

int8x16_t vreinterpretq_s8_u8(uint8x16_t __a);

int8x16_t vreinterpretq_s8_u16(uint16x8_t __a);

int8x16_t vreinterpretq_s8_u32(uint32x4_t __a);

int16x8_t vreinterpretq_s16_p8(poly8x16_t __a);

int16x8_t vreinterpretq_s16_p16(poly16x8_t __a);

int16x8_t vreinterpretq_s16_f16(float16x8_t __a);

int16x8_t vreinterpretq_s16_f32(float32x4_t __a);

int16x8_t vreinterpretq_s16_p64(poly64x2_t __a);

int16x8_t vreinterpretq_s16_p128(poly128_t __a);

int16x8_t vreinterpretq_s16_s64(int64x2_t __a);

int16x8_t vreinterpretq_s16_u64(uint64x2_t __a);

int16x8_t vreinterpretq_s16_s8(int8x16_t __a);

int16x8_t vreinterpretq_s16_s32(int32x4_t __a);

int16x8_t vreinterpretq_s16_u8(uint8x16_t __a);

int16x8_t vreinterpretq_s16_u16(uint16x8_t __a);

int16x8_t vreinterpretq_s16_u32(uint32x4_t __a);

int32x4_t vreinterpretq_s32_p8(poly8x16_t __a);

int32x4_t vreinterpretq_s32_p16(poly16x8_t __a);

int32x4_t vreinterpretq_s32_f16(float16x8_t __a);

int32x4_t vreinterpretq_s32_f32(float32x4_t __a);

int32x4_t vreinterpretq_s32_p64(poly64x2_t __a);

int32x4_t vreinterpretq_s32_p128(poly128_t __a);

int32x4_t vreinterpretq_s32_s64(int64x2_t __a);

int32x4_t vreinterpretq_s32_u64(uint64x2_t __a);

int32x4_t vreinterpretq_s32_s8(int8x16_t __a);

int32x4_t vreinterpretq_s32_s16(int16x8_t __a);

int32x4_t vreinterpretq_s32_u8(uint8x16_t __a);

int32x4_t vreinterpretq_s32_u16(uint16x8_t __a);

int32x4_t vreinterpretq_s32_u32(uint32x4_t __a);

uint8x16_t vreinterpretq_u8_p8(poly8x16_t __a);

uint8x16_t vreinterpretq_u8_p16(poly16x8_t __a);

uint8x16_t vreinterpretq_u8_f16(float16x8_t __a);

uint8x16_t vreinterpretq_u8_f32(float32x4_t __a);

uint8x16_t vreinterpretq_u8_p64(poly64x2_t __a);

uint8x16_t vreinterpretq_u8_p128(poly128_t __a);

uint8x16_t vreinterpretq_u8_s64(int64x2_t __a);

uint8x16_t vreinterpretq_u8_u64(uint64x2_t __a);

uint8x16_t vreinterpretq_u8_s8(int8x16_t __a);

uint8x16_t vreinterpretq_u8_s16(int16x8_t __a);

uint8x16_t vreinterpretq_u8_s32(int32x4_t __a);

uint8x16_t vreinterpretq_u8_u16(uint16x8_t __a);

uint8x16_t vreinterpretq_u8_u32(uint32x4_t __a);

uint16x8_t vreinterpretq_u16_p8(poly8x16_t __a);

uint16x8_t vreinterpretq_u16_p16(poly16x8_t __a);

uint16x8_t vreinterpretq_u16_f16(float16x8_t __a);

uint16x8_t vreinterpretq_u16_f32(float32x4_t __a);

uint16x8_t vreinterpretq_u16_p64(poly64x2_t __a);

uint16x8_t vreinterpretq_u16_p128(poly128_t __a);

uint16x8_t vreinterpretq_u16_s64(int64x2_t __a);

uint16x8_t vreinterpretq_u16_u64(uint64x2_t __a);

uint16x8_t vreinterpretq_u16_s8(int8x16_t __a);

uint16x8_t vreinterpretq_u16_s16(int16x8_t __a);

uint16x8_t vreinterpretq_u16_s32(int32x4_t __a);

uint16x8_t vreinterpretq_u16_u8(uint8x16_t __a);

uint16x8_t vreinterpretq_u16_u32(uint32x4_t __a);

uint32x4_t vreinterpretq_u32_p8(poly8x16_t __a);

uint32x4_t vreinterpretq_u32_p16(poly16x8_t __a);

uint32x4_t vreinterpretq_u32_f16(float16x8_t __a);

uint32x4_t vreinterpretq_u32_f32(float32x4_t __a);

uint32x4_t vreinterpretq_u32_p64(poly64x2_t __a);

uint32x4_t vreinterpretq_u32_p128(poly128_t __a);

uint32x4_t vreinterpretq_u32_s64(int64x2_t __a);

uint32x4_t vreinterpretq_u32_u64(uint64x2_t __a);

uint32x4_t vreinterpretq_u32_s8(int8x16_t __a);

uint32x4_t vreinterpretq_u32_s16(int16x8_t __a);

uint32x4_t vreinterpretq_u32_s32(int32x4_t __a);

uint32x4_t vreinterpretq_u32_u8(uint8x16_t __a);

uint32x4_t vreinterpretq_u32_u16(uint16x8_t __a);

poly128_t vldrq_p128(poly128_t const *__ptr);

void vstrq_p128(poly128_t *__ptr, poly128_t __val);

uint64x1_t vceq_p64(poly64x1_t __a, poly64x1_t __b);

uint64x1_t vceqz_p64(poly64x1_t __a);

/* For vceqq_p64, we rely on vceq_p64 for each of the two elements.  */
uint64x2_t vceqq_p64(poly64x2_t __a, poly64x2_t __b);

uint64x2_t vceqzq_p64(poly64x2_t __a);

/* The vtst_p64 intrinsic does not map to a single instruction.
   We emulate it in way similar to vceq_p64 above but here we do
   a reduction with max since if any two corresponding bits
   in the two poly64_t's match, then the whole result must be all ones.  */

uint64x1_t vtst_p64(poly64x1_t __a, poly64x1_t __b);

uint8x16_t vaeseq_u8(uint8x16_t __data, uint8x16_t __key);

uint8x16_t vaesdq_u8(uint8x16_t __data, uint8x16_t __key);

uint8x16_t vaesmcq_u8(uint8x16_t __data);

uint8x16_t vaesimcq_u8(uint8x16_t __data);

uint32_t vsha1h_u32(uint32_t __hash_e);

uint32x4_t vsha1cq_u32(uint32x4_t __hash_abcd, uint32_t __hash_e,
                       uint32x4_t __wk);

uint32x4_t vsha1pq_u32(uint32x4_t __hash_abcd, uint32_t __hash_e,
                       uint32x4_t __wk);

uint32x4_t vsha1mq_u32(uint32x4_t __hash_abcd, uint32_t __hash_e,
                       uint32x4_t __wk);

uint32x4_t vsha1su0q_u32(uint32x4_t __w0_3, uint32x4_t __w4_7,
                         uint32x4_t __w8_11);

uint32x4_t vsha1su1q_u32(uint32x4_t __tw0_3, uint32x4_t __w12_15);

uint32x4_t vsha256hq_u32(uint32x4_t __hash_abcd, uint32x4_t __hash_efgh,
                         uint32x4_t __wk);

uint32x4_t vsha256h2q_u32(uint32x4_t __hash_abcd, uint32x4_t __hash_efgh,
                          uint32x4_t __wk);

uint32x4_t vsha256su0q_u32(uint32x4_t __w0_3, uint32x4_t __w4_7);

uint32x4_t vsha256su1q_u32(uint32x4_t __tw0_3, uint32x4_t __w8_11,
                           uint32x4_t __w12_15);

poly128_t vmull_p64(poly64_t __a, poly64_t __b);

poly128_t vmull_high_p64(poly64x2_t __a, poly64x2_t __b);

/* Intrinsics for FP16 instructions.  */

float16x4_t vabd_f16(float16x4_t __a, float16x4_t __b);

float16x8_t vabdq_f16(float16x8_t __a, float16x8_t __b);

float16x4_t vabs_f16(float16x4_t __a);

float16x8_t vabsq_f16(float16x8_t __a);

float16x4_t vadd_f16(float16x4_t __a, float16x4_t __b);

float16x8_t vaddq_f16(float16x8_t __a, float16x8_t __b);

uint16x4_t vcage_f16(float16x4_t __a, float16x4_t __b);

uint16x8_t vcageq_f16(float16x8_t __a, float16x8_t __b);

uint16x4_t vcagt_f16(float16x4_t __a, float16x4_t __b);

uint16x8_t vcagtq_f16(float16x8_t __a, float16x8_t __b);

uint16x4_t vcale_f16(float16x4_t __a, float16x4_t __b);

uint16x8_t vcaleq_f16(float16x8_t __a, float16x8_t __b);

uint16x4_t vcalt_f16(float16x4_t __a, float16x4_t __b);

uint16x8_t vcaltq_f16(float16x8_t __a, float16x8_t __b);

uint16x4_t vceq_f16(float16x4_t __a, float16x4_t __b);

uint16x8_t vceqq_f16(float16x8_t __a, float16x8_t __b);

uint16x4_t vceqz_f16(float16x4_t __a);

uint16x8_t vceqzq_f16(float16x8_t __a);

uint16x4_t vcge_f16(float16x4_t __a, float16x4_t __b);

uint16x8_t vcgeq_f16(float16x8_t __a, float16x8_t __b);

uint16x4_t vcgez_f16(float16x4_t __a);

uint16x8_t vcgezq_f16(float16x8_t __a);

uint16x4_t vcgt_f16(float16x4_t __a, float16x4_t __b);

uint16x8_t vcgtq_f16(float16x8_t __a, float16x8_t __b);

uint16x4_t vcgtz_f16(float16x4_t __a);

uint16x8_t vcgtzq_f16(float16x8_t __a);

uint16x4_t vcle_f16(float16x4_t __a, float16x4_t __b);

uint16x8_t vcleq_f16(float16x8_t __a, float16x8_t __b);

uint16x4_t vclez_f16(float16x4_t __a);

uint16x8_t vclezq_f16(float16x8_t __a);

uint16x4_t vclt_f16(float16x4_t __a, float16x4_t __b);

uint16x8_t vcltq_f16(float16x8_t __a, float16x8_t __b);

uint16x4_t vcltz_f16(float16x4_t __a);

uint16x8_t vcltzq_f16(float16x8_t __a);

float16x4_t vcvt_f16_s16(int16x4_t __a);

float16x4_t vcvt_f16_u16(uint16x4_t __a);

int16x4_t vcvt_s16_f16(float16x4_t __a);

uint16x4_t vcvt_u16_f16(float16x4_t __a);

float16x8_t vcvtq_f16_s16(int16x8_t __a);

float16x8_t vcvtq_f16_u16(uint16x8_t __a);

int16x8_t vcvtq_s16_f16(float16x8_t __a);

uint16x8_t vcvtq_u16_f16(float16x8_t __a);

int16x4_t vcvta_s16_f16(float16x4_t __a);

uint16x4_t vcvta_u16_f16(float16x4_t __a);

int16x8_t vcvtaq_s16_f16(float16x8_t __a);

uint16x8_t vcvtaq_u16_f16(float16x8_t __a);

int16x4_t vcvtm_s16_f16(float16x4_t __a);

uint16x4_t vcvtm_u16_f16(float16x4_t __a);

int16x8_t vcvtmq_s16_f16(float16x8_t __a);

uint16x8_t vcvtmq_u16_f16(float16x8_t __a);

int16x4_t vcvtn_s16_f16(float16x4_t __a);

uint16x4_t vcvtn_u16_f16(float16x4_t __a);

int16x8_t vcvtnq_s16_f16(float16x8_t __a);

uint16x8_t vcvtnq_u16_f16(float16x8_t __a);

int16x4_t vcvtp_s16_f16(float16x4_t __a);

uint16x4_t vcvtp_u16_f16(float16x4_t __a);

int16x8_t vcvtpq_s16_f16(float16x8_t __a);

uint16x8_t vcvtpq_u16_f16(float16x8_t __a);

float16x4_t vcvt_n_f16_s16(int16x4_t __a, const int __b);

float16x4_t vcvt_n_f16_u16(uint16x4_t __a, const int __b);

float16x8_t vcvtq_n_f16_s16(int16x8_t __a, const int __b);

float16x8_t vcvtq_n_f16_u16(uint16x8_t __a, const int __b);

int16x4_t vcvt_n_s16_f16(float16x4_t __a, const int __b);

uint16x4_t vcvt_n_u16_f16(float16x4_t __a, const int __b);

int16x8_t vcvtq_n_s16_f16(float16x8_t __a, const int __b);

uint16x8_t vcvtq_n_u16_f16(float16x8_t __a, const int __b);

float16x4_t vfma_f16(float16x4_t __a, float16x4_t __b, float16x4_t __c);

float16x8_t vfmaq_f16(float16x8_t __a, float16x8_t __b, float16x8_t __c);

float16x4_t vfms_f16(float16x4_t __a, float16x4_t __b, float16x4_t __c);

float16x8_t vfmsq_f16(float16x8_t __a, float16x8_t __b, float16x8_t __c);

float16x4_t vmax_f16(float16x4_t __a, float16x4_t __b);

float16x8_t vmaxq_f16(float16x8_t __a, float16x8_t __b);

float16x4_t vmaxnm_f16(float16x4_t __a, float16x4_t __b);

float16x8_t vmaxnmq_f16(float16x8_t __a, float16x8_t __b);

float16x4_t vmin_f16(float16x4_t __a, float16x4_t __b);

float16x8_t vminq_f16(float16x8_t __a, float16x8_t __b);

float16x4_t vminnm_f16(float16x4_t __a, float16x4_t __b);

float16x8_t vminnmq_f16(float16x8_t __a, float16x8_t __b);

float16x4_t vmul_f16(float16x4_t __a, float16x4_t __b);

float16x4_t vmul_lane_f16(float16x4_t __a, float16x4_t __b, const int __c);

float16x4_t vmul_n_f16(float16x4_t __a, float16_t __b);

float16x8_t vmulq_f16(float16x8_t __a, float16x8_t __b);

float16x8_t vmulq_lane_f16(float16x8_t __a, float16x4_t __b, const int __c);

float16x8_t vmulq_n_f16(float16x8_t __a, float16_t __b);

float16x4_t vneg_f16(float16x4_t __a);

float16x8_t vnegq_f16(float16x8_t __a);

float16x4_t vpadd_f16(float16x4_t __a, float16x4_t __b);

float16x4_t vpmax_f16(float16x4_t __a, float16x4_t __b);

float16x4_t vpmin_f16(float16x4_t __a, float16x4_t __b);

float16x4_t vrecpe_f16(float16x4_t __a);

float16x8_t vrecpeq_f16(float16x8_t __a);

float16x4_t vrnd_f16(float16x4_t __a);

float16x8_t vrndq_f16(float16x8_t __a);

float16x4_t vrnda_f16(float16x4_t __a);

float16x8_t vrndaq_f16(float16x8_t __a);

float16x4_t vrndm_f16(float16x4_t __a);

float16x8_t vrndmq_f16(float16x8_t __a);

float16x4_t vrndn_f16(float16x4_t __a);

float16x8_t vrndnq_f16(float16x8_t __a);

float16x4_t vrndp_f16(float16x4_t __a);

float16x8_t vrndpq_f16(float16x8_t __a);

float16x4_t vrndx_f16(float16x4_t __a);

float16x8_t vrndxq_f16(float16x8_t __a);

float16x4_t vrsqrte_f16(float16x4_t __a);

float16x8_t vrsqrteq_f16(float16x8_t __a);

float16x4_t vrecps_f16(float16x4_t __a, float16x4_t __b);

float16x8_t vrecpsq_f16(float16x8_t __a, float16x8_t __b);

float16x4_t vrsqrts_f16(float16x4_t __a, float16x4_t __b);

float16x8_t vrsqrtsq_f16(float16x8_t __a, float16x8_t __b);

float16x4_t vsub_f16(float16x4_t __a, float16x4_t __b);

float16x8_t vsubq_f16(float16x8_t __a, float16x8_t __b);

/* Half-precision data processing intrinsics.  */

float16x4_t vbsl_f16(uint16x4_t __a, float16x4_t __b, float16x4_t __c);

float16x8_t vbslq_f16(uint16x8_t __a, float16x8_t __b, float16x8_t __c);

float16x4_t vdup_n_f16(float16_t __a);

float16x8_t vdupq_n_f16(float16_t __a);

float16x4_t vdup_lane_f16(float16x4_t __a, const int __b);

float16x8_t vdupq_lane_f16(float16x4_t __a, const int __b);

float16x4_t vext_f16(float16x4_t __a, float16x4_t __b, const int __c);

float16x8_t vextq_f16(float16x8_t __a, float16x8_t __b, const int __c);

float16x4_t vmov_n_f16(float16_t __a);

float16x8_t vmovq_n_f16(float16_t __a);

float16x4_t vrev64_f16(float16x4_t __a);

float16x8_t vrev64q_f16(float16x8_t __a);

float16x4x2_t vtrn_f16(float16x4_t __a, float16x4_t __b);

float16x8x2_t vtrnq_f16(float16x8_t __a, float16x8_t __b);

float16x4x2_t vuzp_f16(float16x4_t __a, float16x4_t __b);

float16x8x2_t vuzpq_f16(float16x8_t __a, float16x8_t __b);

float16x4x2_t vzip_f16(float16x4_t __a, float16x4_t __b);

float16x8x2_t vzipq_f16(float16x8_t __a, float16x8_t __b);

/* AdvSIMD Dot Product intrinsics.  */

uint32x2_t vdot_u32(uint32x2_t __r, uint8x8_t __a, uint8x8_t __b);

uint32x4_t vdotq_u32(uint32x4_t __r, uint8x16_t __a, uint8x16_t __b);

int32x2_t vdot_s32(int32x2_t __r, int8x8_t __a, int8x8_t __b);

int32x4_t vdotq_s32(int32x4_t __r, int8x16_t __a, int8x16_t __b);

uint32x2_t vdot_lane_u32(uint32x2_t __r, uint8x8_t __a, uint8x8_t __b,
                         const int __index);

uint32x4_t vdotq_lane_u32(uint32x4_t __r, uint8x16_t __a, uint8x8_t __b,
                          const int __index);

int32x2_t vdot_lane_s32(int32x2_t __r, int8x8_t __a, int8x8_t __b,
                        const int __index);

int32x4_t vdotq_lane_s32(int32x4_t __r, int8x16_t __a, int8x8_t __b,
                         const int __index);

uint32x2_t vdot_laneq_u32(uint32x2_t __r, uint8x8_t __a, uint8x16_t __b,
                          const int __index);

uint32x4_t vdotq_laneq_u32(uint32x4_t __r, uint8x16_t __a, uint8x16_t __b,
                           const int __index);

int32x2_t vdot_laneq_s32(int32x2_t __r, int8x8_t __a, int8x16_t __b,
                         const int __index);

int32x4_t vdotq_laneq_s32(int32x4_t __r, int8x16_t __a, int8x16_t __b,
                          const int __index);

float32x2_t vfmlal_low_f16(float32x2_t __r, float16x4_t __a, float16x4_t __b);

float32x2_t vfmlsl_low_f16(float32x2_t __r, float16x4_t __a, float16x4_t __b);

float32x2_t vfmlal_high_f16(float32x2_t __r, float16x4_t __a, float16x4_t __b);

float32x2_t vfmlsl_high_f16(float32x2_t __r, float16x4_t __a, float16x4_t __b);

float32x4_t vfmlalq_low_f16(float32x4_t __r, float16x8_t __a, float16x8_t __b);

float32x4_t vfmlslq_low_f16(float32x4_t __r, float16x8_t __a, float16x8_t __b);

float32x4_t vfmlalq_high_f16(float32x4_t __r, float16x8_t __a, float16x8_t __b);

float32x4_t vfmlslq_high_f16(float32x4_t __r, float16x8_t __a, float16x8_t __b);

float32x2_t vfmlal_lane_low_f16(float32x2_t __r, float16x4_t __a,
                                float16x4_t __b, const int __index);

float32x2_t vfmlal_lane_high_f16(float32x2_t __r, float16x4_t __a,
                                 float16x4_t __b, const int __index);

float32x4_t vfmlalq_laneq_low_f16(float32x4_t __r, float16x8_t __a,
                                  float16x8_t __b, const int __index);

float32x4_t vfmlalq_lane_low_f16(float32x4_t __r, float16x8_t __a,
                                 float16x4_t __b, const int __index);

float32x2_t vfmlal_laneq_low_f16(float32x2_t __r, float16x4_t __a,
                                 float16x8_t __b, const int __index);

float32x4_t vfmlalq_laneq_high_f16(float32x4_t __r, float16x8_t __a,
                                   float16x8_t __b, const int __index);

float32x4_t vfmlalq_lane_high_f16(float32x4_t __r, float16x8_t __a,
                                  float16x4_t __b, const int __index);

float32x2_t vfmlal_laneq_high_f16(float32x2_t __r, float16x4_t __a,
                                  float16x8_t __b, const int __index);

float32x2_t vfmlsl_lane_low_f16(float32x2_t __r, float16x4_t __a,
                                float16x4_t __b, const int __index);

float32x2_t vfmlsl_lane_high_f16(float32x2_t __r, float16x4_t __a,
                                 float16x4_t __b, const int __index);

float32x4_t vfmlslq_laneq_low_f16(float32x4_t __r, float16x8_t __a,
                                  float16x8_t __b, const int __index);

float32x4_t vfmlslq_lane_low_f16(float32x4_t __r, float16x8_t __a,
                                 float16x4_t __b, const int __index);

float32x2_t vfmlsl_laneq_low_f16(float32x2_t __r, float16x4_t __a,
                                 float16x8_t __b, const int __index);

float32x4_t vfmlslq_laneq_high_f16(float32x4_t __r, float16x8_t __a,
                                   float16x8_t __b, const int __index);

float32x4_t vfmlslq_lane_high_f16(float32x4_t __r, float16x8_t __a,
                                  float16x4_t __b, const int __index);

float32x2_t vfmlsl_laneq_high_f16(float32x2_t __r, float16x4_t __a,
                                  float16x8_t __b, const int __index);

/* AdvSIMD Complex numbers intrinsics.  */

float16x4_t vcadd_rot90_f16(float16x4_t __a, float16x4_t __b);

float16x8_t vcaddq_rot90_f16(float16x8_t __a, float16x8_t __b);

float16x4_t vcadd_rot270_f16(float16x4_t __a, float16x4_t __b);

float16x8_t vcaddq_rot270_f16(float16x8_t __a, float16x8_t __b);

float16x4_t vcmla_f16(float16x4_t __r, float16x4_t __a, float16x4_t __b);

float16x8_t vcmlaq_f16(float16x8_t __r, float16x8_t __a, float16x8_t __b);

float16x4_t vcmla_lane_f16(float16x4_t __r, float16x4_t __a, float16x4_t __b,
                           const int __index);

float16x4_t vcmla_laneq_f16(float16x4_t __r, float16x4_t __a, float16x8_t __b,
                            const int __index);

float16x8_t vcmlaq_lane_f16(float16x8_t __r, float16x8_t __a, float16x4_t __b,
                            const int __index);

float16x8_t vcmlaq_laneq_f16(float16x8_t __r, float16x8_t __a, float16x8_t __b,
                             const int __index);

float16x4_t vcmla_rot90_f16(float16x4_t __r, float16x4_t __a, float16x4_t __b);

float16x8_t vcmlaq_rot90_f16(float16x8_t __r, float16x8_t __a, float16x8_t __b);

float16x4_t vcmla_rot90_lane_f16(float16x4_t __r, float16x4_t __a,
                                 float16x4_t __b, const int __index);

float16x4_t vcmla_rot90_laneq_f16(float16x4_t __r, float16x4_t __a,
                                  float16x8_t __b, const int __index);

float16x8_t vcmlaq_rot90_lane_f16(float16x8_t __r, float16x8_t __a,
                                  float16x4_t __b, const int __index);

float16x8_t vcmlaq_rot90_laneq_f16(float16x8_t __r, float16x8_t __a,
                                   float16x8_t __b, const int __index);

float16x4_t vcmla_rot180_f16(float16x4_t __r, float16x4_t __a, float16x4_t __b);

float16x8_t vcmlaq_rot180_f16(float16x8_t __r, float16x8_t __a,
                              float16x8_t __b);

float16x4_t vcmla_rot180_lane_f16(float16x4_t __r, float16x4_t __a,
                                  float16x4_t __b, const int __index);

float16x4_t vcmla_rot180_laneq_f16(float16x4_t __r, float16x4_t __a,
                                   float16x8_t __b, const int __index);

float16x8_t vcmlaq_rot180_lane_f16(float16x8_t __r, float16x8_t __a,
                                   float16x4_t __b, const int __index);

float16x8_t vcmlaq_rot180_laneq_f16(float16x8_t __r, float16x8_t __a,
                                    float16x8_t __b, const int __index);

float16x4_t vcmla_rot270_f16(float16x4_t __r, float16x4_t __a, float16x4_t __b);

float16x8_t vcmlaq_rot270_f16(float16x8_t __r, float16x8_t __a,
                              float16x8_t __b);

float16x4_t vcmla_rot270_lane_f16(float16x4_t __r, float16x4_t __a,
                                  float16x4_t __b, const int __index);

float16x4_t vcmla_rot270_laneq_f16(float16x4_t __r, float16x4_t __a,
                                   float16x8_t __b, const int __index);

float16x8_t vcmlaq_rot270_lane_f16(float16x8_t __r, float16x8_t __a,
                                   float16x4_t __b, const int __index);

float16x8_t vcmlaq_rot270_laneq_f16(float16x8_t __r, float16x8_t __a,
                                    float16x8_t __b, const int __index);

float32x2_t vcadd_rot90_f32(float32x2_t __a, float32x2_t __b);

float32x4_t vcaddq_rot90_f32(float32x4_t __a, float32x4_t __b);

float32x2_t vcadd_rot270_f32(float32x2_t __a, float32x2_t __b);

float32x4_t vcaddq_rot270_f32(float32x4_t __a, float32x4_t __b);

float32x2_t vcmla_f32(float32x2_t __r, float32x2_t __a, float32x2_t __b);

float32x4_t vcmlaq_f32(float32x4_t __r, float32x4_t __a, float32x4_t __b);

float32x2_t vcmla_lane_f32(float32x2_t __r, float32x2_t __a, float32x2_t __b,
                           const int __index);

float32x2_t vcmla_laneq_f32(float32x2_t __r, float32x2_t __a, float32x4_t __b,
                            const int __index);

float32x4_t vcmlaq_lane_f32(float32x4_t __r, float32x4_t __a, float32x2_t __b,
                            const int __index);

float32x4_t vcmlaq_laneq_f32(float32x4_t __r, float32x4_t __a, float32x4_t __b,
                             const int __index);

float32x2_t vcmla_rot90_f32(float32x2_t __r, float32x2_t __a, float32x2_t __b);

float32x4_t vcmlaq_rot90_f32(float32x4_t __r, float32x4_t __a, float32x4_t __b);

float32x2_t vcmla_rot90_lane_f32(float32x2_t __r, float32x2_t __a,
                                 float32x2_t __b, const int __index);

float32x2_t vcmla_rot90_laneq_f32(float32x2_t __r, float32x2_t __a,
                                  float32x4_t __b, const int __index);

float32x4_t vcmlaq_rot90_lane_f32(float32x4_t __r, float32x4_t __a,
                                  float32x2_t __b, const int __index);

float32x4_t vcmlaq_rot90_laneq_f32(float32x4_t __r, float32x4_t __a,
                                   float32x4_t __b, const int __index);

float32x2_t vcmla_rot180_f32(float32x2_t __r, float32x2_t __a, float32x2_t __b);

float32x4_t vcmlaq_rot180_f32(float32x4_t __r, float32x4_t __a,
                              float32x4_t __b);

float32x2_t vcmla_rot180_lane_f32(float32x2_t __r, float32x2_t __a,
                                  float32x2_t __b, const int __index);

float32x2_t vcmla_rot180_laneq_f32(float32x2_t __r, float32x2_t __a,
                                   float32x4_t __b, const int __index);

float32x4_t vcmlaq_rot180_lane_f32(float32x4_t __r, float32x4_t __a,
                                   float32x2_t __b, const int __index);

float32x4_t vcmlaq_rot180_laneq_f32(float32x4_t __r, float32x4_t __a,
                                    float32x4_t __b, const int __index);

float32x2_t vcmla_rot270_f32(float32x2_t __r, float32x2_t __a, float32x2_t __b);

float32x4_t vcmlaq_rot270_f32(float32x4_t __r, float32x4_t __a,
                              float32x4_t __b);

float32x2_t vcmla_rot270_lane_f32(float32x2_t __r, float32x2_t __a,
                                  float32x2_t __b, const int __index);

float32x2_t vcmla_rot270_laneq_f32(float32x2_t __r, float32x2_t __a,
                                   float32x4_t __b, const int __index);

float32x4_t vcmlaq_rot270_lane_f32(float32x4_t __r, float32x4_t __a,
                                   float32x2_t __b, const int __index);

float32x4_t vcmlaq_rot270_laneq_f32(float32x4_t __r, float32x4_t __a,
                                    float32x4_t __b, const int __index);

/* AdvSIMD Matrix Multiply-Accumulate and Dot Product intrinsics.  */

int32x2_t vusdot_s32(int32x2_t __r, uint8x8_t __a, int8x8_t __b);

int32x4_t vusdotq_s32(int32x4_t __r, uint8x16_t __a, int8x16_t __b);

int32x2_t vusdot_lane_s32(int32x2_t __r, uint8x8_t __a, int8x8_t __b,
                          const int __index);

int32x4_t vusdotq_lane_s32(int32x4_t __r, uint8x16_t __a, int8x8_t __b,
                           const int __index);

int32x2_t vsudot_lane_s32(int32x2_t __r, int8x8_t __a, uint8x8_t __b,
                          const int __index);

int32x4_t vsudotq_lane_s32(int32x4_t __r, int8x16_t __a, uint8x8_t __b,
                           const int __index);

int32x2_t vusdot_laneq_s32(int32x2_t __r, uint8x8_t __a, int8x16_t __b,
                           const int __index);

int32x4_t vusdotq_laneq_s32(int32x4_t __r, uint8x16_t __a, int8x16_t __b,
                            const int __index);

int32x2_t vsudot_laneq_s32(int32x2_t __r, int8x8_t __a, uint8x16_t __b,
                           const int __index);

int32x4_t vsudotq_laneq_s32(int32x4_t __r, int8x16_t __a, uint8x16_t __b,
                            const int __index);

/* AdvSIMD 8-bit Integer Matrix Multiply (I8MM); intrinsics.  */

int32x4_t vmmlaq_s32(int32x4_t __r, int8x16_t __a, int8x16_t __b);

uint32x4_t vmmlaq_u32(uint32x4_t __r, uint8x16_t __a, uint8x16_t __b);

int32x4_t vusmmlaq_s32(int32x4_t __r, uint8x16_t __a, int8x16_t __b);

#ifdef __cplusplus
}
#endif

#if defined(__GNUC__) || defined(__clang__)
#pragma pop_macro("ALIGN_STRUCT")
#pragma pop_macro("FORCE_INLINE")
#endif

#endif /* NEON2RVV_H */