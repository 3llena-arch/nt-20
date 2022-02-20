#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::int32_t virtual_protect(
      const std::intptr_t address,
      const std::intptr_t size,
      const std::int32_t protect,
      const std::intptr_t old
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )( 
         const std::intptr_t address,
         const std::intptr_t size,
         const std::int32_t protect,
         const std::intptr_t old
      ) >( &VirtualProtect )( address, size, protect, old );
   }
}
