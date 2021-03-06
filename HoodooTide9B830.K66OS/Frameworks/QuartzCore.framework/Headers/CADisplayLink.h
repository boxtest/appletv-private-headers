/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "QuartzCore-Structs.h"

@class CADisplay;

@interface CADisplayLink : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CADisplay *display;	// G=0x36cd9d0d; 
@property(readonly, assign, nonatomic) double duration;	// G=0x36cda0fd; 
@property(assign, nonatomic) int frameInterval;	// G=0x36cd9cf9; S=0x36cd9ce1; 
@property(assign, nonatomic, getter=isPaused) BOOL paused;	// G=0x36cd9cc9; S=0x36cd9cad; 
@property(readonly, assign, nonatomic) double timestamp;	// G=0x36c5b9dd; 
@property(retain, nonatomic) id userInfo;	// G=0x36cd9d21; S=0x36cda68d; 
+ (id)displayLinkWithDisplay:(id)display target:(id)target selector:(SEL)selector;	// 0x36c5b1c1
+ (id)displayLinkWithTarget:(id)target selector:(SEL)selector;	// 0x36c5b15d
- (id)_initWithDisplayLink:(DisplayLink *)displayLink;	// 0x36c5b545
- (void)addToRunLoop:(id)runLoop forMode:(id)mode;	// 0x36c5b599
- (void)dealloc;	// 0x36c5bbc5
// declared property getter: - (id)display;	// 0x36cd9d0d
// declared property getter: - (double)duration;	// 0x36cda0fd
// declared property getter: - (int)frameInterval;	// 0x36cd9cf9
- (void)invalidate;	// 0x36c5b9f5
// declared property getter: - (BOOL)isPaused;	// 0x36cd9cc9
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x36cda115
// declared property setter: - (void)setFrameInterval:(int)interval;	// 0x36cd9ce1
// declared property setter: - (void)setPaused:(BOOL)paused;	// 0x36cd9cad
// declared property setter: - (void)setUserInfo:(id)info;	// 0x36cda68d
// declared property getter: - (double)timestamp;	// 0x36c5b9dd
// declared property getter: - (id)userInfo;	// 0x36cd9d21
@end

