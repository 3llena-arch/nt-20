#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::intptr_t top_window(
      const std::intptr_t handle
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::intptr_t handle
      ) >( &GetTopWindow )( handle );
   }
}
