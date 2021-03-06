/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPUbiquitousLRUDictionaryObserver.h"
#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSArray;

@interface MPUbiquitousMetadataController : NSObject <MPUbiquitousLRUDictionaryObserver> {
@private
	dispatch_queue_s *_updateQueue;	// 4 = 0x4
	NSArray *_entriesForUbiquitousUpdates;	// 8 = 0x8
	BOOL _updateUbiquitousValuesScheduled;	// 12 = 0xc
}
+ (void)insertDAAPValueIntoDictionary:(id)dictionary mediaItem:(id)item mediaProperty:(id)property;	// 0x33c65489
+ (id)sharedUbiquitousMetadataController;	// 0x33c652fd
+ (id)ubiquitousEnabledMediaPropertiesForMediaProperties:(id)mediaProperties;	// 0x33c65939
- (id)init;	// 0x33c65369
- (void)_onQueue_applyUbiquitousLRUStorageValuesForEntries:(id)entries;	// 0x33c661ed
- (void)_onQueue_applyUbiquitousValues:(id)values toMediaItem:(id)mediaItem;	// 0x33c660d9
- (void)_onQueue_scheduleApplyUbiquitousLRUStorageValuesForEntries:(id)entries;	// 0x33c66581
- (void)_pushProperties:(id)properties mediaItem:(id)item;	// 0x33c65601
- (void)_releaseAssertion:(id)assertion;	// 0x33c65709
- (BOOL)_sagaPushMediaProperties:(id)properties mediaItem:(id)item;	// 0x33c65781
- (BOOL)_shouldApplyUbiquitousEntry:(id)entry;	// 0x33c66045
- (void)_takeAssertion:(id)assertion;	// 0x33c65705
- (id)_ubiquitousMetadataStorage;	// 0x33c65b7d
- (void)_ubiquitousPushMediaProperties:(id)properties mediaItem:(id)item;	// 0x33c65cbd
- (BOOL)_useSagaForMediaItem:(id)mediaItem;	// 0x33c6570d
- (void)dealloc;	// 0x33c653dd
- (void)pushBookmarkingPropertiesForMediaItem:(id)mediaItem;	// 0x33c65655
- (void)ubiquitousLRUStorageDidChangeExternally:(id)ubiquitousLRUStorage changedEntries:(id)entries;	// 0x33c6672d
- (void)ubiquitousLRUStorageDidCommitLocalChanges:(id)ubiquitousLRUStorage;	// 0x33c66711
- (void)ubiquitousLRUStorageWillCommitLocalChanges:(id)ubiquitousLRUStorage;	// 0x33c666f5
@end

