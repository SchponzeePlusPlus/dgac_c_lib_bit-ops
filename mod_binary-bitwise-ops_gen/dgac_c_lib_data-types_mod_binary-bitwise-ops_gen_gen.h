/* 
 * .h
	Library: 
	Module: 
	Authors: SchponzeePlusPlus (GH)
	Created On: 

	Description:
	...
 * 
 * 
 *  
*/

#ifndef INCLUDES_DGAC_C_LIB_DATA_TYPES_MOD_BINARY_BITWISE_OPS_GEN_GEN_H_
#define INCLUDES_DGAC_C_LIB_DATA_TYPES_MOD_BINARY_BITWISE_OPS_GEN_GEN_H_

// Call necessary modules/libraries via header files here

#include <stdint.h>
#include <stdbool.h>

// Call component specific program modules
// Relevant modules are called in .c file

// Declare class objects here
// No objects are created in this file

// Declare global constants here
// "Magic numbers" are assigned as global constants

// Declare enumerators

// Declare a global constant

// Define records or structs

/**
	@brief
	@param
	@return
*/
uint32_t setShiftLeftIntoValUint32(uint32_t u32_inVal, uint32_t u32_setVal, uint8_t u8_shiftLeftAmt);

/**
	@brief 
*/
uint32_t clearShiftLeftIntoValUint32(uint32_t u32_inVal, uint32_t u32_clearVal, uint8_t u8_shiftLeftAmt);

uint32_t togglShiftLeftIntoValUint32(uint32_t u32_inVal, uint32_t u32_togglVal, uint8_t u8_shiftLeftAmt);

bool chkBitShiftRightValUint32(uint32_t u32_inVal, uint32_t u32_chkBitShiftdVal, uint8_t u8_shiftRightAmt);

uint32_t bit_set_to(uint32_t number, uint32_t n, bool x);

#endif
