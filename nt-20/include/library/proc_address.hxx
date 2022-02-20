#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::intptr_t proc_address(
      const std::intptr_t module,
      const std::int8_t* proc_name
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::intptr_t module,
         const std::int8_t* proc_name
      ) >( &GetProcAddress )( module, proc_name );
   }
}
