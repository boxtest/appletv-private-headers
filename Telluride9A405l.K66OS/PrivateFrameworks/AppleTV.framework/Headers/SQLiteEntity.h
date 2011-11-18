/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "SQLiteEntity.h"
#import <NSObject.h> // Unknown library
#import "NSObject.h"

@class ISSQLiteDatabase;

@protocol SQLiteEntity <NSObject>
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)setClientDictionary;
+ (id)databasePropertyToGetClientProperty:(id)getClientProperty;
+ (id)databasePropertyToSetClientProperty:(id)setClientProperty;
+ (id)databaseTable;
+ (id)databaseValueForProperty:(id)property clientValue:(id)value;
+ (id)disambiguatedSQLForProperty:(id)property;
+ (id)foreignDatabaseColumnForProperty:(id)property;
+ (id)foreignDatabaseTableForProperty:(id)property;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)table;
+ (id)joinClauseForProperty:(id)property;
- (BOOL)deleteFromDatabase;
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;
- (void)setExternalValuesWithDictionary:(id)dictionary;
- (BOOL)setValue:(id)value forProperty:(id)property;
- (BOOL)setValuesWithDictionary:(id)dictionary;
- (id)valueForExternalProperty:(id)externalProperty;
- (id)valueForProperty:(id)property;
@end

__attribute__((visibility("hidden")))
@interface SQLiteEntity : NSObject <SQLiteEntity> {
@private
	ISSQLiteDatabase *_database;	// 4 = 0x4
	long long _persistentID;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) ISSQLiteDatabase *database;	// G=0x35f56475; @synthesize=_database
@property(readonly, assign, nonatomic) BOOL existsInDatabase;	// G=0x35f54b0d; 
@property(readonly, assign, nonatomic) long long persistentID;	// G=0x35f56485; @synthesize=_persistentID
+ (id)_aggregateValueForProperty:(id)property function:(id)function predicate:(id)predicate database:(id)database;	// 0x35f59429
+ (BOOL)_insertValues:(id)values intoTable:(id)table withPersistentID:(long long)persistentID database:(id)database;	// 0x35f55be5
+ (id)anyInDatabase:(id)database predicate:(id)predicate;	// 0x35f59215
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)setClientDictionary;	// 0x35f54651
+ (id)databasePropertyToGetClientProperty:(id)getClientProperty;	// 0x35f5479d
+ (id)databasePropertyToSetClientProperty:(id)setClientProperty;	// 0x35f547a1
+ (id)databaseTable;	// 0x35f547a9
+ (id)databaseValueForProperty:(id)property clientValue:(id)value;	// 0x35f547a5
+ (id)disambiguatedSQLForProperty:(id)property;	// 0x35f547f1
+ (id)foreignDatabaseColumnForProperty:(id)property;	// 0x35f54859
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x35f5485d
+ (id)foreignDatabaseTablesToDelete;	// 0x35f54861
+ (id)foreignKeyColumnForTable:(id)table;	// 0x35f54865
+ (id)joinClauseForProperty:(id)property;	// 0x35f54869
+ (id)maxValueForProperty:(id)property predicate:(id)predicate database:(id)database;	// 0x35f59775
+ (id)minValueForProperty:(id)property predicate:(id)predicate database:(id)database;	// 0x35f597a1
+ (id)queryWithDatabase:(id)database predicate:(id)predicate;	// 0x35f597cd
+ (id)queryWithDatabase:(id)database predicate:(id)predicate orderingProperties:(id)properties;	// 0x35f597f1
- (id)initWithPersistentID:(long long)persistentID inDatabase:(id)database;	// 0x35f5424d
- (id)initWithPropertyValues:(id)propertyValues inDatabase:(id)database;	// 0x35f542a1
- (id)_copyTableClusteredValuesWithValues:(id)values;	// 0x35f56069
- (BOOL)_deleteRowFromTable:(id)table usingColumn:(id)column;	// 0x35f56261
// declared property getter: - (id)database;	// 0x35f56475
- (BOOL)deleteFromDatabase;	// 0x35f5486d
// declared property getter: - (BOOL)existsInDatabase;	// 0x35f54b0d
- (void)getValues:(id *)values forProperties:(id *)properties count:(unsigned)count;	// 0x35f54d55
// declared property getter: - (long long)persistentID;	// 0x35f56485
- (void)setExternalValuesWithDictionary:(id)dictionary;	// 0x35f55105
- (BOOL)setValue:(id)value forProperty:(id)property;	// 0x35f55109
- (BOOL)setValuesWithDictionary:(id)dictionary;	// 0x35f551a9
- (id)valueForExternalProperty:(id)externalProperty;	// 0x35f55bb5
- (id)valueForProperty:(id)property;	// 0x35f55bb9
@end

