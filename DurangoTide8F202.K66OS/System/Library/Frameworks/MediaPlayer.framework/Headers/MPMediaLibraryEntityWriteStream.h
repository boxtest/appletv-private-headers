/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMediaQueryCriteria;

@interface MPMediaLibraryEntityWriteStream : NSObject {
@private
	id _entityArray;	// 4 = 0x4
	MPMediaQueryCriteria *_queryCriteria;	// 8 = 0x8
	unsigned _index;	// 12 = 0xc
	unsigned _count;	// 16 = 0x10
	BOOL _cancelled;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=isCancelled) BOOL cancelled;	// G=0x31de289d; 
@property(readonly, assign, nonatomic) unsigned count;	// G=0x31de287d; 
@property(readonly, assign, nonatomic) unsigned index;	// G=0x31de288d; 
- (id)initWithEntityStreamArray:(id)entityStreamArray queryCriteria:(id)criteria count:(unsigned)count;	// 0x31de4f3d
- (void)_writeCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties itemsQueryCriteria:(id)criteria;	// 0x31de7d29
- (void)cancel;	// 0x31de28ad
// declared property getter: - (unsigned)count;	// 0x31de287d
- (void)dealloc;	// 0x31de4ee1
- (id)description;	// 0x31de4e91
// declared property getter: - (unsigned)index;	// 0x31de288d
// declared property getter: - (BOOL)isCancelled;	// 0x31de289d
- (void)writeCollectionWithIdentifier:(long long)identifier valuesForProperties:(id)properties;	// 0x31de28bd
- (void)writeItemWithIdentifier:(long long)identifier valuesForProperties:(id)properties;	// 0x31de7dc9
@end

