#pragma once

namespace nt {
   // attempts to retrieve the handle to the moduel in the current space
   export const std::intptr_t module_handle(
      const std::int8_t* module_name // module name
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::int8_t* module_name
      ) >( &GetModuleHandleA )( module_name );
   }
}
