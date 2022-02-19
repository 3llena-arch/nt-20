#pragma once

namespace nt {
   // attempts to get the function export of a loaded module
   export const std::intptr_t proc_address(
      const std::intptr_t module, // module
      const std::int8_t* proc_name // export name
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::intptr_t module,
         const std::int8_t* proc_name
      ) >( &GetProcAddress )( module, proc_name );
   }
}
