/* 
 * mod_binary-bitwise-ops_gen\dgac_c_lib_data-types_mod_binary-bitwise-ops_gen_gen.c
 * 
 * Author:
 * 
 * Note: Credit to https://stackoverflow.com/questions/47981/how-to-set-clear-and-toggle-a-single-bit
 * for improvements
 */

#include <stdint.h>
#include <stdbool.h>

#include "dgac_c_lib_data-types_mod_binary-bitwise-ops_gen_gen.h"

uint32_t setShiftLeftIntoValUint32(uint32_t u32_inVal, uint32_t u32_setVal, uint8_t u8_shiftLeftAmt)
{
	/*
	could do it like this, would look more like normal syntax:
	uint32_t result = u32_inVal;
	result |= (u32_setVal << u8_shiftLeftAmt);
	return result;
	*/
	// This is more efficient
	return (u32_inVal | (u32_setVal << u8_shiftLeftAmt));
}

uint32_t clearShiftLeftIntoValUint32(uint32_t u32_inVal, uint32_t u32_clearVal, uint8_t u8_shiftLeftAmt)
{
	/*
	could do it like this, would look more like normal syntax:
	uint32_t result = u32_inVal;
	result &= ~(u32_clearVal << u8_shiftLeftAmt);
	return result;
	*/
	// This is more efficient
	return (u32_inVal & ~(u32_clearVal << u8_shiftLeftAmt));
}

// untested
uint32_t togglShiftLeftIntoValUint32(uint32_t u32_inVal, uint32_t u32_togglVal, uint8_t u8_shiftLeftAmt)
{
	/*
	could do it like this, would look more like normal syntax:
	uint32_t result = u32_inVal;
	result ^= (u32_togglVal << u8_shiftLeftAmt);
	return result;
	*/
	// This is more efficient
	return (u32_inVal ^ (u32_togglVal << u8_shiftLeftAmt));
}

// untested
bool chkBitShiftRightValUint32(uint32_t u32_inVal, uint32_t u32_chkBitShiftdVal, uint8_t u8_shiftRightAmt)
{
	/*
	could do it like this, would look more like normal syntax:
	uint32_t result = ??;
	result ?= ??;
	return result;
	*/
	// This is more efficient
	return ((u32_inVal >> u8_shiftRightAmt) & u32_chkBitShiftdVal);
}

// not 100% why this would be needed
// quoting the author (https://stackoverflow.com/questions/47981/how-to-set-clear-and-toggle-a-single-bit): "Changing the nth bit to x
// There are alternatives with worse codegen, but the best way is to clear the bit like in bit_clear, then set the bit to value, similar to bit_set. "
// untested and parameter naming unmodified to conform to mine
uint32_t bit_set_to(uint32_t number, uint32_t n, bool x)
{
    return (number & ~((uint32_t) 1 << n)) | ((uint32_t) x << n);
}
