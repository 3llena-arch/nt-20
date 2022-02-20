#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::intptr_t load_library_ex(
      const std::int8_t* module_name,
      const std::intptr_t file,
      const std::int32_t flags
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::int8_t* module_name,
         const std::intptr_t file,
         const std::int32_t flags
      ) >( &LoadLibraryExA )( module_name, file, flags );
   }
}
