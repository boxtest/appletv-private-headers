/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSDictionary.h> // Unknown library

@class NSObject, NSIndexSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueChangeDictionary : NSDictionary {
@private
	int _retainCountMinusOne;	// 4 = 0x4
	struct {
		unsigned kind;
		NSObject *oldValue;
		NSObject *newValue;
		NSIndexSet *indexes;
	} _details;	// 8 = 0x8
	NSObject *_originalObservable;	// 24 = 0x18
	BOOL _isPriorNotification;	// 28 = 0x1c
	BOOL _isRetainingObjects;	// 29 = 0x1d
}
- (id)initWithDetailsNoCopy:(XXStruct_m4zdSA)detailsNoCopy originalObservable:(id)observable isPriorNotification:(BOOL)notification;	// 0x32446299
- (unsigned)count;	// 0x324dc48d
- (void)dealloc;	// 0x32446341
- (id)keyEnumerator;	// 0x324dc4d5
- (id)objectForKey:(id)key;	// 0x324dc765
- (oneway void)release;	// 0x3244630d
- (id)retain;	// 0x324dc6d1
- (unsigned)retainCount;	// 0x324dc47d
- (void)retainObjects;	// 0x324dc5fd
- (void)setDetailsNoCopy:(XXStruct_m4zdSA)copy originalObservable:(id)observable;	// 0x324513ad
- (void)setOriginalObservable:(id)observable;	// 0x324dc671
@end

