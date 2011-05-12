/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library
#import "IMFoundation-Structs.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
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

@interface NSObject (DelayedPerformAdditions)
- (void)performSelector:(SEL)selector withObject:(id)object afterDelay:(double)delay ignoreMenuTracking:(BOOL)tracking;	// 0x31ad2eed
@end

@interface NSObject (FezAdditions)
- (BOOL)isNull;	// 0x31ad3f6d
@end

@interface NSObject (IMSecureObject)
@property(readonly, assign, nonatomic) BOOL _isSecurityEnabled;	// G=0x31adb879; 
@property(readonly, assign, nonatomic) BOOL _isSecurityNormal;	// G=0x31adb85d; 
@property(assign) int securityLevel;	// G=0x31adb851; S=0x31adb859; converted property
// declared property getter: - (BOOL)_isSecurityEnabled;	// 0x31adb879
// declared property getter: - (BOOL)_isSecurityNormal;	// 0x31adb85d
- (void)postSecurityLevelChangeFrom:(int)from to:(int)to;	// 0x31adb895
// converted property getter: - (int)securityLevel;	// 0x31adb851
// converted property setter: - (void)setSecurityLevel:(int)level;	// 0x31adb859
@end
