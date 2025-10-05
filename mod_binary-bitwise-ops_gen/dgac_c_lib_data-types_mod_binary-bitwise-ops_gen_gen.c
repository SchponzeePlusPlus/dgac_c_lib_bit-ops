/*
 *
 */

uint32_t setShiftLeftIntoValUint32(uint32_t u32_inVal, uint32_t u32_setVal, uint8_t u8_shiftLeftAmt)
{
	uint32_t result = u32_inVal;
	result |= (u32_setVal << u8_shiftLeftAmt);
	return result;
}

uint32_t clearShiftLeftIntoValUint32(uint32_t u32_inVal, uint32_t u32_clearVal, uint8_t u8_shiftLeftAmt)
{
	uint32_t result = u32_inVal;
	result &= ~(u32_setVal << u8_shiftLeftAmt);
	return result;
}
