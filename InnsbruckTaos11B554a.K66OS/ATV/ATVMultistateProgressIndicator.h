/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVMultistateProgressIndicator : BRControl {
	id _currentStateID;	// 84 = 0x54
	NSMutableDictionary *_states;	// 88 = 0x58
	float _value;	// 92 = 0x5c
}
@property(retain) id state;	// G=0x108a09; S=0x10890d; converted property
@property(assign) float value;	// G=0x108a85; S=0x108a41; converted property
- (id)init;	// 0x108761
- (void)dealloc;	// 0x1087dd
- (void)drawRect:(CGRect)rect;	// 0x108a99
- (void)setProgressIndicatorImageBatch:(id)batch forState:(id)state;	// 0x108841
// converted property setter: - (void)setState:(id)state;	// 0x10890d
// converted property setter: - (void)setValue:(float)value;	// 0x108a41
// converted property getter: - (id)state;	// 0x108a09
// converted property getter: - (float)value;	// 0x108a85
@end

