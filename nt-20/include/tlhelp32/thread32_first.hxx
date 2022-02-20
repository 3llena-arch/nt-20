#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::int32_t thread32_first(
      const std::intptr_t handle,
      const std::intptr_t th_entry
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t handle,
         const std::intptr_t th_entry
      ) >( &Thread32First )( handle, th_entry );
   }
}
