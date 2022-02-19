#pragma once

namespace nt {
   // attempts to get the first pe entry of a snapshot
   export const std::int32_t process32_first(
      const std::intptr_t handle, // snapshot handle
      const std::intptr_t pe_entry // pe entry
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t handle,
         const std::intptr_t pe_entry
      ) >( &Process32First )( handle, pe_entry );
   }
}
