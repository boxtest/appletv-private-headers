/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIClassSwapper : NSObject {
	NSString *className;	// 4 = 0x4
	id object;	// 8 = 0x8
}
@property(readonly, retain) NSString *className;	// G=0x3049b205; converted property
@property(readonly, retain) id object;	// G=0x3049b215; converted property
+ (id)swapperForObject:(id)object withClassName:(id)className;	// 0x3049b1c5
- (id)initWithCoder:(id)coder;	// 0x303b4041
- (id)initWithObject:(id)object andClassName:(id)name;	// 0x3049b0c1
// converted property getter: - (id)className;	// 0x3049b205
- (void)dealloc;	// 0x303b6a1d
- (void)encodeWithCoder:(id)coder;	// 0x3049b139
// converted property getter: - (id)object;	// 0x3049b215
@end
