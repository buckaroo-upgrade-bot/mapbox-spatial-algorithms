//

#include <mapbox/geometry/algorithms/predicates/disjoint_impl.hpp>
#include <mapbox/geometry/algorithms/detail/instantiate_macro.hpp>

namespace mapbox { namespace geometry { namespace algorithms {

MAPBOX_ALGORITHM_INSTANTIATE(DISJOINT,
                             point<double>,
                             line_string<double>,
                             polygon<double>,
                             multi_point<double>,
                             geometry<double>)


}}}
