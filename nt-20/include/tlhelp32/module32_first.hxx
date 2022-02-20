#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::int32_t module32_first(
      const std::intptr_t handle,
      const std::intptr_t mod_entry
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t handle,
         const std::intptr_t mod_entry
      ) >( &Module32First )( handle, mod_entry );
   }
}
