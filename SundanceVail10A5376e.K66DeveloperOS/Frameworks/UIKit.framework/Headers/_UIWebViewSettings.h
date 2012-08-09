/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class NSString;

@interface _UIWebViewSettings : NSObject <NSCopying> {
	unsigned _dataDetectorTypes;	// 4 = 0x4
	BOOL _allowsInlineMediaPlayback;	// 8 = 0x8
	BOOL _mediaPlaybackRequiresUserAction;	// 9 = 0x9
	BOOL _mediaPlaybackAllowsAirPlay;	// 10 = 0xa
	BOOL _suppressesIncrementalRendering;	// 11 = 0xb
	NSString *_customUserAgent;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x3065eb99; S=0x3065eba9; @synthesize=_allowsInlineMediaPlayback
@property(copy, nonatomic) NSString *customUserAgent;	// G=0x3065ec19; S=0x3065ec2d; @synthesize=_customUserAgent
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x3065eb79; S=0x3065eb89; @synthesize=_dataDetectorTypes
@property(assign, nonatomic) BOOL mediaPlaybackAllowsAirPlay;	// G=0x3065ebd9; S=0x3065ebe9; @synthesize=_mediaPlaybackAllowsAirPlay
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x3065ebb9; S=0x3065ebc9; @synthesize=_mediaPlaybackRequiresUserAction
@property(assign, nonatomic) BOOL suppressesIncrementalRendering;	// G=0x3065ebf9; S=0x3065ec09; @synthesize=_suppressesIncrementalRendering
+ (id)defaultSettings;	// 0x3065e6c9
- (id)init;	// 0x3065e599
- (id)_encodeAsDictionary;	// 0x3065e9c1
- (id)_initWithDictionary:(id)dictionary;	// 0x3065e701
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x3065eb99
- (id)copyWithZone:(NSZone *)zone;	// 0x3065eb29
// declared property getter: - (id)customUserAgent;	// 0x3065ec19
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x3065eb79
- (void)dealloc;	// 0x3065e67d
// declared property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x3065ebd9
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x3065ebb9
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x3065eba9
// declared property setter: - (void)setCustomUserAgent:(id)agent;	// 0x3065ec2d
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x3065eb89
// declared property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x3065ebe9
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x3065ebc9
// declared property setter: - (void)setSuppressesIncrementalRendering:(BOOL)rendering;	// 0x3065ec09
// declared property getter: - (BOOL)suppressesIncrementalRendering;	// 0x3065ebf9
@end
