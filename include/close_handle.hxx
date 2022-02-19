#pragma once

namespace nt {
   // attempts to close the handle to a user-mode object
   export const std::int32_t close_handle(
      const std::intptr_t handle // the object handle
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )( 
         const std::intptr_t handle
      ) >( &CloseHandle )( handle );
   }
}
