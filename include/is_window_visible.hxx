#pragma once

namespace nt {
   // determines whether the window is visible
   export const std::int32_t is_window_visible(
      const std::intptr_t handle // handle to the window instance
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t handle
      ) >( &IsWindowVisible )( handle );
   }
}
