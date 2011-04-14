/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


@interface WebDatabaseManager : NSObject {
}
+ (void)didFinishLastTransaction;	// 0x32c1db85
+ (void)endBackgroundTask;	// 0x32c1db99
+ (void)removeEmptyDatabaseFiles;	// 0x32c0fd3d
+ (void)scheduleEmptyDatabaseRemoval;	// 0x32c0fd1d
+ (id)sharedWebDatabaseManager;	// 0x32c3f2c9
+ (void)startBackgroundTask;	// 0x32c1d759
+ (void)willBeginFirstTransaction;	// 0x32c1d745
- (id)init;	// 0x32c3fa95
- (id)databasesWithOrigin:(id)origin;	// 0x32c3f745
- (void)deleteAllDatabases;	// 0x32c3f481
- (BOOL)deleteDatabase:(id)database withOrigin:(id)origin;	// 0x32c3f329
- (BOOL)deleteOrigin:(id)origin;	// 0x32c3f459
- (id)detailsForDatabase:(id)database withOrigin:(id)origin;	// 0x32c3f491
- (id)origins;	// 0x32c3f8e9
@end
