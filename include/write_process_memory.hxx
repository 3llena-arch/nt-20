#pragma once

namespace nt {
   // attempts to write the user-mode memory of a pe object pointed to by an address
   export const std::int32_t write_process_memory(
      const std::intptr_t handle, // handle to the pe object
      const std::intptr_t address, // pointer to memory
      const std::intptr_t buffer, // buffer to the write data
      const std::intptr_t size, // the size to write in bytes
      const std::intptr_t written // bytes written
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t handle, 
         const std::intptr_t address, 
         const std::intptr_t buffer,
         const std::intptr_t size, 
         const std::intptr_t written
      ) >( &ReadProcessMemory )( handle, address, buffer, size, written );
   }
}
