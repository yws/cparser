/*
 * This file is part of cparser.
 * Copyright (C) 2007-2008 Matthias Braun <matze@braunis.de>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */
#include "type_t.h"
#include "types.h"

/** The error type. */
type_t *type_error_type;

type_t *type_char;
type_t *type_double;
type_t *type_float;
type_t *type_int;
type_t *type_long_double;
type_t *type_long_long;
type_t *type_long;
type_t *type_short;
type_t *type_signed_char;
type_t *type_unsigned_int;
type_t *type_unsigned_long_long;
type_t *type_unsigned_long;
type_t *type_void;

type_t *type_char_ptr;
type_t *type_int_ptr;
type_t *type_long_long_ptr;
type_t *type_long_ptr;
type_t *type_short_ptr;
type_t *type_signed_char_ptr;
type_t *type_void_ptr;

type_t *type_char_ptr_ptr;

type_t *type_intmax_t;
type_t *type_ptrdiff_t;
type_t *type_size_t;
type_t *type_ssize_t;
type_t *type_uintmax_t;
type_t *type_uptrdiff_t;
type_t *type_wchar_t;
type_t *type_wint_t;

type_t *type_intmax_t_ptr;
type_t *type_ptrdiff_t_ptr;
type_t *type_ssize_t_ptr;
type_t *type_wchar_t_ptr;


void init_basic_types(void)
{
	static const type_base_t error = { TYPE_ERROR, TYPE_QUALIFIER_NONE, 0, { NULL, 0 }, NULL };

	type_error_type         = (type_t*)&error;
	type_signed_char        = make_atomic_type(ATOMIC_TYPE_SCHAR,       TYPE_QUALIFIER_NONE);
	type_short              = make_atomic_type(ATOMIC_TYPE_SHORT,       TYPE_QUALIFIER_NONE);
	type_int                = make_atomic_type(ATOMIC_TYPE_INT,         TYPE_QUALIFIER_NONE);
	type_unsigned_int       = make_atomic_type(ATOMIC_TYPE_UINT,        TYPE_QUALIFIER_NONE);
	type_long               = make_atomic_type(ATOMIC_TYPE_LONG,        TYPE_QUALIFIER_NONE);
	type_unsigned_long      = make_atomic_type(ATOMIC_TYPE_ULONG,       TYPE_QUALIFIER_NONE);
	type_long_long          = make_atomic_type(ATOMIC_TYPE_LONGLONG,    TYPE_QUALIFIER_NONE);
	type_unsigned_long_long = make_atomic_type(ATOMIC_TYPE_ULONGLONG,   TYPE_QUALIFIER_NONE);
	type_long_double        = make_atomic_type(ATOMIC_TYPE_LONG_DOUBLE, TYPE_QUALIFIER_NONE);
	type_double             = make_atomic_type(ATOMIC_TYPE_DOUBLE,      TYPE_QUALIFIER_NONE);
	type_float              = make_atomic_type(ATOMIC_TYPE_FLOAT,       TYPE_QUALIFIER_NONE);
	type_char               = make_atomic_type(ATOMIC_TYPE_CHAR,        TYPE_QUALIFIER_NONE);
	type_void               = make_atomic_type(ATOMIC_TYPE_VOID,        TYPE_QUALIFIER_NONE);

	type_void_ptr           = make_pointer_type(type_void,              TYPE_QUALIFIER_NONE);
	type_char_ptr           = make_pointer_type(type_char,              TYPE_QUALIFIER_NONE);
	type_signed_char_ptr    = make_pointer_type(type_signed_char,       TYPE_QUALIFIER_NONE);
	type_short_ptr          = make_pointer_type(type_short,             TYPE_QUALIFIER_NONE);
	type_int_ptr            = make_pointer_type(type_int,               TYPE_QUALIFIER_NONE);
	type_long_ptr           = make_pointer_type(type_long,              TYPE_QUALIFIER_NONE);
	type_long_long_ptr      = make_pointer_type(type_long_long,         TYPE_QUALIFIER_NONE);

	type_char_ptr_ptr       = make_pointer_type(type_char_ptr,          TYPE_QUALIFIER_NONE);
}
