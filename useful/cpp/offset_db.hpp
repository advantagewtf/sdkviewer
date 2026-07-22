#ifndef OFFSET_DB_HPP
#define OFFSET_DB_HPP

class c_offsets
{
public:
	struct offset_entry_t
	{
		std::uintptr_t value;
		std::string full_path;
	};

	bool load_all( );

	std::uintptr_t get( const std::string& klass, const std::string& field ) const;
	std::uintptr_t get_flat( const std::string& field ) const;

private:
	bool load_file_or_url( const std::string& filename, const std::string& url );
	bool load_local_file( const std::string& filename, std::string& out_text );
	bool fetch_and_parse_url( const std::string& url );
	bool fetch_url_text( const std::string& url, std::string& out_text );
	bool parse_content( const std::string& raw_text );

	ankerl::unordered_dense::map<std::string, ankerl::unordered_dense::map<std::string, ankerl::unordered_dense::map<std::string, offset_entry_t>>> tree;
	ankerl::unordered_dense::map<std::string, offset_entry_t> flat_map;
};

#endif // !OFFSET_DB_HPP