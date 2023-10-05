#include <filesystem>
#include "json.hpp"

using json = nlohmann::json;
namespace fs = std::filesystem;


namespace updater {
	const std::string file_path = "offsets.json";

#ifndef _UC
	bool check_and_update(bool prompt_update);
	bool get_last_commit_date(json& commit);
	bool download_file(const char* url, const char* localPath);
#endif
	bool file_good(const std::string& name);

	extern bool read();
	extern void save();

	inline std::string github_repo_api = "https://api.github.com/repos/notslux/CS2-ECHEATS/commits";
	inline std::string raw_updated_offets = "https://github.com/notslux/CS2-ECHEATS/raw/main/offsets/offsets.json";

	namespace offsets {
		inline std::ptrdiff_t dwLocalPlayer = 0x187AC48;
		inline std::ptrdiff_t dwEntityList = 0x178D8E8;
		inline std::ptrdiff_t dwViewMatrix = 0x187B730;

		inline std::ptrdiff_t dwPawnHealth = 0x808;
		inline std::ptrdiff_t dwPlayerPawn = 0x7FC;
		inline std::ptrdiff_t dwSanitizedName = 0x720;
		inline std::ptrdiff_t m_iTeamNum = 0x3BF;
		inline std::ptrdiff_t m_vecOrigin = 0x1214;
	}
}
