#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::int32_t window_thread_pid(
      const std::intptr_t window,
      const std::intptr_t pid
   ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )(
         const std::intptr_t window,
         const std::intptr_t pid
      ) >( &GetWindowThreadProcessId )( window, pid );
   }
}
