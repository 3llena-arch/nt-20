#pragma once

const enum snap_flag_t : std::int8_t {
   process = 2,
   thread = 4,
   module = 8
};

const struct snap_process_t : public process_entry_t {
   std::vector< module_entry_t >m_modules;
   std::vector< thread_entry_t >m_threads;
};

[[ nodiscard ]]
const std::optional< const std::vector< process_entry_t > >get_process_list( ) {
   const std::intptr_t snap{ nt::create_toolhelp32_snapshot( snap_flag_t::process, 0 ) };
   if ( !snap )
      return std::nullopt;

   const process_entry_t entry{ .m_size = sizeof( process_entry_t ) };
   std::vector< process_entry_t >list{ };
   
   if ( nt::process32_first( snap, reinterpret_cast< std::intptr_t >( &entry ) ) )
      list.emplace_back( entry );

   while ( nt::process32_next( snap, reinterpret_cast< std::intptr_t >( &entry ) ) )
      list.emplace_back( entry );

   if ( !nt::close_handle( snap ) )
      return std::nullopt;

   return list.empty( ) ? std::nullopt : std::make_optional( std::move( list ) );
}

[[ nodiscard ]]
const std::optional< const std::vector< module_entry_t > >get_module_list(
   const process_entry_t pe
) {
   const std::intptr_t snap{ nt::create_toolhelp32_snapshot( snap_flag_t::module, pe.m_process_id ) };
   if ( !snap )
      return std::nullopt;

   const module_entry_t entry{ .m_size = sizeof( module_entry_t ) };
   std::vector< module_entry_t >list{ };

   if ( nt::module32_first( snap, reinterpret_cast< std::intptr_t >( &entry ) ) )
      list.emplace_back( entry );

   while ( nt::module32_next( snap, reinterpret_cast< std::intptr_t >( &entry ) ) )
      list.emplace_back( entry );

   if ( !nt::close_handle( snap ) )
      return std::nullopt;

   return list.empty( ) ? std::nullopt : std::make_optional( std::move( list ) );
}

[[ nodiscard ]]
const std::optional< const std::vector< thread_entry_t > >get_thread_list(
   const process_entry_t pe
) {
   const std::intptr_t snap{ nt::create_toolhelp32_snapshot( snap_flag_t::thread, pe.m_process_id ) };
   if ( !snap )
      return std::nullopt;

   const thread_entry_t entry{ .m_size = sizeof( thread_entry_t ) };
   std::vector< thread_entry_t >list{ };

   if ( nt::thread32_first( snap, reinterpret_cast< std::intptr_t >( &entry ) ) )
      list.emplace_back( entry );

   while ( nt::thread32_next( snap, reinterpret_cast< std::intptr_t >( &entry ) ) )
      list.emplace_back( entry );

   if ( !nt::close_handle( snap ) )
      return std::nullopt;
   
   return list.empty( ) ? std::nullopt : std::make_optional( std::move( list ) );
}

export const void enumerate(
   const std::function< const void( snap_process_t ) >&callback,
   const std::string_view file_name
) {
   const auto process_list = get_process_list( );
   if ( !process_list.has_value( ) )
      return;

   // build mod + th cache
}
