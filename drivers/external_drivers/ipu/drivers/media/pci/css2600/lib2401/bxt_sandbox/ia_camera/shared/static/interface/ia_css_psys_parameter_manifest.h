/*
 * Support for Intel Camera Imaging ISP subsystem.
 *
 * Copyright (c) 2010 - 2014 Intel Corporation. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License version
 * 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef __IA_CSS_PSYS_PARAM_MANIFEST_H_INCLUDED__
#define __IA_CSS_PSYS_PARAM_MANIFEST_H_INCLUDED__

/*! \file */

/** @file ia_css_psys_parameter_manifest.h
 *
 * Define the methods on the parameter manifest object
 */

#include <ia_css_psys_manifest_types.h>

/*! Compute the size of storage required for allocating the parameter manifest object

 @return 0 on error
 */
extern size_t ia_css_sizeof_parameter_manifest(void);

/*! Print the parameter manifest object to file/stream

 @param	manifest[in]			parameter manifest object
 @param	fid[out]				file/stream handle

 @return < 0 on error
 */
extern int ia_css_parameter_manifest_print(
	const ia_css_parameter_manifest_t		*manifest,
	void									*fid);

#endif /* __IA_CSS_PSYS_PARAM_MANIFEST_H_INCLUDED__ */
