#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::intptr_t next_window(
      const std::intptr_t handle,
      const std::int32_t flag
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::intptr_t handle,
         const std::int32_t flag
      ) >( &GetWindow )( handle, flag );
   }
}
