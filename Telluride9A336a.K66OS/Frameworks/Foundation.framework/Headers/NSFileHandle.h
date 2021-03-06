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
@property(retain) id readabilityHandler;	// G=0x336b0a5d; S=0x336b0a81; converted property
@property(retain) id writeabilityHandler;	// G=0x336b0a15; S=0x336b0a39; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3368d42d
+ (id)fileHandleForReadingAtPath:(id)path;	// 0x3368d3e5
+ (id)fileHandleForReadingFromURL:(id)url error:(id *)error;	// 0x336b06e5
+ (id)fileHandleForUpdatingAtPath:(id)path;	// 0x336b069d
+ (id)fileHandleForUpdatingURL:(id)updatingURL error:(id *)error;	// 0x336b07f5
+ (id)fileHandleForWritingAtPath:(id)path;	// 0x3368dc65
+ (id)fileHandleForWritingToURL:(id)url error:(id *)error;	// 0x336b076d
+ (id)fileHandleWithNullDevice;	// 0x336b05ed
+ (id)fileHandleWithStandardError;	// 0x336b0551
+ (id)fileHandleWithStandardInput;	// 0x336b0415
+ (id)fileHandleWithStandardOutput;	// 0x336b04b5
+ (void)initialize;	// 0x3368d2ed
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode;	// 0x336b0655
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode error:(id *)error;	// 0x336b0679
- (id)availableData;	// 0x336b087d
- (void)closeFile;	// 0x336b09c9
- (int)fileDescriptor;	// 0x336b09ed
- (unsigned long long)offsetInFile;	// 0x336b090d
- (id)readDataOfLength:(unsigned)length;	// 0x336b08c5
- (id)readDataToEndOfFile;	// 0x336b08a1
// converted property getter: - (id)readabilityHandler;	// 0x336b0a5d
- (unsigned long long)seekToEndOfFile;	// 0x336b0935
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x336b095d
// converted property setter: - (void)setReadabilityHandler:(id)handler;	// 0x336b0a81
// converted property setter: - (void)setWriteabilityHandler:(id)handler;	// 0x336b0a39
- (void)synchronizeFile;	// 0x336b09a5
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x336b0981
- (void)writeData:(id)data;	// 0x336b08e9
// converted property getter: - (id)writeabilityHandler;	// 0x336b0a15
@end

