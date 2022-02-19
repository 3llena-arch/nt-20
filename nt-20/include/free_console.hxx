#pragma once

namespace nt {
   // attempts to free an allocated console in the current process
   export const std::int32_t free_console( ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )
         ( ) >( &FreeConsole )( );
   }
}
