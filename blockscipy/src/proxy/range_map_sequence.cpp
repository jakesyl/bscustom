//
//  range_map_sequence.cpp
//  blocksci
//
//  Created by Harry Kalodner on 9/22/18.
//
//

#include "range_map.hpp"
#include "range_map_sequence_impl.hpp"

#include <blocksci/address/equiv_address.hpp>
#include <blocksci/cluster/cluster.hpp>

void applyProxyMapSequenceFuncs(pybind11::class_<ProxySequence<random_access_sized>> &cl) {
	addProxyMapIteratorFuncsMethods(cl);
	addProxyMapRangeFuncsMethods(cl);
}

void applyProxyMapSequenceFuncs(pybind11::class_<ProxySequence<ranges::category::input>> &cl) {
	addProxyMapIteratorFuncsMethods(cl);
	addProxyMapRangeFuncsMethods(cl);
}