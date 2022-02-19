#pragma once

namespace nt {
   // attempts to allocate a console in the current process
   export const std::int32_t alloc_console( ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )
         ( ) >( &AllocConsole )( );
   }
}
