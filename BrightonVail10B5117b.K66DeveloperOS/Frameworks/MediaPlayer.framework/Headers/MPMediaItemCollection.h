/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"
#import "MediaPlayer-Structs.h"

@class MPMediaItem, NSArray;

@interface MPMediaItemCollection : MPMediaEntity {
	MPMediaItemCollectionInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemCollectionInternal _internal;	// G=0x31db68f1; S=0x31db6919; @synthesize
@property(readonly, assign, nonatomic) unsigned count;	// G=0x31db64e9; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x31db64c5; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x31db64fd; 
@property(readonly, assign, nonatomic) MPMediaItem *representativeItem;	// G=0x31db64d5; 
+ (id)collectionWithItems:(id)items;	// 0x31db5f41
+ (id)representativePersistentIDPropertyForGroupingType:(int)groupingType;	// 0x31db67e1
+ (id)sortTitlePropertyForGroupingType:(int)groupingType;	// 0x31db6715
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x31db660d
- (id)init;	// 0x31db5f89
- (id)initWithCoder:(id)coder;	// 0x31db6215
- (id)initWithItems:(id)items;	// 0x31db5fc1
- (id)initWithItemsQuery:(id)itemsQuery;	// 0x31db6081
- (id)_init;	// 0x31db616d
// declared property getter: - (MPMediaItemCollectionInternal)_internal;	// 0x31db68f1
// declared property getter: - (unsigned)count;	// 0x31db64e9
- (void)dealloc;	// 0x31db61b1
- (void)encodeWithCoder:(id)coder;	// 0x31db6381
- (BOOL)hasDownloadableItem;	// 0x31e42be9
- (BOOL)hasDownloadingItem;	// 0x31e42c11
// declared property getter: - (id)items;	// 0x31db64c5
- (id)itemsQuery;	// 0x31db64b1
// declared property getter: - (int)mediaTypes;	// 0x31db64fd
// declared property getter: - (id)representativeItem;	// 0x31db64d5
// declared property setter: - (void)set_internal:(MPMediaItemCollectionInternal)internal;	// 0x31db6919
@end

