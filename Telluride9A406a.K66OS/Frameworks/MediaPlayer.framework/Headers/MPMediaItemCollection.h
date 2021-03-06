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
@private
	MPMediaItemCollectionInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemCollectionInternal _internal;	// G=0x31a16d31; S=0x31a16d55; @synthesize
@property(readonly, assign, nonatomic) unsigned count;	// G=0x31a16995; 
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x31a16971; 
@property(readonly, assign, nonatomic) int mediaTypes;	// G=0x31a169a9; 
@property(readonly, assign, nonatomic) MPMediaItem *representativeItem;	// G=0x31a16981; 
+ (id)collectionWithItems:(id)items;	// 0x31a16499
+ (id)representativePersistentIDPropertyForGroupingType:(int)groupingType;	// 0x31a16c35
+ (id)sortTitlePropertyForGroupingType:(int)groupingType;	// 0x31a16b81
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x31a16aa5
- (id)init;	// 0x31a164e1
- (id)initWithCoder:(id)coder;	// 0x31a1667d
- (id)initWithItems:(id)items;	// 0x31a16519
- (id)_init;	// 0x31a165dd
// declared property getter: - (MPMediaItemCollectionInternal)_internal;	// 0x31a16d31
// declared property getter: - (unsigned)count;	// 0x31a16995
- (void)dealloc;	// 0x31a16621
- (void)encodeWithCoder:(id)coder;	// 0x31a167d1
// declared property getter: - (id)items;	// 0x31a16971
- (id)itemsQuery;	// 0x31a168f5
// declared property getter: - (int)mediaTypes;	// 0x31a169a9
// declared property getter: - (id)representativeItem;	// 0x31a16981
// declared property setter: - (void)set_internal:(MPMediaItemCollectionInternal)internal;	// 0x31a16d55
@end

