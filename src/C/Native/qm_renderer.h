/*
===========================================================================
Copyright (C) 2013 William F. Smith
Copyright (C) 1999-2005 Id Software, Inc.

This file is part of Quake III Arena source code.

Quake III Arena source code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Quake III Arena source code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Foobar; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/

// IMPORTANT: This file is only temporary and will not exist once most of the existing codebase
//	gets converted to F#. It is only intended as interop helpers.

#ifndef __QM_RENDERER_H__
#define __QM_RENDERER_H__

#include "renderer\tr_local.h"

MObject
qm_create_vector3 (gfloat x, gfloat y, gfloat z);

MArray
qm_create_vector3_array (const gint size);

MArray
qm_create_draw_vertex_array (const gint size);

MArray
qm_create_poly_vertex_array (const gint size);

MObject
qm_map_orientation (const orientation_t *const orientation);

MObject
qm_map_orientationr (const orientationr_t *const orientation);

MObject
qm_map_plane (const cplane_t *const plane);

MArray
qm_create_plane_array (const gint size);

MObject
qm_map_view_parms (const viewParms_t *const view_parms);

MObject
qm_map_ref_entity (const refEntity_t const* ref_entity);

MObject
qm_map_tr_ref_entity (const trRefEntity_t const* tr_ref_entity);

MObject
qm_map_surface (const surfaceType_t const* surfaceType);

MObject
qm_map_frustum (const frustum_t* frustum);

void
qm_frustum_map (MObject obj, frustum_t* frustum);

#endif /* __QM_RENDERER_H__ */