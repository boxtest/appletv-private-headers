/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"

@class NSError, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemMoveOperation : NSOperation {
@private
	id _delegate;	// 12 = 0xc
	NSString *_sourcePath;	// 16 = 0x10
	NSString *_destinationPath;	// 20 = 0x14
	NSError *_error;	// 24 = 0x18
}
@property(assign) id delegate;	// G=0x302c0385; S=0x302c0395; converted property
@property(readonly, retain) NSError *error;	// G=0x302c03a5; converted property
+ (id)_errorWithErrno:(int)errno sourcePath:(id)path destinationPath:(id)path3;	// 0x302c01fd
+ (id)filesystemItemMoveOperationWithSourcePath:(id)sourcePath destinationPath:(id)path;	// 0x302c02c5
- (void)initWithSourcePath:(id)sourcePath destinationPath:(id)path;	// 0x302c0211
- (void)_setError:(id)error;	// 0x302c03dd
- (void)dealloc;	// 0x302c0251
// converted property getter: - (id)delegate;	// 0x302c0385
// converted property getter: - (id)error;	// 0x302c03a5
- (BOOL)filesystemItemCopyOperation:(id)operation shouldProceedAfterError:(id)error copyingItemAtPath:(id)path toPath:(id)path4;	// 0x302c0319
- (void)main;	// 0x302c0421
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x302c0395
@end

