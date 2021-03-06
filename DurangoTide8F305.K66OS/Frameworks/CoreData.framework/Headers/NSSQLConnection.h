/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSSQLAdapter, NSSQLStatement, NSArray;

__attribute__((visibility("hidden")))
@interface NSSQLConnection : NSObject {
@private
	NSSQLAdapter *_adapter;	// 4 = 0x4
	BOOL _transactionIsOpen;	// 8 = 0x8
	BOOL _useSyntaxColoredLogging;	// 9 = 0x9
	int _debug;	// 12 = 0xc
	NSSQLStatement *_sqlStatement;	// 16 = 0x10
	NSArray *_columnsToFetch;	// 20 = 0x14
	NSArray *_metadataColumns;	// 24 = 0x18
}
@property(readonly, retain) NSSQLAdapter *adapter;	// G=0x342bd0a1; converted property
@property(retain) NSArray *columnsToFetch;	// G=0x3429f101; S=0x3429f121; converted property
@property(readonly, retain) NSArray *metadataColumns;	// G=0x342be7c5; converted property
@property(readonly, retain) NSSQLStatement *sqlStatement;	// G=0x3429ebd1; converted property
+ (void)initialize;	// 0x342bcc85
- (id)initWithAdapter:(id)adapter;	// 0x342bcee5
- (void)_forceDisconnectOnError;	// 0x343343c5
- (void)_performPostSaveTasks;	// 0x34333fd9
- (void)_raiseOptimisticLockingExceptionWithReason:(id)reason;	// 0x343344b5
// converted property getter: - (id)adapter;	// 0x342bd0a1
- (void)awake;	// 0x34333fa5
- (void)beginTransaction;	// 0x343349a9
- (BOOL)canConnect;	// 0x343348c9
// converted property getter: - (id)columnsToFetch;	// 0x3429f101
- (void)commitTransaction;	// 0x3433497d
- (void)connect;	// 0x34334925
- (void)createIndexesForEntity:(id)entity;	// 0x343349d5
- (void)createManyToManyTablesForEntity:(id)entity;	// 0x34334131
- (void)createMetadata;	// 0x34333fdd
- (void)createPrimaryKeyTableForModel:(id)model knownEmpty:(BOOL)empty;	// 0x34334c29
- (void)createSchema;	// 0x34335031
- (void)createTableForEntity:(id)entity;	// 0x3433421d
- (void)createTablesForEntities:(id)entities;	// 0x343340a1
- (BOOL)databaseIsEmpty;	// 0x34334899
- (void)dealloc;	// 0x342d128d
- (void)deleteCorrelation:(id)correlation;	// 0x343347e5
- (void)deleteRow:(id)row;	// 0x3433478d
- (id)describeResults;	// 0x343346d5
- (void)didCreateSchema;	// 0x34333fc5
- (void)disconnect;	// 0x343348f9
- (void)endFetch;	// 0x34334649
- (void)endPrimaryKeyGeneration;	// 0x34333fd5
- (void)execute;	// 0x34334735
- (long long)fetchMaxPrimaryKeyForEntity:(id)entity;	// 0x343345e9
- (id)fetchMetadata;	// 0x342be4d5
- (int)fetchResultSet:(void *)set usingFetchPlan:(void *)plan;	// 0x34334675
- (id)fetchTableCreationSQL;	// 0x34334589
- (id)fetchTableNames;	// 0x343345b9
- (void)finalize;	// 0x343344ed
- (void)forceTransactionClosed;	// 0x34333fad
- (long long)generatePrimaryKeysForEntity:(id)entity batch:(unsigned)batch;	// 0x34333fc9
- (BOOL)hasMetadataTable;	// 0x34334559
- (BOOL)hasOpenTransaction;	// 0x342d0d21
- (BOOL)hasPrimaryKeyTable;	// 0x34334529
- (void)insertCorrelation:(id)correlation;	// 0x34334811
- (void)insertRow:(id)row;	// 0x3433483d
- (BOOL)isFetchInProgress;	// 0x34334705
- (BOOL)isOpen;	// 0x34334869
// converted property getter: - (id)metadataColumns;	// 0x342be7c5
- (id)newFetchedArray;	// 0x343346a5
- (void)performAdapterOperation:(id)operation;	// 0x343343d9
- (void)performAdapterOperations:(id)operations;	// 0x34334b8d
- (void)prepareAndExecuteSQLStatement:(id)statement;	// 0x34334281
- (void)prepareForPrimaryKeyGeneration;	// 0x34333fd1
- (void)prepareSQLStatement:(id)statement;	// 0x3429e1b5
- (CFArrayRef)rawIntegerRowsForSQL:(id)sql;	// 0x34334619
- (void)releaseSQLStatement;	// 0x342a1d35
- (void)resetSQLStatement;	// 0x343342b9
- (void)rollbackTransaction;	// 0x34334951
- (void)saveMetadata:(id)metadata;	// 0x34334d31
- (void)selectAttributes:(id)attributes fetchRequest:(id)request lock:(BOOL)lock entity:(id)entity;	// 0x34334761
// converted property setter: - (void)setColumnsToFetch:(id)fetch;	// 0x3429f121
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x34333fbd
- (void)sleep;	// 0x34333fa9
// converted property getter: - (id)sqlStatement;	// 0x3429ebd1
- (void)transactionDidBegin;	// 0x34334379
- (void)transactionDidCommit;	// 0x3433432d
- (void)transactionDidRollback;	// 0x343342e1
- (void)updateRow:(id)row;	// 0x343347b9
- (void)willCreateSchema;	// 0x34333fc1
@end

