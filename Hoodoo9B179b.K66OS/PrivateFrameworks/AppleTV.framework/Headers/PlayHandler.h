/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


@interface PlayHandler : NSObject {
@private
	void *_mediaObject;	// 4 = 0x4
	ATVMediaQueryRef _query;	// 8 = 0x8
	BOOL _playbackStarted;	// 12 = 0xc
}
- (id)initWithObject:(void *)object;	// 0x303c5139
- (void)_queryComplete:(ATVMediaQueryRef)complete;	// 0x303c54e5
- (void)cancelPlayIfNotStarted;	// 0x303c54a9
- (void)dealloc;	// 0x303c5189
- (BOOL)play;	// 0x303c51e9
@end
