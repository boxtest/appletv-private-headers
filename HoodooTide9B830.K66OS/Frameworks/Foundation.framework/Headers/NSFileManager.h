/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSFileManager : NSObject {
}
@property(assign) id delegate;	// G=0x31596415; S=0x315d83b1; converted property
+ (id)defaultManager;	// 0x31570bd1
- (id)URLForDirectory:(unsigned)directory inDomain:(unsigned)domain appropriateForURL:(id)url create:(BOOL)create error:(id *)error;	// 0x315d74d5
- (id)URLForPublishingUbiquitousItemAtURL:(id)url expirationDate:(id *)date error:(id *)error;	// 0x315da5a1
- (id)URLForUbiquityContainerIdentifier:(id)ubiquityContainerIdentifier;	// 0x315da2ad
- (id)URLsForDirectory:(unsigned)directory inDomains:(unsigned)domains;	// 0x315baebd
- (id)_URLForReplacingItemAtURL:(id)url error:(id *)error;	// 0x315d7225
- (id)_attributesOfItemAtPath:(id)path filterResourceFork:(BOOL)fork error:(id *)error;	// 0x315d9665
- (id)_attributesOfItemAtURL:(id)url filterResourceFork:(BOOL)fork error:(id *)error;	// 0x315d9695
- (id)_displayPathForPath:(id)path;	// 0x315d7851
- (id)_info;	// 0x31596439
- (void)_performRemoveFileAtPath:(id)path;	// 0x316204dd
- (void)_web_backgroundRemoveFileAtPath:(id)path;	// 0x31620525
- (void)_web_backgroundRemoveLeftoverFiles:(id)files;	// 0x31620619
- (id)_web_carbonPathForPath_nowarn:(id)path_nowarn;	// 0x31620a15
- (BOOL)_web_changeFileAttributes_nowarn:(id)nowarn atPath:(id)path;	// 0x31620d35
- (BOOL)_web_changeFinderAttributes:(id)attributes forFileAtPath:(id)path;	// 0x31620491
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)intermediateDirectories attributes:(id)attributes;	// 0x3159a645
- (BOOL)_web_createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x31620495
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)intermediateDirectories contents:(id)contents attributes:(id)attributes directoryAttributes:(id)attributes4;	// 0x316203fd
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)path_nowarn attributes:(id)attributes;	// 0x31620a65
- (BOOL)_web_fileExistsAtPath_nowarn:(id)path_nowarn isDirectory:(BOOL *)directory traverseLink:(BOOL)link;	// 0x316208dd
- (void)_web_noteFileChangedAtPath_nowarn:(id)path_nowarn;	// 0x31620d31
- (id)_web_pathWithUniqueFilenameForPath:(id)path;	// 0x3162072d
- (BOOL)_web_removeFileOnlyAtPath:(id)path;	// 0x3159b15d
- (id)_web_startupVolumeName_nowarn;	// 0x31620a19
- (id)_web_visibleItemsInDirectoryAtPath:(id)path;	// 0x31620719
- (id)attributesOfFileSystemForPath:(id)path error:(id *)error;	// 0x31591ffd
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x315a3a79
- (BOOL)changeCurrentDirectoryPath:(id)path;	// 0x315d7ad5
- (BOOL)changeFileAttributes:(id)attributes atPath:(id)path;	// 0x315d7b31
- (id)componentsToDisplayForPath:(id)path;	// 0x315d8111
- (id)contentsAtPath:(id)path;	// 0x315b13a5
- (BOOL)contentsEqualAtPath:(id)path andPath:(id)path2;	// 0x315d7d85
- (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x3159a67d
- (id)contentsOfDirectoryAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options error:(id *)error;	// 0x315d6f05
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x315d85f1
- (BOOL)copyItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x315d8711
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;	// 0x315d7d11
- (BOOL)createDirectoryAtPath:(id)path withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x315746e1
- (BOOL)createDirectoryAtURL:(id)url withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x315d94d5
- (BOOL)createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x315b0bd5
- (BOOL)createSymbolicLinkAtPath:(id)path pathContent:(id)content;	// 0x315d7d61
- (BOOL)createSymbolicLinkAtPath:(id)path withDestinationPath:(id)destinationPath error:(id *)error;	// 0x315d96c5
- (BOOL)createSymbolicLinkAtURL:(id)url withDestinationURL:(id)destinationURL error:(id *)error;	// 0x315d977d
- (id)currentDirectoryPath;	// 0x315d7a8d
- (void)dealloc;	// 0x315926f5
// converted property getter: - (id)delegate;	// 0x31596415
- (id)destinationOfSymbolicLinkAtPath:(id)path error:(id *)error;	// 0x315b2be5
- (BOOL)directoryCanBeCreatedAtPath:(id)path;	// 0x315d7a29
- (id)directoryContentsAtPath:(id)path;	// 0x315d7cc5
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4;	// 0x315d7c99
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4 error:(id *)error;	// 0x3159a6a9
- (id)displayNameAtPath:(id)path;	// 0x315d7c31
- (id)enumeratorAtPath:(id)path;	// 0x315b2a99
- (id)enumeratorAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x315bb069
- (BOOL)evictUbiquitousItemAtURL:(id)url error:(id *)error;	// 0x315da099
- (id)extendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x315d8149
- (id)extendedAttributesAtPath:(id)path error:(id *)error;	// 0x315d8125
- (id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x315d7b15
- (BOOL)fileExistsAtPath:(id)path;	// 0x31570c2d
- (BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL *)directory;	// 0x315749cd
- (id)fileSystemAttributesAtPath:(id)path;	// 0x315d80fd
- (const char *)fileSystemRepresentationWithPath:(id)path;	// 0x31574b7d
- (BOOL)filesystemItemCopyOperation:(id)operation shouldCopyItemAtPath:(id)path toPath:(id)path3;	// 0x315d83d9
- (BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;	// 0x315d84e1
- (BOOL)filesystemItemLinkOperation:(id)operation shouldLinkItemAtPath:(id)path toPath:(id)path3;	// 0x315d8d41
- (BOOL)filesystemItemLinkOperation:(id)operation shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path4;	// 0x315d8e49
- (BOOL)filesystemItemMoveOperation:(id)operation shouldMoveItemAtPath:(id)path toPath:(id)path3;	// 0x315d888d
- (BOOL)filesystemItemMoveOperation:(id)operation shouldProceedAfterError:(id)error movingItemAtPath:(id)path toPath:(id)path4;	// 0x315d8995
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldProceedAfterError:(id)error removingItemAtPath:(id)path;	// 0x31596811
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldRemoveItemAtPath:(id)path;	// 0x31596341
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length withPath:(id)path;	// 0x31570e39
- (BOOL)isDeletableFileAtPath:(id)path;	// 0x315d7b65
- (BOOL)isExecutableFileAtPath:(id)path;	// 0x315d7b55
- (BOOL)isReadableFileAtPath:(id)path;	// 0x3159ed99
- (BOOL)isUbiquitousItemAtURL:(id)url;	// 0x315d9efd
- (BOOL)isWritableFileAtPath:(id)path;	// 0x31592ab9
- (BOOL)linkItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x315d8f59
- (BOOL)linkItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x315d9079
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)keys options:(unsigned)options;	// 0x315d6f01
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x315d8aa5
- (BOOL)moveItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x315d8bc5
- (id)pathContentOfSymbolicLinkAtPath:(id)path;	// 0x315d7d4d
- (BOOL)removeExtendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x315d8241
- (BOOL)removeFileAtPath:(id)path handler:(id)handler;	// 0x315d7c81
- (BOOL)removeItemAtPath:(id)path error:(id *)error;	// 0x31594dc1
- (BOOL)removeItemAtURL:(id)url error:(id *)error;	// 0x315d91f5
- (BOOL)replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id *)url5 error:(id *)error;	// 0x315d98dd
- (BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id *)error;	// 0x315b9431
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x315d83b1
- (BOOL)setExtendedAttribute:(id)attribute forKey:(id)key atPath:(id)path error:(id *)error;	// 0x315d82cd
- (BOOL)setUbiquitous:(BOOL)ubiquitous itemAtURL:(id)url destinationURL:(id)url3 error:(id *)error;	// 0x315d9cdd
- (BOOL)startDownloadingUbiquitousItemAtURL:(id)url error:(id *)error;	// 0x315d9a01
- (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation length:(unsigned)length;	// 0x31574569
- (id)subpathsAtPath:(id)path;	// 0x315d7ce9
- (id)subpathsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x315d9595
@end

