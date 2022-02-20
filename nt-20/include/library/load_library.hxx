#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::intptr_t load_library(
      const std::int8_t* module_name
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::int8_t* module_name
      ) >( &LoadLibraryA )( module_name );
   }
}
