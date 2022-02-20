#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::int32_t close_handle(
      const std::intptr_t handle
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )( 
         const std::intptr_t handle
      ) >( &CloseHandle )( handle );
   }
}
