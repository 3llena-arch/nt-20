#pragma once

namespace nt {
   // attempts to change the protect flags of memory in the current process space
   export const std::int32_t virtual_protect(
      const std::intptr_t address, // pointer to the memory
      const std::intptr_t size, // length of memory to flag
      const std::int32_t protect, // new protect flag
      const std::intptr_t old // reads the existing flag before setting
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )( 
         const std::intptr_t address,
         const std::intptr_t size,
         const std::int32_t protect,
         const std::intptr_t old
      ) >( &VirtualProtect )( address, size, protect, old );
   }
}
