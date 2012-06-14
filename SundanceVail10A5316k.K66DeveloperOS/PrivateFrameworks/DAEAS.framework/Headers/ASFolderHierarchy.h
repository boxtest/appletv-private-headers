/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class ASAccount, NSMutableDictionary;

@interface ASFolderHierarchy : NSObject {
	ASAccount *_account;	// 4 = 0x4
	NSMutableDictionary *_folderCache;	// 8 = 0x8
	NSMutableDictionary *_folderByIdCache;	// 12 = 0xc
	id _delegate;	// 16 = 0x10
}
@property(retain) NSMutableDictionary *folderCache;	// G=0x3098a4a9; S=0x3098b805; converted property
@property(retain) id folderIdsThatExternalClientsCareAbout;	// G=0x3098b945; S=0x3098bac9; converted property
+ (id)_folderCacheFilenameWithId:(id)anId;	// 0x3098a295
+ (void)cleanUpFilesForAccountWithId:(id)anId;	// 0x3098b84d
- (id)initWithAccount:(id)account;	// 0x3098a0e5
- (void)_blowAwayFolderCacheWithoutSavingOldFolderPaths;	// 0x3098b3f5
- (id)_folderCacheFilename;	// 0x3098a2f9
- (void)_identityMatchAndSetFoldersThatExternalClientsCareAbout:(id)about;	// 0x3098b115
- (id)_pathForFolder:(id)folder usingCache:(id)cache foldersById:(id)anId;	// 0x3098ae71
- (void)_pruneBadFolderIdsThatExternalClientsCareAbout;	// 0x3098b481
- (void)_restoreFromSavedFoldersThatExternalClientsCareAbout;	// 0x3098bb79
- (id)_savedFolderPathsThatExternalClientsCareAbout;	// 0x3098aae1
- (void)_setFolderByIdCacheFromCurrentCache;	// 0x3098a341
- (void)_setFolderCache:(id)cache;	// 0x3098b5d5
- (void)_setFolderPathsFromCurrentCache;	// 0x3098ab21
- (void)_setSavedFolderPathsThatExternalClientsCareAbout:(id)about;	// 0x3098ab01
- (void)blowAwayFolderCache;	// 0x3098b451
- (void)clearLocalCache;	// 0x3098aa91
- (void)dealloc;	// 0x3098a221
- (id)description;	// 0x3098a1c5
// converted property getter: - (id)folderCache;	// 0x3098a4a9
- (id)folderForID:(id)anId;	// 0x3098a9e9
// converted property getter: - (id)folderIdsThatExternalClientsCareAbout;	// 0x3098b945
- (id)folderIdsThatExternalClientsCareAboutForDataclasses:(int)dataclasses;	// 0x3098b979
- (id)folders;	// 0x3098aa29
- (id)foldersTag;	// 0x3098aa5d
- (id)foldersUnderFolderWithID:(id)anId;	// 0x3098ad09
- (void)setDelegate:(id)delegate;	// 0x3098a285
// converted property setter: - (void)setFolderCache:(id)cache;	// 0x3098b805
// converted property setter: - (void)setFolderIdsThatExternalClientsCareAbout:(id)about;	// 0x3098bac9
@end
