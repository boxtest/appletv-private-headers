/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSFileManager : NSObject {
}
@property(assign) id delegate;	// G=0x310282c5; S=0x3104f645; converted property
+ (id)defaultManager;	// 0x30fffa45
- (id)URLForDirectory:(unsigned)directory inDomain:(unsigned)domain appropriateForURL:(id)url create:(BOOL)create error:(id *)error;	// 0x31050861
- (id)URLsForDirectory:(unsigned)directory inDomains:(unsigned)domains;	// 0x310509fd
- (id)_URLForReplacingItemAtURL:(id)url error:(id *)error;	// 0x31050b15
- (id)_attributesOfItemAtPath:(id)path filterResourceFork:(BOOL)fork error:(id *)error;	// 0x3104f02d
- (id)_attributesOfItemAtURL:(id)url filterResourceFork:(BOOL)fork error:(id *)error;	// 0x3104effd
- (id)_displayPathForPath:(id)path;	// 0x31053171
- (id)_info;	// 0x310282e5
- (void)_performRemoveFileAtPath:(id)path;	// 0x31097d89
- (BOOL)_replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id *)url5 error:(id *)error;	// 0x31052581
- (void)_web_backgroundRemoveFileAtPath:(id)path;	// 0x31097dc9
- (void)_web_backgroundRemoveLeftoverFiles:(id)files;	// 0x31097c0d
- (id)_web_carbonPathForPath_nowarn:(id)path_nowarn;	// 0x310978c5
- (BOOL)_web_changeFileAttributes_nowarn:(id)nowarn atPath:(id)path;	// 0x310978cd
- (BOOL)_web_changeFinderAttributes:(id)attributes forFileAtPath:(id)path;	// 0x310978c1
- (BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)intermediateDirectories attributes:(id)attributes;	// 0x31024f15
- (BOOL)_web_createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x31097cd5
- (BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)intermediateDirectories contents:(id)contents attributes:(id)attributes directoryAttributes:(id)attributes4;	// 0x31097d15
- (BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)path_nowarn attributes:(id)attributes;	// 0x31097915
- (BOOL)_web_fileExistsAtPath_nowarn:(id)path_nowarn isDirectory:(BOOL *)directory traverseLink:(BOOL)link;	// 0x31097b91
- (void)_web_noteFileChangedAtPath_nowarn:(id)path_nowarn;	// 0x310978c9
- (id)_web_pathWithUniqueFilenameForPath:(id)path;	// 0x31097eb5
- (BOOL)_web_removeFileOnlyAtPath:(id)path;	// 0x31025771
- (id)_web_startupVolumeName_nowarn;	// 0x31097b51
- (id)_web_visibleItemsInDirectoryAtPath:(id)path;	// 0x31097bf9
- (id)attributesOfFileSystemForPath:(id)path error:(id *)error;	// 0x31024d61
- (id)attributesOfItemAtPath:(id)path error:(id *)error;	// 0x310097c1
- (BOOL)changeCurrentDirectoryPath:(id)path;	// 0x31050eb5
- (BOOL)changeFileAttributes:(id)attributes atPath:(id)path;	// 0x3104f725
- (id)componentsToDisplayForPath:(id)path;	// 0x3104ef3d
- (id)contentsAtPath:(id)path;	// 0x31035a99
- (BOOL)contentsEqualAtPath:(id)path andPath:(id)path2;	// 0x310535f9
- (id)contentsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x31024fa5
- (id)contentsOfDirectoryAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options error:(id *)error;	// 0x31053999
- (BOOL)copyItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x31051a3d
- (BOOL)copyItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x3105188d
- (BOOL)createDirectoryAtPath:(id)path attributes:(id)attributes;	// 0x31050fad
- (BOOL)createDirectoryAtPath:(id)path withIntermediateDirectories:(BOOL)intermediateDirectories attributes:(id)attributes error:(id *)error;	// 0x31006969
- (BOOL)createFileAtPath:(id)path contents:(id)contents attributes:(id)attributes;	// 0x31035369
- (BOOL)createSymbolicLinkAtPath:(id)path pathContent:(id)content;	// 0x3104f681
- (BOOL)createSymbolicLinkAtPath:(id)path withDestinationPath:(id)destinationPath error:(id *)error;	// 0x310523e5
- (id)currentDirectoryPath;	// 0x31050e75
- (void)dealloc;	// 0x3100a175
// converted property getter: - (id)delegate;	// 0x310282c5
- (id)destinationOfSymbolicLinkAtPath:(id)path error:(id *)error;	// 0x31037a89
- (BOOL)directoryCanBeCreatedAtPath:(id)path;	// 0x31050e19
- (id)directoryContentsAtPath:(id)path;	// 0x31032b21
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4;	// 0x31032b49
- (id)directoryContentsAtPath:(id)path matchingExtension:(id)extension options:(int)options keepExtension:(BOOL)extension4 error:(id *)error;	// 0x31024fd1
- (id)displayNameAtPath:(id)path;	// 0x3104f6e1
- (id)enumeratorAtPath:(id)path;	// 0x3103791d
- (id)enumeratorAtURL:(id)url includingPropertiesForKeys:(id)keys options:(unsigned)options errorHandler:(id)handler;	// 0x310507bd
- (id)extendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x31050399
- (id)extendedAttributesAtPath:(id)path error:(id *)error;	// 0x310503d1
- (id)fileAttributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x3104f749
- (BOOL)fileExistsAtPath:(id)path;	// 0x31005e51
- (BOOL)fileExistsAtPath:(id)path isDirectory:(BOOL *)directory;	// 0x3101703d
- (id)fileSystemAttributesAtPath:(id)path;	// 0x3104f669
- (const char *)fileSystemRepresentationWithPath:(id)path;	// 0x31006c81
- (BOOL)filesystemItemCopyOperation:(id)operation shouldCopyItemAtPath:(id)path toPath:(id)path3;	// 0x3104f54d
- (BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;	// 0x3104f44d
- (BOOL)filesystemItemLinkOperation:(id)operation shouldLinkItemAtPath:(id)path toPath:(id)path3;	// 0x3104f15d
- (BOOL)filesystemItemLinkOperation:(id)operation shouldProceedAfterError:(id)error linkingItemAtPath:(id)path toPath:(id)path4;	// 0x3104f05d
- (BOOL)filesystemItemMoveOperation:(id)operation shouldMoveItemAtPath:(id)path toPath:(id)path3;	// 0x3104f355
- (BOOL)filesystemItemMoveOperation:(id)operation shouldProceedAfterError:(id)error movingItemAtPath:(id)path toPath:(id)path4;	// 0x3104f255
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldProceedAfterError:(id)error removingItemAtPath:(id)path;	// 0x310284b5
- (BOOL)filesystemItemRemoveOperation:(id)operation shouldRemoveItemAtPath:(id)path;	// 0x310281fd
- (BOOL)getFileSystemRepresentation:(char *)representation maxLength:(unsigned)length withPath:(id)path;	// 0x30fffaa1
- (BOOL)isDeletableFileAtPath:(id)path;	// 0x31050ef5
- (BOOL)isExecutableFileAtPath:(id)path;	// 0x31050e09
- (BOOL)isReadableFileAtPath:(id)path;	// 0x31026539
- (BOOL)isWritableFileAtPath:(id)path;	// 0x31026eb9
- (BOOL)linkItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x3105149d
- (BOOL)linkItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x310512ed
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)keys options:(unsigned)options;	// 0x3104ef39
- (BOOL)moveItemAtPath:(id)path toPath:(id)path2 error:(id *)error;	// 0x3105176d
- (BOOL)moveItemAtURL:(id)url toURL:(id)url2 error:(id *)error;	// 0x310515bd
- (id)pathContentOfSymbolicLinkAtPath:(id)path;	// 0x31037a71
- (BOOL)removeExtendedAttributeForKey:(id)key atPath:(id)path error:(id *)error;	// 0x31050fdd
- (BOOL)removeFileAtPath:(id)path handler:(id)handler;	// 0x3104f6c9
- (BOOL)removeItemAtPath:(id)path error:(id *)error;	// 0x31027fad
- (BOOL)removeItemAtURL:(id)url error:(id *)error;	// 0x31050219
- (BOOL)replaceItemAtURL:(id)url withItemAtURL:(id)url2 backupItemName:(id)name options:(unsigned)options resultingItemURL:(id *)url5 error:(id *)error;	// 0x31050715
- (BOOL)setAttributes:(id)attributes ofItemAtPath:(id)path error:(id *)error;	// 0x31051be9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3104f645
- (BOOL)setExtendedAttribute:(id)attribute forKey:(id)key atPath:(id)path error:(id *)error;	// 0x310510f1
- (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation length:(unsigned)length;	// 0x31006875
- (id)subpathsAtPath:(id)path;	// 0x3104f6a5
- (id)subpathsOfDirectoryAtPath:(id)path error:(id *)error;	// 0x31051225
@end
