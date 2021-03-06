/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSString;

@interface SSLogFileOptions : NSObject <NSCopying> {
	NSString *_directoryPath;	// 4 = 0x4
	NSString *_fileName;	// 8 = 0x8
	int _maxNumberOfLogFiles;	// 12 = 0xc
	unsigned long _maxSizeInBytes;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *logDirectoryPath;	// G=0x354b9b45; S=0x354b9b59; @synthesize=_directoryPath
@property(copy, nonatomic) NSString *logFileBaseName;	// G=0x354b9b69; S=0x354b9b7d; @synthesize=_fileName
@property(assign, nonatomic) unsigned long maxLogFileSize;	// G=0x354b9b8d; S=0x354b9b9d; @synthesize=_maxSizeInBytes
@property(assign, nonatomic) int maxNumberOfLogFiles;	// G=0x354b9bad; S=0x354b9bbd; @synthesize=_maxNumberOfLogFiles
- (id)init;	// 0x354b99e1
- (id)copyWithZone:(NSZone *)zone;	// 0x354b9a95
- (void)dealloc;	// 0x354b9a31
// declared property getter: - (id)logDirectoryPath;	// 0x354b9b45
// declared property getter: - (id)logFileBaseName;	// 0x354b9b69
// declared property getter: - (unsigned long)maxLogFileSize;	// 0x354b9b8d
// declared property getter: - (int)maxNumberOfLogFiles;	// 0x354b9bad
// declared property setter: - (void)setLogDirectoryPath:(id)path;	// 0x354b9b59
// declared property setter: - (void)setLogFileBaseName:(id)name;	// 0x354b9b7d
// declared property setter: - (void)setMaxLogFileSize:(unsigned long)size;	// 0x354b9b9d
// declared property setter: - (void)setMaxNumberOfLogFiles:(int)logFiles;	// 0x354b9bbd
@end

