/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library
#import "Celestial-Structs.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (id)debugDescription;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (NSObject_AVShared)
- (void)allowSafePerformSelector;	// 0x30680aa9
- (void)disallowSafePerformSelector;	// 0x3068bfd9
- (void)fromMainThreadPostNotificationName:(id)mainThreadPostNotificationName object:(id)object userInfo:(id)info;	// 0x30694e6d
- (void)fromNotifySafeThreadPerformSelector:(SEL)notifySafeThreadPerformSelector withObject:(id)object;	// 0x30686449
- (void)fromNotifySafeThreadPostNotificationName:(id)notifySafeThreadPostNotificationName object:(id)object userInfo:(id)info;	// 0x306862d5
- (BOOL)okToNotifyFromThisThread;	// 0x30694e61
- (void)postNotificationWithDescription:(id)description;	// 0x306864dd
@end

@interface NSObject (AVExternalAudioDelegate)
- (long)becomeActive;	// 0x3069ac3d
- (long)becomeInactive;	// 0x3069ac41
@end
