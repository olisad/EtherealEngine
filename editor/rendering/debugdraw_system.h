#pragma once

#include "core/subsystem/subsystem.h"
#include <memory>
#include <chrono>

struct program;

namespace editor
{
	class debugdraw_system : public core::subsystem
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
		///
		std::unique_ptr<program> _program;
	};
}