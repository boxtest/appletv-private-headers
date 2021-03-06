/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OCCancel, TSUTemporaryDirectory;

@interface OCMapper : NSObject {
	OCCancel *mCancel;	// 4 = 0x4
	TSUTemporaryDirectory *mTemporaryDirectoryObject;	// 8 = 0x8
}
+ (id)mapperForCurrentThread;	// 0x31de5001
- (id)init;	// 0x31de4c95
- (void)cancel;	// 0x31de4d5d
- (void)dealloc;	// 0x31de4cf9
- (BOOL)isCancelled;	// 0x31de4d7d
- (void)quit;	// 0x31de4da1
- (void)setup;	// 0x31de4dc1
- (void)teardown;	// 0x31de4ec5
- (id)temporaryDirectoryPath;	// 0x31de5051
@end

