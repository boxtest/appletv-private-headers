/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

#import "CUTFileCopierDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _APSLogFileCompressor : NSObject <CUTFileCopierDelegate> {
	NSMutableArray *_archivers;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x356d9351
- (id)init;	// 0x356d93fd
- (void)compressPath:(id)path toPath:(id)path2;	// 0x356d94ad
- (void)dealloc;	// 0x356d9461
- (void)fileCopierDidFinish:(id)fileCopier;	// 0x356d9591
- (void)fileCopierDidStart:(id)fileCopier;	// 0x356d958d
@end

