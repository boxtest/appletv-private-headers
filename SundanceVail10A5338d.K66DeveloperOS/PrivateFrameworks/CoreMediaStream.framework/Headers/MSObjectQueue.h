/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library


@interface MSObjectQueue : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	CFDictionaryRef _statements;	// 8 = 0x8
}
@property(readonly, assign) long long count;	// G=0x3375879d; 
- (id)initWithPath:(id)path;	// 0x3375838d
- (id)_objectWrapperFromQueueQuery:(sqlite3_stmt *)queueQuery outSize:(long long *)size;	// 0x33758aa9
- (sqlite3_stmt *)_statementLabel:(id)label query:(const char *)query;	// 0x337586e9
- (id)allObjectWrappersMaxCount:(long long)count;	// 0x33758bc5
- (void)appendObjectWrappers:(id)wrappers;	// 0x337587f1
- (void)commitErrorCountsForObjectWrappers:(id)objectWrappers;	// 0x337593d1
- (void)commitObjectsWrappers:(id)wrappers;	// 0x33759639
// declared property getter: - (long long)count;	// 0x3375879d
- (void)dealloc;	// 0x3375863d
- (id)objectWrappersWithZeroSizeMaxCount:(long long)zeroSizeMaxCount;	// 0x33758d99
- (void)removeObjectWrappersFromQueue:(id)queue;	// 0x337591c1
- (id)smallestObjectWrappersTargetTotalSize:(long long)size maxCount:(long long)count;	// 0x33758f6d
@end
