/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSUbiquitousKeyValueStore : NSObject {
	id _private1;	// 4 = 0x4
	id _private2;	// 8 = 0x8
	id _private3;	// 12 = 0xc
	void *_private4;	// 16 = 0x10
	void *_reserved[3];	// 20 = 0x14
}
+ (void)_appWillActivate;	// 0x360ba6d5
+ (void)_appWillDeactivate;	// 0x36094ff9
+ (void)_synchronizeStoresForced:(BOOL)forced;	// 0x36095011
+ (id)additionalStoreWithIdentifier:(id)identifier;	// 0x361b1055
+ (id)defaultStore;	// 0x361b0fe1
- (id)init;	// 0x361b1251
- (id)initWithBundleIdentifier:(id)bundleIdentifier;	// 0x360999b5
- (id)initWithBundleIdentifier:(id)bundleIdentifier storeIdentifier:(id)identifier;	// 0x360999c9
- (id)initWithBundleIdentifier:(id)bundleIdentifier storeIdentifier:(id)identifier additionalStore:(BOOL)store;	// 0x360999ed
- (void)_adjustTimer:(id)timer;	// 0x3609a571
- (void)_adjustTimerForAutosync;	// 0x3609ab61
- (void)_configurationDidChange;	// 0x361b2425
- (BOOL)_hasPendingSynchronize;	// 0x361b13cd
- (void)_pleaseSynchronize:(id)synchronize;	// 0x3609abcd
- (BOOL)_postDidChangeNotificationExternalChanges:(id)_post sourceChangeCount:(int)count;	// 0x361b14bd
- (void)_registerToDaemon;	// 0x36099cb5
- (void)_rethrowException:(id)exception;	// 0x361b16fd
- (void)_scheduleRemoteSynchronization;	// 0x360ba6e9
- (void)_setHasPendingSynchronize:(BOOL)synchronize;	// 0x361b1421
- (void)_setShouldAvoidSynchronize:(BOOL)_set;	// 0x361b1355
- (BOOL)_shouldAvoidSynchronize;	// 0x3609a249
- (void)_sourceDidChange:(id)_source;	// 0x361b2411
- (int)_storeChangeFromSourceChange:(int)sourceChange;	// 0x361b14a1
- (void)_syncConcurrently;	// 0x361b1c5d
- (void)_syncConcurrentlyForced:(BOOL)forced;	// 0x361b18fd
- (BOOL)_synchronizeForced:(BOOL)forced;	// 0x3609a2a1
- (BOOL)_synchronizeForced:(BOOL)forced notificationQueue:(id)queue;	// 0x3609a2b9
- (void)_unregisterFromDaemon;	// 0x361b27cd
- (void)_useSourceAsyncWithBlock:(id)block;	// 0x361b109d
- (void)_useSourceSyncWithBlock:(id)block;	// 0x361b114d
- (id)arrayForKey:(id)key;	// 0x361b29d5
- (BOOL)boolForKey:(id)key;	// 0x361b2df5
- (id)dataForKey:(id)key;	// 0x361b2b7d
- (void)dealloc;	// 0x361b1265
- (id)dictionaryForKey:(id)key;	// 0x361b2aa9
- (id)dictionaryRepresentation;	// 0x3609a661
- (double)doubleForKey:(id)key;	// 0x361b2d41
- (void)finalize;	// 0x361b130d
- (long long)longLongForKey:(id)key;	// 0x361b2c51
- (unsigned)maximumDataLengthPerKey;	// 0x361b2895
- (unsigned)maximumKeyCount;	// 0x361b2855
- (unsigned)maximumKeyLength;	// 0x361b2875
- (unsigned)maximumTotalDataLength;	// 0x361b28b5
- (id)objectForKey:(id)key;	// 0x3609a791
- (void)registerDefaultValues:(id)values;	// 0x361b1e49
- (void)removeObjectForKey:(id)key;	// 0x361b1e35
- (void)setArray:(id)array forKey:(id)key;	// 0x361b2a11
- (void)setBool:(BOOL)aBool forKey:(id)key;	// 0x361b2f11
- (void)setData:(id)data forKey:(id)key;	// 0x361b2bb9
- (void)setDictionary:(id)dictionary forKey:(id)key;	// 0x361b2ae5
- (void)setDouble:(double)aDouble forKey:(id)key;	// 0x361b2db9
- (void)setLongLong:(long long)aLong forKey:(id)key;	// 0x361b2d05
- (void)setObject:(id)object forKey:(id)key;	// 0x3609a939
- (void)setString:(id)string forKey:(id)key;	// 0x361b293d
- (id)stringForKey:(id)key;	// 0x361b28d5
- (BOOL)synchronize;	// 0x3609a1f9
@end
