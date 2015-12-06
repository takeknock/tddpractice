#include "IAsset.h"

namespace trainingbm {

    class Asset {
    public:
        friend class AssetTest;
        Asset(const double drift, const double volatility, const double spot);
        ~Asset();
    
    private:
        const double _drift;
        const double _volatility;
        const double _spot;
    
    };
}
