/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3DatabaseMetadata, ML3NondurableWriteSet, ML3UbiquitousDatabase, MLSQLiteConnection, ML3Container, NSCountedSet, NSMutableArray, ML3MusicLibrary_SQLiteDatabaseContext, NSArray, NSString, ML3SqliteDatabase;
@protocol OS_dispatch_queue;

@interface ML3MusicLibrary : NSObject {
	NSString *_path;	// 4 = 0x4
	BOOL _enableWrites;	// 8 = 0x8
	ML3MusicLibrary_SQLiteDatabaseContext *_mainDatabaseContext;	// 12 = 0xc
	ML3MusicLibrary_SQLiteDatabaseContext *_backgroundDatabaseContext;	// 16 = 0x10
	MLSQLiteConnection *_inMemoryDatabaseConnection;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_atomicityQueue;	// 24 = 0x18
	ML3UbiquitousDatabase *_ubiquitousDatabase;	// 28 = 0x1c
	ML3SqliteDatabase *_geniusDatabase;	// 32 = 0x20
	NSCountedSet *_notifyNamesToIgnore;	// 36 = 0x24
	NSMutableArray *_pendingNotifyPostNames;	// 40 = 0x28
	NSString *_notifyName;	// 44 = 0x2c
	int _notifyToken;	// 48 = 0x30
	NSString *_nonContentsNotifyName;	// 52 = 0x34
	int _nonContentsNotifyToken;	// 56 = 0x38
	NSString *_invisiblePropertyNotifyName;	// 60 = 0x3c
	int _invisiblePropertyNotifyToken;	// 64 = 0x40
	NSString *_displayValuesNotifyName;	// 68 = 0x44
	int _displayValuesNotifyToken;	// 72 = 0x48
	NSString *_syncGenerationNotifyName;	// 76 = 0x4c
	int _syncGenerationNotifyToken;	// 80 = 0x50
	NSString *_libraryUIDNotifyName;	// 84 = 0x54
	int _libraryUIDNotifyToken;	// 88 = 0x58
	BOOL _requiresProcessAssertion;	// 92 = 0x5c
	int _backupDisabledCount;	// 96 = 0x60
	BOOL _backupNeeded;	// 100 = 0x64
	BOOL _hasEverConnectedToDatabase;	// 101 = 0x65
	id _mcSettingsObserver;	// 104 = 0x68
	id _loggingObserver;	// 108 = 0x6c
	NSObject<OS_dispatch_queue> *_nondurableConcurrentQueue;	// 112 = 0x70
	ML3NondurableWriteSet *_nondurableWriteSet;	// 116 = 0x74
	NSString *_artworkDirectory;	// 120 = 0x78
	BOOL _artworkDirectoryFilesystemRepresentation[1024];	// 124 = 0x7c
	BOOL _hasEverConnectedTo;	// 1148 = 0x47c
	BOOL _keepPresignedValidyAfterVerification;	// 1149 = 0x47d
}
@property(readonly, assign) long long autoFilledTracksTotalSize;	// G=0x3546e91d; 
@property(readonly, assign) long long currentContentRevision;	// G=0x3546d581; 
@property(readonly, assign) long long currentRevision;	// G=0x3546d565; 
@property(readonly, assign) ML3DatabaseMetadata *databaseInfo;	// G=0x35455535; 
@property(readonly, retain) ML3SqliteDatabase *geniusDatabase;	// G=0x35467b91; converted property
@property(readonly, assign, nonatomic) BOOL hasEverConnectedToDatabase;	// G=0x35450949; @synthesize=_hasEverConnectedTo
@property(assign, nonatomic) BOOL keepPresignedValidyAfterVerification;	// G=0x35472a29; S=0x35472a39; @synthesize=_keepPresignedValidyAfterVerification
@property(retain) id libraryUID;	// G=0x3546d611; S=0x3546d62d; converted property
@property(readonly, assign) NSArray *localizedSectionIndexTitles;	// G=0x3544ed49; 
@property(readonly, assign) BOOL mediaRestrictionEnabled;	// G=0x3544e7b9; 
@property(readonly, assign, nonatomic, getter=isNondurableWritingActive) BOOL nondurableWritingActive;	// G=0x35453455; 
@property(readonly, assign) NSString *path;	// G=0x3544763d; @synthesize=_path
@property(readonly, assign) long long persistentID;	// G=0x3546d549; 
@property(readonly, assign) NSArray *preferredAudioTracks;	// G=0x354554ad; 
@property(readonly, assign) NSArray *preferredSubtitleTracks;	// G=0x35455671; 
@property(readonly, assign) ML3Container *purchasedTracksPlaylist;	// G=0x3546b1d1; 
@property(readonly, assign) BOOL requiresPostProcessing;	// G=0x35447651; 
@property(assign) long long syncGenerationID;	// G=0x35450501; S=0x3546d59d; 
@property(readonly, retain) ML3UbiquitousDatabase *ubiquitousDatabase;	// G=0x35449275; converted property
@property(readonly, assign, nonatomic) BOOL writable;	// G=0x354463cd; 
+ (BOOL)_inTransactionUpdateSearchMapOnConnection:(id)transactionUpdateSearchMapOnConnection;	// 0x3549e7a5
+ (BOOL)_inTransactionUpdateSortMapOnConnection:(id)transactionUpdateSortMapOnConnection;	// 0x3549dd95
+ (id)_newDatabaseConnectionForPath:(id)path enableWrites:(BOOL)writes forLibrary:(id)library;	// 0x35467f8d
+ (id)_purgeableTrackPredicateWithUrgency:(int)urgency;	// 0x3546e1e9
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x354490dd
+ (id)allArtworkFormatSizes;	// 0x3546ee75
+ (id)allSchemaSQL;	// 0x354992cd
+ (MLArtworkFormatSpec)artworkFormatSpecForArtworkFormatID:(unsigned)artworkFormatID;	// 0x35451e81
+ (void)beginDatabaseMigrationIfNecessary;	// 0x3548f2b9
+ (BOOL)buildDatabaseTablesUsingConnection:(id)connection;	// 0x35499751
+ (void)connection:(id)connection didOpenDBHandle:(sqlite3 *)handle;	// 0x35467f55
+ (void)connection:(id)connection willCloseDBHandle:(sqlite3 *)handle;	// 0x35467f89
+ (id)controlDirectoryPathWithBasePath:(id)basePath;	// 0x354b7a01
+ (BOOL)createIndexesUsingConnection:(id)connection;	// 0x3549ba51
+ (int)currentUserVersion;	// 0x354491c9
+ (BOOL)dropIndexesUsingConnection:(id)connection;	// 0x3549ba31
+ (BOOL)dropIndexesUsingConnection:(id)connection tableNames:(const char *)names;	// 0x3549b7d9
+ (void)enumerateSortMapTablesUsingBlock:(id)block;	// 0x3546cf81
+ (BOOL)executeSQL:(id)sql usingHandle:(sqlite3 *)handle;	// 0x3544ec91
+ (id)fallbackGeniusDatabaseFilePath;	// 0x354679d1
+ (id)geniusDatabaseFilePath;	// 0x354679b5
+ (BOOL)importationEnabled;	// 0x35466ddd
+ (id)indexSchemaSQL;	// 0x35499615
+ (void)initialize;	// 0x35445735
+ (id)itemIndexSchemaSQL;	// 0x3549958d
+ (id)itemSchemaSQL;	// 0x354992b5
+ (id)localizedSectionHeaderForSectionHeader:(id)sectionHeader;	// 0x354503f1
+ (id)localizedSectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x3544ff71
+ (id)mainDatabasePath;	// 0x354463a5
+ (id)mediaFolderPath;	// 0x354b7909
+ (id)mediaFolderRelativePath:(id)path;	// 0x354b7931
+ (BOOL)migrateToCurrentUserVersionUsingConnection:(id)currentUserVersionUsingConnection;	// 0x35499cb1
+ (id)newDatabaseConnectionForPath:(id)path enableWrites:(BOOL)writes;	// 0x35467f31
+ (unsigned)numberOfArtworkStyles;	// 0x3546f43d
+ (BOOL)orderingLanguageMatchesSystemUsingConnection:(id)connection;	// 0x35499c0d
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder;	// 0x354b80dd
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base createParentFolderIfNecessary:(BOOL)necessary;	// 0x354b8101
+ (id)pathForResourceFileOrFolder:(int)resourceFileOrFolder basePath:(id)path relativeToBase:(BOOL)base isFolder:(BOOL *)folder;	// 0x354b7a1d
+ (unsigned)readableArtworkFormatIDForArtworkFormatID:(unsigned)artworkFormatID;	// 0x3546f095
+ (id)sectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x3544fbb1
+ (id)sectionIndexTitles;	// 0x3544fb49
+ (void)setImportationEnabled:(BOOL)enabled;	// 0x35445a59
+ (id)sharedLibrary;	// 0x35445bad
+ (id)sortMapSchemaSQL;	// 0x3549929d
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x35454a31
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x354490b1
+ (id)storeLinkSchemaSQL;	// 0x35499285
+ (id)systemCurrentLanguage;	// 0x354491d5
+ (BOOL)updateSortMapOnConnection:(id)connection;	// 0x3549e811
+ (BOOL)updateTrackIntegrityOnConnection:(id)connection;	// 0x354677ad
+ (BOOL)userVersionMatchesSystemUsingConnection:(id)connection;	// 0x35499bad
+ (int)userVersionUsingConnection:(id)connection;	// 0x35499b65
- (id)initWithPath:(id)path enableWrites:(BOOL)writes;	// 0x35445be1
- (void).cxx_destruct;	// 0x35472a49
- (void)_accessAccountCacheDBForSQL:(id)sql usingBlock:(id)block;	// 0x35471cd9
- (void)_accessDatabaseContextUsingBlock:(id)block;	// 0x35448595
- (id)_albumArtistGroupingNameFromDataSource:(id)dataSource;	// 0x354aabb1
- (long long)_albumArtistPIDFromDataSource:(id)dataSource sortableNames:(id)names existingAlbumArtistPIDsForGroupingKeys:(id)groupingKeys insertIntoAlbumArtistStatement:(id)statement;	// 0x354aaf11
- (id)_albumGroupingIdentifierFromDataSource:(id)dataSource albumArtistPersistentID:(long long)anId groupingKeysForGroupingNames:(id)groupingNames;	// 0x354ab435
- (long long)_albumPIDFromDataSource:(id)dataSource sortableNames:(id)names albumArtistPID:(long long)pid existingAlbumStatesForGroupingIdentifiers:(id)groupingIdentifiers insertIntoAlbumStatement:(id)statement groupingKeysForGroupingNames:(id)groupingNames;	// 0x354ab861
- (id)_artistGroupingNameFromDataSource:(id)dataSource;	// 0x354aa271
- (long long)_artistPIDFromDataSource:(id)dataSource sortableNames:(id)names existingArtistPIDsForGroupingKeys:(id)groupingKeys insertIntoItemArtistStatement:(id)statement;	// 0x354aa561
- (long long)_baseLocationPIDFromDataSource:(id)dataSource;	// 0x354ace49
- (BOOL)_commitNondurableWrites;	// 0x35454161
- (id)_composerGroupingNameFromDataSource:(id)dataSource;	// 0x354ac639
- (long long)_composerPIDFromDataSource:(id)dataSource sortableNames:(id)names existingComposerPIDsForGroupingKeys:(id)groupingKeys insertIntoComposerStatement:(id)statement;	// 0x354ac819
- (void)_delayableNotifyPost:(id)post localNotificationName:(id)name;	// 0x3546cc31
- (BOOL)_drawAndWriteImage:(CGImageRef)image outputWidth:(unsigned long)width outputHeight:(unsigned long)height colorSpace:(CGColorSpaceRef)space cacheID:(id)anId formatID:(unsigned)anId6 artworkStyle:(XXStruct_$eUQoB *)style resultingImageSubRect:(CGRect *)rect resultingLength:(unsigned *)length;	// 0x35469509
- (void)_enumerateDatabaseContextsUsingBlock:(id)block;	// 0x35466929
- (void)_enumeratePurgeableTracksForUrgency:(int)urgency respectSongMattress:(BOOL)mattress usingBlock:(id)block;	// 0x3546e391
- (id)_existingAlbumStatesForGroupingIdentifiers:(id)groupingIdentifiers;	// 0x354b03d5
- (id)_existingCollectionPIDsForTable:(id)table groupingNames:(id)names groupingKeysForGroupingNames:(id)groupingNames;	// 0x354afbcd
- (id)_genreGroupingNameFromDataSource:(id)dataSource;	// 0x354ac0d9
- (long long)_genrePIDFromDataSource:(id)dataSource sortableNames:(id)names existingGenrePIDsForGroupingKeys:(id)groupingKeys insertIntoGenreStatement:(id)statement;	// 0x354ac2a1
- (id)_insertIntoAlbumArtistStatement;	// 0x354aad3d
- (id)_insertIntoAlbumStatement;	// 0x354ab619
- (id)_insertIntoChapterUsingVtabSQL;	// 0x354af641
- (id)_insertIntoComposerStatement;	// 0x354ac659
- (id)_insertIntoGenreStatement;	// 0x354ac0f9
- (id)_insertIntoItemArtistStatement;	// 0x354aa375
- (id)_insertIntoItemExtraUsingVtabSQL;	// 0x354ae129
- (id)_insertIntoItemSearchUsingVtabSQL;	// 0x354af0e1
- (id)_insertIntoItemStatsUsingVtabSQL;	// 0x354aec55
- (id)_insertIntoItemUsingVtabSQL;	// 0x354ad465
- (id)_insertIntoPurgeableListUsingVtabSQL;	// 0x354af329
- (id)_insertStringsIntoSortMapOrFail:(id)fail;	// 0x3549c345
- (long long)_int64ValueForFirstRowAndColumnWithSQL:(id)sql;	// 0x35469015
- (long long)_locationKindPIDFromDataSource:(id)dataSource;	// 0x354acc71
- (void)_migrateArtworkFrom:(unsigned)from to:(unsigned)to;	// 0x35471385
- (BOOL)_mustProcessLanguageChange;	// 0x3546d0cd
- (id)_newGeniusDBConnectionAtPath:(id)path;	// 0x35467a81
- (void)_populateNameOrderForPID:(unordered_map<long long, ML3NameOrder, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<std::pair<const long long, ML3NameOrder>>, false> *)pid table:(id)table nameSQL:(id)sql;	// 0x354af7c5
- (void)_postChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x35455255
- (void)_postDisplayValuesChangeNotificationLocalOnly:(BOOL)only;	// 0x3546cf4d
- (void)_postInvisiblePropertyChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x3546cf19
- (void)_postLibraryNotification:(id)notification isSourceExternal:(BOOL)external userInfo:(id)info;	// 0x354672a9
- (void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x3545652d
- (id)_replaceIntoPurgeableListUsingVtabSQL;	// 0x354af4c5
- (BOOL)_runStatementWithSQL:(id)sql bindingValue:(id)value :(id)arg3;	// 0x35469321
- (void)_scheduleCommitNondurableWritesAfterTimeInterval:(double)interval;	// 0x35472379
- (BOOL)_writeCGImage:(CGImageRef)image length:(unsigned long)length forCacheID:(id)cacheID formatID:(unsigned)anId imageSubRect:(CGRect)rect;	// 0x35469911
- (BOOL)_writeImageBytes:(const void *)bytes length:(unsigned long)length formatID:(unsigned)anId cacheID:(id)anId4;	// 0x35469c31
- (void)accessConnectionUsingBlock:(id)block;	// 0x354688dd
- (void)accessDatabaseUsingBlock:(id)block;	// 0x35449169
- (void)accessSortKeyBuilder:(id)builder;	// 0x3544f4e5
- (long long)addStringToSortMap:(id)sortMap;	// 0x3546d169
- (id)albumArtistForEffectiveAlbumArtistName:(id)effectiveAlbumArtistName;	// 0x3548e631
- (id)albumForAlbumArtistPersistentID:(long long)albumArtistPersistentID albumName:(id)name feedURL:(id)url seasonNumber:(id)number compilation:(BOOL)compilation;	// 0x3547c649
- (id)appleIDForDSID:(unsigned long long)dsid;	// 0x35471fd9
- (id)artistForArtistName:(id)artistName seriesName:(id)name;	// 0x3547b6bd
- (id)artistGroupingKeyForArtistName:(id)artistName seriesName:(id)name;	// 0x3547b64d
- (id)artworkDataForCacheID:(id)cacheID formatID:(unsigned)anId;	// 0x3546edc5
// declared property getter: - (long long)autoFilledTracksTotalSize;	// 0x3546e91d
- (long long)autoFilledTracksTotalSizeWithUrgency:(int)urgency;	// 0x3546e931
- (long long)autoFilledTracksTotalSizeWithUrgency:(int)urgency respectSongMattress:(BOOL)mattress;	// 0x3546e945
- (BOOL)buildDatabaseTables;	// 0x35499a15
- (BOOL)coerceValidDatabase;	// 0x3549be9d
- (BOOL)compactArtwork;	// 0x354708a5
- (id)composerForComposerName:(id)composerName;	// 0x3548d941
- (BOOL)createIndexes;	// 0x3549bca5
// declared property getter: - (long long)currentContentRevision;	// 0x3546d581
// declared property getter: - (long long)currentRevision;	// 0x3546d565
// declared property getter: - (id)databaseInfo;	// 0x35455535
- (void)dealloc;	// 0x35467ce5
- (BOOL)deleteAllArtwork;	// 0x3546fec1
- (BOOL)deleteAndRecreateDatabaseUsingConnection:(id)connection;	// 0x3549be19
- (BOOL)deleteArtworkForCacheID:(id)cacheID;	// 0x354700e1
- (BOOL)deleteArtworkForCacheID:(id)cacheID formatID:(unsigned)anId;	// 0x3547056d
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize;	// 0x3546eaa1
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize urgency:(int)urgency;	// 0x3546eac5
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize urgency:(int)urgency respectSongMattress:(BOOL)mattress;	// 0x3546eae9
- (BOOL)deleteDatabase;	// 0x35468ecd
- (void)deletePresignedValidity;	// 0x354673c9
- (BOOL)dropItemIndexes;	// 0x3549bb49
- (void)enumeratePersistentIDsAfterRevision:(long long)revision revisionTrackingCode:(unsigned)code usingBlock:(id)block;	// 0x3546d67d
- (void)enumeratePersistentIDsAfterRevision:(long long)revision usingBlock:(id)block;	// 0x3546dbb1
- (BOOL)executeSQL:(id)sql;	// 0x354687b1
// converted property getter: - (id)geniusDatabase;	// 0x35467b91
- (id)genreForGenre:(id)genre;	// 0x3548152d
- (void)getChangedPersistentIDsAfterRevision:(long long)revision revisionTrackingCode:(int)code usingBlock:(id)block;	// 0x3546dde1
- (id)groupingKeyForString:(id)string;	// 0x354689c1
- (id)groupingKeysForStrings:(id)strings;	// 0x35468bd5
- (BOOL)handlePrepareDatabase;	// 0x3548ec75
- (BOOL)hasArtworkForCacheID:(id)cacheID;	// 0x3546f0d9
- (BOOL)hasArtworkForCacheID:(id)cacheID ensureArtworkFileExists:(BOOL)exists;	// 0x3546f0f1
// declared property getter: - (BOOL)hasEverConnectedToDatabase;	// 0x35450949
- (BOOL)hasPresignedValidity;	// 0x35467425
- (BOOL)importTracksFromDataSource:(id)dataSource;	// 0x354b38e1
- (BOOL)importTracksFromDataSource:(id)dataSource progressHandler:(id)handler;	// 0x354b3905
- (BOOL)insertArtworkWithImageData:(id)imageData forCacheID:(id)cacheID;	// 0x3546fd39
- (long long)insertStringIntoSortMapNoTransaction:(id)transaction;	// 0x35454535
- (id)insertStringsIntoSortMap:(id)map;	// 0x3549d6ed
// declared property getter: - (BOOL)isNondurableWritingActive;	// 0x35453455
- (BOOL)isReadable;	// 0x3546d165
// declared property getter: - (BOOL)keepPresignedValidyAfterVerification;	// 0x35472a29
// converted property getter: - (id)libraryUID;	// 0x3546d611
- (void)loadArtworkForCacheID:(id)cacheID formatID:(unsigned)anId completionHandler:(id)handler;	// 0x35455401
- (id)localizedSectionHeaderForSectionIndex:(unsigned)sectionIndex;	// 0x3544f341
// declared property getter: - (id)localizedSectionIndexTitles;	// 0x3544ed49
- (id)locationKindForKind:(id)kind;	// 0x354a1355
// declared property getter: - (BOOL)mediaRestrictionEnabled;	// 0x3544e7b9
- (void)migrateAlbumGridBGRA1xToJPEG1x;	// 0x35471b39
- (void)migrateAlbumListJPEGToBGRA;	// 0x35471bdd
- (BOOL)migrateLegacyArtworkFromArtworkBlobFilePath:(id)artworkBlobFilePath;	// 0x35470e75
- (void)migratePresignedValidity;	// 0x35467749
- (XXStruct_Cy4r_A)nameOrderForString:(id)string;	// 0x354532e1
- (id)newDatabaseConnection;	// 0x35467dbd
- (id)nondurableWriteSetForReading;	// 0x35448f65
- (id)nondurableWriteSetForWriting;	// 0x35453951
- (void)notifyContentsDidChange;	// 0x354551f9
- (void)notifyDisplayValuesPropertyDidChange;	// 0x3546b111
- (void)notifyInvisiblePropertyDidChange;	// 0x3546b051
- (void)notifyNonContentsPropertyDidChange;	// 0x354564d1
// declared property getter: - (id)path;	// 0x3544763d
- (void)performTransactionAllowingWrites:(BOOL)writes withBlock:(id)block;	// 0x3544e9ad
- (void)performTransactionKind:(int)kind waitIfBusy:(BOOL)busy withBlock:(id)block;	// 0x3544e9d9
- (void)performTransactionKind:(int)kind withBlock:(id)block;	// 0x3546a3c9
- (void)performTransactionWithBlock:(id)block;	// 0x35454ded
// declared property getter: - (long long)persistentID;	// 0x3546d549
- (BOOL)persistentID:(long long)anId changedAfterRevision:(long long)revision revisionTrackingCode:(int)code;	// 0x3546dc3d
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData trackValues:(id)values;	// 0x35495d49
- (BOOL)populateStaticItemsOfDynamicContainers;	// 0x354687c9
// declared property getter: - (id)preferredAudioTracks;	// 0x354554ad
// declared property getter: - (id)preferredSubtitleTracks;	// 0x35455671
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x3544851d
- (void)prepareStatementForSQL:(id)sql usingBlock:(id)block;	// 0x354484f9
// declared property getter: - (id)purchasedTracksPlaylist;	// 0x3546b1d1
- (void)reconnectToDatabase;	// 0x354687f5
- (BOOL)removeLocationsForItemsMissingAssets;	// 0x3549e8cd
- (void)removeOrphanedTracks;	// 0x354724e5
// declared property getter: - (BOOL)requiresPostProcessing;	// 0x35447651
- (BOOL)resetAllContents;	// 0x3549ed65
- (void)resetUbiquitousMetadata;	// 0x354677ed
- (BOOL)runStatementWithSQL:(id)sql bindingValue:(id)value;	// 0x35469165
- (void)savePlaylists;	// 0x3546c175
- (void)savePlaylistsSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x3546c199
- (void)saveTrackMetadata;	// 0x3546b735
- (void)saveTrackMetadataSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x3546b759
- (unsigned)sectionIndexTitleIndexForSectionIndex:(unsigned)sectionIndex;	// 0x3544f5c5
- (BOOL)setAppleID:(id)anId forDSID:(unsigned long long)dsid;	// 0x35471e21
// declared property setter: - (void)setKeepPresignedValidyAfterVerification:(BOOL)verification;	// 0x35472a39
// converted property setter: - (void)setLibraryUID:(id)uid;	// 0x3546d62d
// declared property setter: - (void)setSyncGenerationID:(long long)anId;	// 0x3546d59d
- (BOOL)setValue:(id)value forDatabaseProperty:(id)databaseProperty;	// 0x3547223d
- (id)statementWithSQL:(id)sql;	// 0x35469d49
- (void)statementWithSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x3546a0b5
- (void)statementWithSQL:(id)sql usingBlock:(id)block;	// 0x3546a049
- (void)statementWithSQLPrefix:(id)sqlprefix inPersistentIDs:(const long long *)persistentIDs count:(unsigned)count usingBlock:(id)block;	// 0x35465f0d
// declared property getter: - (long long)syncGenerationID;	// 0x35450501
// converted property getter: - (id)ubiquitousDatabase;	// 0x35449275
- (BOOL)updateActivePlaylistNamesForCurrentLanguage;	// 0x3548f499
- (void)updateOrderingLanguagesForCurrentLanguage;	// 0x3548f645
- (BOOL)updateSortMap;	// 0x3546d365
- (void)updateTrackIntegrity;	// 0x354677d1
- (id)valueForDatabaseProperty:(id)databaseProperty;	// 0x3545054d
- (BOOL)verifyPresignedValidity;	// 0x35467499
// declared property getter: - (BOOL)writable;	// 0x354463cd
- (BOOL)writeToDatabaseArtworkForCacheID:(id)cacheID length:(unsigned long)length formatID:(unsigned)anId imageSubRect:(CGRect)rect;	// 0x3546fa19
- (BOOL)writeToDiskArtworkWithImageData:(id)imageData forCacheID:(id)cacheID resultingLengths:(unsigned **)lengths formatIDs:(unsigned **)ids imageSubRects:(CGRect **)rects count:(unsigned *)count;	// 0x3546f441
@end

