/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSSQLiteDatabase;

__attribute__((visibility("hidden")))
@interface SSKeyValueStoreDatabase : NSObject {
	SSSQLiteDatabase *_database;	// 4 = 0x4
}
- (id)init;	// 0x35505339
- (id)initReadOnly;	// 0x3550534d
- (void)_dispatchBlockAsync:(id)async;	// 0x3550571d
- (id)_initReadOnly:(BOOL)only;	// 0x35505121
- (void)dealloc;	// 0x35505361
- (void)modifyAsyncUsingTransactionBlock:(id)block;	// 0x355053ad
- (void)modifyUsingTransactionBlock:(id)block;	// 0x35505459
- (void)readAsyncUsingSessionBlock:(id)block;	// 0x35505565
- (void)readUsingSessionBlock:(id)block;	// 0x35505611
@end

