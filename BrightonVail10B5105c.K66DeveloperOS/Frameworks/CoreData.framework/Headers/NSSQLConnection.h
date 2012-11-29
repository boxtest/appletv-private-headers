/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSSQLAdapter, NSSQLStatement;

@interface NSSQLConnection : NSObject {
	NSSQLAdapter *_adapter;	// 4 = 0x4
	BOOL _transactionIsOpen;	// 8 = 0x8
	BOOL _useSyntaxColoredLogging;	// 9 = 0x9
	int _debug;	// 12 = 0xc
	NSSQLStatement *_sqlStatement;	// 16 = 0x10
	NSArray *_columnsToFetch;	// 20 = 0x14
	NSArray *_metadataColumns;	// 24 = 0x18
}
@property(readonly, retain) NSSQLAdapter *adapter;	// G=0x3624571d; converted property
@property(retain) NSArray *columnsToFetch;	// G=0x36246e85; S=0x36246ea5; converted property
@property(readonly, retain) NSArray *metadataColumns;	// G=0x36246ee9; converted property
@property(readonly, retain) NSSQLStatement *sqlStatement;	// G=0x36246839; converted property
+ (void)initialize;	// 0x36242d25
- (id)initWithAdapter:(id)adapter;	// 0x36242fb5
- (void)_forceDisconnectOnError;	// 0x362d9a1d
- (void)_performPostSaveTasks;	// 0x362db211
- (void)_raiseOptimisticLockingExceptionWithReason:(id)reason;	// 0x362d97d9
// converted property getter: - (id)adapter;	// 0x3624571d
- (void)addPeerRange:(id)range;	// 0x362db2b1
- (void)addPeerRangeForPeerID:(id)peerID entityName:(id)name rangeStart:(id)start rangeEnd:(id)end peerRangeStart:(id)start5 peerRangeEnd:(id)end6;	// 0x362db2e5
- (id)allPeerRanges;	// 0x362db319
- (void)awake;	// 0x362d99bd
- (void)beginTransaction;	// 0x362d98ed
- (BOOL)canConnect;	// 0x362d9b41
// converted property getter: - (id)columnsToFetch;	// 0x36246e85
- (void)commitTransaction;	// 0x362d9921
- (void)connect;	// 0x362d9989
- (void)createIndexesForEntity:(id)entity;	// 0x362da251
- (void)createManyToManyTablesForEntity:(id)entity;	// 0x362da159
- (id)createMapOfEntityNameToPKMaxForEntities:(id)entities;	// 0x362db3b5
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)pktable;	// 0x362db381
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)ubrangeTable;	// 0x362db34d
- (void)createMetadata;	// 0x362da875
- (void)createPrimaryKeyTableForModel:(id)model knownEmpty:(BOOL)empty;	// 0x362db0f5
- (void)createSchema;	// 0x362da949
- (void)createTableForEntity:(id)entity;	// 0x362da0e5
- (void)createTablesForEntities:(id)entities;	// 0x362da7d5
- (BOOL)databaseIsEmpty;	// 0x362d9b75
- (void)dealloc;	// 0x362d9855
- (void)deleteCorrelation:(id)correlation;	// 0x362d9c79
- (void)deleteRow:(id)row;	// 0x362d9ce1
- (id)describeResults;	// 0x362d9e29
- (void)didCreateSchema;	// 0x362da945
- (void)disconnect;	// 0x362d99c5
- (void)endFetch;	// 0x362d9ec5
- (void)endPrimaryKeyGeneration;	// 0x362db0bd
- (void)execute;	// 0x362d9d49
- (long long)fetchMaxPrimaryKeyForEntity:(id)entity;	// 0x362dac75
- (id)fetchMetadata;	// 0x3624523d
- (int)fetchResultSet:(void *)set usingFetchPlan:(id)plan;	// 0x362d9e91
- (id)fetchTableCreationSQL;	// 0x362dacdd
- (id)fetchTableNames;	// 0x362daca9
- (id)fetchUbiquityKnowledgeVector;	// 0x362db215
- (void)finalize;	// 0x362d9815
- (void)forceTransactionClosed;	// 0x362d9a09
- (long long)generatePrimaryKeysForEntity:(id)entity batch:(unsigned)batch;	// 0x362db0b1
- (BOOL)hasMetadataTable;	// 0x362dad11
- (BOOL)hasOpenTransaction;	// 0x362d99f9
- (BOOL)hasPrimaryKeyTable;	// 0x362db0c1
- (void)insertCorrelation:(id)correlation;	// 0x362d9c11
- (void)insertRow:(id)row;	// 0x362d9bdd
- (BOOL)isFetchInProgress;	// 0x362d9df5
- (BOOL)isOpen;	// 0x362d9ba9
// converted property getter: - (id)metadataColumns;	// 0x36246ee9
- (id)newFetchedArray;	// 0x362d9e5d
- (void)performAdapterOperation:(id)operation;	// 0x362d9ef9
- (void)performAdapterOperations:(id)operations;	// 0x362da02d
- (void)prepareAndExecuteSQLStatement:(id)statement;	// 0x362d9da9
- (void)prepareForPrimaryKeyGeneration;	// 0x362db0b9
- (void)prepareSQLStatement:(id)statement;	// 0x36245ec5
- (CFArrayRef)rawIntegerRowsForSQL:(id)sql;	// 0x362dac41
- (void)releaseSQLStatement;	// 0x36247d91
- (void)resetSQLStatement;	// 0x362d9d7d
- (void)rollbackTransaction;	// 0x362d9955
- (void)saveMetadata:(id)metadata;	// 0x362dad45
- (void)selectAttributes:(id)attributes fetchRequest:(id)request lock:(BOOL)lock entity:(id)entity;	// 0x362d9d15
// converted property setter: - (void)setColumnsToFetch:(id)fetch;	// 0x36246ea5
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x362d9df1
- (void)setUbiquityTableValue:(id)value forKey:(id)key;	// 0x362db3e9
- (void)sleep;	// 0x362d99c1
// converted property getter: - (id)sqlStatement;	// 0x36246839
- (void)transactionDidBegin;	// 0x362d9a2d
- (void)transactionDidCommit;	// 0x362d9a89
- (void)transactionDidRollback;	// 0x362d9ae5
- (id)ubiquityTableKeysAndValues;	// 0x362db41d
- (id)ubiquityTableValueForKey:(id)key;	// 0x362db451
- (void)updateCorrelation:(id)correlation;	// 0x362d9c45
- (void)updateRow:(id)row;	// 0x362d9cad
- (void)updateUbiquityKnowledgeForPeerWithID:(id)anId andTransactionNumber:(id)number;	// 0x362db27d
- (void)updateUbiquityKnowledgeVector:(id)vector;	// 0x362db249
- (void)willCreateSchema;	// 0x362da941
@end
