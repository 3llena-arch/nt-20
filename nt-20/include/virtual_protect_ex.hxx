#pragma once

namespace nt {
   // attempts to change the protect flags of memory in the space of a pe object
   export const std::int32_t virtual_protect_ex(
      const std::intptr_t handle, // handle to the pe object
      const std::intptr_t address, // pointer to the memory
      const std::intptr_t size, // length of memory to flag
      const std::int32_t protect, // new protect flag
      const std::intptr_t old // reads the existing flag before setting
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )( 
         const std::intptr_t handle,
         const std::intptr_t address,
         const std::intptr_t size,
         const std::int32_t protect,
         const std::intptr_t old
      ) >( &VirtualProtectEx )( handle, address, size, protect, old );
   }
}
