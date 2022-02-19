#pragma once

namespace nt {
   // retrieves the handle to the window by flag
   export const std::intptr_t next_window(
      const std::intptr_t handle, // handle to the initial window instance
      const std::int32_t flag // cmd flag
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::intptr_t handle,
         const std::int32_t flag
      ) >( &GetWindow )( handle, flag );
   }
}
