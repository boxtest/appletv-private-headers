/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSMutableDictionary, AVCallbackRegistry;
@protocol OS_dispatch_queue;

@interface AVCMNotificationDispatcher : NSObject {
	opaqueCMNotificationCenter *_cmNotificationCenter;	// 4 = 0x4
	AVCallbackRegistry *_callbackRegistry;	// 8 = 0x8
	NSMutableDictionary *_listenerObjectsPassedToFig;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_listenerObjectsQueue;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) opaqueCMNotificationCenter *CMNotificationCenter;	// G=0x30333b85; 
@property(readonly, assign, nonatomic, getter=_callbackRegistry) AVCallbackRegistry *callbackRegistry;	// G=0x30333b75; 
+ (void)initialize;	// 0x30333661
+ (id)notificationDispatcherForCMNotificationCenter:(opaqueCMNotificationCenter *)cmnotificationCenter;	// 0x30333711
- (id)initWithCMNotificationCenter:(opaqueCMNotificationCenter *)cmnotificationCenter;	// 0x3033399d
// declared property getter: - (opaqueCMNotificationCenter *)CMNotificationCenter;	// 0x30333b85
- (void)_addListenerAndCallback:(id)callback forWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void *)callback3 name:(CFStringRef)name object:(const void *)object;	// 0x30333dd5
// declared property getter: - (id)_callbackRegistry;	// 0x30333b75
- (id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)listener callback:(/*function-pointer*/ void *)callback name:(CFStringRef)name object:(const void *)object;	// 0x30333f69
- (void)addListenerWithWeakReference:(id)weakReference callback:(/*function-pointer*/ void *)callback name:(CFStringRef)name object:(const void *)object flags:(unsigned long)flags;	// 0x30333b95
- (void)dealloc;	// 0x30333aa1
- (void)finalize;	// 0x30333b31
- (void)removeListenerWithWeakReference:(id)weakReference callback:(/*function-pointer*/ void *)callback name:(CFStringRef)name object:(const void *)object;	// 0x30333d41
@end

