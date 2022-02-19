#pragma once

namespace nt {
   // determines whether the handle is window-associated
   export const std::int32_t is_window(
      const std::intptr_t handle // handle to the instance
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t handle
      ) >( &IsWindow )( handle );
   }
}
