#pragma once

namespace nt {
   // attemts to retrieve the tid and pid of a window instance
   export const std::int32_t window_thread_pid(
      const std::intptr_t window, // window instance
      const std::intptr_t pid // process id
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t window,
         const std::intptr_t pid
      ) >( &GetWindowThreadProcessId )( window, pid );
   }
}
