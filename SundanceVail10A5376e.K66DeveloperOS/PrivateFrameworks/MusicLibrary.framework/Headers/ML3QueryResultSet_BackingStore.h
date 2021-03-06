/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


@interface ML3QueryResultSet_BackingStore : NSObject {
	vector<long long, std::allocator<long long> > _persistentIDs;	// 4 = 0x4
	vector<unsigned char, std::allocator<unsigned char> > _sections;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3481a801; 
- (id).cxx_construct;	// 0x34818745
- (void).cxx_destruct;	// 0x3487fc21
- (id)backingStoreByRemovingPersistentIDs:(const unordered_set<long long, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<long long>, false> *)ids;	// 0x3487fa99
- (BOOL)containsPersistentIDs:(const unordered_set<long long, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<long long>, false> *)ids;	// 0x3487f9c1
// declared property getter: - (unsigned)count;	// 0x3481a801
- (void)enumeratePersistentIDsUsingBlock:(id)block;	// 0x3487f8cd
- (void)enumerateSectionsUsingBlock:(id)block;	// 0x3481a0c1
- (long long)persistentIDAtIndex:(unsigned)index;	// 0x3481a839
@end

