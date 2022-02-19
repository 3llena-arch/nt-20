#pragma once

namespace nt {
   // retrieves the handle to the topmost global or child instance
   export const std::intptr_t top_window(
      const std::intptr_t handle // handle to the initial window instance
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::intptr_t handle
      ) >( &GetTopWindow )( handle );
   }
}
