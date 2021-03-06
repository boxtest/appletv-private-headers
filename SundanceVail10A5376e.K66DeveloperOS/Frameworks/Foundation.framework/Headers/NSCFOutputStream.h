/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSOutputStream.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSCFOutputStream : NSOutputStream {
}
@property(assign) id delegate;	// G=0x34dd3ef5; S=0x34dd3ef9; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x34dd3dd5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x34dd3dd1
- (id)initToBuffer:(char *)buffer capacity:(unsigned)capacity;	// 0x34dd3e09
- (id)initToFileAtPath:(id)path append:(BOOL)append;	// 0x34dd3e2d
- (id)initToMemory;	// 0x34dd3ddd
- (id)initWithURL:(id)url append:(BOOL)append;	// 0x34dd3e9d
- (void)_scheduleInCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x34dd4075
- (BOOL)_setCFClientFlags:(unsigned long)flags callback:(/*function-pointer*/ void *)callback context:(XXStruct_K1psTC *)context;	// 0x34dd405d
- (void)_unscheduleFromCFRunLoop:(CFRunLoopRef)cfrunLoop forMode:(CFStringRef)mode;	// 0x34dd407d
- (BOOL)allowsWeakReference;	// 0x34dd3d69
- (void)close;	// 0x34dd3ef1
// converted property getter: - (id)delegate;	// 0x34dd3ef5
- (void)finalize;	// 0x34dd3d91
- (BOOL)hasSpaceAvailable;	// 0x34dd4051
- (unsigned)hash;	// 0x34dd3d51
- (BOOL)isEqual:(id)equal;	// 0x34dd3d39
- (void)open;	// 0x34dd3eed
- (id)propertyForKey:(id)key;	// 0x34dd3f7d
- (oneway void)release;	// 0x34dd3d65
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x34dd3fe9
- (id)retain;	// 0x34dd3d55
- (unsigned)retainCount;	// 0x34dd3d8d
- (BOOL)retainWeakReference;	// 0x34dd3d7d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x34dd3fb9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x34dd3ef9
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x34dd3fa9
- (id)streamError;	// 0x34dd401d
- (unsigned)streamStatus;	// 0x34dd4019
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x34dd4049
@end

