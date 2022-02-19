#pragma once

namespace nt {
   // attempts to load a library by file to the current address space
   export const std::intptr_t load_library_ex(
      const std::int8_t* module_name, // module name
      const std::intptr_t file, // reserved file
      const std::int32_t flags // load flags
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::int8_t* module_name,
         const std::intptr_t file,
         const std::int32_t flags
      ) >( &LoadLibraryExA )( module_name, file, flags );
   }
}
