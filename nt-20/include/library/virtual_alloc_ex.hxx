#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::intptr_t virtual_alloc_ex(
      const std::intptr_t handle,
      const std::intptr_t address,
      const std::intptr_t size,
      const std::int32_t type,
      const std::int32_t protect
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
