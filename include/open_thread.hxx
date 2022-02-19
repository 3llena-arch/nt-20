#pragma once

namespace nt {
   // attempts to open a handle to the address space of a thread
   export const std::intptr_t open_thread(
      const std::int32_t access, // thread rights desired access
      const std::int32_t inherit, // should children inherit handle
      const std::int32_t tid // identifier of the local thread
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::int32_t access,
         const std::int32_t inherit,
         const std::int32_t tid
      ) >( &OpenThread )( access, inherit, tid );
   }
}
