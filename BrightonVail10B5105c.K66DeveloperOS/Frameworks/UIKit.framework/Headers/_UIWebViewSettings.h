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
@property(assign, nonatomic) BOOL allowsInlineMediaPlayback;	// G=0x3498c275; S=0x3498c285; @synthesize=_allowsInlineMediaPlayback
@property(copy, nonatomic) NSString *customUserAgent;	// G=0x3498c2f5; S=0x3498c309; @synthesize=_customUserAgent
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x3498c255; S=0x3498c265; @synthesize=_dataDetectorTypes
@property(assign, nonatomic) BOOL mediaPlaybackAllowsAirPlay;	// G=0x3498c2b5; S=0x3498c2c5; @synthesize=_mediaPlaybackAllowsAirPlay
@property(assign, nonatomic) BOOL mediaPlaybackRequiresUserAction;	// G=0x3498c295; S=0x3498c2a5; @synthesize=_mediaPlaybackRequiresUserAction
@property(assign, nonatomic) BOOL suppressesIncrementalRendering;	// G=0x3498c2d5; S=0x3498c2e5; @synthesize=_suppressesIncrementalRendering
+ (id)defaultSettings;	// 0x3498bda5
- (id)init;	// 0x3498bc75
- (id)_encodeAsDictionary;	// 0x3498c09d
- (id)_initWithDictionary:(id)dictionary;	// 0x3498bddd
// declared property getter: - (BOOL)allowsInlineMediaPlayback;	// 0x3498c275
- (id)copyWithZone:(NSZone *)zone;	// 0x3498c205
// declared property getter: - (id)customUserAgent;	// 0x3498c2f5
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x3498c255
- (void)dealloc;	// 0x3498bd59
// declared property getter: - (BOOL)mediaPlaybackAllowsAirPlay;	// 0x3498c2b5
// declared property getter: - (BOOL)mediaPlaybackRequiresUserAction;	// 0x3498c295
// declared property setter: - (void)setAllowsInlineMediaPlayback:(BOOL)playback;	// 0x3498c285
// declared property setter: - (void)setCustomUserAgent:(id)agent;	// 0x3498c309
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x3498c265
// declared property setter: - (void)setMediaPlaybackAllowsAirPlay:(BOOL)play;	// 0x3498c2c5
// declared property setter: - (void)setMediaPlaybackRequiresUserAction:(BOOL)action;	// 0x3498c2a5
// declared property setter: - (void)setSuppressesIncrementalRendering:(BOOL)rendering;	// 0x3498c2e5
// declared property getter: - (BOOL)suppressesIncrementalRendering;	// 0x3498c2d5
@end

