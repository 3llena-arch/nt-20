module;

#include <cstdint>
#include <windows.h>
#include <tlhelp32.h>

export module windows;

#include "include/is_child.hxx"
#include "include/is_window.hxx"
#include "include/is_window_visible.hxx"
#include "include/is_window_enabled.hxx"
#include "include/top_window.hxx"
#include "include/next_window.hxx"
#include "include/alloc_console.hxx"
#include "include/free_console.hxx"
#include "include/proc_address.hxx"
#include "include/load_library.hxx"
#include "include/load_library_ex.hxx"
#include "include/module_handle.hxx"
#include "include/module_handle_ex.hxx"
#include "include/window_thread_pid.hxx"
#include "include/find_window.hxx"
#include "include/find_window_ex.hxx"
#include "include/process32_first.hxx"
#include "include/process32_next.hxx"
#include "include/module32_first.hxx"
#include "include/module32_next.hxx"
#include "include/create_toolhelp32_snapshot.hxx"
#include "include/virtual_alloc.hxx"
#include "include/virtual_alloc_ex.hxx"
#include "include/virtual_protect.hxx"
#include "include/virtual_protect_ex.hxx"
#include "include/read_process_memory.hxx"
#include "include/write_process_memory.hxx"
#include "include/close_handle.hxx"
#include "include/open_thread.hxx"
#include "include/open_process.hxx"
