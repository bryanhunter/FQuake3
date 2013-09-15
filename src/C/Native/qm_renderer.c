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

#include "qm_renderer.h"

MObject
qm_map_orientation (orientation_t* orientation)
{
	MObject m_result;
	m_invoke_method_cache ("Engine.Renderer", "Engine.Renderer.Native", "Orientation", "ofNative", &orientation, m_result);
	return m_result;
}

MObject
qm_map_orientationr (orientationr_t* orientation)
{
	MObject m_result;
	m_invoke_method_cache ("Engine.Renderer", "Engine.Renderer.Native", "OrientationR", "ofNative", &orientation, m_result);
	return m_result;
}

MObject
qm_map_plane (cplane_t* plane)
{
	MObject m_result;
	m_invoke_method_cache ("Engine.Renderer", "Engine.Renderer.Native", "Plane", "ofNative", &plane, m_result);
	return m_result;
}

MObject
qm_map_view_parms (viewParms_t* view_parms)
{
	MObject m_result;
	m_invoke_method_cache ("Engine.Renderer", "Engine.Renderer.Native", "ViewParms", "ofNative", &view_parms, m_result);
	return m_result;
}

MObject
qm_map_ref_entity (const refEntity_t* ref_entity)
{
	MObject m_result;
	m_invoke_method_cache ("Engine.Renderer", "Engine.Renderer.Native", "RefEntity", "ofNative", &ref_entity, m_result);
	return m_result;
}

MObject
qm_map_tr_ref_entity (trRefEntity_t* tr_ref_entity)
{
	MObject m_result;
	m_invoke_method_cache ("Engine.Renderer", "Engine.Renderer.Native", "TrRefEntity", "ofNative", &tr_ref_entity, m_result);
	return m_result;
}

MObject
qm_map_surface (surfaceType_t* surfaceType)
{
	MObject m_result;
	m_invoke_method_cache ("Engine.Renderer", "Engine.Renderer.Native", "Surface", "ofNativePtr", &surfaceType, m_result);
	return m_result;
}

MObject
qm_map_frustum (cplane_t* frustum)
{
	MObject m_result;
	m_invoke_method_cache ("Engine.Renderer", "Engine.Renderer.Native", "Frustum", "ofNativePtr", &frustum, m_result);
	return m_result;
}

void
qm_frustum_map (MObject obj, cplane_t* frustum)
{
	MObject m_void;
	m_invoke_method_cache_easy ("Engine.Renderer", "Engine.Renderer.Native", "Frustum", "toNativePtr", 2, {
		__args [0] = m_object_as_arg (obj);
		__args [1] = frustum;
	}, m_void);
}

MObject
qm_map_draw_surf (drawSurf_t* draw_surf)
{
	MObject m_result;
	m_invoke_method_cache ("Engine.Renderer", "Engine.Renderer.Native", "DrawSurface", "ofNative", &draw_surf, m_result);
	return m_result;
}

MObject
qm_map_tr_globals (trGlobals_t* tr_globals)
{
	MObject m_result;
	m_invoke_method_cache ("Engine.Renderer", "Engine.Renderer.Native", "TrGlobals", "ofNative", &tr_globals, m_result);
	return m_result;
}
