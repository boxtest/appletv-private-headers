/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSFileHandle : NSObject {
}
@property(retain) id readabilityHandler;	// G=0x315d3a4d; S=0x315d3a71; converted property
@property(retain) id writeabilityHandler;	// G=0x315d3a05; S=0x315d3a29; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x315b041d
+ (id)fileHandleForReadingAtPath:(id)path;	// 0x315b03d5
+ (id)fileHandleForReadingFromURL:(id)url error:(id *)error;	// 0x315d36d5
+ (id)fileHandleForUpdatingAtPath:(id)path;	// 0x315d368d
+ (id)fileHandleForUpdatingURL:(id)updatingURL error:(id *)error;	// 0x315d37e5
+ (id)fileHandleForWritingAtPath:(id)path;	// 0x315b0c55
+ (id)fileHandleForWritingToURL:(id)url error:(id *)error;	// 0x315d375d
+ (id)fileHandleWithNullDevice;	// 0x315d35dd
+ (id)fileHandleWithStandardError;	// 0x315d3541
+ (id)fileHandleWithStandardInput;	// 0x315d3405
+ (id)fileHandleWithStandardOutput;	// 0x315d34a5
+ (void)initialize;	// 0x315b02dd
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode;	// 0x315d3645
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode error:(id *)error;	// 0x315d3669
- (id)availableData;	// 0x315d386d
- (void)closeFile;	// 0x315d39b9
- (int)fileDescriptor;	// 0x315d39dd
- (unsigned long long)offsetInFile;	// 0x315d38fd
- (id)readDataOfLength:(unsigned)length;	// 0x315d38b5
- (id)readDataToEndOfFile;	// 0x315d3891
// converted property getter: - (id)readabilityHandler;	// 0x315d3a4d
- (unsigned long long)seekToEndOfFile;	// 0x315d3925
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x315d394d
// converted property setter: - (void)setReadabilityHandler:(id)handler;	// 0x315d3a71
// converted property setter: - (void)setWriteabilityHandler:(id)handler;	// 0x315d3a29
- (void)synchronizeFile;	// 0x315d3995
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x315d3971
- (void)writeData:(id)data;	// 0x315d38d9
// converted property getter: - (id)writeabilityHandler;	// 0x315d3a05
@end

