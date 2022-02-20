#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::intptr_t find_window(
      const std::int8_t* window_class,
      const std::int8_t* window_title
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::int8_t* window_class,
         const std::int8_t* window_title
      ) >( &FindWindowA )( window_class, window_title );
   }
}
