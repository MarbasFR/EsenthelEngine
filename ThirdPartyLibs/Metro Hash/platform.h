// platform.h
//
// The MIT License (MIT)
//
// Copyright (c) 2015 J. Andrew Rogers
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//

#ifndef METROHASH_PLATFORM_H
#define METROHASH_PLATFORM_H

#include <stdint.h>

// ESENTHEL CHANGED

// rotate right idiom recognized by most compilers
INLINE static uint64_t rotate_right(uint64_t v, unsigned k)
{
    return (v >> k) | (v << (64 - k));
}

// ESENTHEL CHANGED
INLINE uint64_t read_u64(const void * const ptr) {return Unaligned(*(U64*)ptr);}
INLINE uint64_t read_u32(const void * const ptr) {return Unaligned(*(U32*)ptr);}
INLINE uint64_t read_u16(const void * const ptr) {return Unaligned(*(U16*)ptr);}
INLINE uint64_t read_u8 (const void * const ptr) {return Unaligned(*(U8 *)ptr);}

#endif // #ifndef METROHASH_PLATFORM_H
