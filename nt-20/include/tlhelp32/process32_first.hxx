#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::int32_t process32_first(
      const std::intptr_t handle,
      const std::intptr_t pe_entry
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t handle,
         const std::intptr_t pe_entry
      ) >( &Process32First )( handle, pe_entry );
   }
}
