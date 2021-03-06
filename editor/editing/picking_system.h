#pragma once

#include "core/subsystem/subsystem.h"
#include "runtime/assets/asset_handle.h"
#include "runtime/rendering/program.h"
#include <chrono>

struct frame_buffer;
struct texture;

namespace editor
{
#define TEX_ID_DIM 1
	class picking_system : public core::subsystem
	{
	public:
		//-----------------------------------------------------------------------------
		//  Name : initialize ()
		/// <summary>
		/// 
		/// 
		/// 
		/// </summary>
		//-----------------------------------------------------------------------------
		bool initialize();

		//-----------------------------------------------------------------------------
		//  Name : dispose ()
		/// <summary>
		/// 
		/// 
		/// 
		/// </summary>
		//-----------------------------------------------------------------------------
		void dispose();

		//-----------------------------------------------------------------------------
		//  Name : frame_render ()
		/// <summary>
		/// 
		/// 
		/// 
		/// </summary>
		//-----------------------------------------------------------------------------
		void frame_render(std::chrono::duration<float> dt);
	private:
		/// surface used to render into
		std::shared_ptr<frame_buffer> _surface;
		///
		std::shared_ptr<texture> _blit_tex;
		/// picking program
		std::unique_ptr<program> _program;
		/// Read blit into this
        std::uint8_t _blit_data[TEX_ID_DIM*TEX_ID_DIM * 4];
		/// Indicates if is reading and when it will be ready
		std::uint32_t _reading = 0;
		///
		bool _start_readback = false;
	};
}
