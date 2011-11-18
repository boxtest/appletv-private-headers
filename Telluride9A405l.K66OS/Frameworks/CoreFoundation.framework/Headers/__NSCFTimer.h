/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSTimer.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFTimer : NSTimer {
}
@property(retain) id fireDate;	// G=0x352dbf45; S=0x352750d5; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x352dbf1d
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x352dbf19
- (id)init;	// 0x352dc279
- (id)initWithFireDate:(id)fireDate interval:(double)interval target:(id)target selector:(SEL)selector userInfo:(id)info repeats:(BOOL)repeats;	// 0x352dc13d
- (unsigned long)_cfTypeID;	// 0x352dc139
- (BOOL)_isDeallocating;	// 0x352dbec5
- (BOOL)_tryRetain;	// 0x352dbeb1
- (void)finalize;	// 0x352dbed5
- (void)fire;	// 0x352dbf75
// converted property getter: - (id)fireDate;	// 0x352dbf45
- (unsigned)hash;	// 0x352dbead
- (void)invalidate;	// 0x35261829
- (BOOL)isEqual:(id)equal;	// 0x352dbe95
- (BOOL)isValid;	// 0x35275081
- (oneway void)release;	// 0x35261afd
- (id)retain;	// 0x35260e4d
- (unsigned)retainCount;	// 0x352dbed1
// converted property setter: - (void)setFireDate:(id)date;	// 0x352750d5
- (double)timeInterval;	// 0x352dbf41
- (id)userInfo;	// 0x352aca01
@end

