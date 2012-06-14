/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSString, NSDate;
@protocol NSCoding;

@interface NSFileVersion : NSObject {
@private
	NSURL *_fileURL;	// 4 = 0x4
	id _library;	// 8 = 0x8
	NSString *_clientID;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	NSURL *_contentsURL;	// 20 = 0x14
	BOOL _isBackup;	// 24 = 0x18
	NSString *_localizedName;	// 28 = 0x1c
	NSString *_localizedComputerName;	// 32 = 0x20
	NSDate *_modificationDate;	// 36 = 0x24
	BOOL _isResolved;	// 40 = 0x28
	id _reserved1;	// 44 = 0x2c
	id _reserved2;	// 48 = 0x30
}
@property(readonly, assign) NSURL *URL;	// G=0x35f00fd5; 
@property(readonly, assign, getter=_isBackup) BOOL _isBackup;	// G=0x35f02c51; 
@property(readonly, assign, getter=isConflict) BOOL conflict;	// G=0x35f01295; 
@property(assign, getter=isDiscardable) BOOL discardable;
@property(readonly, assign) NSString *localizedName;	// G=0x35f01035; 
@property(readonly, assign) NSString *localizedNameOfSavingComputer;	// G=0x35f010a9; 
@property(readonly, assign) NSDate *modificationDate;	// G=0x35f01141; 
@property(readonly, assign) id<NSCoding> persistentIdentifier;	// G=0x35f011b5; 
@property(assign, getter=isResolved) BOOL resolved;	// G=0x35f01469; S=0x35f01325; 
+ (void *)_addConflictObserverForItemAtURL:(id)url statusChangedHandler:(id)handler;	// 0x35f02f95
+ (id)_addVersionOfItemAtURL:(id)url withContentsOfURL:(id)url2 options:(unsigned)options temporaryStorageIdentifier:(id *)identifier error:(id *)error;	// 0x35f02399
+ (id)_autosaveDirectoryURLCreateIfNecessary:(BOOL)necessary;	// 0x35f01ebd
+ (BOOL)_conflictsExistForItemAtURL:(id)url;	// 0x35f02de1
+ (id)_libraryForURL:(id)url clientID:(id)anId temporaryStorageIdentifier:(id *)identifier;	// 0x35f01fc1
+ (void)_markConflicts:(id)conflicts asHandledForItemAtURL:(id)url;	// 0x35f02df9
+ (id)_otherVersionsOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier;	// 0x35f020cd
+ (void)_removeConflictObserver:(void *)observer;	// 0x35f02f99
+ (BOOL)_removeOtherVersionsOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier error:(id *)error;	// 0x35f02659
+ (void)_removeTemporaryDirectoryAtURL:(id)url;	// 0x35f02a3d
+ (id)_supportedGenerationalStorageClientIDs;	// 0x35f01f81
+ (id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)url temporaryStorageIdentifier:(id)identifier;	// 0x35f025e5
+ (id)_temporaryStorageLocationForIdentifier:(id)identifier;	// 0x35f01f21
+ (id)_versionOfItemAtURL:(id)url forClientID:(id)clientID name:(id)name temporaryStorageIdentifier:(id)identifier evenIfDeleted:(BOOL)deleted;	// 0x35f02829
+ (id)_versionOfItemAtURL:(id)url forPersistentIdentifier:(id)persistentIdentifier temporaryStorageIdentifier:(id)identifier;	// 0x35f0220d
+ (id)currentVersionOfItemAtURL:(id)url;	// 0x35f00c79
+ (id)otherVersionsOfItemAtURL:(id)url;	// 0x35f00ce9
+ (BOOL)removeOtherVersionsOfItemAtURL:(id)url error:(id *)error;	// 0x35f01a19
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)url;	// 0x35f00e55
+ (BOOL)unresolvedConflictsExistForItemAtURL:(id)url;	// 0x35f02da9
+ (id)versionOfItemAtURL:(id)url forPersistentIdentifier:(id)persistentIdentifier;	// 0x35f00e31
+ (id)versionsOfItemAtURL:(id)url;	// 0x35f02c61
- (id)init;	// 0x35f00aad
// declared property getter: - (id)URL;	// 0x35f00fd5
- (id)_documentInfo;	// 0x35f02abd
- (id)_initWithFileURL:(id)fileURL library:(id)library clientID:(id)anId name:(id)name contentsURL:(id)url isBackup:(BOOL)backup revision:(id)revision;	// 0x35f01b0d
// declared property getter: - (BOOL)_isBackup;	// 0x35f02c51
- (void)_overrideModificationDateWithDate:(id)date;	// 0x35f02b79
- (BOOL)_setDocumentInfo:(id)info;	// 0x35f02b35
- (void)dealloc;	// 0x35f00afd
- (unsigned)hash;	// 0x35f00c51
// declared property getter: - (BOOL)isConflict;	// 0x35f01295
- (BOOL)isEqual:(id)equal;	// 0x35f00bd5
// declared property getter: - (BOOL)isResolved;	// 0x35f01469
// declared property getter: - (id)localizedName;	// 0x35f01035
// declared property getter: - (id)localizedNameOfSavingComputer;	// 0x35f010a9
// declared property getter: - (id)modificationDate;	// 0x35f01141
// declared property getter: - (id)persistentIdentifier;	// 0x35f011b5
- (BOOL)removeAndReturnError:(id *)error;	// 0x35f0189d
- (id)replaceItemAtURL:(id)url options:(unsigned)options error:(id *)error;	// 0x35f01479
- (id)restoreOverItemAtURL:(id)url error:(id *)error;	// 0x35f02d89
// declared property setter: - (void)setResolved:(BOOL)resolved;	// 0x35f01325
@end
