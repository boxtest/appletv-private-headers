/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <CALayer.h> // Unknown library


@interface AVSubtitleTextLayer : CALayer {
	OpaqueFigSubtitleRenderer *_renderer;	// 48 = 0x30
	dispatch_queue_s *_serialQueue;	// 52 = 0x34
	CFAttributedStringRef _currentSubtitleSample;	// 56 = 0x38
	BOOL _currentSubtitleSampleIsForced;	// 60 = 0x3c
	BOOL _nonForcedSubtitleDisplayEnabled;	// 61 = 0x3d
}
@property(assign) BOOL currentSubtitleSampleIsForced;	// G=0x347022a9; S=0x347022b9; @synthesize=_currentSubtitleSampleIsForced
@property(assign) BOOL nonForcedSubtitleDisplayEnabled;	// G=0x34702289; S=0x34702299; @synthesize=_nonForcedSubtitleDisplayEnabled
- (id)init;	// 0x34703d0d
// declared property getter: - (BOOL)currentSubtitleSampleIsForced;	// 0x347022a9
- (void)dealloc;	// 0x34703c2d
- (void)drawInContext:(CGContextRef)context;	// 0x34703a99
- (void)finalize;	// 0x34703c9d
// declared property getter: - (BOOL)nonForcedSubtitleDisplayEnabled;	// 0x34702289
- (void)setCurrentSubtitleSample:(CFAttributedStringRef)sample;	// 0x34703bb9
// declared property setter: - (void)setCurrentSubtitleSampleIsForced:(BOOL)forced;	// 0x347022b9
// declared property setter: - (void)setNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x34702299
- (void)setSerialQueue:(dispatch_queue_s *)queue;	// 0x34703bf9
@end

