﻿#ifndef SHA1_H
#define SHA1_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

	/*
	 * name  ： sha1
	 * params：1. input : input information
	 *	   2. output: result
	*/
	void sha1(uint8_t *input, uint32_t inputLen, uint8_t *output);

#ifdef __cplusplus
}
#endif

#endif
