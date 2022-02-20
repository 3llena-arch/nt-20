#pragma once

namespace nt {
   [[ nodiscard ]]
   const std::int32_t alloc_console( ) {
      return reinterpret_cast< const std::int32_t( __stdcall* )
         ( ) >( &AllocConsole )( );
   }
}
