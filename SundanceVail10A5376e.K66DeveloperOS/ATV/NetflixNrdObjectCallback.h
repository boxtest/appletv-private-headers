/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixNrdObjectCallback : XXUnknownSuperclass {
	id target_;	// 4 = 0x4
	SEL selector_;	// 8 = 0x8
}
@property(assign, nonatomic) SEL selector;	// G=0x4ce285; S=0x4ce295; @synthesize=selector_
@property(retain, nonatomic) id target;	// G=0x4ce265; S=0x4ce275; @synthesize=target_
- (id)initWithTarget:(id)target selector:(SEL)selector;	// 0x4ce04d
- (void)dealloc;	// 0x4ce0b1
- (void)perform;	// 0x4ce111
- (void)performWithObject:(id)object;	// 0x4ce175
- (void)performWithObject:(id)object afterDelay:(double)delay;	// 0x4ce1e5
// declared property getter: - (SEL)selector;	// 0x4ce285
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x4ce295
// declared property setter: - (void)setTarget:(id)target;	// 0x4ce275
// declared property getter: - (id)target;	// 0x4ce265
@end
