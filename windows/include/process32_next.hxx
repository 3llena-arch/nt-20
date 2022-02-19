#pragma once

namespace nt {
   // attempts to walk the next pe entries of a snapshot
   export const std::int32_t process32_next(
      const std::intptr_t handle, // snapshot handle
      const std::intptr_t pe_entry // pe entry
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t handle,
         const std::intptr_t pe_entry
      ) >( &Process32Next )( handle, pe_entry );
   }
}
