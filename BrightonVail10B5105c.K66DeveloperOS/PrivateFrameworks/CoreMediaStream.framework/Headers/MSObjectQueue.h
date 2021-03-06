/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"


@interface MSObjectQueue : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	CFDictionaryRef _statements;	// 8 = 0x8
}
@property(readonly, assign) long long count;	// G=0x37c7b1fd; 
- (id)initWithPath:(id)path;	// 0x37c7adb5
- (id)_objectWrapperFromQueueQuery:(sqlite3_stmt *)queueQuery outSize:(long long *)size;	// 0x37c7b509
- (sqlite3_stmt *)_statementLabel:(id)label query:(const char *)query;	// 0x37c7b149
- (id)allObjectWrappersMaxCount:(long long)count;	// 0x37c7b625
- (void)appendObjectWrappers:(id)wrappers;	// 0x37c7b251
- (void)commitErrorCountsForObjectWrappers:(id)objectWrappers;	// 0x37c7be31
- (void)commitObjectsWrappers:(id)wrappers;	// 0x37c7c099
// declared property getter: - (long long)count;	// 0x37c7b1fd
- (void)dealloc;	// 0x37c7b09d
- (id)objectWrappersWithZeroSizeMaxCount:(long long)zeroSizeMaxCount;	// 0x37c7b7f9
- (void)removeObjectWrappersFromQueue:(id)queue;	// 0x37c7bc21
- (id)smallestObjectWrappersTargetTotalSize:(long long)size maxCount:(long long)count;	// 0x37c7b9cd
@end

