///////////////////////////////////////////////////////////////////////////////////
/// OpenGL Mathematics (glm.g-truc.net)
///
/// Copyright (c) 2005 - 2014 G-Truc Creation (www.g-truc.net)
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to deal
/// in the Software without restriction, including without limitation the rights
/// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
/// copies of the Software, and to permit persons to whom the Software is
/// furnished to do so, subject to the following conditions:
/// 
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
/// 
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
/// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
/// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
/// THE SOFTWARE.
///
/// @ref gtc_bit
/// @file glm/gtc/bitfield.hpp
/// @date 2014-10-25 / 2014-10-25
/// @author Christophe Riccio
///
/// @see core (dependence)
/// @see gtc_bitfield (dependence)
///
/// @defgroup gtc_bitfield GLM_GTC_bitfield
/// @ingroup gtc
/// 
/// @brief Allow to perform bit operations on integer values
/// 
/// <glm/gtc/bitfield.hpp> need to be included to use these functionalities.
///////////////////////////////////////////////////////////////////////////////////

#pragma once

// Dependencies
#include "../detail/setup.hpp"
#include "../detail/precision.hpp"
#include "../detail/type_int.hpp"
#include "../detail/_vectorize.hpp"
#include <limits>

#if(defined(GLM_MESSAGES) && !defined(GLM_EXT_INCLUDED))
#	pragma message("GLM: GLM_GTC_bitfield extension included")
#endif

namespace glm
{
	/// @addtogroup gtc_bitfield
	/// @{

	/// Build a mask of 'count' bits
	/// @see gtc_bitfield
	GLM_FUNC_DECL int mask(int Bits);

	template <precision P, template <typename, precision> class vecType>
	GLM_FUNC_DECL vecType<int, P> mask(vecType<int, P> const & v);

	/// Rotate all bits to the right.
	/// @see gtc_bitfield
	template <typename genType>
	GLM_FUNC_DECL genType bitRotateRight(genType In, int Shift);

	/// Rotate all bits to the left.
	/// @see gtc_bitfield
	template <typename genType>
	GLM_FUNC_DECL genType bitRotateLeft(genType In, int Shift);

	/// Interleaves the bits of x and y.
	/// The first bit is the first bit of x followed by the first bit of y.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL int16 bitfieldInterleave(int8 x, int8 y);

	/// Interleaves the bits of x and y.
	/// The first bit is the first bit of x followed by the first bit of y.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL uint16 bitfieldInterleave(uint8 x, uint8 y);

	/// Interleaves the bits of x and y.
	/// The first bit is the first bit of x followed by the first bit of y.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL int32 bitfieldInterleave(int16 x, int16 y);

	/// Interleaves the bits of x and y.
	/// The first bit is the first bit of x followed by the first bit of y.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL uint32 bitfieldInterleave(uint16 x, uint16 y);

	/// Interleaves the bits of x and y.
	/// The first bit is the first bit of x followed by the first bit of y.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL int64 bitfieldInterleave(int32 x, int32 y);

	/// Interleaves the bits of x and y.
	/// The first bit is the first bit of x followed by the first bit of y.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL uint64 bitfieldInterleave(uint32 x, uint32 y);

	/// Interleaves the bits of x, y and z.
	/// The first bit is the first bit of x followed by the first bit of y and the first bit of z.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL int32 bitfieldInterleave(int8 x, int8 y, int8 z);

	/// Interleaves the bits of x, y and z.
	/// The first bit is the first bit of x followed by the first bit of y and the first bit of z.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL uint32 bitfieldInterleave(uint8 x, uint8 y, uint8 z);

	/// Interleaves the bits of x, y and z.
	/// The first bit is the first bit of x followed by the first bit of y and the first bit of z.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL int64 bitfieldInterleave(int16 x, int16 y, int16 z);

	/// Interleaves the bits of x, y and z. 
	/// The first bit is the first bit of x followed by the first bit of y and the first bit of z.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL uint64 bitfieldInterleave(uint16 x, uint16 y, uint16 z);

	/// Interleaves the bits of x, y and z. 
	/// The first bit is the first bit of x followed by the first bit of y and the first bit of z.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL int64 bitfieldInterleave(int32 x, int32 y, int32 z);

	/// Interleaves the bits of x, y and z. 
	/// The first bit is the first bit of x followed by the first bit of y and the first bit of z.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL uint64 bitfieldInterleave(uint32 x, uint32 y, uint32 z);

	/// Interleaves the bits of x, y, z and w. 
	/// The first bit is the first bit of x followed by the first bit of y, the first bit of z and finally the first bit of w.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL int32 bitfieldInterleave(int8 x, int8 y, int8 z, int8 w);

	/// Interleaves the bits of x, y, z and w. 
	/// The first bit is the first bit of x followed by the first bit of y, the first bit of z and finally the first bit of w.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL uint32 bitfieldInterleave(uint8 x, uint8 y, uint8 z, uint8 w);

	/// Interleaves the bits of x, y, z and w. 
	/// The first bit is the first bit of x followed by the first bit of y, the first bit of z and finally the first bit of w.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL int64 bitfieldInterleave(int16 x, int16 y, int16 z, int16 w);

	/// Interleaves the bits of x, y, z and w. 
	/// The first bit is the first bit of x followed by the first bit of y, the first bit of z and finally the first bit of w.
	/// The other bits are interleaved following the previous sequence.
	/// 
	/// @see gtc_bitfield
	GLM_FUNC_DECL uint64 bitfieldInterleave(uint16 x, uint16 y, uint16 z, uint16 w);

	/// @}
} //namespace glm

#include "bitfield.inl"
