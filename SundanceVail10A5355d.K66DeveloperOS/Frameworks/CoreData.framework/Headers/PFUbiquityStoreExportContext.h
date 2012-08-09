/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet, NSSet, PFUbiquityLocation, PFUbiquitySwitchboardCacheWrapper, NSSQLCore, _PFUbiquityStack, PFUbiquityStoreMetadata, PFUbiquityPeer;

@interface PFUbiquityStoreExportContext : NSObject {
	PFUbiquityLocation *_ubiquityRootLocation;	// 4 = 0x4
	_PFUbiquityStack *_stack;	// 8 = 0x8
	PFUbiquityStoreMetadata *_storeMetadata;	// 12 = 0xc
	PFUbiquityPeer *_localPeer;	// 16 = 0x10
	NSMutableSet *_transactionEntries;	// 20 = 0x14
	NSSQLCore *_store;	// 24 = 0x18
	PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;	// 28 = 0x1c
}
@property(retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper;	// G=0x335a0a05; S=0x335a0a15; @synthesize=_cacheWrapper
@property(readonly, assign, nonatomic) PFUbiquityPeer *localPeer;	// G=0x335a09c5; @synthesize=_localPeer
@property(readonly, assign, nonatomic) _PFUbiquityStack *stack;	// G=0x335a09a5; @synthesize=_stack
@property(retain, nonatomic) NSSQLCore *store;	// G=0x335a09e5; S=0x335a09f5; @synthesize=_store
@property(readonly, assign, nonatomic) PFUbiquityStoreMetadata *storeMetadata;	// G=0x335a09b5; @synthesize=_storeMetadata
@property(readonly, assign, nonatomic) NSSet *transactionEntries;	// G=0x335a09d5; @synthesize=_transactionEntries
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x335a0995; @synthesize=_ubiquityRootLocation
- (id)initWithStoreName:(id)storeName andUbiquityRootLocation:(id)location forLocalPeerID:(id)localPeerID withStack:(id)stack;	// 0x335a051d
- (id)addTransactionEntryForGlobalIDString:(id)globalIDString andLocalManagedObjectID:(id)anId andTransactionType:(int)type;	// 0x335a084d
// declared property getter: - (id)cacheWrapper;	// 0x335a0a05
- (void)dealloc;	// 0x335a0689
- (id)description;	// 0x335a0779
// declared property getter: - (id)localPeer;	// 0x335a09c5
// declared property setter: - (void)setCacheWrapper:(id)wrapper;	// 0x335a0a15
// declared property setter: - (void)setStore:(id)store;	// 0x335a09f5
// declared property getter: - (id)stack;	// 0x335a09a5
// declared property getter: - (id)store;	// 0x335a09e5
// declared property getter: - (id)storeMetadata;	// 0x335a09b5
// declared property getter: - (id)transactionEntries;	// 0x335a09d5
// declared property getter: - (id)ubiquityRootLocation;	// 0x335a0995
@end
