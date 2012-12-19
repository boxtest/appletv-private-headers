/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSManagedObjectContext.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EKSideTableContext : NSManagedObjectContext {
	NSString *_path;	// 128 = 0x80
}
- (id)init;	// 0x31848c41
- (id)initWithPath:(id)path;	// 0x31848c55
- (id)_alarmsMatchingPredicate:(id)predicate;	// 0x31848d09
- (id)_managedObjectModel;	// 0x318495c9
- (id)_pathForPersistentStore;	// 0x31849465
- (id)_persistentStoreCoordinator;	// 0x31849729
- (void)_removeSqliteFiles;	// 0x318494d1
- (id)_settingForKey:(id)key;	// 0x318491f1
- (id)_urlForPersistentStore;	// 0x31849499
- (id)alarmsBetweenStartDate:(id)date endDate:(id)date2;	// 0x31849095
- (void)deleteAllAlarms;	// 0x31848ddd
- (id)insertNewAlarm;	// 0x31848ea9
- (id)nextAlarmFireTime;	// 0x31848ed1
- (id)rootDirectory;	// 0x318493ed
- (void)setSetting:(id)setting forKey:(id)key;	// 0x31849359
- (id)settingForKey:(id)key;	// 0x31849325
@end
