#pragma once

namespace nt {
   // attempts to create a snapshot of the system based on flag and pid
   export const std::intptr_t create_toolhelp32_snapshot(
      const std::int32_t flags, // data flag to decide snapshot
      const std::int32_t pid // pid of the pe object to snap
   ) {
      return reinterpret_cast< const std::intptr_t( __stdcall* )(
         const std::int32_t flags,
         const std::int32_t pid
      ) >( &CreateToolhelp32Snapshot )( flags, pid );
   }
}
