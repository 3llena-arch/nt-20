#pragma once

namespace nt {
   // attempts to allocate memory in the current process space at an address
   export const std::intptr_t virtual_alloc(
      const std::intptr_t address, // address of the memory allocation
      const std::intptr_t size, // length of memory allocation
      const std::int32_t type, // type of memory allocation
      const std::int32_t protect // memory protection flag
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )( 
         const std::intptr_t address,
         const std::intptr_t size,
         const std::int32_t type,
         const std::int32_t protect
      ) >( &VirtualAlloc )( address, size, type, protect );
   }
}
