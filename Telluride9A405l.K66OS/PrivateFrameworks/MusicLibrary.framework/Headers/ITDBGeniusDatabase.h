/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class ML3SqliteDatabase;

__attribute__((visibility("hidden")))
@interface ITDBGeniusDatabase : NSObject {
@private
	ML3SqliteDatabase *_db;	// 4 = 0x4
	double _connectionFailedTime;	// 8 = 0x8
	CFDictionaryRef _statementCache;	// 16 = 0x10
	BOOL _isInTransaction;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x3001f891; S=0x3001f8a1; @synthesize=_isInTransaction
+ (id)fallbackGeniusDatabaseFilePath;	// 0x3001e745
+ (id)geniusDatabaseFilePath;	// 0x30012e91
+ (id)sharedGeniusDatabase;	// 0x30012ce9
- (id)init;	// 0x30012d35
- (void)_connect;	// 0x30012dc9
- (BOOL)_copyBlobData:(id *)data blobAllocType:(int)type table:(id)table blobColumn:(id)column where:(id)where;	// 0x3001ee89
- (id)_copyBlobDataAndBytesInTable:(id)table blobColumn:(id)column where:(id)where;	// 0x3001f2bd
- (unsigned)_getInt32ValueInTable:(id)table column:(id)column;	// 0x3001e845
- (unsigned long long)_getInt64ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;	// 0x3001ea21
- (BOOL)_hasAnySongs;	// 0x3001f55d
- (unsigned)_hasRowsInTable:(id)table;	// 0x30012f45
- (void)_loadDatabaseAtPath:(id)path;	// 0x30012ead
- (BOOL)_readBlobForRowID:(unsigned long long)rowID intoData:(id)data table:(const char *)table blobColumn:(const char *)column;	// 0x3001f319
- (BOOL)_readBlobIntoData:(id)data table:(id)table blobColumn:(id)column where:(id)where;	// 0x3001f2ed
- (id)copyGeniusConfigrationDataAndBytes;	// 0x3001f6bd
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x3001f715
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x3001f779
- (id)database;	// 0x30013089
- (unsigned)defaultMinTrackCount;	// 0x3001f65d
- (unsigned)defaultTrackCount;	// 0x3001f68d
- (unsigned)geniusConfigurationVersion;	// 0x3001f6f1
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)data;	// 0x3001f7dd
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x3001f811
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x3001f851
- (BOOL)hasDatabase;	// 0x3001f52d
- (BOOL)hasGeniusDataAvailable;	// 0x3001f5f1
- (BOOL)hasGeniusFeatureEnabled;	// 0x30012d7d
// declared property getter: - (BOOL)isInTransaction;	// 0x3001f891
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x3001f8a1
@end

