#pragma once

namespace nt {
   // attempts to find the desktop window by class and title
   export const std::intptr_t find_window(
      const std::int8_t* window_class, // window class
      const std::int8_t* window_title // window title
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::int8_t* window_class,
         const std::int8_t* window_title
      ) >( &FindWindowA )( window_class, window_title );
   }
}
