#ifndef BITCOIN_CHAINPARAMSCONSTANTS_H
#define BITCOIN_CHAINPARAMSCONSTANTS_H
/**
 * Chain params constants for each tracked chain.
 * @generated by contrib/devtools/chainparams/generate_chainparams_constants.py
 */

#include <primitives/blockhash.h>
#include <uint256.h>

namespace ChainParamsConstants {
    const BlockHash MAINNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("000000000000000000c0fd281da21c51356771c89b34cb55ea1413d9c1ca4e66");
    const uint256 MAINNET_MINIMUM_CHAIN_WORK = uint256S("00000000000000000000000000000000000000000131410982cd0adc8ef33d88");

    const BlockHash TESTNET_DEFAULT_ASSUME_VALID = BlockHash::fromHex("0000000000002b1dcad9b546e9de3eda59dea9547f48cd8803c75fb0cf3a18a0");
    const uint256 TESTNET_MINIMUM_CHAIN_WORK = uint256S("0000000000000000000000000000000000000000000000594d3c47e367215741");

    const BlockHash TESTNET4_DEFAULT_ASSUME_VALID = BlockHash::fromHex("00000000ae8b7a65edd45ebcaa94e428fcc7745a394145d8fcc74dd1cb2097a1");
    const uint256 TESTNET4_MINIMUM_CHAIN_WORK = uint256S("0000000000000000000000000000000000000000000000000000001800180018");
} // namespace ChainParamsConstants

#endif // BITCOIN_CHAINPARAMSCONSTANTS_H
