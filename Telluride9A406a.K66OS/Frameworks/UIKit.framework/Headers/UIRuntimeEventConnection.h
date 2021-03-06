/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIRuntimeConnection.h"


__attribute__((visibility("hidden")))
@interface UIRuntimeEventConnection : UIRuntimeConnection {
@private
	unsigned eventMask;	// 16 = 0x10
}
@property(readonly, assign) SEL action;	// G=0x358e9339; 
@property(assign) unsigned eventMask;	// G=0x358e94d5; S=0x358e94e5; @synthesize
@property(readonly, assign) id target;	// G=0x358e92fd; 
- (id)initWithCoder:(id)coder;	// 0x358e923d
// declared property getter: - (SEL)action;	// 0x358e9339
- (void)connect;	// 0x358e9355
- (void)connectForSimulator;	// 0x358e9385
- (id)description;	// 0x358e9455
- (void)encodeWithCoder:(id)coder;	// 0x358e929d
// declared property getter: - (unsigned)eventMask;	// 0x358e94d5
// declared property setter: - (void)setEventMask:(unsigned)mask;	// 0x358e94e5
// declared property getter: - (id)target;	// 0x358e92fd
@end

