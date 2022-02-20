module;

#include <iostream>
#include <cstdint>
#include <algorithm>
#include <optional>
#include <functional>
#include <variant>
#include <windows.h>
#include <tlhelp32.h>

export module windows;

#include "include/tlhelp32/thread32_first.hxx"
#include "include/tlhelp32/thread32_next.hxx"
#include "include/tlhelp32/process32_first.hxx"
#include "include/tlhelp32/process32_next.hxx"
#include "include/tlhelp32/module32_first.hxx"
#include "include/tlhelp32/module32_next.hxx"
#include "include/tlhelp32/create_toolhelp32_snapshot.hxx"

#include "include/window/is_child.hxx"
#include "include/window/is_window.hxx"
#include "include/window/is_window_visible.hxx"
#include "include/window/is_window_enabled.hxx"
#include "include/window/window_thread_pid.hxx"
#include "include/window/top_window.hxx"
#include "include/window/next_window.hxx"
#include "include/window/find_window.hxx"
#include "include/window/find_window_ex.hxx"

#include "include/library/alloc_console.hxx"
#include "include/library/free_console.hxx"
#include "include/library/proc_address.hxx"
#include "include/library/load_library.hxx"
#include "include/library/load_library_ex.hxx"
#include "include/library/module_handle.hxx"
#include "include/library/module_handle_ex.hxx"
#include "include/library/virtual_alloc.hxx"
#include "include/library/virtual_alloc_ex.hxx"
#include "include/library/virtual_protect.hxx"
#include "include/library/virtual_protect_ex.hxx"
#include "include/library/read_process_memory.hxx"
#include "include/library/write_process_memory.hxx"
#include "include/library/close_handle.hxx"
#include "include/library/open_thread.hxx"
#include "include/library/open_process.hxx"

#include "include/types/process_entry.hxx"
#include "include/types/module_entry.hxx"
#include "include/types/thread_entry.hxx"

#include "export.hxx"
