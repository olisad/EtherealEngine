#pragma once
#include "../interface/gui_window.h"
#include "../console/console_log.h"
class main_editor_window : public gui_window
{
public:
	//-----------------------------------------------------------------------------
	//  Name : main_editor_window ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	main_editor_window();
	
	//-----------------------------------------------------------------------------
	//  Name : main_editor_window ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	main_editor_window(mml::video_mode mode, const std::string& title, std::uint32_t style = mml::style::Default);
	
	//-----------------------------------------------------------------------------
	//  Name : ~ProjectManagerWindow (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual ~main_editor_window();

	//-----------------------------------------------------------------------------
	//  Name : on_gui (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual void on_gui(std::chrono::duration<float> dt);

	//-----------------------------------------------------------------------------
	//  Name : on_menubar (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual void on_menubar();

	//-----------------------------------------------------------------------------
	//  Name : on_toolbar (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual void on_toolbar();

	//-----------------------------------------------------------------------------
	//  Name : render_dockspace (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual void render_dockspace();

	//-----------------------------------------------------------------------------
	//  Name : on_start_page (virtual )
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	virtual void on_start_page();

	//-----------------------------------------------------------------------------
	//  Name : show_start_page ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	void show_start_page(bool show) { _show_start_page = show; }

	//-----------------------------------------------------------------------------
	//  Name : set_log ()
	/// <summary>
	/// 
	/// 
	/// 
	/// </summary>
	//-----------------------------------------------------------------------------
	void set_log(const std::string& name, std::shared_ptr<console_log> log);
private:
	///
	bool _show_start_page = true;
	///
	std::shared_ptr<console_log> _console_log;
	///
	std::string _console_dock_name;
};