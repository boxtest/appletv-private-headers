/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BREvent.h"


__attribute__((visibility("hidden")))
@interface BRHIDEvent : BREvent {
	unsigned short _page;	// 30 = 0x1e
	unsigned short _usage;	// 32 = 0x20
	unsigned long long _extendedSignature;	// 36 = 0x24
}
@property(readonly, assign) unsigned long long extendedSignature;	// G=0x28dc61; converted property
@property(readonly, assign) unsigned short page;	// G=0x28dc41; converted property
@property(readonly, assign) unsigned short usage;	// G=0x28dc51; converted property
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x28d765
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x28d715
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x28d6c1
+ (id)eventWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x28d665
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value;	// 0x28d7ad
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value atTime:(double)time;	// 0x28d82d
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature;	// 0x28d7e5
- (id)initWithPage:(unsigned short)page usage:(unsigned short)usage value:(int)value extendedSignature:(unsigned long long)signature atTime:(double)time;	// 0x28d861
- (id)description;	// 0x28da19
// converted property getter: - (unsigned long long)extendedSignature;	// 0x28dc61
- (BOOL)isEqual:(id)equal;	// 0x28db49
// converted property getter: - (unsigned short)page;	// 0x28dc41
// converted property getter: - (unsigned short)usage;	// 0x28dc51
@end

