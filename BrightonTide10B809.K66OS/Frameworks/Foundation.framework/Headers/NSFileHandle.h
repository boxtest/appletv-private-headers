/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSSecureCoding.h"


@interface NSFileHandle : NSObject <NSSecureCoding> {
}
@property(retain) id readabilityHandler;	// G=0x319181fd; S=0x31918221; converted property
@property(retain) id writeabilityHandler;	// G=0x319181b5; S=0x319181d9; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x318f30e5
+ (id)fileHandleForReadingAtPath:(id)path;	// 0x31917ddd
+ (id)fileHandleForReadingFromURL:(id)url error:(id *)error;	// 0x31917e6d
+ (id)fileHandleForUpdatingAtPath:(id)path;	// 0x31917e25
+ (id)fileHandleForUpdatingURL:(id)updatingURL error:(id *)error;	// 0x31917f8d
+ (id)fileHandleForWritingAtPath:(id)path;	// 0x318f64d9
+ (id)fileHandleForWritingToURL:(id)url error:(id *)error;	// 0x31917efd
+ (id)fileHandleWithNullDevice;	// 0x31917ced
+ (id)fileHandleWithStandardError;	// 0x31917c51
+ (id)fileHandleWithStandardInput;	// 0x31917b19
+ (id)fileHandleWithStandardOutput;	// 0x31917bb9
+ (void)initialize;	// 0x318edec5
+ (BOOL)supportsSecureCoding;	// 0x318f30e1
- (id)initWithCoder:(id)coder;	// 0x318f3131
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode;	// 0x31917d95
- (id)initWithPath:(id)path flags:(int)flags createMode:(int)mode error:(id *)error;	// 0x31917db9
- (id)availableData;	// 0x3191801d
- (Class)classForCoder;	// 0x31917d55
- (void)closeFile;	// 0x31918169
- (void)encodeWithCoder:(id)coder;	// 0x31917d71
- (int)fileDescriptor;	// 0x3191818d
- (unsigned long long)offsetInFile;	// 0x319180ad
- (id)readDataOfLength:(unsigned)length;	// 0x31918065
- (id)readDataToEndOfFile;	// 0x31918041
// converted property getter: - (id)readabilityHandler;	// 0x319181fd
- (unsigned long long)seekToEndOfFile;	// 0x319180d5
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x319180fd
// converted property setter: - (void)setReadabilityHandler:(id)handler;	// 0x31918221
// converted property setter: - (void)setWriteabilityHandler:(id)handler;	// 0x319181d9
- (void)synchronizeFile;	// 0x31918145
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x31918121
- (void)writeData:(id)data;	// 0x31918089
// converted property getter: - (id)writeabilityHandler;	// 0x319181b5
@end
