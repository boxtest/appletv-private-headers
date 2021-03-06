/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <NSObject.h> // Unknown library

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
@property(readonly, assign) unsigned maxDepth;	// G=0x34f7fdd1; converted property
- (id)init;	// 0x34f803b1
- (id)initWithBacktraces:(id)backtraces forTask:(unsigned)task;	// 0x34f81365
- (id)initWithLogRecords:(XXStruct_KGqEpA *)logRecords forTask:(unsigned)task;	// 0x34f817c5
- (void)addEvent:(id)event;	// 0x34f81bcd
- (void)addOrIncrementXref:(id)xref withParent:(id)parent withChild:(id)child withSelector:(SEL)selector commutative:(BOOL)commutative;	// 0x34f807f9
- (void)buildPCMap:(long *)map withNumPages:(unsigned)numPages forTask:(unsigned)task;	// 0x34f81a7d
- (void)dealloc;	// 0x34f81d4d
- (void)finalize;	// 0x34f81cbd
- (void)freeXrefTable:(id)table;	// 0x34f81dfd
- (id)functionXref;	// 0x34f8064d
- (void)generateXref:(id)xref withSelector:(SEL)selector commutative:(BOOL)commutative;	// 0x34f806ed
- (id)libraryXref;	// 0x34f805ad
// converted property getter: - (unsigned)maxDepth;	// 0x34f7fdd1
- (id)numberForThread:(unsigned)thread;	// 0x34f7fe25
- (void)printXrefs:(id)xrefs toString:(id)string;	// 0x34f804dd
- (unsigned long long)readAddressFromFile:(FILE *)file has64bitAddresses:(BOOL)addresses needSwap:(BOOL)swap;	// 0x34f80fa5
- (BOOL)readFromFile:(FILE *)file;	// 0x34f808e5
- (id)symbolForPC:(unsigned long long)pc;	// 0x34f81325
- (id)threadIDs;	// 0x34f7fe05
- (id)traceForThread:(unsigned)thread;	// 0x34f812e5
- (void)writeToFile:(FILE *)file;	// 0x34f81009
@end

