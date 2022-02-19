#pragma once

namespace nt {
   // attempts to open a handle to the address space of a pe object
   export const std::intptr_t open_process(
      const std::int32_t access, // process rights desired access
      const std::int32_t inherit, // should children inherit handle
      const std::int32_t pid // identifier of the local process
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::int32_t access,
         const std::int32_t inherit,
         const std::int32_t pid
      ) >( &OpenProcess )( access, inherit, pid );
   }
}
