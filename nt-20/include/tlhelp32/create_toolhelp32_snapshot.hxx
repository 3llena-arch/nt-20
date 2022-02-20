#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::intptr_t create_toolhelp32_snapshot(
      const std::int32_t flags,
      const std::int32_t pid
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::int32_t flags,
         const std::int32_t pid
      ) >( &CreateToolhelp32Snapshot )( flags, pid );
   }
}
