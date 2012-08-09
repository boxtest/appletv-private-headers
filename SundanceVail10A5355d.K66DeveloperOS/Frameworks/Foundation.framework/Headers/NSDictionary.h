/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library


@interface NSDictionary (NSDictionary)
+ (id)dictionaryWithContentsOfFile:(id)file;	// 0x34641399
+ (id)dictionaryWithContentsOfURL:(id)url;	// 0x346a0f05
+ (id)newWithContentsOf:(id)of immutable:(BOOL)immutable;	// 0x346413d9
+ (BOOL)supportsSecureCoding;	// 0x346a0d75
- (id)initWithCoder:(id)coder;	// 0x3464a76d
- (id)initWithContentsOfFile:(id)file;	// 0x346a0f45
- (id)initWithContentsOfURL:(id)url;	// 0x346a0f81
- (id)_stringToWrite;	// 0x346a0d95
- (Class)classForCoder;	// 0x346a0d79
- (id)descriptionInStringsFileFormat;	// 0x346784ad
- (void)encodeWithCoder:(id)coder;	// 0x3467bb21
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically;	// 0x3467d86d
- (BOOL)writeToURL:(id)url atomically:(BOOL)atomically;	// 0x346a0df5
@end

@interface NSDictionary (NSFileAttributes)
- (id)fileCreationDate;	// 0x346a6a81
- (BOOL)fileExtensionHidden;	// 0x346a6989
- (id)fileGroupOwnerAccountID;	// 0x346a6ab9
- (id)fileGroupOwnerAccountName;	// 0x346a6901
- (unsigned)fileGroupOwnerAccountNumber;	// 0x346a691d
- (unsigned long)fileHFSCreatorCode;	// 0x346a69b9
- (unsigned long)fileHFSTypeCode;	// 0x346a69ed
- (BOOL)fileIsAppendOnly;	// 0x346a6a51
- (BOOL)fileIsImmutable;	// 0x346a6a21
- (id)fileModificationDate;	// 0x346a6875
- (id)fileOwnerAccountID;	// 0x346a6a9d
- (id)fileOwnerAccountName;	// 0x346a68e1
- (unsigned)fileOwnerAccountNumber;	// 0x346a68fd
- (unsigned)filePosixPermissions;	// 0x346a68ad
- (unsigned long long)fileSize;	// 0x346a6841
- (unsigned)fileSystemFileNumber;	// 0x346a6955
- (int)fileSystemNumber;	// 0x346a6921
- (id)fileType;	// 0x346a6891
@end

@interface NSDictionary (NSKeyValueCoding)
- (id)valueForKey:(id)key;	// 0x34642ead
- (id)valueForKeyPath:(id)keyPath;	// 0x346b84b9
@end

@interface NSDictionary (NSURLExtras)
- (int)_web_intForKey:(id)key;	// 0x346f29bd
- (id)_web_numberForKey:(id)key;	// 0x346f2a21
- (id)_web_objectForMIMEType:(id)mimetype;	// 0x346f2a55
- (id)_web_stringForKey:(id)key;	// 0x346f29ed
@end

@interface NSDictionary (NSDictionaryPortCoding)
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x3478bec5
@end
