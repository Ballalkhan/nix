#include "nix/store/binary-cache-store.hh"

namespace nix {

struct LocalBinaryCacheStoreConfig : virtual BinaryCacheStoreConfig
{
    using BinaryCacheStoreConfig::BinaryCacheStoreConfig;

    LocalBinaryCacheStoreConfig(std::string_view scheme, PathView binaryCacheDir, const Params & params);

    Path binaryCacheDir;

    const std::string name() override
    {
        return "Local Binary Cache Store";
    }

    static StringSet uriSchemes();

    std::string doc() override;
};

}
