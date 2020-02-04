/*
* Copyright (C) 2020 Simon Batardiere - All rigths reserved.
*
* This file is part of the libowl package.
* This code is licensed under LGPL-v2.1.
* See LICENSE file, which is part of the libowl package, for more details.
*/

#ifndef LIBOWL_INCLUDE_ADDR
#define LIBOWL_INCLUDE_ADDR

#include <stdint.h>
#include <stddef.h>

/** @brief Number of bytes for an Ethereum address. */
#define OWL_ADDR_BINSIZE 20
/** @brief Maximum length of an Ethereum address as a string. */
#define OWL_ADDR_STRLEN 43

/** @brief Representation of an Ethereum address (binary format). */
struct owl_addr {
	/** @brief Ethereum address is OWL_ADDR_STRLEN bytes length. */
	uint8_t addr[OWL_ADDR_BINSIZE];
};

/**
* @brief Convert Ethereum address from binary to text form.
* @param[in] src Points to the Ethereum address (binary format) to convert.
* @param[out] dst String buffer where the Ethereum address as string format will
*                 be converted. The size of the dst buffer must be equal to the
*                 size argument, and should be at least OWL_ADDR_STRLEN bytes.
* @param[in] size Must be equal to the size of the dst buffer, and should be at
*                 least OWL_ADDR_STRLEN bytes.
* @return On success, returns a non-NULL pointer to dst. NULL is returned if
*         there was an error.
*/
const char *owl_addr_btos(const struct owl_addr *src, char *dst, size_t size);

/**
* @brief Convert Ethereum address from text form to binary.
* @param[in] src String which contains a valid Ethereum address. The string
*                will be check internally with the same criteria than
*                owl_addr_isvalid() function does.
* @param[out] dst Ethereum address converted to binary format.
* @return On success, returns 1. 0 is returned if there was an error.
*/
int owl_addr_stob(const char *src, struct owl_addr *dst);

/**
* @brief Check if the string addr is a valid Ethereum address or not.
*        The address must comply with the EIP-55 Mixed-case checksum address
*        encoding.
* @param[in] addr String which may represent an Ethereum address.
* @return 1 if the addr argument is a valid Ethereum address, otherwise 0.
*/
int owl_addr_isvalid(const char *addr);

/**
* @brief Convert an Ethereum address to a string with is EIP-55 compliant.
*        EIP-55 Mixed-case checksum address encoding.
* @param[in] src String which should represent an Ethereum address.
* @param[out] dst String buffer where the Ethereum address as string format will
*                 be converted. The size of the dst buffer must be equal to the
*                 size argument, and should be at least OWL_ADDR_STRLEN bytes.
* @param[in] size Must be equal to the size of the dst buffer, and should be at
*                 least OWL_ADDR_STRLEN bytes.
* @return On success, returns 1. 0 is returned if there was an error.
*/
int owl_addr_convert_eip55(const char *src, char *dst, size_t size);

#endif

