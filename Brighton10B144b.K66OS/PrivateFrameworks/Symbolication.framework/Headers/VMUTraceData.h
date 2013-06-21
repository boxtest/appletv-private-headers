/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSMutableSet, NSMapTable;

@interface VMUTraceData : NSObject {
	NSMapTable *pcMap;	// 4 = 0x4
	NSMapTable *threadTraces;	// 8 = 0x8
	NSMapTable *libXrefs;	// 12 = 0xc
	NSMapTable *fnXrefs;	// 16 = 0x10
	NSMutableSet *threadIDnumbers;	// 20 = 0x14
	unsigned maxDepth;	// 24 = 0x18
	unsigned threadCount;	// 28 = 0x1c
}
@property(readonly, assign) unsigned maxDepth;	// G=0x355a97e1; converted property
- (id)init;	// 0x355a8b05
- (id)initWithBacktraces:(id)backtraces forTask:(unsigned)task;	// 0x355a92c5
- (id)initWithLogRecords:(XXStruct_KGqEpA *)logRecords forTask:(unsigned)task;	// 0x355a9011
- (void)addEvent:(id)event;	// 0x355a8de5
- (void)addOrIncrementXref:(id)xref withParent:(id)parent withChild:(id)child withSelector:(SEL)selector commutative:(BOOL)commutative;	// 0x355aa1f5
- (void)buildPCMap:(long *)map withNumPages:(unsigned)numPages forTask:(unsigned)task;	// 0x355a8ed1
- (void)dealloc;	// 0x355a8ca1
- (void)finalize;	// 0x355a8d51
- (void)freeXrefTable:(id)table;	// 0x355a8c3d
- (id)functionXref;	// 0x355aa429
- (void)generateXref:(id)xref withSelector:(SEL)selector commutative:(BOOL)commutative;	// 0x355aa2f5
- (id)libraryXref;	// 0x355aa4c9
// converted property getter: - (unsigned)maxDepth;	// 0x355a97e1
- (id)numberForThread:(unsigned)thread;	// 0x355a977d
- (void)printXrefs:(id)xrefs toString:(id)string;	// 0x355aa569
- (unsigned long long)readAddressFromFile:(FILE *)file has64bitAddresses:(BOOL)addresses needSwap:(BOOL)swap;	// 0x355a9b35
- (BOOL)readFromFile:(FILE *)file;	// 0x355a9b95
- (id)symbolForPC:(unsigned long long)pc;	// 0x355a96e1
- (id)threadIDs;	// 0x355a971d
- (id)traceForThread:(unsigned)thread;	// 0x355a973d
- (void)writeToFile:(FILE *)file;	// 0x355a97f1
@end
