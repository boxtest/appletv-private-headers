/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString, CADisplayLink;

__attribute__((visibility("hidden")))
@interface UIScrollTestParameters : NSObject {
	int _iterations;	// 4 = 0x4
	int _yDelta;	// 8 = 0x8
	int _scrollLength;	// 12 = 0xc
	NSString *_currentTest;	// 16 = 0x10
	CADisplayLink *_displayLink;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *currentTest;	// G=0x32f95499; S=0x32f954a9; @synthesize=_currentTest
@property(retain, nonatomic) CADisplayLink *displayLink;	// G=0x32f954f9; S=0x32f95509; @synthesize=_displayLink
@property(assign, nonatomic) int iterations;	// G=0x32f95479; S=0x32f95489; @synthesize=_iterations
@property(assign, nonatomic) int scrollLength;	// G=0x32f954d9; S=0x32f954e9; @synthesize=_scrollLength
@property(assign, nonatomic) int yDelta;	// G=0x32f954b9; S=0x32f954c9; @synthesize=_yDelta
- (id)initWithName:(id)name iterations:(int)iterations delta:(int)delta length:(int)length;	// 0x32f95375
// declared property getter: - (id)currentTest;	// 0x32f95499
- (void)dealloc;	// 0x32f95409
// declared property getter: - (id)displayLink;	// 0x32f954f9
// declared property getter: - (int)iterations;	// 0x32f95479
// declared property getter: - (int)scrollLength;	// 0x32f954d9
// declared property setter: - (void)setCurrentTest:(id)test;	// 0x32f954a9
// declared property setter: - (void)setDisplayLink:(id)link;	// 0x32f95509
// declared property setter: - (void)setIterations:(int)iterations;	// 0x32f95489
// declared property setter: - (void)setScrollLength:(int)length;	// 0x32f954e9
// declared property setter: - (void)setYDelta:(int)delta;	// 0x32f954c9
// declared property getter: - (int)yDelta;	// 0x32f954b9
@end
