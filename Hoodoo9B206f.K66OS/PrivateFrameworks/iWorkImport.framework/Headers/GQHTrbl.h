/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHTrbl : NSObject {
@private
	int mTop;	// 4 = 0x4
	int mRight;	// 8 = 0x8
	int mBottom;	// 12 = 0xc
	int mLeft;	// 16 = 0x10
}
@property(assign) int bottom;	// G=0x33fed4d1; S=0x33fed4c1; converted property
@property(assign) int left;	// G=0x33fed4f1; S=0x33fed4e1; converted property
@property(assign) int right;	// G=0x33fed4b1; S=0x33fed4a1; converted property
@property(assign) int top;	// G=0x33fed491; S=0x33fed481; converted property
- (id)init;	// 0x33fed501
// converted property getter: - (int)bottom;	// 0x33fed4d1
- (CFStringRef)createStringRef;	// 0x33fed575
// converted property getter: - (int)left;	// 0x33fed4f1
// converted property getter: - (int)right;	// 0x33fed4b1
// converted property setter: - (void)setBottom:(int)bottom;	// 0x33fed4c1
// converted property setter: - (void)setLeft:(int)left;	// 0x33fed4e1
// converted property setter: - (void)setRight:(int)right;	// 0x33fed4a1
// converted property setter: - (void)setTop:(int)top;	// 0x33fed481
- (void)setTop:(int)top right:(int)right bottom:(int)bottom left:(int)left;	// 0x33fed441
// converted property getter: - (int)top;	// 0x33fed491
@end

