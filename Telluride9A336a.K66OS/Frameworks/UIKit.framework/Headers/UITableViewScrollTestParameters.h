/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewScrollTestParameters : NSObject {
@private
	int _iterations;	// 4 = 0x4
	int _yDelta;	// 8 = 0x8
	int _scrollLength;	// 12 = 0xc
	NSString *_currentTest;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *currentTest;	// G=0x35261989; S=0x35261e59; @synthesize=_currentTest
@property(assign, nonatomic) int iterations;	// G=0x35261de5; S=0x35261e05; @synthesize=_iterations
@property(assign, nonatomic) int scrollLength;	// G=0x35261dd5; S=0x353a8bb5; @synthesize=_scrollLength
@property(assign, nonatomic) int yDelta;	// G=0x35261dc5; S=0x35261df5; @synthesize=_yDelta
- (id)initWithName:(id)name iterations:(int)iterations delta:(int)delta length:(int)length;	// 0x352618e5
// declared property getter: - (id)currentTest;	// 0x35261989
- (void)dealloc;	// 0x35261e15
// declared property getter: - (int)iterations;	// 0x35261de5
// declared property getter: - (int)scrollLength;	// 0x35261dd5
// declared property setter: - (void)setCurrentTest:(id)test;	// 0x35261e59
// declared property setter: - (void)setIterations:(int)iterations;	// 0x35261e05
// declared property setter: - (void)setScrollLength:(int)length;	// 0x353a8bb5
// declared property setter: - (void)setYDelta:(int)delta;	// 0x35261df5
// declared property getter: - (int)yDelta;	// 0x35261dc5
@end

