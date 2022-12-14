# Release Notes for Bitcoin Cash Node version 24.1.1

Bitcoin Cash Node version 24.1.1 is now available from:

  <https://bitcoincashnode.org>

## Overview

This is a minor release of Bitcoin Cash Node (BCHN) which contains many
corrections and improvements.


## Usage recommendations

Users who are running v24.1.0 or earlier are encouraged to upgrade to v24.1.1.

## Network changes

TODO

## Added functionality

TODO

## Deprecated functionality

TODO

## Modified functionality

TODO

## Removed functionality

TODO

## New RPC methods

TODO

## User interface changes

TODO

## Regressions

Bitcoin Cash Node 24.1.1 does not introduce any known regressions as compared to 24.1.0.

## Known Issues

Some issues could not be closed in time for release, but we are tracking all of them on our GitLab repository.

- MacOS versions earlier than 10.14 are no longer supported. Additionally,
  Bitcoin Cash Node does not yet change appearance when macOS "dark mode"
  is activated.

- Windows users are recommended not to run multiple instances of bitcoin-qt
  or bitcoind on the same machine if the wallet feature is enabled.
  There is risk of data corruption if instances are configured to use the same
  wallet folder.

- Some users have encountered unit tests failures when running in WSL
  environments (e.g. WSL/Ubuntu).  At this time, WSL is not considered a
  supported environment for the software. This may change in future.

  The functional failure on WSL is tracked in Issue #33.
  It arises when competing node program instances are not prevented from
  opening the same wallet folder. Running multiple program instances with
  the same configured walletdir could potentially lead to data corruption.
  The failure has not been observed on other operating systems so far.

- `doc/dependencies.md` needs revision (Issue #65).

- For users running from sources built with BerkeleyDB releases newer than
  the 5.3 which is used in this release, please take into consideration
  the database format compatibility issues described in Issue #34.
  When building from source it is recommended to use BerkeleyDB 5.3 as this
  avoids wallet database incompatibility issues with the official release.

- The `test_bitcoin-qt` test executable fails on Linux Mint 20
  (see Issue #144). This does not otherwise appear to impact the functioning
  of the BCHN software on that platform.

- With a certain combination of build flags that included disabling
  the QR code library, a build failure was observed where an erroneous
  linking against the QR code library (not present) was attempted (Issue #138).

- Possible out-of-memory error when starting bitcoind with high excessiveblocksize
  value (Issue #156)

- A problem was observed on scalenet where nodes would sometimes hang for
  around 10 minutes, accepting RPC connections but not responding to them
  (see #210).

- Startup and shutdown time of nodes on scalenet can be long (see Issue #313).

- On Mac platforms with current Qt, the splash screen can be maximized,
  but it cannot be unmaximized again (see #255). This issue will be resolved
  by a Qt library upgrade in a future release.

- Race condition in one of the `p2p_invalid_messages.py` tests (see Issue #409).

- Occasional failure in bchn-txbroadcastinterval.py (see Issue #403).

- wallet_keypool.py test failure when run as part of suite on certain many-core
  platforms (see Issue #380).

- Spurious 'insufficient funds' failure during p2p_stresstest.py benchmark
  (see Issue #377).

- `bitcoin-tx` tool does not have BIP69 support (optional or enforced) yet.
  (see Issue #383).

- secp256k1 now no longer works with latest openssl3.x series. There are
  workarounds (see Issue #364).

- Spurious `AssertionError: Mempool sync timed out` in several tests
  (see Issue #357).

---

## Changes since Bitcoin Cash Node 24.0.0

### New documents

TODO

### Removed documents

TODO


### Notable commits grouped by functionality

#### Security or consensus relevant fixes

TODO

#### Interfaces / RPC

TODO

### Data directory changes

TODO

#### Performance optimizations

TODO

#### GUI

TODO

#### Code quality

TODO

#### Documentation updates

TODO

#### Build / general

TODO

#### Build / Linux

TODO

#### Build / Windows

TODO

#### Build / MacOSX

TODO

#### Tests / test framework

TODO

#### Benchmarks

TODO

#### Seeds / seeder software

TODO

#### Maintainer tools

TODO

#### Infrastructure

TODO

#### Cleanup

TODO

#### Continuous Integration (GitLab CI)

TODO

#### Backports

TODO
