/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MZUniversalPlaybackPositionMediaItem.h"

@class MPMediaItem;

@interface MPUniversalPlaybackPositionMediaItem : NSObject <MZUniversalPlaybackPositionMediaItem> {
	MPMediaItem *_mediaItem;	// 4 = 0x4
}
+ (id)mediaPropertiesToMZProperties;	// 0x36d615cd
+ (id)mzPropertiesToMediaProperties;	// 0x36d613a9
+ (id)mzPropertyValueForMediaProperty:(id)mediaProperty mediaValue:(id)value;	// 0x36d61719
- (id)initWithMediaItem:(id)mediaItem;	// 0x36d61355
- (void)dealloc;	// 0x36d616cd
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x36d6192d
@end
