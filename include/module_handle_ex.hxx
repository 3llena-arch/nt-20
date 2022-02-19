#pragma once

namespace nt {
   // attempts to retrieve the handle to the moduel in the current space
   export const std::int32_t module_handle_ex(
      const std::int32_t flags, // capture flag
      const std::int8_t* module_name, // module name
      const std::intptr_t handle // module handle
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::int32_t flags,
         const std::int8_t * module_name,
         const std::intptr_t handle
      ) >( &GetModuleHandleExA )( flags, module_name, handle );
   }
}
