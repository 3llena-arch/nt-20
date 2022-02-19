#pragma once

namespace nt {
   // attempts to load a library by name to the current address space
   export const std::intptr_t load_library(
      const std::int8_t* module_name // module name
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::int8_t* module_name
      ) >( &LoadLibraryA )( module_name );
   }
}
