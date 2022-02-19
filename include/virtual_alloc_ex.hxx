#pragma once

namespace nt {
   // attempts to allocate memory in the process space at an address of a pe object
   export const std::int32_t virtual_alloc_ex(
      const std::intptr_t handle, // handle to pe object
      const std::intptr_t address, // address of the memory allocation
      const std::intptr_t size, // length of memory allocation
      const std::int32_t type, // type of memory allocation
      const std::int32_t protect // memory protection flag
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )( 
         const std::intptr_t handle,
         const std::intptr_t address,
         const std::intptr_t size,
         const std::int32_t type,
         const std::int32_t protect
      ) >( &VirtualAllocEx )( handle, address, size, type, protect );
   }
}
