// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The marsbux Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef marsbux_SHUTDOWN_H
#define marsbux_SHUTDOWN_H

void StartShutdown();
void AbortShutdown();
bool ShutdownRequested();

#endif
