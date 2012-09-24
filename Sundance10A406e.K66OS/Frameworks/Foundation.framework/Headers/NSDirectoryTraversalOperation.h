/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"
#import "Foundation-Structs.h"

@class NSString, NSError;

__attribute__((visibility("hidden")))
@interface NSDirectoryTraversalOperation : NSOperation {
	id _delegate;	// 12 = 0xc
	NSString *_sourcePath;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	void *_stream;	// 24 = 0x18
	int _optionsFlags;	// 28 = 0x1c
	int _lastDeviceInode;	// 32 = 0x20
	BOOL _shouldFilterUnderbars;	// 36 = 0x24
	BOOL _stopped;	// 37 = 0x25
}
@property(assign) id delegate;	// G=0x35574801; S=0x35574811; converted property
@property(readonly, retain) NSError *error;	// G=0x3557492d; converted property
+ (id)_errorWithErrno:(int)errno atPath:(id)path;	// 0x35574759
+ (id)directoryTraversalOperationAtPath:(id)path;	// 0x355747b1
- (id)initWithPath:(id)path;	// 0x35574765
- (void)_handleFTSEntry:(ftsent *)entry;	// 0x35574a05
- (void)_setError:(id)error;	// 0x35574965
- (BOOL)_shouldFilterEntry:(ftsent *)entry;	// 0x3557487d
- (BOOL)_validatePaths:(id *)paths;	// 0x35574b49
- (void)dealloc;	// 0x35574d39
// converted property getter: - (id)delegate;	// 0x35574801
// converted property getter: - (id)error;	// 0x3557492d
- (void)handlePathname:(id)pathname;	// 0x35574821
- (void)main;	// 0x35574b4d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35574811
- (BOOL)shouldProceedAfterError:(id)error;	// 0x355749a9
@end
