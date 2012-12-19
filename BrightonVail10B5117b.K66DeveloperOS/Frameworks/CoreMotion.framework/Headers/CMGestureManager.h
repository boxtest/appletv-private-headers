/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <NSObject.h> // Unknown library


@interface CMGestureManager : NSObject {
	id _internal;	// 4 = 0x4
}
@property(copy) id gestureHandler;	// G=0x31779629; S=0x31779555; 
+ (BOOL)isGestureServiceEnabled;	// 0x31779735
+ (void)setGestureServiceEnabled:(BOOL)enabled;	// 0x31779751
- (id)init;	// 0x31779411
- (id)initWithPriority:(int)priority;	// 0x31779425
- (void)dealloc;	// 0x31779495
// declared property getter: - (id)gestureHandler;	// 0x31779629
// declared property setter: - (void)setGestureHandler:(id)handler;	// 0x31779555
@end
