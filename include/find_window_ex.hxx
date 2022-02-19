#pragma once

namespace nt {
   // attempts to find the desktop window by class, title, parent and child
   export const std::intptr_t find_window_ex(
      const std::intptr_t parent, // parent window instance
      const std::intptr_t child, // child window instance
      const std::int8_t* window_class, // window class
      const std::int8_t* window_title // window title
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::intptr_t parent,
         const std::intptr_t child,
         const std::int8_t* window_class,
         const std::int8_t* window_title
      ) >( &FindWindowExA )( parent, child, window_class, window_title );
   }
}
