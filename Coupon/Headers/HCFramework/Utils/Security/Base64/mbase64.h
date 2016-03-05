/*********************************************************************************
 *	Author: Dare Fish
 *  Version: 1.0
 *  Filename: base64.h
 *
 *
 *  Copyright (c) Wednesday, February 13, 2008 Dare Fish.
 *
 *
 ********************************************************************************/

extern unsigned char *msbase64_encode(unsigned char *str, int length, int *ret_length);
extern unsigned char *mbase64_decode(unsigned char *str, int length, int *ret_length);

