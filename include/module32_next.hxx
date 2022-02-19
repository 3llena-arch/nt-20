#pragma once

namespace nt {
   // attempts to walk the next mod entries of a snapshot
   export const std::int32_t module32_next(
      const std::intptr_t handle, // snapshot handle
      const std::intptr_t mod_entry // mod entry
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t handle,
         const std::intptr_t pe_entry
      ) >( &Module32Next )( handle, mod_entry );
   }
}
