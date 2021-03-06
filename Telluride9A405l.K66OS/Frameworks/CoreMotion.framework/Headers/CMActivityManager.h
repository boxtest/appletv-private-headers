/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <NSObject.h> // Unknown library


@interface CMActivityManager : NSObject {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic, getter=isActivityAvailable) BOOL activityAvailable;	// G=0x3200d97d; 
@property(copy) id activityHandler;	// G=0x3200d95d; S=0x3200d239; 
- (id)init;	// 0x3200d189
// declared property getter: - (id)activityHandler;	// 0x3200d95d
- (void)dealloc;	// 0x3200d1ed
// declared property getter: - (BOOL)isActivityAvailable;	// 0x3200d97d
// declared property setter: - (void)setActivityHandler:(id)handler;	// 0x3200d239
- (void)startWatchdogCheckins;	// 0x3200cee9
- (void)stopWatchdogCheckins;	// 0x3200d151
@end

