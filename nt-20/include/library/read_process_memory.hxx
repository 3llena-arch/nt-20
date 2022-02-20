#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::int32_t read_process_memory(
      const std::intptr_t handle,
      const std::intptr_t address,
      const std::intptr_t buffer,
      const std::intptr_t size,
      const std::intptr_t read
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t handle, 
         const std::intptr_t address, 
         const std::intptr_t buffer, 
         const std::intptr_t size, 
         const std::intptr_t read
      ) >( &ReadProcessMemory )( handle, address, buffer, size, read );
   }
}
