#pragma once

namespace nt {
   // determines if the window is a child window
   export const std::int32_t is_child(
      const std::intptr_t parent, // handle to the parent window instance
      const std::intptr_t handle // handle to the window instance
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t parent,
         const std::intptr_t handle
      ) >( &IsWindowEnabled )( parent, handle );
   }
}
