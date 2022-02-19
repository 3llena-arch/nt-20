#pragma once

namespace nt {
   // attempts to read the user-mode memory of a pe object pointed to by an address
   export const std::int32_t read_process_memory(
      const std::intptr_t handle, // handle to the pe object
      const std::intptr_t address, // pointer to memory
      const std::intptr_t buffer, // buffer to store the data read
      const std::intptr_t size, // the size to read in bytes
      const std::intptr_t read // bytes read
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
